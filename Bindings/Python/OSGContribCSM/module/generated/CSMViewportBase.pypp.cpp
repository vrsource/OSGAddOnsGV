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
#pragma GCC diagnostic warning "-Wshadow"
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
#include "CSMViewportBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

boost::python::list CSMViewportBase_getMFForegrounds(OSG::CSMViewportBase *self)
{
   boost::python::list result;
   OSG::MFUnrecForegroundPtr const * mf_data = self->getMFForegrounds();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append(OSG::Foreground::ObjRecPtr((*mf_data)[i]));
   }
   return result;
}

void register_CSMViewportBase_class(){

    { //::OSG::CSMViewportBase
        typedef bp::class_< OSG::CSMViewportBase, bp::bases< ::OSG::AttachmentContainer >, boost::noncopyable > CSMViewportBase_exposer_t;
        CSMViewportBase_exposer_t CSMViewportBase_exposer = CSMViewportBase_exposer_t( "CSMViewportBase", bp::no_init );
        bp::scope CSMViewportBase_scope( CSMViewportBase_exposer );
        bp::scope().attr("RootFieldId") = (int)OSG::CSMViewportBase::RootFieldId;
        bp::scope().attr("CameraFieldId") = (int)OSG::CSMViewportBase::CameraFieldId;
        bp::scope().attr("BackgroundFieldId") = (int)OSG::CSMViewportBase::BackgroundFieldId;
        bp::scope().attr("ForegroundsFieldId") = (int)OSG::CSMViewportBase::ForegroundsFieldId;
        bp::scope().attr("LeftBottomFieldId") = (int)OSG::CSMViewportBase::LeftBottomFieldId;
        bp::scope().attr("RightTopFieldId") = (int)OSG::CSMViewportBase::RightTopFieldId;
        bp::scope().attr("TravMaskFieldId") = (int)OSG::CSMViewportBase::TravMaskFieldId;
        bp::scope().attr("RenderOptionsFieldId") = (int)OSG::CSMViewportBase::RenderOptionsFieldId;
        bp::scope().attr("StereoModeFieldId") = (int)OSG::CSMViewportBase::StereoModeFieldId;
        bp::scope().attr("PassiveFieldId") = (int)OSG::CSMViewportBase::PassiveFieldId;
        bp::scope().attr("ServerIdFieldId") = (int)OSG::CSMViewportBase::ServerIdFieldId;
        bp::scope().attr("MouseDataVCFieldId") = (int)OSG::CSMViewportBase::MouseDataVCFieldId;
        bp::scope().attr("MTouchDataVCFieldId") = (int)OSG::CSMViewportBase::MTouchDataVCFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::CSMViewportBase::NextFieldId;
        { //::OSG::CSMViewportBase::assignForegrounds
        
            typedef void ( ::OSG::CSMViewportBase::*assignForegrounds_function_type )( ::OSG::MFUnrecForegroundPtr const & ) ;
            
            CSMViewportBase_exposer.def( 
                "assignForegrounds"
                , assignForegrounds_function_type( &::OSG::CSMViewportBase::assignForegrounds )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::CSMViewportBase::clearForegrounds
        
            typedef void ( ::OSG::CSMViewportBase::*clearForegrounds_function_type )(  ) ;
            
            CSMViewportBase_exposer.def( 
                "clearForegrounds"
                , clearForegrounds_function_type( &::OSG::CSMViewportBase::clearForegrounds ) );
        
        }
        { //::OSG::CSMViewportBase::copyFromBin
        
            typedef void ( ::OSG::CSMViewportBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            CSMViewportBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::CSMViewportBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::CSMViewportBase::copyToBin
        
            typedef void ( ::OSG::CSMViewportBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            CSMViewportBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::CSMViewportBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::CSMViewportBase::create
        
            typedef ::OSG::CSMViewportTransitPtr ( *create_function_type )(  );
            
            CSMViewportBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::CSMViewportBase::create ) );
        
        }
        { //::OSG::CSMViewportBase::createDependent
        
            typedef ::OSG::CSMViewportTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            CSMViewportBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::CSMViewportBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::CSMViewportBase::createLocal
        
            typedef ::OSG::CSMViewportTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            CSMViewportBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::CSMViewportBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::CSMViewportBase::getBackground
        
            typedef ::OSG::Background * ( ::OSG::CSMViewportBase::*getBackground_function_type )(  ) const;
            
            CSMViewportBase_exposer.def( 
                "getBackground"
                , getBackground_function_type( &::OSG::CSMViewportBase::getBackground )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMViewportBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::CSMViewportBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            CSMViewportBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::CSMViewportBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::CSMViewportBase::getCamera
        
            typedef ::OSG::Camera * ( ::OSG::CSMViewportBase::*getCamera_function_type )(  ) const;
            
            CSMViewportBase_exposer.def( 
                "getCamera"
                , getCamera_function_type( &::OSG::CSMViewportBase::getCamera )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMViewportBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            CSMViewportBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::CSMViewportBase::getClassGroupId ) );
        
        }
        { //::OSG::CSMViewportBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            CSMViewportBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::CSMViewportBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::CSMViewportBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            CSMViewportBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::CSMViewportBase::getClassTypeId ) );
        
        }
        { //::OSG::CSMViewportBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::CSMViewportBase::*getContainerSize_function_type )(  ) const;
            
            CSMViewportBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::CSMViewportBase::getContainerSize ) );
        
        }
        { //::OSG::CSMViewportBase::getForegrounds
        
            typedef ::OSG::Foreground * ( ::OSG::CSMViewportBase::*getForegrounds_function_type )( ::OSG::UInt32 const ) const;
            
            CSMViewportBase_exposer.def( 
                "getForegrounds"
                , getForegrounds_function_type( &::OSG::CSMViewportBase::getForegrounds )
                , ( bp::arg("index") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMViewportBase::getLeftBottom
        
            typedef ::OSG::Vec2f const & ( ::OSG::CSMViewportBase::*getLeftBottom_function_type )(  ) const;
            
            CSMViewportBase_exposer.def( 
                "getLeftBottom"
                , getLeftBottom_function_type( &::OSG::CSMViewportBase::getLeftBottom )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::CSMViewportBase::getMTouchDataVC
        
            typedef ::OSG::MTouchData const & ( ::OSG::CSMViewportBase::*getMTouchDataVC_function_type )(  ) const;
            
            CSMViewportBase_exposer.def( 
                "getMTouchDataVC"
                , getMTouchDataVC_function_type( &::OSG::CSMViewportBase::getMTouchDataVC )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::CSMViewportBase::getMouseDataVC
        
            typedef ::OSG::MouseData const & ( ::OSG::CSMViewportBase::*getMouseDataVC_function_type )(  ) const;
            
            CSMViewportBase_exposer.def( 
                "getMouseDataVC"
                , getMouseDataVC_function_type( &::OSG::CSMViewportBase::getMouseDataVC )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::CSMViewportBase::getPassive
        
            typedef bool ( ::OSG::CSMViewportBase::*getPassive_function_type )(  ) const;
            
            CSMViewportBase_exposer.def( 
                "getPassive"
                , getPassive_function_type( &::OSG::CSMViewportBase::getPassive ) );
        
        }
        { //::OSG::CSMViewportBase::getRenderOptions
        
            typedef ::OSG::RenderOptions * ( ::OSG::CSMViewportBase::*getRenderOptions_function_type )(  ) const;
            
            CSMViewportBase_exposer.def( 
                "getRenderOptions"
                , getRenderOptions_function_type( &::OSG::CSMViewportBase::getRenderOptions )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMViewportBase::getRightTop
        
            typedef ::OSG::Vec2f const & ( ::OSG::CSMViewportBase::*getRightTop_function_type )(  ) const;
            
            CSMViewportBase_exposer.def( 
                "getRightTop"
                , getRightTop_function_type( &::OSG::CSMViewportBase::getRightTop )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::CSMViewportBase::getRoot
        
            typedef ::OSG::Node * ( ::OSG::CSMViewportBase::*getRoot_function_type )(  ) const;
            
            CSMViewportBase_exposer.def( 
                "getRoot"
                , getRoot_function_type( &::OSG::CSMViewportBase::getRoot )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMViewportBase::getSFBackground
        
            typedef ::OSG::SFUnrecBackgroundPtr const * ( ::OSG::CSMViewportBase::*getSFBackground_function_type )(  ) const;
            
            CSMViewportBase_exposer.def( 
                "getSFBackground"
                , getSFBackground_function_type( &::OSG::CSMViewportBase::getSFBackground )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMViewportBase::getSFCamera
        
            typedef ::OSG::SFUnrecCameraPtr const * ( ::OSG::CSMViewportBase::*getSFCamera_function_type )(  ) const;
            
            CSMViewportBase_exposer.def( 
                "getSFCamera"
                , getSFCamera_function_type( &::OSG::CSMViewportBase::getSFCamera )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMViewportBase::getSFLeftBottom
        
            typedef ::OSG::SFVec2f const * ( ::OSG::CSMViewportBase::*getSFLeftBottom_function_type )(  ) const;
            
            CSMViewportBase_exposer.def( 
                "getSFLeftBottom"
                , getSFLeftBottom_function_type( &::OSG::CSMViewportBase::getSFLeftBottom )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMViewportBase::getSFMTouchDataVC
        
            typedef ::OSG::SFMTouchData const * ( ::OSG::CSMViewportBase::*getSFMTouchDataVC_function_type )(  ) const;
            
            CSMViewportBase_exposer.def( 
                "getSFMTouchDataVC"
                , getSFMTouchDataVC_function_type( &::OSG::CSMViewportBase::getSFMTouchDataVC )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMViewportBase::getSFMouseDataVC
        
            typedef ::OSG::SFMouseData const * ( ::OSG::CSMViewportBase::*getSFMouseDataVC_function_type )(  ) const;
            
            CSMViewportBase_exposer.def( 
                "getSFMouseDataVC"
                , getSFMouseDataVC_function_type( &::OSG::CSMViewportBase::getSFMouseDataVC )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMViewportBase::getSFPassive
        
            typedef ::OSG::SFBool const * ( ::OSG::CSMViewportBase::*getSFPassive_function_type )(  ) const;
            
            CSMViewportBase_exposer.def( 
                "getSFPassive"
                , getSFPassive_function_type( &::OSG::CSMViewportBase::getSFPassive )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMViewportBase::getSFRenderOptions
        
            typedef ::OSG::SFUnrecRenderOptionsPtr const * ( ::OSG::CSMViewportBase::*getSFRenderOptions_function_type )(  ) const;
            
            CSMViewportBase_exposer.def( 
                "getSFRenderOptions"
                , getSFRenderOptions_function_type( &::OSG::CSMViewportBase::getSFRenderOptions )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMViewportBase::getSFRightTop
        
            typedef ::OSG::SFVec2f const * ( ::OSG::CSMViewportBase::*getSFRightTop_function_type )(  ) const;
            
            CSMViewportBase_exposer.def( 
                "getSFRightTop"
                , getSFRightTop_function_type( &::OSG::CSMViewportBase::getSFRightTop )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMViewportBase::getSFRoot
        
            typedef ::OSG::SFUnrecNodePtr const * ( ::OSG::CSMViewportBase::*getSFRoot_function_type )(  ) const;
            
            CSMViewportBase_exposer.def( 
                "getSFRoot"
                , getSFRoot_function_type( &::OSG::CSMViewportBase::getSFRoot )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMViewportBase::getSFServerId
        
            typedef ::OSG::SFInt32 const * ( ::OSG::CSMViewportBase::*getSFServerId_function_type )(  ) const;
            
            CSMViewportBase_exposer.def( 
                "getSFServerId"
                , getSFServerId_function_type( &::OSG::CSMViewportBase::getSFServerId )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMViewportBase::getSFStereoMode
        
            typedef ::OSG::SFString const * ( ::OSG::CSMViewportBase::*getSFStereoMode_function_type )(  ) const;
            
            CSMViewportBase_exposer.def( 
                "getSFStereoMode"
                , getSFStereoMode_function_type( &::OSG::CSMViewportBase::getSFStereoMode )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMViewportBase::getSFTravMask
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::CSMViewportBase::*getSFTravMask_function_type )(  ) const;
            
            CSMViewportBase_exposer.def( 
                "getSFTravMask"
                , getSFTravMask_function_type( &::OSG::CSMViewportBase::getSFTravMask )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMViewportBase::getServerId
        
            typedef ::OSG::Int32 ( ::OSG::CSMViewportBase::*getServerId_function_type )(  ) const;
            
            CSMViewportBase_exposer.def( 
                "getServerId"
                , getServerId_function_type( &::OSG::CSMViewportBase::getServerId ) );
        
        }
        { //::OSG::CSMViewportBase::getStereoMode
        
            typedef ::std::string const & ( ::OSG::CSMViewportBase::*getStereoMode_function_type )(  ) const;
            
            CSMViewportBase_exposer.def( 
                "getStereoMode"
                , getStereoMode_function_type( &::OSG::CSMViewportBase::getStereoMode )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::CSMViewportBase::getTravMask
        
            typedef ::OSG::UInt32 ( ::OSG::CSMViewportBase::*getTravMask_function_type )(  ) const;
            
            CSMViewportBase_exposer.def( 
                "getTravMask"
                , getTravMask_function_type( &::OSG::CSMViewportBase::getTravMask ) );
        
        }
        { //::OSG::CSMViewportBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::CSMViewportBase::*getType_function_type )(  ) ;
            
            CSMViewportBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::CSMViewportBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMViewportBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::CSMViewportBase::*getType_function_type )(  ) const;
            
            CSMViewportBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::CSMViewportBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMViewportBase::pushToForegrounds
        
            typedef void ( ::OSG::CSMViewportBase::*pushToForegrounds_function_type )( ::OSG::Foreground * const ) ;
            
            CSMViewportBase_exposer.def( 
                "pushToForegrounds"
                , pushToForegrounds_function_type( &::OSG::CSMViewportBase::pushToForegrounds )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::CSMViewportBase::removeFromForegrounds
        
            typedef void ( ::OSG::CSMViewportBase::*removeFromForegrounds_function_type )( ::OSG::UInt32 ) ;
            
            CSMViewportBase_exposer.def( 
                "removeFromForegrounds"
                , removeFromForegrounds_function_type( &::OSG::CSMViewportBase::removeFromForegrounds )
                , ( bp::arg("uiIndex") ) );
        
        }
        { //::OSG::CSMViewportBase::removeObjFromForegrounds
        
            typedef void ( ::OSG::CSMViewportBase::*removeObjFromForegrounds_function_type )( ::OSG::Foreground * const ) ;
            
            CSMViewportBase_exposer.def( 
                "removeObjFromForegrounds"
                , removeObjFromForegrounds_function_type( &::OSG::CSMViewportBase::removeObjFromForegrounds )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::CSMViewportBase::setBackground
        
            typedef void ( ::OSG::CSMViewportBase::*setBackground_function_type )( ::OSG::Background * const ) ;
            
            CSMViewportBase_exposer.def( 
                "setBackground"
                , setBackground_function_type( &::OSG::CSMViewportBase::setBackground )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::CSMViewportBase::setCamera
        
            typedef void ( ::OSG::CSMViewportBase::*setCamera_function_type )( ::OSG::Camera * const ) ;
            
            CSMViewportBase_exposer.def( 
                "setCamera"
                , setCamera_function_type( &::OSG::CSMViewportBase::setCamera )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::CSMViewportBase::setLeftBottom
        
            typedef void ( ::OSG::CSMViewportBase::*setLeftBottom_function_type )( ::OSG::Vec2f const & ) ;
            
            CSMViewportBase_exposer.def( 
                "setLeftBottom"
                , setLeftBottom_function_type( &::OSG::CSMViewportBase::setLeftBottom )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::CSMViewportBase::setMTouchDataVC
        
            typedef void ( ::OSG::CSMViewportBase::*setMTouchDataVC_function_type )( ::OSG::MTouchData const & ) ;
            
            CSMViewportBase_exposer.def( 
                "setMTouchDataVC"
                , setMTouchDataVC_function_type( &::OSG::CSMViewportBase::setMTouchDataVC )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::CSMViewportBase::setMouseDataVC
        
            typedef void ( ::OSG::CSMViewportBase::*setMouseDataVC_function_type )( ::OSG::MouseData const & ) ;
            
            CSMViewportBase_exposer.def( 
                "setMouseDataVC"
                , setMouseDataVC_function_type( &::OSG::CSMViewportBase::setMouseDataVC )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::CSMViewportBase::setPassive
        
            typedef void ( ::OSG::CSMViewportBase::*setPassive_function_type )( bool const ) ;
            
            CSMViewportBase_exposer.def( 
                "setPassive"
                , setPassive_function_type( &::OSG::CSMViewportBase::setPassive )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::CSMViewportBase::setRenderOptions
        
            typedef void ( ::OSG::CSMViewportBase::*setRenderOptions_function_type )( ::OSG::RenderOptions * const ) ;
            
            CSMViewportBase_exposer.def( 
                "setRenderOptions"
                , setRenderOptions_function_type( &::OSG::CSMViewportBase::setRenderOptions )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::CSMViewportBase::setRightTop
        
            typedef void ( ::OSG::CSMViewportBase::*setRightTop_function_type )( ::OSG::Vec2f const & ) ;
            
            CSMViewportBase_exposer.def( 
                "setRightTop"
                , setRightTop_function_type( &::OSG::CSMViewportBase::setRightTop )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::CSMViewportBase::setRoot
        
            typedef void ( ::OSG::CSMViewportBase::*setRoot_function_type )( ::OSG::Node * const ) ;
            
            CSMViewportBase_exposer.def( 
                "setRoot"
                , setRoot_function_type( &::OSG::CSMViewportBase::setRoot )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::CSMViewportBase::setServerId
        
            typedef void ( ::OSG::CSMViewportBase::*setServerId_function_type )( ::OSG::Int32 const ) ;
            
            CSMViewportBase_exposer.def( 
                "setServerId"
                , setServerId_function_type( &::OSG::CSMViewportBase::setServerId )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::CSMViewportBase::setStereoMode
        
            typedef void ( ::OSG::CSMViewportBase::*setStereoMode_function_type )( ::std::string const & ) ;
            
            CSMViewportBase_exposer.def( 
                "setStereoMode"
                , setStereoMode_function_type( &::OSG::CSMViewportBase::setStereoMode )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::CSMViewportBase::setTravMask
        
            typedef void ( ::OSG::CSMViewportBase::*setTravMask_function_type )( ::OSG::UInt32 const ) ;
            
            CSMViewportBase_exposer.def( 
                "setTravMask"
                , setTravMask_function_type( &::OSG::CSMViewportBase::setTravMask )
                , ( bp::arg("value") ) );
        
        }
        CSMViewportBase_exposer.staticmethod( "create" );
        CSMViewportBase_exposer.staticmethod( "createDependent" );
        CSMViewportBase_exposer.staticmethod( "createLocal" );
        CSMViewportBase_exposer.staticmethod( "getClassGroupId" );
        CSMViewportBase_exposer.staticmethod( "getClassType" );
        CSMViewportBase_exposer.staticmethod( "getClassTypeId" );
        CSMViewportBase_exposer.def("getMFForegrounds",CSMViewportBase_getMFForegrounds);
    }

}
