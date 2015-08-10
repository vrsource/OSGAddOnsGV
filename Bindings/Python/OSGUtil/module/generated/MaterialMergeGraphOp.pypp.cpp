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
#include "OSGUtil_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "MaterialMergeGraphOp.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct MaterialMergeGraphOp_wrapper : OSG::MaterialMergeGraphOp, bp::wrapper< OSG::MaterialMergeGraphOp > {

    virtual ::OSG::GraphOpTransitPtr clone(  ) {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone(  );
        else{
            return this->OSG::MaterialMergeGraphOp::clone(  );
        }
    }
    
    ::OSG::GraphOpTransitPtr default_clone(  ) {
        return OSG::MaterialMergeGraphOp::clone( );
    }

    virtual void setParams( ::std::string const params ) {
        if( bp::override func_setParams = this->get_override( "setParams" ) )
            func_setParams( params );
        else{
            this->OSG::MaterialMergeGraphOp::setParams( params );
        }
    }
    
    void default_setParams( ::std::string const params ) {
        OSG::MaterialMergeGraphOp::setParams( params );
    }

    virtual bool traverse( ::OSG::Node * node ) {
        if( bp::override func_traverse = this->get_override( "traverse" ) )
            return func_traverse( boost::python::ptr(node) );
        else{
            return this->OSG::MaterialMergeGraphOp::traverse( boost::python::ptr(node) );
        }
    }
    
    bool default_traverse( ::OSG::Node * node ) {
        return OSG::MaterialMergeGraphOp::traverse( boost::python::ptr(node) );
    }

};

void register_MaterialMergeGraphOp_class(){

    { //::OSG::MaterialMergeGraphOp
        typedef bp::class_< MaterialMergeGraphOp_wrapper, bp::bases< OSG::GraphOp >, boost::noncopyable > MaterialMergeGraphOp_exposer_t;
        MaterialMergeGraphOp_exposer_t MaterialMergeGraphOp_exposer = MaterialMergeGraphOp_exposer_t( "MaterialMergeGraphOp", bp::no_init );
        bp::scope MaterialMergeGraphOp_scope( MaterialMergeGraphOp_exposer );
        { //::OSG::MaterialMergeGraphOp::MaterialObject
            typedef bp::class_< OSG::MaterialMergeGraphOp::MaterialObject > MaterialObject_exposer_t;
            MaterialObject_exposer_t MaterialObject_exposer = MaterialObject_exposer_t( "MaterialObject", bp::init< OSG::MaterialDrawable * >(( bp::arg("md") )) );
            bp::scope MaterialObject_scope( MaterialObject_exposer );
            bp::implicitly_convertible< OSG::MaterialDrawable *, OSG::MaterialMergeGraphOp::MaterialObject >();
            MaterialObject_exposer.def( bp::init< OSG::MaterialGroup * >(( bp::arg("mg") )) );
            bp::implicitly_convertible< OSG::MaterialGroup *, OSG::MaterialMergeGraphOp::MaterialObject >();
            { //::OSG::MaterialMergeGraphOp::MaterialObject::getMaterial
            
                typedef ::OSG::Material * ( ::OSG::MaterialMergeGraphOp::MaterialObject::*getMaterial_function_type )(  ) ;
                
                MaterialObject_exposer.def( 
                    "getMaterial"
                    , getMaterial_function_type( &::OSG::MaterialMergeGraphOp::MaterialObject::getMaterial )
                    , bp::return_value_policy< bp::reference_existing_object >() );
            
            }
            { //::OSG::MaterialMergeGraphOp::MaterialObject::setMaterial
            
                typedef void ( ::OSG::MaterialMergeGraphOp::MaterialObject::*setMaterial_function_type )( ::OSG::Material * ) ;
                
                MaterialObject_exposer.def( 
                    "setMaterial"
                    , setMaterial_function_type( &::OSG::MaterialMergeGraphOp::MaterialObject::setMaterial )
                    , ( bp::arg("mat") ) );
            
            }
        }
        { //::OSG::MaterialMergeGraphOp::clone
        
            typedef ::OSG::GraphOpTransitPtr ( ::OSG::MaterialMergeGraphOp::*clone_function_type )(  ) ;
            typedef ::OSG::GraphOpTransitPtr ( MaterialMergeGraphOp_wrapper::*default_clone_function_type )(  ) ;
            
            MaterialMergeGraphOp_exposer.def( 
                "clone"
                , clone_function_type(&::OSG::MaterialMergeGraphOp::clone)
                , default_clone_function_type(&MaterialMergeGraphOp_wrapper::default_clone) );
        
        }
        { //::OSG::MaterialMergeGraphOp::create
        
            typedef ::OSG::TransitPtr< OSG::MaterialMergeGraphOp > ( *create_function_type )(  );
            
            MaterialMergeGraphOp_exposer.def( 
                "create"
                , create_function_type( &::OSG::MaterialMergeGraphOp::create ) );
        
        }
        { //::OSG::MaterialMergeGraphOp::getClassname
        
            typedef char const * ( *getClassname_function_type )(  );
            
            MaterialMergeGraphOp_exposer.def( 
                "getClassname"
                , getClassname_function_type( &::OSG::MaterialMergeGraphOp::getClassname ) );
        
        }
        { //::OSG::MaterialMergeGraphOp::setParams
        
            typedef void ( ::OSG::MaterialMergeGraphOp::*setParams_function_type )( ::std::string const ) ;
            typedef void ( MaterialMergeGraphOp_wrapper::*default_setParams_function_type )( ::std::string const ) ;
            
            MaterialMergeGraphOp_exposer.def( 
                "setParams"
                , setParams_function_type(&::OSG::MaterialMergeGraphOp::setParams)
                , default_setParams_function_type(&MaterialMergeGraphOp_wrapper::default_setParams)
                , ( bp::arg("params") ) );
        
        }
        { //::OSG::MaterialMergeGraphOp::traverse
        
            typedef bool ( ::OSG::MaterialMergeGraphOp::*traverse_function_type )( ::OSG::Node * ) ;
            typedef bool ( MaterialMergeGraphOp_wrapper::*default_traverse_function_type )( ::OSG::Node * ) ;
            
            MaterialMergeGraphOp_exposer.def( 
                "traverse"
                , traverse_function_type(&::OSG::MaterialMergeGraphOp::traverse)
                , default_traverse_function_type(&MaterialMergeGraphOp_wrapper::default_traverse)
                , ( bp::arg("node") ) );
        
        }
        MaterialMergeGraphOp_exposer.staticmethod( "create" );
        MaterialMergeGraphOp_exposer.staticmethod( "getClassname" );
        bp::implicitly_convertible<OSG::MaterialMergeGraphOp::ObjRefPtr, OSG::GraphOp::ObjRefPtr>();
        bp::implicitly_convertible<OSG::MaterialMergeGraphOp::ObjTransitPtr, OSG::GraphOp::ObjRefPtr>();
        bp::implicitly_convertible<OSG::MaterialMergeGraphOp::ObjTransitPtr, OSG::MaterialMergeGraphOp::ObjRefPtr>();
    }

}
