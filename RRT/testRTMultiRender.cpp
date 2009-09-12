#include <OSGConfig.h>

#include <iostream>

#include <OSGGLUT.h>
#include <OSGNode.h>

#include "OSGTrackball.h"
#include "OSGLine.h"
#include "OSGPerspectiveCamera.h"
#include "OSGTransform.h"
#include "OSGRenderAction.h"
#include "OSGWindow.h"
#include "OSGSceneFileHandler.h"
#include "OSGSolidBackground.h"
#include "OSGGLUTWindow.h"
#include "OSGDirectionalLight.h"
#include "OSGSimpleGeometry.h"

#include "OSGImage.h"
#include "OSGPolygonForeground.h"
#include "OSGSimpleMaterial.h"
#include "OSGVisitSubTree.h"

#include "OSGFBOViewport.h"
#include "OSGFrameBufferObject.h"
#include "OSGRenderBuffer.h"
#include "OSGTextureBuffer.h"

#include "OSGTextureObjChunk.h"
#include "OSGTextureEnvChunk.h"

#include "OSGRRTStage.h"
#include "OSGRTInfoAttachment.h"

using namespace OSG;

RenderAction *rentravact = NullFC;

NodePtr  root = NullFC;
NodePtr  file = NullFC;

PerspectiveCameraPtr cam = NullFC;
ViewportPtr          vp  = NullFC;
WindowPtr            win = NullFC;

TransformPtr cam_trans   = NullFC;
TransformPtr scene_trans = NullFC;

Trackball tball;

bool move_obj = false;

int mouseb = 0;
int lastx  = 0;
int lasty  = 0;

Quaternion oldq;
Vec3f      oldv;

#define LOCAL_RTINFO 1

void display(void)
{
    Matrix m1, m2, m3;
    Quaternion q1;

    tball.getRotation().getValue(m3);

    q1.setValue(m3);

    m1.setRotate(q1);
    
    m2.setTranslate( tball.getPosition() );
    
    m1.mult( m2 );

    if(move_obj == true)
    {
        scene_trans->editSFMatrix()->setValue( m1 );
    }
    else
    {
        cam_trans->editSFMatrix()->setValue( m1 );
    }

    commitChanges();

    win->render(rentravact);
}

void reshape( int w, int h )
{
    std::cerr << "Reshape: " << w << "," << h << std::endl;
    win->resize( w, h );
}


void animate(void)
{
    glutPostRedisplay();
}

// tballall stuff


void motion(int x, int y)
{   
    Real32 w = win->getWidth(), h = win->getHeight();
    

    Real32  
        a = -2. * ( lastx / w - .5 ),
        b = -2. * ( .5 - lasty / h ),
        c = -2. * ( x / w - .5 ),
        d = -2. * ( .5 - y / h );
    
    if ( mouseb & ( 1 << GLUT_LEFT_BUTTON ) )
    {
        tball.updateRotation( a, b, c, d );     
    }
    else if ( mouseb & ( 1 << GLUT_MIDDLE_BUTTON ) )
    {
        tball.updatePosition( a, b, c, d );     
    }
    else if ( mouseb & ( 1 << GLUT_RIGHT_BUTTON ) )
    {
        tball.updatePositionNeg( a, b, c, d );  
    }

    lastx = x;
    lasty = y;
}

void mouse(int button, int state, int x, int y)
{
    if ( state == 0 )
    {
        switch ( button )
        {
            case GLUT_LEFT_BUTTON:  
                break;

            case GLUT_MIDDLE_BUTTON:
                tball.setAutoPosition(true);
                break;

            case GLUT_RIGHT_BUTTON:     
                tball.setAutoPositionNeg(true);
                break;
        }

        mouseb |= 1 << button;
    }
    else if ( state == 1 )
    {
        switch ( button )
        {
            case GLUT_LEFT_BUTTON:  break;

            case GLUT_MIDDLE_BUTTON:
                tball.setAutoPosition(false);
                break;

            case GLUT_RIGHT_BUTTON:     
                tball.setAutoPositionNeg(false);
                break;
        }       

        mouseb &= ~(1 << button);
    }
    lastx = x;
    lasty = y;
}

void vis(int visible)
{
    if (visible == GLUT_VISIBLE) 
    {
        glutIdleFunc(animate);
    } 
    else 
    {
        glutIdleFunc(NULL);
    }
}

