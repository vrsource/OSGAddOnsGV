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
#include "ComplexSceneManagerBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

boost::python::list ComplexSceneManagerBase_getMFGlobals(OSG::ComplexSceneManagerBase *self)
{
   boost::python::list result;
   OSG::MFRecFieldContainerPtr const * mf_data = self->getMFGlobals();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

void register_ComplexSceneManagerBase_class(){

    { //::OSG::ComplexSceneManagerBase
        typedef bp::class_< OSG::ComplexSceneManagerBase, bp::bases< ::OSG::FieldContainer >, boost::noncopyable > ComplexSceneManagerBase_exposer_t;
        ComplexSceneManagerBase_exposer_t ComplexSceneManagerBase_exposer = ComplexSceneManagerBase_exposer_t( "ComplexSceneManagerBase", bp::no_init );
        bp::scope ComplexSceneManagerBase_scope( ComplexSceneManagerBase_exposer );
        bp::scope().attr("GlobalsFieldId") = (int)OSG::ComplexSceneManagerBase::GlobalsFieldId;
        bp::scope().attr("DrawManagerFieldId") = (int)OSG::ComplexSceneManagerBase::DrawManagerFieldId;
        bp::scope().attr("StartTimeFieldId") = (int)OSG::ComplexSceneManagerBase::StartTimeFieldId;
        bp::scope().attr("TimeScaleFieldId") = (int)OSG::ComplexSceneManagerBase::TimeScaleFieldId;
        bp::scope().attr("ConstantTimeStepFieldId") = (int)OSG::ComplexSceneManagerBase::ConstantTimeStepFieldId;
        bp::scope().attr("ConstantTimeFieldId") = (int)OSG::ComplexSceneManagerBase::ConstantTimeFieldId;
        bp::scope().attr("PausedFieldId") = (int)OSG::ComplexSceneManagerBase::PausedFieldId;
        bp::scope().attr("DumpFrameStartFieldId") = (int)OSG::ComplexSceneManagerBase::DumpFrameStartFieldId;
        bp::scope().attr("EnableWebServiceFieldId") = (int)OSG::ComplexSceneManagerBase::EnableWebServiceFieldId;
        bp::scope().attr("WebServicePortFieldId") = (int)OSG::ComplexSceneManagerBase::WebServicePortFieldId;
        bp::scope().attr("WebServiceRootFieldId") = (int)OSG::ComplexSceneManagerBase::WebServiceRootFieldId;
        bp::scope().attr("WaitKeyAfterFrameFieldId") = (int)OSG::ComplexSceneManagerBase::WaitKeyAfterFrameFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::ComplexSceneManagerBase::NextFieldId;
        { //::OSG::ComplexSceneManagerBase::assignGlobals
        
            typedef void ( ::OSG::ComplexSceneManagerBase::*assignGlobals_function_type )( ::OSG::MFRecFieldContainerPtr const & ) ;
            
            ComplexSceneManagerBase_exposer.def( 
                "assignGlobals"
                , assignGlobals_function_type( &::OSG::ComplexSceneManagerBase::assignGlobals )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ComplexSceneManagerBase::clearGlobals
        
            typedef void ( ::OSG::ComplexSceneManagerBase::*clearGlobals_function_type )(  ) ;
            
            ComplexSceneManagerBase_exposer.def( 
                "clearGlobals"
                , clearGlobals_function_type( &::OSG::ComplexSceneManagerBase::clearGlobals ) );
        
        }
        { //::OSG::ComplexSceneManagerBase::copyFromBin
        
            typedef void ( ::OSG::ComplexSceneManagerBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ComplexSceneManagerBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::ComplexSceneManagerBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ComplexSceneManagerBase::copyToBin
        
            typedef void ( ::OSG::ComplexSceneManagerBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ComplexSceneManagerBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::ComplexSceneManagerBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ComplexSceneManagerBase::create
        
            typedef ::OSG::ComplexSceneManagerTransitPtr ( *create_function_type )(  );
            
            ComplexSceneManagerBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::ComplexSceneManagerBase::create ) );
        
        }
        { //::OSG::ComplexSceneManagerBase::createDependent
        
            typedef ::OSG::ComplexSceneManagerTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            ComplexSceneManagerBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::ComplexSceneManagerBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::ComplexSceneManagerBase::createLocal
        
            typedef ::OSG::ComplexSceneManagerTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            ComplexSceneManagerBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::ComplexSceneManagerBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::ComplexSceneManagerBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::ComplexSceneManagerBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            ComplexSceneManagerBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::ComplexSceneManagerBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::ComplexSceneManagerBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            ComplexSceneManagerBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::ComplexSceneManagerBase::getClassGroupId ) );
        
        }
        { //::OSG::ComplexSceneManagerBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            ComplexSceneManagerBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::ComplexSceneManagerBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::ComplexSceneManagerBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            ComplexSceneManagerBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::ComplexSceneManagerBase::getClassTypeId ) );
        
        }
        { //::OSG::ComplexSceneManagerBase::getConstantTime
        
            typedef bool ( ::OSG::ComplexSceneManagerBase::*getConstantTime_function_type )(  ) const;
            
            ComplexSceneManagerBase_exposer.def( 
                "getConstantTime"
                , getConstantTime_function_type( &::OSG::ComplexSceneManagerBase::getConstantTime ) );
        
        }
        { //::OSG::ComplexSceneManagerBase::getConstantTimeStep
        
            typedef ::OSG::Time const & ( ::OSG::ComplexSceneManagerBase::*getConstantTimeStep_function_type )(  ) const;
            
            ComplexSceneManagerBase_exposer.def( 
                "getConstantTimeStep"
                , getConstantTimeStep_function_type( &::OSG::ComplexSceneManagerBase::getConstantTimeStep )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::ComplexSceneManagerBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::ComplexSceneManagerBase::*getContainerSize_function_type )(  ) const;
            
            ComplexSceneManagerBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::ComplexSceneManagerBase::getContainerSize ) );
        
        }
        { //::OSG::ComplexSceneManagerBase::getDrawManager
        
            typedef ::OSG::CSMDrawManager * ( ::OSG::ComplexSceneManagerBase::*getDrawManager_function_type )(  ) const;
            
            ComplexSceneManagerBase_exposer.def( 
                "getDrawManager"
                , getDrawManager_function_type( &::OSG::ComplexSceneManagerBase::getDrawManager )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ComplexSceneManagerBase::getDumpFrameStart
        
            typedef bool ( ::OSG::ComplexSceneManagerBase::*getDumpFrameStart_function_type )(  ) const;
            
            ComplexSceneManagerBase_exposer.def( 
                "getDumpFrameStart"
                , getDumpFrameStart_function_type( &::OSG::ComplexSceneManagerBase::getDumpFrameStart ) );
        
        }
        { //::OSG::ComplexSceneManagerBase::getEnableWebService
        
            typedef bool ( ::OSG::ComplexSceneManagerBase::*getEnableWebService_function_type )(  ) const;
            
            ComplexSceneManagerBase_exposer.def( 
                "getEnableWebService"
                , getEnableWebService_function_type( &::OSG::ComplexSceneManagerBase::getEnableWebService ) );
        
        }
        { //::OSG::ComplexSceneManagerBase::getGlobals
        
            typedef ::OSG::FieldContainer * ( ::OSG::ComplexSceneManagerBase::*getGlobals_function_type )( ::OSG::UInt32 const ) const;
            
            ComplexSceneManagerBase_exposer.def( 
                "getGlobals"
                , getGlobals_function_type( &::OSG::ComplexSceneManagerBase::getGlobals )
                , ( bp::arg("index") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ComplexSceneManagerBase::getPaused
        
            typedef bool ( ::OSG::ComplexSceneManagerBase::*getPaused_function_type )(  ) const;
            
            ComplexSceneManagerBase_exposer.def( 
                "getPaused"
                , getPaused_function_type( &::OSG::ComplexSceneManagerBase::getPaused ) );
        
        }
        { //::OSG::ComplexSceneManagerBase::getSFConstantTime
        
            typedef ::OSG::SFBool const * ( ::OSG::ComplexSceneManagerBase::*getSFConstantTime_function_type )(  ) const;
            
            ComplexSceneManagerBase_exposer.def( 
                "getSFConstantTime"
                , getSFConstantTime_function_type( &::OSG::ComplexSceneManagerBase::getSFConstantTime )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ComplexSceneManagerBase::getSFConstantTimeStep
        
            typedef ::OSG::SFTime const * ( ::OSG::ComplexSceneManagerBase::*getSFConstantTimeStep_function_type )(  ) const;
            
            ComplexSceneManagerBase_exposer.def( 
                "getSFConstantTimeStep"
                , getSFConstantTimeStep_function_type( &::OSG::ComplexSceneManagerBase::getSFConstantTimeStep )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ComplexSceneManagerBase::getSFDrawManager
        
            typedef ::OSG::SFUnrecCSMDrawManagerPtr const * ( ::OSG::ComplexSceneManagerBase::*getSFDrawManager_function_type )(  ) const;
            
            ComplexSceneManagerBase_exposer.def( 
                "getSFDrawManager"
                , getSFDrawManager_function_type( &::OSG::ComplexSceneManagerBase::getSFDrawManager )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ComplexSceneManagerBase::getSFDumpFrameStart
        
            typedef ::OSG::SFBool const * ( ::OSG::ComplexSceneManagerBase::*getSFDumpFrameStart_function_type )(  ) const;
            
            ComplexSceneManagerBase_exposer.def( 
                "getSFDumpFrameStart"
                , getSFDumpFrameStart_function_type( &::OSG::ComplexSceneManagerBase::getSFDumpFrameStart )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ComplexSceneManagerBase::getSFEnableWebService
        
            typedef ::OSG::SFBool const * ( ::OSG::ComplexSceneManagerBase::*getSFEnableWebService_function_type )(  ) const;
            
            ComplexSceneManagerBase_exposer.def( 
                "getSFEnableWebService"
                , getSFEnableWebService_function_type( &::OSG::ComplexSceneManagerBase::getSFEnableWebService )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ComplexSceneManagerBase::getSFPaused
        
            typedef ::OSG::SFBool const * ( ::OSG::ComplexSceneManagerBase::*getSFPaused_function_type )(  ) const;
            
            ComplexSceneManagerBase_exposer.def( 
                "getSFPaused"
                , getSFPaused_function_type( &::OSG::ComplexSceneManagerBase::getSFPaused )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ComplexSceneManagerBase::getSFStartTime
        
            typedef ::OSG::SFTime const * ( ::OSG::ComplexSceneManagerBase::*getSFStartTime_function_type )(  ) const;
            
            ComplexSceneManagerBase_exposer.def( 
                "getSFStartTime"
                , getSFStartTime_function_type( &::OSG::ComplexSceneManagerBase::getSFStartTime )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ComplexSceneManagerBase::getSFTimeScale
        
            typedef ::OSG::SFTime const * ( ::OSG::ComplexSceneManagerBase::*getSFTimeScale_function_type )(  ) const;
            
            ComplexSceneManagerBase_exposer.def( 
                "getSFTimeScale"
                , getSFTimeScale_function_type( &::OSG::ComplexSceneManagerBase::getSFTimeScale )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ComplexSceneManagerBase::getSFWaitKeyAfterFrame
        
            typedef ::OSG::SFBool const * ( ::OSG::ComplexSceneManagerBase::*getSFWaitKeyAfterFrame_function_type )(  ) const;
            
            ComplexSceneManagerBase_exposer.def( 
                "getSFWaitKeyAfterFrame"
                , getSFWaitKeyAfterFrame_function_type( &::OSG::ComplexSceneManagerBase::getSFWaitKeyAfterFrame )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ComplexSceneManagerBase::getSFWebServicePort
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::ComplexSceneManagerBase::*getSFWebServicePort_function_type )(  ) const;
            
            ComplexSceneManagerBase_exposer.def( 
                "getSFWebServicePort"
                , getSFWebServicePort_function_type( &::OSG::ComplexSceneManagerBase::getSFWebServicePort )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ComplexSceneManagerBase::getSFWebServiceRoot
        
            typedef ::OSG::SFString const * ( ::OSG::ComplexSceneManagerBase::*getSFWebServiceRoot_function_type )(  ) const;
            
            ComplexSceneManagerBase_exposer.def( 
                "getSFWebServiceRoot"
                , getSFWebServiceRoot_function_type( &::OSG::ComplexSceneManagerBase::getSFWebServiceRoot )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ComplexSceneManagerBase::getStartTime
        
            typedef ::OSG::Time const & ( ::OSG::ComplexSceneManagerBase::*getStartTime_function_type )(  ) const;
            
            ComplexSceneManagerBase_exposer.def( 
                "getStartTime"
                , getStartTime_function_type( &::OSG::ComplexSceneManagerBase::getStartTime )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::ComplexSceneManagerBase::getTimeScale
        
            typedef ::OSG::Time const & ( ::OSG::ComplexSceneManagerBase::*getTimeScale_function_type )(  ) const;
            
            ComplexSceneManagerBase_exposer.def( 
                "getTimeScale"
                , getTimeScale_function_type( &::OSG::ComplexSceneManagerBase::getTimeScale )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::ComplexSceneManagerBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::ComplexSceneManagerBase::*getType_function_type )(  ) ;
            
            ComplexSceneManagerBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ComplexSceneManagerBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ComplexSceneManagerBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::ComplexSceneManagerBase::*getType_function_type )(  ) const;
            
            ComplexSceneManagerBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ComplexSceneManagerBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ComplexSceneManagerBase::getWaitKeyAfterFrame
        
            typedef bool ( ::OSG::ComplexSceneManagerBase::*getWaitKeyAfterFrame_function_type )(  ) const;
            
            ComplexSceneManagerBase_exposer.def( 
                "getWaitKeyAfterFrame"
                , getWaitKeyAfterFrame_function_type( &::OSG::ComplexSceneManagerBase::getWaitKeyAfterFrame ) );
        
        }
        { //::OSG::ComplexSceneManagerBase::getWebServicePort
        
            typedef ::OSG::UInt32 ( ::OSG::ComplexSceneManagerBase::*getWebServicePort_function_type )(  ) const;
            
            ComplexSceneManagerBase_exposer.def( 
                "getWebServicePort"
                , getWebServicePort_function_type( &::OSG::ComplexSceneManagerBase::getWebServicePort ) );
        
        }
        { //::OSG::ComplexSceneManagerBase::getWebServiceRoot
        
            typedef ::std::string const & ( ::OSG::ComplexSceneManagerBase::*getWebServiceRoot_function_type )(  ) const;
            
            ComplexSceneManagerBase_exposer.def( 
                "getWebServiceRoot"
                , getWebServiceRoot_function_type( &::OSG::ComplexSceneManagerBase::getWebServiceRoot )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::ComplexSceneManagerBase::pushToGlobals
        
            typedef void ( ::OSG::ComplexSceneManagerBase::*pushToGlobals_function_type )( ::OSG::FieldContainer * const ) ;
            
            ComplexSceneManagerBase_exposer.def( 
                "pushToGlobals"
                , pushToGlobals_function_type( &::OSG::ComplexSceneManagerBase::pushToGlobals )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ComplexSceneManagerBase::removeFromGlobals
        
            typedef void ( ::OSG::ComplexSceneManagerBase::*removeFromGlobals_function_type )( ::OSG::UInt32 ) ;
            
            ComplexSceneManagerBase_exposer.def( 
                "removeFromGlobals"
                , removeFromGlobals_function_type( &::OSG::ComplexSceneManagerBase::removeFromGlobals )
                , ( bp::arg("uiIndex") ) );
        
        }
        { //::OSG::ComplexSceneManagerBase::removeObjFromGlobals
        
            typedef void ( ::OSG::ComplexSceneManagerBase::*removeObjFromGlobals_function_type )( ::OSG::FieldContainer * const ) ;
            
            ComplexSceneManagerBase_exposer.def( 
                "removeObjFromGlobals"
                , removeObjFromGlobals_function_type( &::OSG::ComplexSceneManagerBase::removeObjFromGlobals )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ComplexSceneManagerBase::setConstantTime
        
            typedef void ( ::OSG::ComplexSceneManagerBase::*setConstantTime_function_type )( bool const ) ;
            
            ComplexSceneManagerBase_exposer.def( 
                "setConstantTime"
                , setConstantTime_function_type( &::OSG::ComplexSceneManagerBase::setConstantTime )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ComplexSceneManagerBase::setConstantTimeStep
        
            typedef void ( ::OSG::ComplexSceneManagerBase::*setConstantTimeStep_function_type )( ::OSG::Time const & ) ;
            
            ComplexSceneManagerBase_exposer.def( 
                "setConstantTimeStep"
                , setConstantTimeStep_function_type( &::OSG::ComplexSceneManagerBase::setConstantTimeStep )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ComplexSceneManagerBase::setDrawManager
        
            typedef void ( ::OSG::ComplexSceneManagerBase::*setDrawManager_function_type )( ::OSG::CSMDrawManager * const ) ;
            
            ComplexSceneManagerBase_exposer.def( 
                "setDrawManager"
                , setDrawManager_function_type( &::OSG::ComplexSceneManagerBase::setDrawManager )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ComplexSceneManagerBase::setDumpFrameStart
        
            typedef void ( ::OSG::ComplexSceneManagerBase::*setDumpFrameStart_function_type )( bool const ) ;
            
            ComplexSceneManagerBase_exposer.def( 
                "setDumpFrameStart"
                , setDumpFrameStart_function_type( &::OSG::ComplexSceneManagerBase::setDumpFrameStart )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ComplexSceneManagerBase::setEnableWebService
        
            typedef void ( ::OSG::ComplexSceneManagerBase::*setEnableWebService_function_type )( bool const ) ;
            
            ComplexSceneManagerBase_exposer.def( 
                "setEnableWebService"
                , setEnableWebService_function_type( &::OSG::ComplexSceneManagerBase::setEnableWebService )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ComplexSceneManagerBase::setPaused
        
            typedef void ( ::OSG::ComplexSceneManagerBase::*setPaused_function_type )( bool const ) ;
            
            ComplexSceneManagerBase_exposer.def( 
                "setPaused"
                , setPaused_function_type( &::OSG::ComplexSceneManagerBase::setPaused )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ComplexSceneManagerBase::setStartTime
        
            typedef void ( ::OSG::ComplexSceneManagerBase::*setStartTime_function_type )( ::OSG::Time const & ) ;
            
            ComplexSceneManagerBase_exposer.def( 
                "setStartTime"
                , setStartTime_function_type( &::OSG::ComplexSceneManagerBase::setStartTime )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ComplexSceneManagerBase::setTimeScale
        
            typedef void ( ::OSG::ComplexSceneManagerBase::*setTimeScale_function_type )( ::OSG::Time const & ) ;
            
            ComplexSceneManagerBase_exposer.def( 
                "setTimeScale"
                , setTimeScale_function_type( &::OSG::ComplexSceneManagerBase::setTimeScale )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ComplexSceneManagerBase::setWaitKeyAfterFrame
        
            typedef void ( ::OSG::ComplexSceneManagerBase::*setWaitKeyAfterFrame_function_type )( bool const ) ;
            
            ComplexSceneManagerBase_exposer.def( 
                "setWaitKeyAfterFrame"
                , setWaitKeyAfterFrame_function_type( &::OSG::ComplexSceneManagerBase::setWaitKeyAfterFrame )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ComplexSceneManagerBase::setWebServicePort
        
            typedef void ( ::OSG::ComplexSceneManagerBase::*setWebServicePort_function_type )( ::OSG::UInt32 const ) ;
            
            ComplexSceneManagerBase_exposer.def( 
                "setWebServicePort"
                , setWebServicePort_function_type( &::OSG::ComplexSceneManagerBase::setWebServicePort )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ComplexSceneManagerBase::setWebServiceRoot
        
            typedef void ( ::OSG::ComplexSceneManagerBase::*setWebServiceRoot_function_type )( ::std::string const & ) ;
            
            ComplexSceneManagerBase_exposer.def( 
                "setWebServiceRoot"
                , setWebServiceRoot_function_type( &::OSG::ComplexSceneManagerBase::setWebServiceRoot )
                , ( bp::arg("value") ) );
        
        }
        ComplexSceneManagerBase_exposer.staticmethod( "create" );
        ComplexSceneManagerBase_exposer.staticmethod( "createDependent" );
        ComplexSceneManagerBase_exposer.staticmethod( "createLocal" );
        ComplexSceneManagerBase_exposer.staticmethod( "getClassGroupId" );
        ComplexSceneManagerBase_exposer.staticmethod( "getClassType" );
        ComplexSceneManagerBase_exposer.staticmethod( "getClassTypeId" );
        ComplexSceneManagerBase_exposer.def("getMFGlobals",ComplexSceneManagerBase_getMFGlobals);
    }

}
