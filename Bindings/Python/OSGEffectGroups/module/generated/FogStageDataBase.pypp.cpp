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
#include "OSGEffectGroups_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "FogStageDataBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_FogStageDataBase_class(){

    { //::OSG::FogStageDataBase
        typedef bp::class_< OSG::FogStageDataBase, bp::bases< ::OSG::StageData >, boost::noncopyable > FogStageDataBase_exposer_t;
        FogStageDataBase_exposer_t FogStageDataBase_exposer = FogStageDataBase_exposer_t( "FogStageDataBase", bp::no_init );
        bp::scope FogStageDataBase_scope( FogStageDataBase_exposer );
        bp::scope().attr("FogMaterialFieldId") = (int)OSG::FogStageDataBase::FogMaterialFieldId;
        bp::scope().attr("WidthFieldId") = (int)OSG::FogStageDataBase::WidthFieldId;
        bp::scope().attr("HeightFieldId") = (int)OSG::FogStageDataBase::HeightFieldId;
        bp::scope().attr("RenderTargetFieldId") = (int)OSG::FogStageDataBase::RenderTargetFieldId;
        bp::scope().attr("CameraFieldId") = (int)OSG::FogStageDataBase::CameraFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::FogStageDataBase::NextFieldId;
        { //::OSG::FogStageDataBase::copyFromBin
        
            typedef void ( ::OSG::FogStageDataBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            FogStageDataBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::FogStageDataBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::FogStageDataBase::copyToBin
        
            typedef void ( ::OSG::FogStageDataBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            FogStageDataBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::FogStageDataBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::FogStageDataBase::create
        
            typedef ::OSG::FogStageDataTransitPtr ( *create_function_type )(  );
            
            FogStageDataBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::FogStageDataBase::create ) );
        
        }
        { //::OSG::FogStageDataBase::createDependent
        
            typedef ::OSG::FogStageDataTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            FogStageDataBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::FogStageDataBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::FogStageDataBase::createLocal
        
            typedef ::OSG::FogStageDataTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            FogStageDataBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::FogStageDataBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::FogStageDataBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::FogStageDataBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            FogStageDataBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::FogStageDataBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::FogStageDataBase::getCamera
        
            typedef ::OSG::Camera * ( ::OSG::FogStageDataBase::*getCamera_function_type )(  ) const;
            
            FogStageDataBase_exposer.def( 
                "getCamera"
                , getCamera_function_type( &::OSG::FogStageDataBase::getCamera )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FogStageDataBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            FogStageDataBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::FogStageDataBase::getClassGroupId ) );
        
        }
        { //::OSG::FogStageDataBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            FogStageDataBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::FogStageDataBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::FogStageDataBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            FogStageDataBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::FogStageDataBase::getClassTypeId ) );
        
        }
        { //::OSG::FogStageDataBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::FogStageDataBase::*getContainerSize_function_type )(  ) const;
            
            FogStageDataBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::FogStageDataBase::getContainerSize ) );
        
        }
        { //::OSG::FogStageDataBase::getFogMaterial
        
            typedef ::OSG::ChunkMaterial * ( ::OSG::FogStageDataBase::*getFogMaterial_function_type )(  ) const;
            
            FogStageDataBase_exposer.def( 
                "getFogMaterial"
                , getFogMaterial_function_type( &::OSG::FogStageDataBase::getFogMaterial )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FogStageDataBase::getHeight
        
            typedef ::OSG::Int32 ( ::OSG::FogStageDataBase::*getHeight_function_type )(  ) const;
            
            FogStageDataBase_exposer.def( 
                "getHeight"
                , getHeight_function_type( &::OSG::FogStageDataBase::getHeight ) );
        
        }
        { //::OSG::FogStageDataBase::getRenderTarget
        
            typedef ::OSG::FrameBufferObject * ( ::OSG::FogStageDataBase::*getRenderTarget_function_type )(  ) const;
            
            FogStageDataBase_exposer.def( 
                "getRenderTarget"
                , getRenderTarget_function_type( &::OSG::FogStageDataBase::getRenderTarget )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FogStageDataBase::getSFCamera
        
            typedef ::OSG::SFUnrecCameraPtr const * ( ::OSG::FogStageDataBase::*getSFCamera_function_type )(  ) const;
            
            FogStageDataBase_exposer.def( 
                "getSFCamera"
                , getSFCamera_function_type( &::OSG::FogStageDataBase::getSFCamera )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FogStageDataBase::getSFFogMaterial
        
            typedef ::OSG::SFUnrecChunkMaterialPtr const * ( ::OSG::FogStageDataBase::*getSFFogMaterial_function_type )(  ) const;
            
            FogStageDataBase_exposer.def( 
                "getSFFogMaterial"
                , getSFFogMaterial_function_type( &::OSG::FogStageDataBase::getSFFogMaterial )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FogStageDataBase::getSFHeight
        
            typedef ::OSG::SFInt32 const * ( ::OSG::FogStageDataBase::*getSFHeight_function_type )(  ) const;
            
            FogStageDataBase_exposer.def( 
                "getSFHeight"
                , getSFHeight_function_type( &::OSG::FogStageDataBase::getSFHeight )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FogStageDataBase::getSFRenderTarget
        
            typedef ::OSG::SFUnrecFrameBufferObjectPtr const * ( ::OSG::FogStageDataBase::*getSFRenderTarget_function_type )(  ) const;
            
            FogStageDataBase_exposer.def( 
                "getSFRenderTarget"
                , getSFRenderTarget_function_type( &::OSG::FogStageDataBase::getSFRenderTarget )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FogStageDataBase::getSFWidth
        
            typedef ::OSG::SFInt32 const * ( ::OSG::FogStageDataBase::*getSFWidth_function_type )(  ) const;
            
            FogStageDataBase_exposer.def( 
                "getSFWidth"
                , getSFWidth_function_type( &::OSG::FogStageDataBase::getSFWidth )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FogStageDataBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::FogStageDataBase::*getType_function_type )(  ) ;
            
            FogStageDataBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::FogStageDataBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FogStageDataBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::FogStageDataBase::*getType_function_type )(  ) const;
            
            FogStageDataBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::FogStageDataBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FogStageDataBase::getWidth
        
            typedef ::OSG::Int32 ( ::OSG::FogStageDataBase::*getWidth_function_type )(  ) const;
            
            FogStageDataBase_exposer.def( 
                "getWidth"
                , getWidth_function_type( &::OSG::FogStageDataBase::getWidth ) );
        
        }
        { //::OSG::FogStageDataBase::setCamera
        
            typedef void ( ::OSG::FogStageDataBase::*setCamera_function_type )( ::OSG::Camera * const ) ;
            
            FogStageDataBase_exposer.def( 
                "setCamera"
                , setCamera_function_type( &::OSG::FogStageDataBase::setCamera )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::FogStageDataBase::setFogMaterial
        
            typedef void ( ::OSG::FogStageDataBase::*setFogMaterial_function_type )( ::OSG::ChunkMaterial * const ) ;
            
            FogStageDataBase_exposer.def( 
                "setFogMaterial"
                , setFogMaterial_function_type( &::OSG::FogStageDataBase::setFogMaterial )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::FogStageDataBase::setHeight
        
            typedef void ( ::OSG::FogStageDataBase::*setHeight_function_type )( ::OSG::Int32 const ) ;
            
            FogStageDataBase_exposer.def( 
                "setHeight"
                , setHeight_function_type( &::OSG::FogStageDataBase::setHeight )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::FogStageDataBase::setRenderTarget
        
            typedef void ( ::OSG::FogStageDataBase::*setRenderTarget_function_type )( ::OSG::FrameBufferObject * const ) ;
            
            FogStageDataBase_exposer.def( 
                "setRenderTarget"
                , setRenderTarget_function_type( &::OSG::FogStageDataBase::setRenderTarget )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::FogStageDataBase::setWidth
        
            typedef void ( ::OSG::FogStageDataBase::*setWidth_function_type )( ::OSG::Int32 const ) ;
            
            FogStageDataBase_exposer.def( 
                "setWidth"
                , setWidth_function_type( &::OSG::FogStageDataBase::setWidth )
                , ( bp::arg("value") ) );
        
        }
        FogStageDataBase_exposer.staticmethod( "create" );
        FogStageDataBase_exposer.staticmethod( "createDependent" );
        FogStageDataBase_exposer.staticmethod( "createLocal" );
        FogStageDataBase_exposer.staticmethod( "getClassGroupId" );
        FogStageDataBase_exposer.staticmethod( "getClassType" );
        FogStageDataBase_exposer.staticmethod( "getClassTypeId" );
    }

}
