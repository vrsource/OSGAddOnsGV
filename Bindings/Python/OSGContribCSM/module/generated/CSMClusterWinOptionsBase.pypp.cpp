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
#include "CSMClusterWinOptionsBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_CSMClusterWinOptionsBase_class(){

    { //::OSG::CSMClusterWinOptionsBase
        typedef bp::class_< OSG::CSMClusterWinOptionsBase, bp::bases< ::OSG::FieldContainer >, boost::noncopyable > CSMClusterWinOptionsBase_exposer_t;
        CSMClusterWinOptionsBase_exposer_t CSMClusterWinOptionsBase_exposer = CSMClusterWinOptionsBase_exposer_t( "CSMClusterWinOptionsBase", bp::no_init );
        bp::scope CSMClusterWinOptionsBase_scope( CSMClusterWinOptionsBase_exposer );
        bp::scope().attr("ParentFieldId") = (int)OSG::CSMClusterWinOptionsBase::ParentFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::CSMClusterWinOptionsBase::NextFieldId;
        { //::OSG::CSMClusterWinOptionsBase::copyFromBin
        
            typedef void ( ::OSG::CSMClusterWinOptionsBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            CSMClusterWinOptionsBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::CSMClusterWinOptionsBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::CSMClusterWinOptionsBase::copyToBin
        
            typedef void ( ::OSG::CSMClusterWinOptionsBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            CSMClusterWinOptionsBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::CSMClusterWinOptionsBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::CSMClusterWinOptionsBase::create
        
            typedef ::OSG::CSMClusterWinOptionsTransitPtr ( *create_function_type )(  );
            
            CSMClusterWinOptionsBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::CSMClusterWinOptionsBase::create ) );
        
        }
        { //::OSG::CSMClusterWinOptionsBase::createDependent
        
            typedef ::OSG::CSMClusterWinOptionsTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            CSMClusterWinOptionsBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::CSMClusterWinOptionsBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::CSMClusterWinOptionsBase::createLocal
        
            typedef ::OSG::CSMClusterWinOptionsTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            CSMClusterWinOptionsBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::CSMClusterWinOptionsBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::CSMClusterWinOptionsBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::CSMClusterWinOptionsBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            CSMClusterWinOptionsBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::CSMClusterWinOptionsBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::CSMClusterWinOptionsBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            CSMClusterWinOptionsBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::CSMClusterWinOptionsBase::getClassGroupId ) );
        
        }
        { //::OSG::CSMClusterWinOptionsBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            CSMClusterWinOptionsBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::CSMClusterWinOptionsBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::CSMClusterWinOptionsBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            CSMClusterWinOptionsBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::CSMClusterWinOptionsBase::getClassTypeId ) );
        
        }
        { //::OSG::CSMClusterWinOptionsBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::CSMClusterWinOptionsBase::*getContainerSize_function_type )(  ) const;
            
            CSMClusterWinOptionsBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::CSMClusterWinOptionsBase::getContainerSize ) );
        
        }
        { //::OSG::CSMClusterWinOptionsBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::CSMClusterWinOptionsBase::*getType_function_type )(  ) ;
            
            CSMClusterWinOptionsBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::CSMClusterWinOptionsBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMClusterWinOptionsBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::CSMClusterWinOptionsBase::*getType_function_type )(  ) const;
            
            CSMClusterWinOptionsBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::CSMClusterWinOptionsBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        CSMClusterWinOptionsBase_exposer.staticmethod( "create" );
        CSMClusterWinOptionsBase_exposer.staticmethod( "createDependent" );
        CSMClusterWinOptionsBase_exposer.staticmethod( "createLocal" );
        CSMClusterWinOptionsBase_exposer.staticmethod( "getClassGroupId" );
        CSMClusterWinOptionsBase_exposer.staticmethod( "getClassType" );
        CSMClusterWinOptionsBase_exposer.staticmethod( "getClassTypeId" );
    }

}
