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
#include "VerifyGeoGraphOp.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct VerifyGeoGraphOp_wrapper : OSG::VerifyGeoGraphOp, bp::wrapper< OSG::VerifyGeoGraphOp > {

    virtual ::OSG::GraphOpTransitPtr clone(  ) {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone(  );
        else{
            return this->OSG::VerifyGeoGraphOp::clone(  );
        }
    }
    
    ::OSG::GraphOpTransitPtr default_clone(  ) {
        return OSG::VerifyGeoGraphOp::clone( );
    }

    virtual void setParams( ::std::string const params ) {
        if( bp::override func_setParams = this->get_override( "setParams" ) )
            func_setParams( params );
        else{
            this->OSG::VerifyGeoGraphOp::setParams( params );
        }
    }
    
    void default_setParams( ::std::string const params ) {
        OSG::VerifyGeoGraphOp::setParams( params );
    }

    virtual bool traverse( ::OSG::Node * root ) {
        if( bp::override func_traverse = this->get_override( "traverse" ) )
            return func_traverse( boost::python::ptr(root) );
        else{
            return this->OSG::VerifyGeoGraphOp::traverse( boost::python::ptr(root) );
        }
    }
    
    bool default_traverse( ::OSG::Node * root ) {
        return OSG::VerifyGeoGraphOp::traverse( boost::python::ptr(root) );
    }

    virtual ::OSG::ActionBase::ResultE traverseEnter( ::OSG::Node * const node ){
        bp::override func_traverseEnter = this->get_override( "traverseEnter" );
        return func_traverseEnter( node );
    }

    virtual ::OSG::ActionBase::ResultE traverseLeave( ::OSG::Node * const node, ::OSG::ActionBase::ResultE res ){
        bp::override func_traverseLeave = this->get_override( "traverseLeave" );
        return func_traverseLeave( node, res );
    }

};

void register_VerifyGeoGraphOp_class(){

    { //::OSG::VerifyGeoGraphOp
        typedef bp::class_< VerifyGeoGraphOp_wrapper, boost::noncopyable > VerifyGeoGraphOp_exposer_t;
        VerifyGeoGraphOp_exposer_t VerifyGeoGraphOp_exposer = VerifyGeoGraphOp_exposer_t( "VerifyGeoGraphOp", bp::no_init );
        bp::scope VerifyGeoGraphOp_scope( VerifyGeoGraphOp_exposer );
        { //::OSG::VerifyGeoGraphOp::clone
        
            typedef ::OSG::GraphOpTransitPtr ( ::OSG::VerifyGeoGraphOp::*clone_function_type )(  ) ;
            typedef ::OSG::GraphOpTransitPtr ( VerifyGeoGraphOp_wrapper::*default_clone_function_type )(  ) ;
            
            VerifyGeoGraphOp_exposer.def( 
                "clone"
                , clone_function_type(&::OSG::VerifyGeoGraphOp::clone)
                , default_clone_function_type(&VerifyGeoGraphOp_wrapper::default_clone) );
        
        }
        { //::OSG::VerifyGeoGraphOp::create
        
            typedef ::OSG::TransitPtr< OSG::VerifyGeoGraphOp > ( *create_function_type )(  );
            
            VerifyGeoGraphOp_exposer.def( 
                "create"
                , create_function_type( &::OSG::VerifyGeoGraphOp::create ) );
        
        }
        { //::OSG::VerifyGeoGraphOp::getClassname
        
            typedef char const * ( *getClassname_function_type )(  );
            
            VerifyGeoGraphOp_exposer.def( 
                "getClassname"
                , getClassname_function_type( &::OSG::VerifyGeoGraphOp::getClassname ) );
        
        }
        { //::OSG::VerifyGeoGraphOp::setParams
        
            typedef void ( ::OSG::VerifyGeoGraphOp::*setParams_function_type )( ::std::string const ) ;
            typedef void ( VerifyGeoGraphOp_wrapper::*default_setParams_function_type )( ::std::string const ) ;
            
            VerifyGeoGraphOp_exposer.def( 
                "setParams"
                , setParams_function_type(&::OSG::VerifyGeoGraphOp::setParams)
                , default_setParams_function_type(&VerifyGeoGraphOp_wrapper::default_setParams)
                , ( bp::arg("params") ) );
        
        }
        { //::OSG::VerifyGeoGraphOp::traverse
        
            typedef bool ( ::OSG::VerifyGeoGraphOp::*traverse_function_type )( ::OSG::Node * ) ;
            typedef bool ( VerifyGeoGraphOp_wrapper::*default_traverse_function_type )( ::OSG::Node * ) ;
            
            VerifyGeoGraphOp_exposer.def( 
                "traverse"
                , traverse_function_type(&::OSG::VerifyGeoGraphOp::traverse)
                , default_traverse_function_type(&VerifyGeoGraphOp_wrapper::default_traverse)
                , ( bp::arg("root") ) );
        
        }
        { //::OSG::GraphOp::traverseEnter
        
            typedef ::OSG::ActionBase::ResultE ( VerifyGeoGraphOp_wrapper::*traverseEnter_function_type )( ::OSG::Node * const ) ;
            
            VerifyGeoGraphOp_exposer.def( 
                "traverseEnter"
                , traverseEnter_function_type( &VerifyGeoGraphOp_wrapper::traverseEnter )
                , ( bp::arg("node") ) );
        
        }
        { //::OSG::GraphOp::traverseLeave
        
            typedef ::OSG::ActionBase::ResultE ( VerifyGeoGraphOp_wrapper::*traverseLeave_function_type )( ::OSG::Node * const,::OSG::ActionBase::ResultE ) ;
            
            VerifyGeoGraphOp_exposer.def( 
                "traverseLeave"
                , traverseLeave_function_type( &VerifyGeoGraphOp_wrapper::traverseLeave )
                , ( bp::arg("node"), bp::arg("res") ) );
        
        }
        VerifyGeoGraphOp_exposer.staticmethod( "create" );
        VerifyGeoGraphOp_exposer.staticmethod( "getClassname" );
        bp::implicitly_convertible<OSG::VerifyGeoGraphOp::ObjRefPtr, OSG::GraphOp::ObjRefPtr>();
        bp::implicitly_convertible<OSG::VerifyGeoGraphOp::ObjTransitPtr, OSG::GraphOp::ObjRefPtr>();
        bp::implicitly_convertible<OSG::VerifyGeoGraphOp::ObjTransitPtr, OSG::VerifyGeoGraphOp::ObjRefPtr>();
    }

}
