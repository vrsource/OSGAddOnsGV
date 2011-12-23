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
#endif

#include "boost/python.hpp"
#include "OSGBase_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "ReflexiveContainer.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct ReflexiveContainer_wrapper : OSG::ReflexiveContainer, bp::wrapper< OSG::ReflexiveContainer > {

    virtual void dump( ::OSG::UInt32 uiIndent=0, long unsigned int const bvFlags=0 ) const {
        bp::override func_dump = this->get_override( "dump" );
        func_dump( uiIndent, bvFlags );
    }

};

void register_ReflexiveContainer_class(){

    { //::OSG::ReflexiveContainer
        typedef bp::class_< ReflexiveContainer_wrapper, boost::noncopyable > ReflexiveContainer_exposer_t;
        ReflexiveContainer_exposer_t ReflexiveContainer_exposer = ReflexiveContainer_exposer_t( "ReflexiveContainer", bp::no_init );
        bp::scope ReflexiveContainer_scope( ReflexiveContainer_exposer );
        { //::OSG::ReflexiveContainer::copyFromBin
        
            typedef void ( ::OSG::ReflexiveContainer::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ReflexiveContainer_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::ReflexiveContainer::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ReflexiveContainer::copyToBin
        
            typedef void ( ::OSG::ReflexiveContainer::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ReflexiveContainer_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::ReflexiveContainer::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ReflexiveContainer::dump
        
            typedef void ( ::OSG::ReflexiveContainer::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            ReflexiveContainer_exposer.def( 
                "dump"
                , bp::pure_virtual( dump_function_type(&::OSG::ReflexiveContainer::dump) )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::ReflexiveContainer::editField
        
            typedef ::OSG::EditFieldHandlePtr ( ::OSG::ReflexiveContainer::*editField_function_type )( ::OSG::UInt32 ) ;
            
            ReflexiveContainer_exposer.def( 
                "editField"
                , editField_function_type( &::OSG::ReflexiveContainer::editField )
                , ( bp::arg("fieldId") ) );
        
        }
        { //::OSG::ReflexiveContainer::editField
        
            typedef ::OSG::EditFieldHandlePtr ( ::OSG::ReflexiveContainer::*editField_function_type )( ::OSG::Char8 const * ) ;
            
            ReflexiveContainer_exposer.def( 
                "editField"
                , editField_function_type( &::OSG::ReflexiveContainer::editField )
                , ( bp::arg("fieldName") ) );
        
        }
        { //::OSG::ReflexiveContainer::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::ReflexiveContainer::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            ReflexiveContainer_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::ReflexiveContainer::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::ReflexiveContainer::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            ReflexiveContainer_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::ReflexiveContainer::getClassGroupId ) );
        
        }
        { //::OSG::ReflexiveContainer::getClassType
        
            typedef ::OSG::ReflexiveContainerType & ( *getClassType_function_type )(  );
            
            ReflexiveContainer_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::ReflexiveContainer::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::ReflexiveContainer::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            ReflexiveContainer_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::ReflexiveContainer::getClassTypeId ) );
        
        }
        { //::OSG::ReflexiveContainer::getField
        
            typedef ::OSG::GetFieldHandlePtr ( ::OSG::ReflexiveContainer::*getField_function_type )( ::OSG::UInt32 ) const;
            
            ReflexiveContainer_exposer.def( 
                "getField"
                , getField_function_type( &::OSG::ReflexiveContainer::getField )
                , ( bp::arg("fieldId") ) );
        
        }
        { //::OSG::ReflexiveContainer::getField
        
            typedef ::OSG::GetFieldHandlePtr ( ::OSG::ReflexiveContainer::*getField_function_type )( ::OSG::Char8 const * ) const;
            
            ReflexiveContainer_exposer.def( 
                "getField"
                , getField_function_type( &::OSG::ReflexiveContainer::getField )
                , ( bp::arg("fieldName") ) );
        
        }
        { //::OSG::ReflexiveContainer::getFieldDescription
        
            typedef ::OSG::FieldDescriptionBase * ( ::OSG::ReflexiveContainer::*getFieldDescription_function_type )( ::OSG::UInt32 ) const;
            
            ReflexiveContainer_exposer.def( 
                "getFieldDescription"
                , getFieldDescription_function_type( &::OSG::ReflexiveContainer::getFieldDescription )
                , ( bp::arg("fieldId") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ReflexiveContainer::getFieldDescription
        
            typedef ::OSG::FieldDescriptionBase * ( ::OSG::ReflexiveContainer::*getFieldDescription_function_type )( ::OSG::Char8 const * ) const;
            
            ReflexiveContainer_exposer.def( 
                "getFieldDescription"
                , getFieldDescription_function_type( &::OSG::ReflexiveContainer::getFieldDescription )
                , ( bp::arg("fieldName") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ReflexiveContainer::getGroupId
        
            typedef ::OSG::UInt16 ( ::OSG::ReflexiveContainer::*getGroupId_function_type )(  ) const;
            
            ReflexiveContainer_exposer.def( 
                "getGroupId"
                , getGroupId_function_type( &::OSG::ReflexiveContainer::getGroupId ) );
        
        }
        { //::OSG::ReflexiveContainer::getId
        
            typedef ::OSG::UInt32 ( ::OSG::ReflexiveContainer::*getId_function_type )(  ) const;
            
            ReflexiveContainer_exposer.def( 
                "getId"
                , getId_function_type( &::OSG::ReflexiveContainer::getId ) );
        
        }
        { //::OSG::ReflexiveContainer::getNumFields
        
            typedef ::OSG::UInt32 ( ::OSG::ReflexiveContainer::*getNumFields_function_type )(  ) const;
            
            ReflexiveContainer_exposer.def( 
                "getNumFields"
                , getNumFields_function_type( &::OSG::ReflexiveContainer::getNumFields ) );
        
        }
        { //::OSG::ReflexiveContainer::getType
        
            typedef ::OSG::ReflexiveContainerType & ( ::OSG::ReflexiveContainer::*getType_function_type )(  ) ;
            
            ReflexiveContainer_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ReflexiveContainer::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ReflexiveContainer::getTypeId
        
            typedef ::OSG::UInt32 ( ::OSG::ReflexiveContainer::*getTypeId_function_type )(  ) const;
            
            ReflexiveContainer_exposer.def( 
                "getTypeId"
                , getTypeId_function_type( &::OSG::ReflexiveContainer::getTypeId ) );
        
        }
        { //::OSG::ReflexiveContainer::getTypeName
        
            typedef ::OSG::Char8 const * ( ::OSG::ReflexiveContainer::*getTypeName_function_type )(  ) const;
            
            ReflexiveContainer_exposer.def( 
                "getTypeName"
                , getTypeName_function_type( &::OSG::ReflexiveContainer::getTypeName ) );
        
        }
        { //::OSG::ReflexiveContainer::invalidEditField
        
            typedef ::OSG::EditFieldHandlePtr ( ::OSG::ReflexiveContainer::*invalidEditField_function_type )(  ) ;
            
            ReflexiveContainer_exposer.def( 
                "invalidEditField"
                , invalidEditField_function_type( &::OSG::ReflexiveContainer::invalidEditField ) );
        
        }
        { //::OSG::ReflexiveContainer::invalidGetField
        
            typedef ::OSG::GetFieldHandlePtr ( ::OSG::ReflexiveContainer::*invalidGetField_function_type )(  ) const;
            
            ReflexiveContainer_exposer.def( 
                "invalidGetField"
                , invalidGetField_function_type( &::OSG::ReflexiveContainer::invalidGetField ) );
        
        }
        ReflexiveContainer_exposer.staticmethod( "getClassGroupId" );
        ReflexiveContainer_exposer.staticmethod( "getClassType" );
        ReflexiveContainer_exposer.staticmethod( "getClassTypeId" );
    }

}
