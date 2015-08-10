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
#include "OSGWindow_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "PassiveWindowBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_PassiveWindowBase_class(){

    { //::OSG::PassiveWindowBase
        typedef bp::class_< OSG::PassiveWindowBase, bp::bases< ::OSG::XWindow >, boost::noncopyable > PassiveWindowBase_exposer_t;
        PassiveWindowBase_exposer_t PassiveWindowBase_exposer = PassiveWindowBase_exposer_t( "PassiveWindowBase", bp::no_init );
        bp::scope PassiveWindowBase_scope( PassiveWindowBase_exposer );
        { //::OSG::PassiveWindowBase::copyFromBin
        
            typedef void ( ::OSG::PassiveWindowBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            PassiveWindowBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::PassiveWindowBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::PassiveWindowBase::copyToBin
        
            typedef void ( ::OSG::PassiveWindowBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            PassiveWindowBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::PassiveWindowBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::PassiveWindowBase::create
        
            typedef ::OSG::PassiveWindowTransitPtr ( *create_function_type )(  );
            
            PassiveWindowBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::PassiveWindowBase::create ) );
        
        }
        { //::OSG::PassiveWindowBase::createDependent
        
            typedef ::OSG::PassiveWindowTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            PassiveWindowBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::PassiveWindowBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::PassiveWindowBase::createLocal
        
            typedef ::OSG::PassiveWindowTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            PassiveWindowBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::PassiveWindowBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::PassiveWindowBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::PassiveWindowBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            PassiveWindowBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::PassiveWindowBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::PassiveWindowBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            PassiveWindowBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::PassiveWindowBase::getClassGroupId ) );
        
        }
        { //::OSG::PassiveWindowBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            PassiveWindowBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::PassiveWindowBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::PassiveWindowBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            PassiveWindowBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::PassiveWindowBase::getClassTypeId ) );
        
        }
        { //::OSG::PassiveWindowBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::PassiveWindowBase::*getContainerSize_function_type )(  ) const;
            
            PassiveWindowBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::PassiveWindowBase::getContainerSize ) );
        
        }
        { //::OSG::PassiveWindowBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::PassiveWindowBase::*getType_function_type )(  ) ;
            
            PassiveWindowBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::PassiveWindowBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PassiveWindowBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::PassiveWindowBase::*getType_function_type )(  ) const;
            
            PassiveWindowBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::PassiveWindowBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        PassiveWindowBase_exposer.staticmethod( "create" );
        PassiveWindowBase_exposer.staticmethod( "createDependent" );
        PassiveWindowBase_exposer.staticmethod( "createLocal" );
        PassiveWindowBase_exposer.staticmethod( "getClassGroupId" );
        PassiveWindowBase_exposer.staticmethod( "getClassType" );
        PassiveWindowBase_exposer.staticmethod( "getClassTypeId" );
    }

}
