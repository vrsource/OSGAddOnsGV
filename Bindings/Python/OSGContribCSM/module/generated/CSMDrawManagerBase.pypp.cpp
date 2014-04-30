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
#include "OSGContribCSM_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "CSMDrawManagerBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

boost::python::list CSMDrawManagerBase_getMFDrawer(OSG::CSMDrawManagerBase *self)
{
   boost::python::list result;
   OSG::MFUnrecCSMDrawerPtr const * mf_data = self->getMFDrawer();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append(OSG::CSMDrawer::ObjRecPtr((*mf_data)[i]));
   }
   return result;
}

void register_CSMDrawManagerBase_class(){

    { //::OSG::CSMDrawManagerBase
        typedef bp::class_< OSG::CSMDrawManagerBase, bp::bases< ::OSG::AttachmentContainer >, boost::noncopyable > CSMDrawManagerBase_exposer_t;
        CSMDrawManagerBase_exposer_t CSMDrawManagerBase_exposer = CSMDrawManagerBase_exposer_t( "CSMDrawManagerBase", bp::no_init );
        bp::scope CSMDrawManagerBase_scope( CSMDrawManagerBase_exposer );
        bp::scope().attr("AppDrawerFieldId") = (int)OSG::CSMDrawManagerBase::AppDrawerFieldId;
        bp::scope().attr("DrawerFieldId") = (int)OSG::CSMDrawManagerBase::DrawerFieldId;
        bp::scope().attr("ParallelFieldId") = (int)OSG::CSMDrawManagerBase::ParallelFieldId;
        bp::scope().attr("SyncBarrierNameFieldId") = (int)OSG::CSMDrawManagerBase::SyncBarrierNameFieldId;
        bp::scope().attr("SwapBarrierNameFieldId") = (int)OSG::CSMDrawManagerBase::SwapBarrierNameFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::CSMDrawManagerBase::NextFieldId;
        { //::OSG::CSMDrawManagerBase::assignDrawer
        
            typedef void ( ::OSG::CSMDrawManagerBase::*assignDrawer_function_type )( ::OSG::MFUnrecCSMDrawerPtr const & ) ;
            
            CSMDrawManagerBase_exposer.def( 
                "assignDrawer"
                , assignDrawer_function_type( &::OSG::CSMDrawManagerBase::assignDrawer )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::CSMDrawManagerBase::clearDrawer
        
            typedef void ( ::OSG::CSMDrawManagerBase::*clearDrawer_function_type )(  ) ;
            
            CSMDrawManagerBase_exposer.def( 
                "clearDrawer"
                , clearDrawer_function_type( &::OSG::CSMDrawManagerBase::clearDrawer ) );
        
        }
        { //::OSG::CSMDrawManagerBase::copyFromBin
        
            typedef void ( ::OSG::CSMDrawManagerBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            CSMDrawManagerBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::CSMDrawManagerBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::CSMDrawManagerBase::copyToBin
        
            typedef void ( ::OSG::CSMDrawManagerBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            CSMDrawManagerBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::CSMDrawManagerBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::CSMDrawManagerBase::create
        
            typedef ::OSG::CSMDrawManagerTransitPtr ( *create_function_type )(  );
            
            CSMDrawManagerBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::CSMDrawManagerBase::create ) );
        
        }
        { //::OSG::CSMDrawManagerBase::createDependent
        
            typedef ::OSG::CSMDrawManagerTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            CSMDrawManagerBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::CSMDrawManagerBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::CSMDrawManagerBase::createLocal
        
            typedef ::OSG::CSMDrawManagerTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            CSMDrawManagerBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::CSMDrawManagerBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::CSMDrawManagerBase::getAppDrawer
        
            typedef ::OSG::CSMDrawer * ( ::OSG::CSMDrawManagerBase::*getAppDrawer_function_type )(  ) const;
            
            CSMDrawManagerBase_exposer.def( 
                "getAppDrawer"
                , getAppDrawer_function_type( &::OSG::CSMDrawManagerBase::getAppDrawer )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMDrawManagerBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::CSMDrawManagerBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            CSMDrawManagerBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::CSMDrawManagerBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::CSMDrawManagerBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            CSMDrawManagerBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::CSMDrawManagerBase::getClassGroupId ) );
        
        }
        { //::OSG::CSMDrawManagerBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            CSMDrawManagerBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::CSMDrawManagerBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::CSMDrawManagerBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            CSMDrawManagerBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::CSMDrawManagerBase::getClassTypeId ) );
        
        }
        { //::OSG::CSMDrawManagerBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::CSMDrawManagerBase::*getContainerSize_function_type )(  ) const;
            
            CSMDrawManagerBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::CSMDrawManagerBase::getContainerSize ) );
        
        }
        { //::OSG::CSMDrawManagerBase::getDrawer
        
            typedef ::OSG::CSMDrawer * ( ::OSG::CSMDrawManagerBase::*getDrawer_function_type )( ::OSG::UInt32 const ) const;
            
            CSMDrawManagerBase_exposer.def( 
                "getDrawer"
                , getDrawer_function_type( &::OSG::CSMDrawManagerBase::getDrawer )
                , ( bp::arg("index") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMDrawManagerBase::getParallel
        
            typedef bool ( ::OSG::CSMDrawManagerBase::*getParallel_function_type )(  ) const;
            
            CSMDrawManagerBase_exposer.def( 
                "getParallel"
                , getParallel_function_type( &::OSG::CSMDrawManagerBase::getParallel ) );
        
        }
        { //::OSG::CSMDrawManagerBase::getSFAppDrawer
        
            typedef ::OSG::SFUnrecCSMDrawerPtr const * ( ::OSG::CSMDrawManagerBase::*getSFAppDrawer_function_type )(  ) const;
            
            CSMDrawManagerBase_exposer.def( 
                "getSFAppDrawer"
                , getSFAppDrawer_function_type( &::OSG::CSMDrawManagerBase::getSFAppDrawer )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMDrawManagerBase::getSFParallel
        
            typedef ::OSG::SFBool const * ( ::OSG::CSMDrawManagerBase::*getSFParallel_function_type )(  ) const;
            
            CSMDrawManagerBase_exposer.def( 
                "getSFParallel"
                , getSFParallel_function_type( &::OSG::CSMDrawManagerBase::getSFParallel )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMDrawManagerBase::getSFSwapBarrierName
        
            typedef ::OSG::SFString const * ( ::OSG::CSMDrawManagerBase::*getSFSwapBarrierName_function_type )(  ) const;
            
            CSMDrawManagerBase_exposer.def( 
                "getSFSwapBarrierName"
                , getSFSwapBarrierName_function_type( &::OSG::CSMDrawManagerBase::getSFSwapBarrierName )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMDrawManagerBase::getSFSyncBarrierName
        
            typedef ::OSG::SFString const * ( ::OSG::CSMDrawManagerBase::*getSFSyncBarrierName_function_type )(  ) const;
            
            CSMDrawManagerBase_exposer.def( 
                "getSFSyncBarrierName"
                , getSFSyncBarrierName_function_type( &::OSG::CSMDrawManagerBase::getSFSyncBarrierName )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMDrawManagerBase::getSwapBarrierName
        
            typedef ::std::string const & ( ::OSG::CSMDrawManagerBase::*getSwapBarrierName_function_type )(  ) const;
            
            CSMDrawManagerBase_exposer.def( 
                "getSwapBarrierName"
                , getSwapBarrierName_function_type( &::OSG::CSMDrawManagerBase::getSwapBarrierName )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::CSMDrawManagerBase::getSyncBarrierName
        
            typedef ::std::string const & ( ::OSG::CSMDrawManagerBase::*getSyncBarrierName_function_type )(  ) const;
            
            CSMDrawManagerBase_exposer.def( 
                "getSyncBarrierName"
                , getSyncBarrierName_function_type( &::OSG::CSMDrawManagerBase::getSyncBarrierName )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::CSMDrawManagerBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::CSMDrawManagerBase::*getType_function_type )(  ) ;
            
            CSMDrawManagerBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::CSMDrawManagerBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMDrawManagerBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::CSMDrawManagerBase::*getType_function_type )(  ) const;
            
            CSMDrawManagerBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::CSMDrawManagerBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMDrawManagerBase::pushToDrawer
        
            typedef void ( ::OSG::CSMDrawManagerBase::*pushToDrawer_function_type )( ::OSG::CSMDrawer * const ) ;
            
            CSMDrawManagerBase_exposer.def( 
                "pushToDrawer"
                , pushToDrawer_function_type( &::OSG::CSMDrawManagerBase::pushToDrawer )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::CSMDrawManagerBase::removeFromDrawer
        
            typedef void ( ::OSG::CSMDrawManagerBase::*removeFromDrawer_function_type )( ::OSG::UInt32 ) ;
            
            CSMDrawManagerBase_exposer.def( 
                "removeFromDrawer"
                , removeFromDrawer_function_type( &::OSG::CSMDrawManagerBase::removeFromDrawer )
                , ( bp::arg("uiIndex") ) );
        
        }
        { //::OSG::CSMDrawManagerBase::removeObjFromDrawer
        
            typedef void ( ::OSG::CSMDrawManagerBase::*removeObjFromDrawer_function_type )( ::OSG::CSMDrawer * const ) ;
            
            CSMDrawManagerBase_exposer.def( 
                "removeObjFromDrawer"
                , removeObjFromDrawer_function_type( &::OSG::CSMDrawManagerBase::removeObjFromDrawer )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::CSMDrawManagerBase::setAppDrawer
        
            typedef void ( ::OSG::CSMDrawManagerBase::*setAppDrawer_function_type )( ::OSG::CSMDrawer * const ) ;
            
            CSMDrawManagerBase_exposer.def( 
                "setAppDrawer"
                , setAppDrawer_function_type( &::OSG::CSMDrawManagerBase::setAppDrawer )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::CSMDrawManagerBase::setParallel
        
            typedef void ( ::OSG::CSMDrawManagerBase::*setParallel_function_type )( bool const ) ;
            
            CSMDrawManagerBase_exposer.def( 
                "setParallel"
                , setParallel_function_type( &::OSG::CSMDrawManagerBase::setParallel )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::CSMDrawManagerBase::setSwapBarrierName
        
            typedef void ( ::OSG::CSMDrawManagerBase::*setSwapBarrierName_function_type )( ::std::string const & ) ;
            
            CSMDrawManagerBase_exposer.def( 
                "setSwapBarrierName"
                , setSwapBarrierName_function_type( &::OSG::CSMDrawManagerBase::setSwapBarrierName )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::CSMDrawManagerBase::setSyncBarrierName
        
            typedef void ( ::OSG::CSMDrawManagerBase::*setSyncBarrierName_function_type )( ::std::string const & ) ;
            
            CSMDrawManagerBase_exposer.def( 
                "setSyncBarrierName"
                , setSyncBarrierName_function_type( &::OSG::CSMDrawManagerBase::setSyncBarrierName )
                , ( bp::arg("value") ) );
        
        }
        CSMDrawManagerBase_exposer.staticmethod( "create" );
        CSMDrawManagerBase_exposer.staticmethod( "createDependent" );
        CSMDrawManagerBase_exposer.staticmethod( "createLocal" );
        CSMDrawManagerBase_exposer.staticmethod( "getClassGroupId" );
        CSMDrawManagerBase_exposer.staticmethod( "getClassType" );
        CSMDrawManagerBase_exposer.staticmethod( "getClassTypeId" );
        CSMDrawManagerBase_exposer.def("getMFDrawer",CSMDrawManagerBase_getMFDrawer);
    }

}