void key(unsigned char key, int x, int y)
{
    switch ( key )
    {
        case 27:    
            subRef(win);
            delete rentravact;
            osgExit(); 
            exit(0);
        case 'a':   
            glDisable( GL_LIGHTING );
            std::cerr << "Lighting disabled." << std::endl;
            break;
        case 's':   
            glEnable( GL_LIGHTING );
            std::cerr << "Lighting enabled." << std::endl;
            break;
        case 'r':   
        {
            std::cerr << "Sending ray through " << x << "," << y << std::endl;
            Line l;
            cam->calcViewRay( l, x, y, *vp );
            std::cerr << "From " << l.getPosition() << ", dir " 
                      << l.getDirection()
                      << std::endl;
        }
        break;

        case ' ':
        {
            Matrix     m;
            Quaternion q;
            Vec3f      v;

            q = oldq;
            v = oldv;

            oldq = tball.getRotation();
            oldv = tball.getPosition();

            move_obj = ! move_obj;
            if ( move_obj )
            {
                puts("moving object");
                tball.setMode( OSG::Trackball::OSGCamera );

            }
            else
            {
                puts("moving camera");
                tball.setMode( OSG::Trackball::OSGObject );
            }
            
            tball.setStartPosition( v, true );
            tball.setStartRotation( q, true );
        }
        break;
    }
}

void addRTStage(ViewportPtr vp, 
                NodePtr     pRTRoot,
                Real32      rXMin,
                Real32      rXMax  )
{
    TextureObjChunkPtr tx1o = TextureObjChunk::create();
    TextureEnvChunkPtr tx1e = TextureEnvChunk::create();

    UChar8 imgdata[] =
    {  
        64,64,64, 128,128,128, 192,192,192, 255,255,255 
    };

    ImagePtr pImg = Image::create();

    pImg->set(Image::OSG_RGB_PF, 128, 128);

    tx1o->setImage    (pImg      ); 
    tx1o->setMinFilter(GL_LINEAR );
    tx1o->setMagFilter(GL_LINEAR );
    tx1o->setWrapS    (GL_CLAMP );
    tx1o->setWrapT    (GL_CLAMP );
    tx1e->setEnvMode  (GL_REPLACE);

    SimpleMaterialPtr mat = SimpleMaterial::create();
    
    mat->setDiffuse(Color3f(1,1,1));
    mat->setLit    (false         );
    mat->addChunk  (tx1o          );
    mat->addChunk  (tx1e          );

    PolygonForegroundPtr pFG =  PolygonForeground::create();

    pFG->setMaterial(mat);

    MFPnt2f *pPos = pFG->editMFPositions();
    MFVec3f *pTex = pFG->editMFTexCoords();

    pPos->push_back(Pnt2f(rXMin, 0.0f));
    pPos->push_back(Pnt2f(rXMax, 0.0f));
    pPos->push_back(Pnt2f(rXMax, 0.3f));
    pPos->push_back(Pnt2f(rXMin, 0.3f));

    pTex->push_back(Vec3f(0.0f, 1.0f, 0.0f));
    pTex->push_back(Vec3f(1.0f, 1.0f, 0.0f));
    pTex->push_back(Vec3f(1.0f, 0.0f, 0.0f));
    pTex->push_back(Vec3f(0.0f, 0.0f, 0.0f));

    vp->addForeground(pFG);



    // RRT

    FrameBufferObjectPtr pFBO = FrameBufferObject::create();

    TextureBufferPtr pTexBuffer   = TextureBuffer::create();
    RenderBufferPtr  pDepthBuffer = RenderBuffer ::create();

    pDepthBuffer->setInternalFormat(GL_DEPTH_COMPONENT24   );

    pTexBuffer->setTexture(tx1o);

    pFBO->setSize(128, 128);
    
    pFBO->setColorAttachment(pTexBuffer, 0);
    pFBO->setDepthAttachment(pDepthBuffer );

    pFBO->editMFDrawBuffers()->clear();
    pFBO->editMFDrawBuffers()->push_back(GL_COLOR_ATTACHMENT0_EXT);



    NodePtr pStageNode = Node::create();

    RRTStagePtr pStage = RRTStage::create();

    pStage->setRenderTarget (pFBO);
    pStage->setTextureTarget(tx1o);
  
    pStage->setSplitThreads(false );
//    pStage->setTiled       (true);
    pStage->setTiled       (false);
    pStage->setWidth       (128  );
    pStage->setHeight      (128  );


//    pStage->setRayTracingRoot(file);

    VisitSubTreePtr pVisit     = VisitSubTree::create();
    NodePtr         pVisitNode = Node::create();

    pVisit    ->setSubTreeRoot(pRTRoot);
//    pVisit    ->setSubTreeRoot(file);
    pVisitNode->setCore       (pVisit);

#ifdef LOCAL_RTINFO
    RTInfoAttachmentPtr pRTInfo = RTInfoAttachment::create();

    pVisitNode->addAttachment(pRTInfo);
#endif

    pStageNode->setCore (pStage    );
    pStageNode->addChild(pVisitNode);


    root->addChild(pStageNode);

}

