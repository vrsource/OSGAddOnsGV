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
#include "OSGBase_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "FieldType.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_FieldType_class(){

    { //::OSG::FieldType
        typedef bp::class_< OSG::FieldType, bp::bases< OSG::DataType >, boost::noncopyable > FieldType_exposer_t;
        FieldType_exposer_t FieldType_exposer = FieldType_exposer_t( "FieldType", bp::init< OSG::Char8 const *, OSG::Char8 const *, OSG::DataType const &, OSG::FieldType::Cardinality, OSG::FieldType::Class, bp::optional< OSG::FieldDescCreator, OSG::IndexedFieldDescCreator, unsigned int > >(( bp::arg("szName"), bp::arg("szParentName"), bp::arg("contentType"), bp::arg("cardinality"), bp::arg("fieldClass"), bp::arg("fCreator")=0l, bp::arg("fIdxCreator")=0l, bp::arg("uiNameSpace")=(::OSG::UInt32 const)(OSG::TypeBase::GlobalNamespace) )) );
        bp::scope FieldType_scope( FieldType_exposer );
        bp::enum_< OSG::FieldType::Cardinality>("Cardinality")
            .value("SingleField", OSG::FieldType::SingleField)
            .value("MultiField", OSG::FieldType::MultiField)
            .export_values()
            ;
        bp::enum_< OSG::FieldType::Class>("Class")
            .value("ValueField", OSG::FieldType::ValueField)
            .value("PtrField", OSG::FieldType::PtrField)
            .value("ParentPtrField", OSG::FieldType::ParentPtrField)
            .value("ChildPtrField", OSG::FieldType::ChildPtrField)
            .export_values()
            ;
        FieldType_exposer.def( bp::init< OSG::Char8 const *, OSG::Char8 const *, OSG::DataType const &, OSG::FieldType::Cardinality, OSG::FieldType::Class, OSG::FieldType const &, bp::optional< OSG::FieldDescCreator, OSG::IndexedFieldDescCreator, unsigned int > >(( bp::arg("szName"), bp::arg("szParentName"), bp::arg("contentType"), bp::arg("cardinality"), bp::arg("fieldClass"), bp::arg("pScanAsType"), bp::arg("fCreator")=0l, bp::arg("fIdxCreator")=0l, bp::arg("uiNameSpace")=(::OSG::UInt32 const)(OSG::TypeBase::GlobalNamespace) )) );
        { //::OSG::FieldType::getCardinality
        
            typedef ::OSG::FieldType::Cardinality ( ::OSG::FieldType::*getCardinality_function_type )(  ) const;
            
            FieldType_exposer.def( 
                "getCardinality"
                , getCardinality_function_type( &::OSG::FieldType::getCardinality ) );
        
        }
        { //::OSG::FieldType::getClass
        
            typedef ::OSG::FieldType::Class ( ::OSG::FieldType::*getClass_function_type )(  ) const;
            
            FieldType_exposer.def( 
                "getClass"
                , getClass_function_type( &::OSG::FieldType::getClass ) );
        
        }
        { //::OSG::FieldType::getContentType
        
            typedef ::OSG::DataType const & ( ::OSG::FieldType::*getContentType_function_type )(  ) const;
            
            FieldType_exposer.def( 
                "getContentType"
                , getContentType_function_type( &::OSG::FieldType::getContentType )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::FieldType::getScanTypeId
        
            typedef ::OSG::UInt32 ( ::OSG::FieldType::*getScanTypeId_function_type )(  ) const;
            
            FieldType_exposer.def( 
                "getScanTypeId"
                , getScanTypeId_function_type( &::OSG::FieldType::getScanTypeId ) );
        
        }
        { //::OSG::FieldType::isPtrField
        
            typedef bool ( ::OSG::FieldType::*isPtrField_function_type )(  ) const;
            
            FieldType_exposer.def( 
                "isPtrField"
                , isPtrField_function_type( &::OSG::FieldType::isPtrField ) );
        
        }
    }

}
