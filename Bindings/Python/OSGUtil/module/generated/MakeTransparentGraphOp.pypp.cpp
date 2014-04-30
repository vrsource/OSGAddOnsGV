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
#include "OSGUtil_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "MakeTransparentGraphOp.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct MakeTransparentGraphOp_wrapper : OSG::MakeTransparentGraphOp, bp::wrapper< OSG::MakeTransparentGraphOp > {

    virtual ::OSG::GraphOpTransitPtr clone(  ) {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone(  );
        else{
            return this->OSG::MakeTransparentGraphOp::clone(  );
        }
    }
    
    ::OSG::GraphOpTransitPtr default_clone(  ) {
        return OSG::MakeTransparentGraphOp::clone( );
    }

    virtual void setParams( ::std::string const params ) {
        if( bp::override func_setParams = this->get_override( "setParams" ) )
            func_setParams( params );
        else{
            this->OSG::MakeTransparentGraphOp::setParams( params );
        }
    }
    
    void default_setParams( ::std::string const params ) {
        OSG::MakeTransparentGraphOp::setParams( params );
    }

    virtual bool traverse( ::OSG::Node * node ) {
        if( bp::override func_traverse = this->get_override( "traverse" ) )
            return func_traverse( boost::python::ptr(node) );
        else{
            return this->OSG::MakeTransparentGraphOp::traverse( boost::python::ptr(node) );
        }
    }
    
    bool default_traverse( ::OSG::Node * node ) {
        return OSG::MakeTransparentGraphOp::traverse( boost::python::ptr(node) );
    }

};

void register_MakeTransparentGraphOp_class(){

    { //::OSG::MakeTransparentGraphOp
        typedef bp::class_< MakeTransparentGraphOp_wrapper, bp::bases< OSG::GraphOp >, boost::noncopyable > MakeTransparentGraphOp_exposer_t;
        MakeTransparentGraphOp_exposer_t MakeTransparentGraphOp_exposer = MakeTransparentGraphOp_exposer_t( "MakeTransparentGraphOp", bp::no_init );
        bp::scope MakeTransparentGraphOp_scope( MakeTransparentGraphOp_exposer );
        { //::OSG::MakeTransparentGraphOp::MaterialObject
            typedef bp::class_< OSG::MakeTransparentGraphOp::MaterialObject > MaterialObject_exposer_t;
            MaterialObject_exposer_t MaterialObject_exposer = MaterialObject_exposer_t( "MaterialObject", bp::init< OSG::MaterialDrawable * >(( bp::arg("md") )) );
            bp::scope MaterialObject_scope( MaterialObject_exposer );
            bp::implicitly_convertible< OSG::MaterialDrawable *, OSG::MakeTransparentGraphOp::MaterialObject >();
            MaterialObject_exposer.def( bp::init< OSG::MaterialGroup * >(( bp::arg("mg") )) );
            bp::implicitly_convertible< OSG::MaterialGroup *, OSG::MakeTransparentGraphOp::MaterialObject >();
            { //::OSG::MakeTransparentGraphOp::MaterialObject::getMaterial
            
                typedef ::OSG::Material * ( ::OSG::MakeTransparentGraphOp::MaterialObject::*getMaterial_function_type )(  ) ;
                
                MaterialObject_exposer.def( 
                    "getMaterial"
                    , getMaterial_function_type( &::OSG::MakeTransparentGraphOp::MaterialObject::getMaterial )
                    , bp::return_value_policy< bp::reference_existing_object >() );
            
            }
            { //::OSG::MakeTransparentGraphOp::MaterialObject::setMaterial
            
                typedef void ( ::OSG::MakeTransparentGraphOp::MaterialObject::*setMaterial_function_type )( ::OSG::Material * ) ;
                
                MaterialObject_exposer.def( 
                    "setMaterial"
                    , setMaterial_function_type( &::OSG::MakeTransparentGraphOp::MaterialObject::setMaterial )
                    , ( bp::arg("mat") ) );
            
            }
        }
        { //::OSG::MakeTransparentGraphOp::clone
        
            typedef ::OSG::GraphOpTransitPtr ( ::OSG::MakeTransparentGraphOp::*clone_function_type )(  ) ;
            typedef ::OSG::GraphOpTransitPtr ( MakeTransparentGraphOp_wrapper::*default_clone_function_type )(  ) ;
            
            MakeTransparentGraphOp_exposer.def( 
                "clone"
                , clone_function_type(&::OSG::MakeTransparentGraphOp::clone)
                , default_clone_function_type(&MakeTransparentGraphOp_wrapper::default_clone) );
        
        }
        { //::OSG::MakeTransparentGraphOp::create
        
            typedef ::OSG::TransitPtr< OSG::MakeTransparentGraphOp > ( *create_function_type )(  );
            
            MakeTransparentGraphOp_exposer.def( 
                "create"
                , create_function_type( &::OSG::MakeTransparentGraphOp::create ) );
        
        }
        { //::OSG::MakeTransparentGraphOp::getClassname
        
            typedef char const * ( *getClassname_function_type )(  );
            
            MakeTransparentGraphOp_exposer.def( 
                "getClassname"
                , getClassname_function_type( &::OSG::MakeTransparentGraphOp::getClassname ) );
        
        }
        { //::OSG::MakeTransparentGraphOp::setParams
        
            typedef void ( ::OSG::MakeTransparentGraphOp::*setParams_function_type )( ::std::string const ) ;
            typedef void ( MakeTransparentGraphOp_wrapper::*default_setParams_function_type )( ::std::string const ) ;
            
            MakeTransparentGraphOp_exposer.def( 
                "setParams"
                , setParams_function_type(&::OSG::MakeTransparentGraphOp::setParams)
                , default_setParams_function_type(&MakeTransparentGraphOp_wrapper::default_setParams)
                , ( bp::arg("params") ) );
        
        }
        { //::OSG::MakeTransparentGraphOp::traverse
        
            typedef bool ( ::OSG::MakeTransparentGraphOp::*traverse_function_type )( ::OSG::Node * ) ;
            typedef bool ( MakeTransparentGraphOp_wrapper::*default_traverse_function_type )( ::OSG::Node * ) ;
            
            MakeTransparentGraphOp_exposer.def( 
                "traverse"
                , traverse_function_type(&::OSG::MakeTransparentGraphOp::traverse)
                , default_traverse_function_type(&MakeTransparentGraphOp_wrapper::default_traverse)
                , ( bp::arg("node") ) );
        
        }
        MakeTransparentGraphOp_exposer.staticmethod( "create" );
        MakeTransparentGraphOp_exposer.staticmethod( "getClassname" );
        bp::implicitly_convertible<OSG::MakeTransparentGraphOp::ObjRefPtr, OSG::GraphOp::ObjRefPtr>();
        bp::implicitly_convertible<OSG::MakeTransparentGraphOp::ObjTransitPtr, OSG::GraphOp::ObjRefPtr>();
        bp::implicitly_convertible<OSG::MakeTransparentGraphOp::ObjTransitPtr, OSG::MakeTransparentGraphOp::ObjRefPtr>();
    }

}
