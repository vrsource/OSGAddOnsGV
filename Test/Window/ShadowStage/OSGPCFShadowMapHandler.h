#ifndef _OSGPCFSHADOWMAPHANDLER_H_
#define _OSGPCFSHADOWMAPHANDLER_H_
#ifdef __sgi
#pragma once
#endif

#include <vector>
#include <OSGConfig.h>
#include <OSGAction.h>
#include <OSGRenderActionBase.h>
#include <OSGSpotLight.h>
#include <OSGDirectionalLight.h>
#include <OSGPerspectiveCamera.h>
#include <OSGMatrixCamera.h>
#include <OSGTransform.h>
#include <OSGTextureChunk.h>
#include <OSGSimpleMaterial.h>
#include <OSGPassiveBackground.h>
#include <OSGSolidBackground.h>
#include <OSGChunkMaterial.h>
#include <OSGMaterialChunk.h>
#include <OSGSHLChunk.h>
#include <OSGForeground.h>
#include <OSGPolygonForeground.h>
#include <OSGGrabForeground.h>
#include <OSGTextureGrabForeground.h>
#include <OSGFileGrabForeground.h>
#include <OSGImageForeground.h>
#include <OSGTexGenChunk.h>
#include <OSGTextureTransformChunk.h>
#include <OSGPolygonChunk.h>
#include <OSGBlendChunk.h>
#include <OSGTileCameraDecorator.h>
#include <OSGDepthChunk.h>

#include "OSGTreeHandler.h"

OSG_BEGIN_NAMESPACE

class ShadowStage;
class TreeRenderer;

class OSG_WINDOW_DLLMAPPING PCFShadowMapHandler : public TreeHandler
{

    /*==========================  PUBLIC  =================================*/
  public:

    PCFShadowMapHandler(ShadowStage *source);
    ~PCFShadowMapHandler(void);
    virtual void render(DrawEnv *pEnv,
                        RenderAction *pTmpAction);

  private:

    void initTextures(DrawEnv *pEnv);
    void createShadowMaps(DrawEnv *pEnv, 
                          RenderAction *pTmpAction);
    void createColorMap(DrawEnv *pEnv,
                        RenderAction *pTmpAction);
    void createShadowFactorMap(DrawEnv *pEnv,
                               RenderAction *pTmpAction);
    void createColorMapFBO(DrawEnv *pEnv,
                           RenderAction *pTmpAction);
    void createShadowFactorMapFBO(DrawEnv *pEnv,
                                  RenderAction *pTmpAction);
    void createShadowMapsFBO(DrawEnv *pEnv, 
                             RenderAction *pTmpAction);
    bool initFBO(DrawEnv *pEnv);
    void reInit(DrawEnv *pEnv);
    bool checkFrameBufferStatus(Window *win);

    TileCameraDecoratorUnrecPtr  _tiledeco;
    ImageUnrecPtr                _colorMapImage;
    ImageUnrecPtr                _shadowFactorMapImage;
    ImageUnrecPtr                _shadowFactorMapImage2;
    ChunkMaterialUnrecPtr        _shadowCmat;
    SHLChunkUnrecPtr             _shadowSHL;
    SHLChunkUnrecPtr             _shadowSHL2;
    SHLChunkUnrecPtr             _shadowSHL3;
    SHLChunkUnrecPtr             _shadowSHL4;
    SHLChunkUnrecPtr             _shadowCubeSHL;
    Int32                        _firstRun;
    Matrix                       _transforms[6];

    GLuint  _fb;
    GLuint  _fb2;
    GLuint  _rb_depth;
    Real32  _oldRange;
    
    bool    _initTexturesDone;
};

OSG_END_NAMESPACE

#endif /* _OSGPCFSHADOWMAPHANDLER_H_ */
