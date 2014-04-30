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
#include "TypeBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_TypeBase_class(){

    { //::OSG::TypeBase
        typedef bp::class_< OSG::TypeBase, boost::noncopyable > TypeBase_exposer_t;
        TypeBase_exposer_t TypeBase_exposer = TypeBase_exposer_t( "TypeBase", bp::init< OSG::Char8 const *, OSG::Char8 const *, bp::optional< unsigned int > >(( bp::arg("szName"), bp::arg("szParentName"), bp::arg("uiNamespace")=(::OSG::UInt32 const)(OSG::TypeBase::GlobalNamespace) )) );
        bp::scope TypeBase_scope( TypeBase_exposer );
        bp::enum_< OSG::TypeBase::InitPhase>("InitPhase")
            .value("Static", OSG::TypeBase::Static)
            .value("SystemPre", OSG::TypeBase::SystemPre)
            .value("SystemPost", OSG::TypeBase::SystemPost)
            .value("FactoryPost", OSG::TypeBase::FactoryPost)
            .export_values()
            ;
        { //::OSG::TypeBase::dump
        
            typedef void ( ::OSG::TypeBase::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            TypeBase_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::TypeBase::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::TypeBase::getCName
        
            typedef ::OSG::Char8 const * ( ::OSG::TypeBase::*getCName_function_type )(  ) const;
            
            TypeBase_exposer.def( 
                "getCName"
                , getCName_function_type( &::OSG::TypeBase::getCName ) );
        
        }
        { //::OSG::TypeBase::getCParentName
        
            typedef ::OSG::Char8 const * ( ::OSG::TypeBase::*getCParentName_function_type )(  ) const;
            
            TypeBase_exposer.def( 
                "getCParentName"
                , getCParentName_function_type( &::OSG::TypeBase::getCParentName ) );
        
        }
        { //::OSG::TypeBase::getId
        
            typedef ::OSG::UInt32 ( ::OSG::TypeBase::*getId_function_type )(  ) const;
            
            TypeBase_exposer.def( 
                "getId"
                , getId_function_type( &::OSG::TypeBase::getId ) );
        
        }
        { //::OSG::TypeBase::getName
        
            typedef ::std::string const & ( ::OSG::TypeBase::*getName_function_type )(  ) const;
            
            TypeBase_exposer.def( 
                "getName"
                , getName_function_type( &::OSG::TypeBase::getName )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::TypeBase::getNameSpace
        
            typedef ::OSG::UInt32 ( ::OSG::TypeBase::*getNameSpace_function_type )(  ) const;
            
            TypeBase_exposer.def( 
                "getNameSpace"
                , getNameSpace_function_type( &::OSG::TypeBase::getNameSpace ) );
        
        }
        { //::OSG::TypeBase::getParent
        
            typedef ::OSG::TypeBase const & ( ::OSG::TypeBase::*getParent_function_type )(  ) const;
            
            TypeBase_exposer.def( 
                "getParent"
                , getParent_function_type( &::OSG::TypeBase::getParent )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TypeBase::getParentName
        
            typedef ::std::string const & ( ::OSG::TypeBase::*getParentName_function_type )(  ) const;
            
            TypeBase_exposer.def( 
                "getParentName"
                , getParentName_function_type( &::OSG::TypeBase::getParentName )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::TypeBase::isDerivedFrom
        
            typedef bool ( ::OSG::TypeBase::*isDerivedFrom_function_type )( ::OSG::TypeBase const & ) const;
            
            TypeBase_exposer.def( 
                "isDerivedFrom"
                , isDerivedFrom_function_type( &::OSG::TypeBase::isDerivedFrom )
                , ( bp::arg("other") ) );
        
        }
        { //::OSG::TypeBase::isInitialized
        
            typedef bool ( ::OSG::TypeBase::*isInitialized_function_type )(  ) const;
            
            TypeBase_exposer.def( 
                "isInitialized"
                , isInitialized_function_type( &::OSG::TypeBase::isInitialized ) );
        
        }
    }

}
