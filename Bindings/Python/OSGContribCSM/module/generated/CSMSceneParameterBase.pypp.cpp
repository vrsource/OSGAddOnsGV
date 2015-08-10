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
#include "OSGContribCSM_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "CSMSceneParameterBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct CSMSceneParameterBase_wrapper : OSG::CSMSceneParameterBase, bp::wrapper< OSG::CSMSceneParameterBase > {

    virtual void frame( ::OSG::Time oTime, ::OSG::UInt32 uiFrame ){
        bp::override func_frame = this->get_override( "frame" );
        func_frame( oTime, uiFrame );
    }

};

void register_CSMSceneParameterBase_class(){

    { //::OSG::CSMSceneParameterBase
        typedef bp::class_< CSMSceneParameterBase_wrapper, boost::noncopyable > CSMSceneParameterBase_exposer_t;
        CSMSceneParameterBase_exposer_t CSMSceneParameterBase_exposer = CSMSceneParameterBase_exposer_t( "CSMSceneParameterBase", bp::no_init );
        bp::scope CSMSceneParameterBase_scope( CSMSceneParameterBase_exposer );
        bp::scope().attr("SceneRefFieldId") = (int)OSG::CSMSceneParameterBase::SceneRefFieldId;
        bp::scope().attr("DistScaleFieldId") = (int)OSG::CSMSceneParameterBase::DistScaleFieldId;
        bp::scope().attr("SceneDiagFieldId") = (int)OSG::CSMSceneParameterBase::SceneDiagFieldId;
        bp::scope().attr("InitViewPosFieldId") = (int)OSG::CSMSceneParameterBase::InitViewPosFieldId;
        bp::scope().attr("SceneCenterFieldId") = (int)OSG::CSMSceneParameterBase::SceneCenterFieldId;
        bp::scope().attr("SceneNearFieldId") = (int)OSG::CSMSceneParameterBase::SceneNearFieldId;
        bp::scope().attr("SceneFarFieldId") = (int)OSG::CSMSceneParameterBase::SceneFarFieldId;
        bp::scope().attr("ResetFieldId") = (int)OSG::CSMSceneParameterBase::ResetFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::CSMSceneParameterBase::NextFieldId;
        { //::OSG::CSMSceneParameterBase::copyFromBin
        
            typedef void ( ::OSG::CSMSceneParameterBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            CSMSceneParameterBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::CSMSceneParameterBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::CSMSceneParameterBase::copyToBin
        
            typedef void ( ::OSG::CSMSceneParameterBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            CSMSceneParameterBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::CSMSceneParameterBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::CSMSceneParameterBase::create
        
            typedef ::OSG::CSMSceneParameterTransitPtr ( *create_function_type )(  );
            
            CSMSceneParameterBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::CSMSceneParameterBase::create ) );
        
        }
        { //::OSG::CSMSceneParameterBase::createDependent
        
            typedef ::OSG::CSMSceneParameterTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            CSMSceneParameterBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::CSMSceneParameterBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::CSMSceneParameterBase::createLocal
        
            typedef ::OSG::CSMSceneParameterTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            CSMSceneParameterBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::CSMSceneParameterBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::CSMSceneParameterBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::CSMSceneParameterBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            CSMSceneParameterBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::CSMSceneParameterBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::CSMSceneParameterBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            CSMSceneParameterBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::CSMSceneParameterBase::getClassGroupId ) );
        
        }
        { //::OSG::CSMSceneParameterBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            CSMSceneParameterBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::CSMSceneParameterBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::CSMSceneParameterBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            CSMSceneParameterBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::CSMSceneParameterBase::getClassTypeId ) );
        
        }
        { //::OSG::CSMSceneParameterBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::CSMSceneParameterBase::*getContainerSize_function_type )(  ) const;
            
            CSMSceneParameterBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::CSMSceneParameterBase::getContainerSize ) );
        
        }
        { //::OSG::CSMSceneParameterBase::getDistScale
        
            typedef ::OSG::Real32 ( ::OSG::CSMSceneParameterBase::*getDistScale_function_type )(  ) const;
            
            CSMSceneParameterBase_exposer.def( 
                "getDistScale"
                , getDistScale_function_type( &::OSG::CSMSceneParameterBase::getDistScale ) );
        
        }
        { //::OSG::CSMSceneParameterBase::getInitViewPos
        
            typedef ::OSG::Pnt3f const & ( ::OSG::CSMSceneParameterBase::*getInitViewPos_function_type )(  ) const;
            
            CSMSceneParameterBase_exposer.def( 
                "getInitViewPos"
                , getInitViewPos_function_type( &::OSG::CSMSceneParameterBase::getInitViewPos )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::CSMSceneParameterBase::getReset
        
            typedef ::OSG::OSGAny const & ( ::OSG::CSMSceneParameterBase::*getReset_function_type )(  ) const;
            
            CSMSceneParameterBase_exposer.def( 
                "getReset"
                , getReset_function_type( &::OSG::CSMSceneParameterBase::getReset )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::CSMSceneParameterBase::getSFDistScale
        
            typedef ::OSG::SFReal32 const * ( ::OSG::CSMSceneParameterBase::*getSFDistScale_function_type )(  ) const;
            
            CSMSceneParameterBase_exposer.def( 
                "getSFDistScale"
                , getSFDistScale_function_type( &::OSG::CSMSceneParameterBase::getSFDistScale )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMSceneParameterBase::getSFInitViewPos
        
            typedef ::OSG::SFPnt3f const * ( ::OSG::CSMSceneParameterBase::*getSFInitViewPos_function_type )(  ) const;
            
            CSMSceneParameterBase_exposer.def( 
                "getSFInitViewPos"
                , getSFInitViewPos_function_type( &::OSG::CSMSceneParameterBase::getSFInitViewPos )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMSceneParameterBase::getSFReset
        
            typedef ::OSG::SFOSGAny const * ( ::OSG::CSMSceneParameterBase::*getSFReset_function_type )(  ) const;
            
            CSMSceneParameterBase_exposer.def( 
                "getSFReset"
                , getSFReset_function_type( &::OSG::CSMSceneParameterBase::getSFReset )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMSceneParameterBase::getSFSceneCenter
        
            typedef ::OSG::SFPnt3f const * ( ::OSG::CSMSceneParameterBase::*getSFSceneCenter_function_type )(  ) const;
            
            CSMSceneParameterBase_exposer.def( 
                "getSFSceneCenter"
                , getSFSceneCenter_function_type( &::OSG::CSMSceneParameterBase::getSFSceneCenter )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMSceneParameterBase::getSFSceneDiag
        
            typedef ::OSG::SFVec3f const * ( ::OSG::CSMSceneParameterBase::*getSFSceneDiag_function_type )(  ) const;
            
            CSMSceneParameterBase_exposer.def( 
                "getSFSceneDiag"
                , getSFSceneDiag_function_type( &::OSG::CSMSceneParameterBase::getSFSceneDiag )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMSceneParameterBase::getSFSceneFar
        
            typedef ::OSG::SFReal32 const * ( ::OSG::CSMSceneParameterBase::*getSFSceneFar_function_type )(  ) const;
            
            CSMSceneParameterBase_exposer.def( 
                "getSFSceneFar"
                , getSFSceneFar_function_type( &::OSG::CSMSceneParameterBase::getSFSceneFar )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMSceneParameterBase::getSFSceneNear
        
            typedef ::OSG::SFReal32 const * ( ::OSG::CSMSceneParameterBase::*getSFSceneNear_function_type )(  ) const;
            
            CSMSceneParameterBase_exposer.def( 
                "getSFSceneNear"
                , getSFSceneNear_function_type( &::OSG::CSMSceneParameterBase::getSFSceneNear )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMSceneParameterBase::getSFSceneRef
        
            typedef ::OSG::SFUnrecNodePtr const * ( ::OSG::CSMSceneParameterBase::*getSFSceneRef_function_type )(  ) const;
            
            CSMSceneParameterBase_exposer.def( 
                "getSFSceneRef"
                , getSFSceneRef_function_type( &::OSG::CSMSceneParameterBase::getSFSceneRef )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMSceneParameterBase::getSceneCenter
        
            typedef ::OSG::Pnt3f const & ( ::OSG::CSMSceneParameterBase::*getSceneCenter_function_type )(  ) const;
            
            CSMSceneParameterBase_exposer.def( 
                "getSceneCenter"
                , getSceneCenter_function_type( &::OSG::CSMSceneParameterBase::getSceneCenter )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::CSMSceneParameterBase::getSceneDiag
        
            typedef ::OSG::Vec3f const & ( ::OSG::CSMSceneParameterBase::*getSceneDiag_function_type )(  ) const;
            
            CSMSceneParameterBase_exposer.def( 
                "getSceneDiag"
                , getSceneDiag_function_type( &::OSG::CSMSceneParameterBase::getSceneDiag )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::CSMSceneParameterBase::getSceneFar
        
            typedef ::OSG::Real32 ( ::OSG::CSMSceneParameterBase::*getSceneFar_function_type )(  ) const;
            
            CSMSceneParameterBase_exposer.def( 
                "getSceneFar"
                , getSceneFar_function_type( &::OSG::CSMSceneParameterBase::getSceneFar ) );
        
        }
        { //::OSG::CSMSceneParameterBase::getSceneNear
        
            typedef ::OSG::Real32 ( ::OSG::CSMSceneParameterBase::*getSceneNear_function_type )(  ) const;
            
            CSMSceneParameterBase_exposer.def( 
                "getSceneNear"
                , getSceneNear_function_type( &::OSG::CSMSceneParameterBase::getSceneNear ) );
        
        }
        { //::OSG::CSMSceneParameterBase::getSceneRef
        
            typedef ::OSG::Node * ( ::OSG::CSMSceneParameterBase::*getSceneRef_function_type )(  ) const;
            
            CSMSceneParameterBase_exposer.def( 
                "getSceneRef"
                , getSceneRef_function_type( &::OSG::CSMSceneParameterBase::getSceneRef )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMSceneParameterBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::CSMSceneParameterBase::*getType_function_type )(  ) ;
            
            CSMSceneParameterBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::CSMSceneParameterBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMSceneParameterBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::CSMSceneParameterBase::*getType_function_type )(  ) const;
            
            CSMSceneParameterBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::CSMSceneParameterBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMSceneParameterBase::setDistScale
        
            typedef void ( ::OSG::CSMSceneParameterBase::*setDistScale_function_type )( ::OSG::Real32 const ) ;
            
            CSMSceneParameterBase_exposer.def( 
                "setDistScale"
                , setDistScale_function_type( &::OSG::CSMSceneParameterBase::setDistScale )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::CSMSceneParameterBase::setInitViewPos
        
            typedef void ( ::OSG::CSMSceneParameterBase::*setInitViewPos_function_type )( ::OSG::Pnt3f const & ) ;
            
            CSMSceneParameterBase_exposer.def( 
                "setInitViewPos"
                , setInitViewPos_function_type( &::OSG::CSMSceneParameterBase::setInitViewPos )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::CSMSceneParameterBase::setReset
        
            typedef void ( ::OSG::CSMSceneParameterBase::*setReset_function_type )( ::OSG::OSGAny const & ) ;
            
            CSMSceneParameterBase_exposer.def( 
                "setReset"
                , setReset_function_type( &::OSG::CSMSceneParameterBase::setReset )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::CSMSceneParameterBase::setSceneCenter
        
            typedef void ( ::OSG::CSMSceneParameterBase::*setSceneCenter_function_type )( ::OSG::Pnt3f const & ) ;
            
            CSMSceneParameterBase_exposer.def( 
                "setSceneCenter"
                , setSceneCenter_function_type( &::OSG::CSMSceneParameterBase::setSceneCenter )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::CSMSceneParameterBase::setSceneDiag
        
            typedef void ( ::OSG::CSMSceneParameterBase::*setSceneDiag_function_type )( ::OSG::Vec3f const & ) ;
            
            CSMSceneParameterBase_exposer.def( 
                "setSceneDiag"
                , setSceneDiag_function_type( &::OSG::CSMSceneParameterBase::setSceneDiag )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::CSMSceneParameterBase::setSceneFar
        
            typedef void ( ::OSG::CSMSceneParameterBase::*setSceneFar_function_type )( ::OSG::Real32 const ) ;
            
            CSMSceneParameterBase_exposer.def( 
                "setSceneFar"
                , setSceneFar_function_type( &::OSG::CSMSceneParameterBase::setSceneFar )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::CSMSceneParameterBase::setSceneNear
        
            typedef void ( ::OSG::CSMSceneParameterBase::*setSceneNear_function_type )( ::OSG::Real32 const ) ;
            
            CSMSceneParameterBase_exposer.def( 
                "setSceneNear"
                , setSceneNear_function_type( &::OSG::CSMSceneParameterBase::setSceneNear )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::CSMSceneParameterBase::setSceneRef
        
            typedef void ( ::OSG::CSMSceneParameterBase::*setSceneRef_function_type )( ::OSG::Node * const ) ;
            
            CSMSceneParameterBase_exposer.def( 
                "setSceneRef"
                , setSceneRef_function_type( &::OSG::CSMSceneParameterBase::setSceneRef )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::FrameTaskInterface::frame
        
            typedef void ( ::OSG::FrameTaskInterface::*frame_function_type )( ::OSG::Time,::OSG::UInt32 ) ;
            
            CSMSceneParameterBase_exposer.def( 
                "frame"
                , bp::pure_virtual( frame_function_type(&::OSG::FrameTaskInterface::frame) )
                , ( bp::arg("oTime"), bp::arg("uiFrame") ) );
        
        }
        CSMSceneParameterBase_exposer.staticmethod( "create" );
        CSMSceneParameterBase_exposer.staticmethod( "createDependent" );
        CSMSceneParameterBase_exposer.staticmethod( "createLocal" );
        CSMSceneParameterBase_exposer.staticmethod( "getClassGroupId" );
        CSMSceneParameterBase_exposer.staticmethod( "getClassType" );
        CSMSceneParameterBase_exposer.staticmethod( "getClassTypeId" );
    }

}