int main (int argc, char **argv)
{
    osgInit(argc,argv);
    
    // GLUT init

    glutInit(&argc, argv);
    glutInitDisplayMode( GLUT_RGBA | GLUT_DEPTH | GLUT_DOUBLE);
    int winid = glutCreateWindow("OpenSG");
    glutKeyboardFunc(key);
    glutVisibilityFunc(vis);
    glutReshapeFunc(reshape);
    glutDisplayFunc(display);       
    glutMouseFunc(mouse);   
    glutMotionFunc(motion); 
    
    glutIdleFunc(display);  

    // OSG

    SceneFileHandler::the()->print();

    // create the graph

    // beacon for camera and light  
    NodePtr  b1n = Node::create();
    GroupPtr b1  = Group::create();

    b1n->setCore( b1 );

    // transformation
    NodePtr      t1n = Node::create();
    TransformPtr t1  = Transform::create();

    t1n->setCore (t1 );
    t1n->addChild(b1n);

    cam_trans = t1;

    // light
    
    NodePtr             dlight = Node::create();
    DirectionalLightPtr dl     = DirectionalLight::create();

    {
        dlight->setCore(dl);
        
//        dlight->setCore(Group::create());
        
        dl->setAmbient( .0, .0, .0, 1 );
        dl->setDiffuse( .8, .8, .8, .8 );
        dl->setDirection(1,0,0);
//        dl->setBeacon( b1n);
    }

    // root
    root         = Node:: create();
    GroupPtr gr1 = Group::create();

    root->setCore (gr1   );
    root->addChild(t1n   );
    root->addChild(dlight);

    // Load the file

    NodePtr file = NullFC;
    
    if(argc > 1)
    {
        file = SceneFileHandler::the()->read(argv[1], NULL);
    }

    if(file == NullFC)
    {
        std::cerr << "Couldn't load file, ignoring" << std::endl;

        file = makeSphere(4, 2.0);
    }

    Thread::getCurrentChangeList()->commitChanges();

    file->updateVolume();


    Vec3f min,max;
    file->getVolume().getBounds(min, max);
    
    std::cout << "Volume: from " << min << " to " << max << std::endl;

            scene_trans = Transform::create();
    NodePtr sceneTrN    = Node::create();

    sceneTrN->setCore (scene_trans);
    sceneTrN->addChild(file       );


    dlight->addChild(sceneTrN);

    // Camera
    
    cam = PerspectiveCamera::create();
    {
        cam->setBeacon( b1n );
        cam->setFov( osgDegree2Rad( 90 ) );
        cam->setNear( 0.1 );
        cam->setFar( 100000 );
    }

    // Background
    SolidBackgroundPtr bkgnd = SolidBackground::create();
    {
        bkgnd->setColor(Color3f(0,0,1));
    }

    // Viewport
    vp = Viewport::create();
    {
        vp->setCamera( cam );
        vp->setBackground( bkgnd );
        vp->setRoot( root );
        vp->setSize( 0,0, 1,1 );
    }


    addRTStage(vp, dlight, 0.0f, 0.3f);
    addRTStage(vp, dlight, 0.7f, 1.0f);

#ifndef LOCAL_RTINFO
    RTInfoAttachmentPtr pRTInfo = RTInfoAttachment::create();

    file->addAttachment(pRTInfo);
#endif


    // Window
    GLUTWindowPtr gwin;

    GLint glvp[4];

    glGetIntegerv(GL_VIEWPORT, glvp);

    gwin = GLUTWindow::create();
    {
        gwin->setGlutId(winid);
        gwin->setSize( glvp[2], glvp[3] );
        
        win = gwin;

        win->addPort( vp );

        win->init();
    }

    // Action
    rentravact = RenderAction::create();


    // tball
    Vec3f pos;

    pos.setValues(min[0] + ((max[0] - min[0]) * 0.5), 
                  min[1] + ((max[1] - min[1]) * 0.5), 
                  max[2] + ( max[2] - min[2] ) * 1.5 );
    
    float scale = (max[2] - min[2] + max[1] - min[1] + max[0] - min[0]) / 6;

    Pnt3f tCenter(min[0] + (max[0] - min[0]) / 2,
                  min[1] + (max[1] - min[1]) / 2,
                  min[2] + (max[2] - min[2]) / 2);

    fprintf(stderr, "Startpos : %f %f %f\n", pos[0], pos[1], pos[2]);

    tball.setMode            (Trackball::OSGObject);
    tball.setStartPosition   (pos, true           );
    tball.setSum             (true                );
    tball.setTranslationMode (Trackball::OSGFree  );
    tball.setTranslationScale(scale               );
    tball.setRotationCenter  (tCenter             );

    // run...
    glutMainLoop();
    
    return 0;
}
