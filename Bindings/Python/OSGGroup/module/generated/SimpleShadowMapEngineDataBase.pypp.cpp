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
#endif
#if WIN32
#pragma warning(disable : 4267)
#pragma warning(disable : 4344)
#endif

#include "boost/python.hpp"
#include "OSGGroup_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "SimpleShadowMapEngineDataBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_SimpleShadowMapEngineDataBase_class(){

    { //::OSG::SimpleShadowMapEngineDataBase
        typedef bp::class_< OSG::SimpleShadowMapEngineDataBase, bp::bases< OSG::StageData >, boost::noncopyable > SimpleShadowMapEngineDataBase_exposer_t;
        SimpleShadowMapEngineDataBase_exposer_t SimpleShadowMapEngineDataBase_exposer = SimpleShadowMapEngineDataBase_exposer_t( "SimpleShadowMapEngineDataBase", bp::no_init );
        bp::scope SimpleShadowMapEngineDataBase_scope( SimpleShadowMapEngineDataBase_exposer );
        bp::scope().attr("CameraFieldId") = (int)OSG::SimpleShadowMapEngineDataBase::CameraFieldId;
        bp::scope().attr("RenderTargetFieldId") = (int)OSG::SimpleShadowMapEngineDataBase::RenderTargetFieldId;
        bp::scope().attr("TexChunkFieldId") = (int)OSG::SimpleShadowMapEngineDataBase::TexChunkFieldId;
        bp::scope().attr("TexBufferFieldId") = (int)OSG::SimpleShadowMapEngineDataBase::TexBufferFieldId;
        bp::scope().attr("LightChunkFieldId") = (int)OSG::SimpleShadowMapEngineDataBase::LightChunkFieldId;
        bp::scope().attr("BlendChunkFieldId") = (int)OSG::SimpleShadowMapEngineDataBase::BlendChunkFieldId;
        bp::scope().attr("TexGenChunkFieldId") = (int)OSG::SimpleShadowMapEngineDataBase::TexGenChunkFieldId;
        bp::scope().attr("PolyChunkFieldId") = (int)OSG::SimpleShadowMapEngineDataBase::PolyChunkFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::SimpleShadowMapEngineDataBase::NextFieldId;
        { //::OSG::SimpleShadowMapEngineDataBase::copyFromBin
        
            typedef void ( ::OSG::SimpleShadowMapEngineDataBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            SimpleShadowMapEngineDataBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::SimpleShadowMapEngineDataBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::SimpleShadowMapEngineDataBase::copyToBin
        
            typedef void ( ::OSG::SimpleShadowMapEngineDataBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            SimpleShadowMapEngineDataBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::SimpleShadowMapEngineDataBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::SimpleShadowMapEngineDataBase::create
        
            typedef ::OSG::SimpleShadowMapEngineDataTransitPtr ( *create_function_type )(  );
            
            SimpleShadowMapEngineDataBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::SimpleShadowMapEngineDataBase::create ) );
        
        }
        { //::OSG::SimpleShadowMapEngineDataBase::createDependent
        
            typedef ::OSG::SimpleShadowMapEngineDataTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            SimpleShadowMapEngineDataBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::SimpleShadowMapEngineDataBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::SimpleShadowMapEngineDataBase::createLocal
        
            typedef ::OSG::SimpleShadowMapEngineDataTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            SimpleShadowMapEngineDataBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::SimpleShadowMapEngineDataBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::SimpleShadowMapEngineDataBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::SimpleShadowMapEngineDataBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            SimpleShadowMapEngineDataBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::SimpleShadowMapEngineDataBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::SimpleShadowMapEngineDataBase::getBlendChunk
        
            typedef ::OSG::BlendChunk * ( ::OSG::SimpleShadowMapEngineDataBase::*getBlendChunk_function_type )(  ) const;
            
            SimpleShadowMapEngineDataBase_exposer.def( 
                "getBlendChunk"
                , getBlendChunk_function_type( &::OSG::SimpleShadowMapEngineDataBase::getBlendChunk )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleShadowMapEngineDataBase::getCamera
        
            typedef ::OSG::Camera * ( ::OSG::SimpleShadowMapEngineDataBase::*getCamera_function_type )(  ) const;
            
            SimpleShadowMapEngineDataBase_exposer.def( 
                "getCamera"
                , getCamera_function_type( &::OSG::SimpleShadowMapEngineDataBase::getCamera )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleShadowMapEngineDataBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            SimpleShadowMapEngineDataBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::SimpleShadowMapEngineDataBase::getClassGroupId ) );
        
        }
        { //::OSG::SimpleShadowMapEngineDataBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            SimpleShadowMapEngineDataBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::SimpleShadowMapEngineDataBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::SimpleShadowMapEngineDataBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            SimpleShadowMapEngineDataBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::SimpleShadowMapEngineDataBase::getClassTypeId ) );
        
        }
        { //::OSG::SimpleShadowMapEngineDataBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::SimpleShadowMapEngineDataBase::*getContainerSize_function_type )(  ) const;
            
            SimpleShadowMapEngineDataBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::SimpleShadowMapEngineDataBase::getContainerSize ) );
        
        }
        { //::OSG::SimpleShadowMapEngineDataBase::getLightChunk
        
            typedef ::OSG::LightChunk * ( ::OSG::SimpleShadowMapEngineDataBase::*getLightChunk_function_type )(  ) const;
            
            SimpleShadowMapEngineDataBase_exposer.def( 
                "getLightChunk"
                , getLightChunk_function_type( &::OSG::SimpleShadowMapEngineDataBase::getLightChunk )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleShadowMapEngineDataBase::getPolyChunk
        
            typedef ::OSG::PolygonChunk * ( ::OSG::SimpleShadowMapEngineDataBase::*getPolyChunk_function_type )(  ) const;
            
            SimpleShadowMapEngineDataBase_exposer.def( 
                "getPolyChunk"
                , getPolyChunk_function_type( &::OSG::SimpleShadowMapEngineDataBase::getPolyChunk )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleShadowMapEngineDataBase::getRenderTarget
        
            typedef ::OSG::FrameBufferObject * ( ::OSG::SimpleShadowMapEngineDataBase::*getRenderTarget_function_type )(  ) const;
            
            SimpleShadowMapEngineDataBase_exposer.def( 
                "getRenderTarget"
                , getRenderTarget_function_type( &::OSG::SimpleShadowMapEngineDataBase::getRenderTarget )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleShadowMapEngineDataBase::getSFBlendChunk
        
            typedef ::OSG::SFUnrecBlendChunkPtr const * ( ::OSG::SimpleShadowMapEngineDataBase::*getSFBlendChunk_function_type )(  ) const;
            
            SimpleShadowMapEngineDataBase_exposer.def( 
                "getSFBlendChunk"
                , getSFBlendChunk_function_type( &::OSG::SimpleShadowMapEngineDataBase::getSFBlendChunk )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleShadowMapEngineDataBase::getSFCamera
        
            typedef ::OSG::SFUnrecCameraPtr const * ( ::OSG::SimpleShadowMapEngineDataBase::*getSFCamera_function_type )(  ) const;
            
            SimpleShadowMapEngineDataBase_exposer.def( 
                "getSFCamera"
                , getSFCamera_function_type( &::OSG::SimpleShadowMapEngineDataBase::getSFCamera )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleShadowMapEngineDataBase::getSFLightChunk
        
            typedef ::OSG::SFUnrecLightChunkPtr const * ( ::OSG::SimpleShadowMapEngineDataBase::*getSFLightChunk_function_type )(  ) const;
            
            SimpleShadowMapEngineDataBase_exposer.def( 
                "getSFLightChunk"
                , getSFLightChunk_function_type( &::OSG::SimpleShadowMapEngineDataBase::getSFLightChunk )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleShadowMapEngineDataBase::getSFPolyChunk
        
            typedef ::OSG::SFUnrecPolygonChunkPtr const * ( ::OSG::SimpleShadowMapEngineDataBase::*getSFPolyChunk_function_type )(  ) const;
            
            SimpleShadowMapEngineDataBase_exposer.def( 
                "getSFPolyChunk"
                , getSFPolyChunk_function_type( &::OSG::SimpleShadowMapEngineDataBase::getSFPolyChunk )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleShadowMapEngineDataBase::getSFRenderTarget
        
            typedef ::OSG::SFUnrecFrameBufferObjectPtr const * ( ::OSG::SimpleShadowMapEngineDataBase::*getSFRenderTarget_function_type )(  ) const;
            
            SimpleShadowMapEngineDataBase_exposer.def( 
                "getSFRenderTarget"
                , getSFRenderTarget_function_type( &::OSG::SimpleShadowMapEngineDataBase::getSFRenderTarget )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleShadowMapEngineDataBase::getSFTexBuffer
        
            typedef ::OSG::SFUnrecTextureBufferPtr const * ( ::OSG::SimpleShadowMapEngineDataBase::*getSFTexBuffer_function_type )(  ) const;
            
            SimpleShadowMapEngineDataBase_exposer.def( 
                "getSFTexBuffer"
                , getSFTexBuffer_function_type( &::OSG::SimpleShadowMapEngineDataBase::getSFTexBuffer )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleShadowMapEngineDataBase::getSFTexChunk
        
            typedef ::OSG::SFUnrecTextureObjChunkPtr const * ( ::OSG::SimpleShadowMapEngineDataBase::*getSFTexChunk_function_type )(  ) const;
            
            SimpleShadowMapEngineDataBase_exposer.def( 
                "getSFTexChunk"
                , getSFTexChunk_function_type( &::OSG::SimpleShadowMapEngineDataBase::getSFTexChunk )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleShadowMapEngineDataBase::getSFTexGenChunk
        
            typedef ::OSG::SFUnrecTexGenChunkPtr const * ( ::OSG::SimpleShadowMapEngineDataBase::*getSFTexGenChunk_function_type )(  ) const;
            
            SimpleShadowMapEngineDataBase_exposer.def( 
                "getSFTexGenChunk"
                , getSFTexGenChunk_function_type( &::OSG::SimpleShadowMapEngineDataBase::getSFTexGenChunk )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleShadowMapEngineDataBase::getTexBuffer
        
            typedef ::OSG::TextureBuffer * ( ::OSG::SimpleShadowMapEngineDataBase::*getTexBuffer_function_type )(  ) const;
            
            SimpleShadowMapEngineDataBase_exposer.def( 
                "getTexBuffer"
                , getTexBuffer_function_type( &::OSG::SimpleShadowMapEngineDataBase::getTexBuffer )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleShadowMapEngineDataBase::getTexChunk
        
            typedef ::OSG::TextureObjChunk * ( ::OSG::SimpleShadowMapEngineDataBase::*getTexChunk_function_type )(  ) const;
            
            SimpleShadowMapEngineDataBase_exposer.def( 
                "getTexChunk"
                , getTexChunk_function_type( &::OSG::SimpleShadowMapEngineDataBase::getTexChunk )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleShadowMapEngineDataBase::getTexGenChunk
        
            typedef ::OSG::TexGenChunk * ( ::OSG::SimpleShadowMapEngineDataBase::*getTexGenChunk_function_type )(  ) const;
            
            SimpleShadowMapEngineDataBase_exposer.def( 
                "getTexGenChunk"
                , getTexGenChunk_function_type( &::OSG::SimpleShadowMapEngineDataBase::getTexGenChunk )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleShadowMapEngineDataBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::SimpleShadowMapEngineDataBase::*getType_function_type )(  ) ;
            
            SimpleShadowMapEngineDataBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::SimpleShadowMapEngineDataBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleShadowMapEngineDataBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::SimpleShadowMapEngineDataBase::*getType_function_type )(  ) const;
            
            SimpleShadowMapEngineDataBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::SimpleShadowMapEngineDataBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleShadowMapEngineDataBase::setBlendChunk
        
            typedef void ( ::OSG::SimpleShadowMapEngineDataBase::*setBlendChunk_function_type )( ::OSG::BlendChunk * const ) ;
            
            SimpleShadowMapEngineDataBase_exposer.def( 
                "setBlendChunk"
                , setBlendChunk_function_type( &::OSG::SimpleShadowMapEngineDataBase::setBlendChunk )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SimpleShadowMapEngineDataBase::setCamera
        
            typedef void ( ::OSG::SimpleShadowMapEngineDataBase::*setCamera_function_type )( ::OSG::Camera * const ) ;
            
            SimpleShadowMapEngineDataBase_exposer.def( 
                "setCamera"
                , setCamera_function_type( &::OSG::SimpleShadowMapEngineDataBase::setCamera )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SimpleShadowMapEngineDataBase::setLightChunk
        
            typedef void ( ::OSG::SimpleShadowMapEngineDataBase::*setLightChunk_function_type )( ::OSG::LightChunk * const ) ;
            
            SimpleShadowMapEngineDataBase_exposer.def( 
                "setLightChunk"
                , setLightChunk_function_type( &::OSG::SimpleShadowMapEngineDataBase::setLightChunk )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SimpleShadowMapEngineDataBase::setPolyChunk
        
            typedef void ( ::OSG::SimpleShadowMapEngineDataBase::*setPolyChunk_function_type )( ::OSG::PolygonChunk * const ) ;
            
            SimpleShadowMapEngineDataBase_exposer.def( 
                "setPolyChunk"
                , setPolyChunk_function_type( &::OSG::SimpleShadowMapEngineDataBase::setPolyChunk )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SimpleShadowMapEngineDataBase::setRenderTarget
        
            typedef void ( ::OSG::SimpleShadowMapEngineDataBase::*setRenderTarget_function_type )( ::OSG::FrameBufferObject * const ) ;
            
            SimpleShadowMapEngineDataBase_exposer.def( 
                "setRenderTarget"
                , setRenderTarget_function_type( &::OSG::SimpleShadowMapEngineDataBase::setRenderTarget )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SimpleShadowMapEngineDataBase::setTexBuffer
        
            typedef void ( ::OSG::SimpleShadowMapEngineDataBase::*setTexBuffer_function_type )( ::OSG::TextureBuffer * const ) ;
            
            SimpleShadowMapEngineDataBase_exposer.def( 
                "setTexBuffer"
                , setTexBuffer_function_type( &::OSG::SimpleShadowMapEngineDataBase::setTexBuffer )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SimpleShadowMapEngineDataBase::setTexChunk
        
            typedef void ( ::OSG::SimpleShadowMapEngineDataBase::*setTexChunk_function_type )( ::OSG::TextureObjChunk * const ) ;
            
            SimpleShadowMapEngineDataBase_exposer.def( 
                "setTexChunk"
                , setTexChunk_function_type( &::OSG::SimpleShadowMapEngineDataBase::setTexChunk )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SimpleShadowMapEngineDataBase::setTexGenChunk
        
            typedef void ( ::OSG::SimpleShadowMapEngineDataBase::*setTexGenChunk_function_type )( ::OSG::TexGenChunk * const ) ;
            
            SimpleShadowMapEngineDataBase_exposer.def( 
                "setTexGenChunk"
                , setTexGenChunk_function_type( &::OSG::SimpleShadowMapEngineDataBase::setTexGenChunk )
                , ( bp::arg("value") ) );
        
        }
        SimpleShadowMapEngineDataBase_exposer.staticmethod( "create" );
        SimpleShadowMapEngineDataBase_exposer.staticmethod( "createDependent" );
        SimpleShadowMapEngineDataBase_exposer.staticmethod( "createLocal" );
        SimpleShadowMapEngineDataBase_exposer.staticmethod( "getClassGroupId" );
        SimpleShadowMapEngineDataBase_exposer.staticmethod( "getClassType" );
        SimpleShadowMapEngineDataBase_exposer.staticmethod( "getClassTypeId" );
    }

}
