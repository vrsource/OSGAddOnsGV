// This file has been generated by Py++.


// PyOpenSG is (C) Copyright 2005-2009 by Allen Bierbaum
//
// This file is part of PyOpenSG.
//
// PyOpenSG is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License as published by the Free
// Software Foundation; either version 2 of the License, or (at your option)
// any later version.
//
// PyOpenSG is distributed in the hope that it will be useful, but WITHOUT ANY
// WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
// FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for
// more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#if __GNUC__ >= 4 || __GNUC_MINOR__ >=3
#pragma GCC diagnostic warning "-Wold-style-cast"
#pragma GCC diagnostic warning "-Wunused-local-typedefs"
#pragma GCC diagnostic warning "-Wnon-virtual-dtor"
#endif
#if WIN32
#pragma warning(disable : 4267)
#pragma warning(disable : 4344)
#endif

#include "boost/python.hpp"
#include "OSGSystem_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "FBOViewport.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_FBOViewport_class(){

    { //::OSG::FBOViewport
        typedef bp::class_< OSG::FBOViewport, bp::bases< OSG::FBOViewportBase >, OSG::FBOViewport::ObjRecPtr, boost::noncopyable > FBOViewport_exposer_t;
        FBOViewport_exposer_t FBOViewport_exposer = FBOViewport_exposer_t( "FBOViewport", bp::no_init );
        bp::scope FBOViewport_scope( FBOViewport_exposer );
        { //::OSG::FBOViewport::changed
        
            typedef void ( ::OSG::FBOViewport::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            FBOViewport_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::FBOViewport::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("detail") ) );
        
        }
        { //::OSG::FBOViewport::computeIsFullWindow
        
            typedef bool ( ::OSG::FBOViewport::*computeIsFullWindow_function_type )(  ) const;
            
            FBOViewport_exposer.def( 
                "computeIsFullWindow"
                , computeIsFullWindow_function_type( &::OSG::FBOViewport::computeIsFullWindow ) );
        
        }
        { //::OSG::FBOViewport::computePixelBottom
        
            typedef ::OSG::Int32 ( ::OSG::FBOViewport::*computePixelBottom_function_type )(  ) const;
            
            FBOViewport_exposer.def( 
                "computePixelBottom"
                , computePixelBottom_function_type( &::OSG::FBOViewport::computePixelBottom ) );
        
        }
        { //::OSG::FBOViewport::computePixelLeft
        
            typedef ::OSG::Int32 ( ::OSG::FBOViewport::*computePixelLeft_function_type )(  ) const;
            
            FBOViewport_exposer.def( 
                "computePixelLeft"
                , computePixelLeft_function_type( &::OSG::FBOViewport::computePixelLeft ) );
        
        }
        { //::OSG::FBOViewport::computePixelRight
        
            typedef ::OSG::Int32 ( ::OSG::FBOViewport::*computePixelRight_function_type )(  ) const;
            
            FBOViewport_exposer.def( 
                "computePixelRight"
                , computePixelRight_function_type( &::OSG::FBOViewport::computePixelRight ) );
        
        }
        { //::OSG::FBOViewport::computePixelTop
        
            typedef ::OSG::Int32 ( ::OSG::FBOViewport::*computePixelTop_function_type )(  ) const;
            
            FBOViewport_exposer.def( 
                "computePixelTop"
                , computePixelTop_function_type( &::OSG::FBOViewport::computePixelTop ) );
        
        }
        { //::OSG::FBOViewport::dump
        
            typedef void ( ::OSG::FBOViewport::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            FBOViewport_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::FBOViewport::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::FBOViewport::getTarget
        
            typedef ::OSG::FrameBufferObject * ( ::OSG::FBOViewport::*getTarget_function_type )(  ) ;
            
            FBOViewport_exposer.def( 
                "getTarget"
                , getTarget_function_type( &::OSG::FBOViewport::getTarget )
                , bp::return_internal_reference< >() );
        
        }
        pyopensg::register_transit< OSG::FBOViewport >::execute();
        bp::implicitly_convertible< OSG::FBOViewport::ObjRecPtr, OSG::FBOViewport* >();
        bp::implicitly_convertible< OSG::FBOViewport::ObjRecPtr, OSG::FBOViewport::ObjCPtr >();
        bp::implicitly_convertible< OSG::FBOViewport::ObjRecPtr, OSG::Viewport* >();
        bp::implicitly_convertible< OSG::FBOViewport::ObjRecPtr, OSG::Viewport::ObjRecPtr >();
        bp::implicitly_convertible<OSG::FBOViewport::ObjRecPtr, OSG::Viewport::ObjCPtr>();
    }

}
