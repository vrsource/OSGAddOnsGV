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
#include "OSGSystem_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "GroupBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_GroupBase_class(){

    { //::OSG::GroupBase
        typedef bp::class_< OSG::GroupBase, bp::bases< ::OSG::NodeCore >, boost::noncopyable > GroupBase_exposer_t;
        GroupBase_exposer_t GroupBase_exposer = GroupBase_exposer_t( "GroupBase", bp::no_init );
        bp::scope GroupBase_scope( GroupBase_exposer );
        { //::OSG::GroupBase::copyFromBin
        
            typedef void ( ::OSG::GroupBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            GroupBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::GroupBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::GroupBase::copyToBin
        
            typedef void ( ::OSG::GroupBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            GroupBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::GroupBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::GroupBase::create
        
            typedef ::OSG::GroupTransitPtr ( *create_function_type )(  );
            
            GroupBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::GroupBase::create ) );
        
        }
        { //::OSG::GroupBase::createDependent
        
            typedef ::OSG::GroupTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            GroupBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::GroupBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::GroupBase::createLocal
        
            typedef ::OSG::GroupTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            GroupBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::GroupBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::GroupBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::GroupBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            GroupBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::GroupBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::GroupBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            GroupBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::GroupBase::getClassGroupId ) );
        
        }
        { //::OSG::GroupBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            GroupBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::GroupBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::GroupBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            GroupBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::GroupBase::getClassTypeId ) );
        
        }
        { //::OSG::GroupBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::GroupBase::*getContainerSize_function_type )(  ) const;
            
            GroupBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::GroupBase::getContainerSize ) );
        
        }
        { //::OSG::GroupBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::GroupBase::*getType_function_type )(  ) ;
            
            GroupBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::GroupBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GroupBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::GroupBase::*getType_function_type )(  ) const;
            
            GroupBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::GroupBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        GroupBase_exposer.staticmethod( "create" );
        GroupBase_exposer.staticmethod( "createDependent" );
        GroupBase_exposer.staticmethod( "createLocal" );
        GroupBase_exposer.staticmethod( "getClassGroupId" );
        GroupBase_exposer.staticmethod( "getClassType" );
        GroupBase_exposer.staticmethod( "getClassTypeId" );
    }

}
