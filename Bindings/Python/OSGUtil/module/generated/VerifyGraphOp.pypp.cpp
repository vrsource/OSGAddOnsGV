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
#include "OSGUtil_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "VerifyGraphOp.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct VerifyGraphOp_wrapper : OSG::VerifyGraphOp, bp::wrapper< OSG::VerifyGraphOp > {

    virtual ::OSG::GraphOpTransitPtr clone(  ) {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone(  );
        else{
            return this->OSG::VerifyGraphOp::clone(  );
        }
    }
    
    ::OSG::GraphOpTransitPtr default_clone(  ) {
        return OSG::VerifyGraphOp::clone( );
    }

    virtual void setParams( ::std::string const params ) {
        if( bp::override func_setParams = this->get_override( "setParams" ) )
            func_setParams( params );
        else{
            this->OSG::VerifyGraphOp::setParams( params );
        }
    }
    
    void default_setParams( ::std::string const params ) {
        OSG::VerifyGraphOp::setParams( params );
    }

    virtual bool traverse( ::OSG::Node * node ) {
        if( bp::override func_traverse = this->get_override( "traverse" ) )
            return func_traverse( boost::python::ptr(node) );
        else{
            return this->OSG::VerifyGraphOp::traverse( boost::python::ptr(node) );
        }
    }
    
    bool default_traverse( ::OSG::Node * node ) {
        return OSG::VerifyGraphOp::traverse( boost::python::ptr(node) );
    }

    virtual ::OSG::ActionBase::ResultE traverseEnter( ::OSG::Node * const node ){
        if( bp::override func_traverseEnter = this->get_override( "traverseEnter" ) )
            return func_traverseEnter( node );
        else{
            return this->OSG::VerifyGraphOp::traverseEnter( node );
        }
    }
    
    virtual ::OSG::ActionBase::ResultE default_traverseEnter( ::OSG::Node * const node ){
        return OSG::VerifyGraphOp::traverseEnter( node );
    }

    virtual ::OSG::ActionBase::ResultE traverseLeave( ::OSG::Node * const node, ::OSG::ActionBase::ResultE res ){
        if( bp::override func_traverseLeave = this->get_override( "traverseLeave" ) )
            return func_traverseLeave( node, res );
        else{
            return this->OSG::VerifyGraphOp::traverseLeave( node, res );
        }
    }
    
    virtual ::OSG::ActionBase::ResultE default_traverseLeave( ::OSG::Node * const node, ::OSG::ActionBase::ResultE res ){
        return OSG::VerifyGraphOp::traverseLeave( node, res );
    }

    virtual ::std::string usage(  ) {
        if( bp::override func_usage = this->get_override( "usage" ) )
            return func_usage(  );
        else{
            return this->OSG::VerifyGraphOp::usage(  );
        }
    }
    
    ::std::string default_usage(  ) {
        return OSG::VerifyGraphOp::usage( );
    }

};

void register_VerifyGraphOp_class(){

    { //::OSG::VerifyGraphOp
        typedef bp::class_< VerifyGraphOp_wrapper, bp::bases< OSG::GraphOp >, boost::noncopyable > VerifyGraphOp_exposer_t;
        VerifyGraphOp_exposer_t VerifyGraphOp_exposer = VerifyGraphOp_exposer_t( "VerifyGraphOp", bp::no_init );
        bp::scope VerifyGraphOp_scope( VerifyGraphOp_exposer );
        { //::OSG::VerifyGraphOp::clone
        
            typedef ::OSG::GraphOpTransitPtr ( ::OSG::VerifyGraphOp::*clone_function_type )(  ) ;
            typedef ::OSG::GraphOpTransitPtr ( VerifyGraphOp_wrapper::*default_clone_function_type )(  ) ;
            
            VerifyGraphOp_exposer.def( 
                "clone"
                , clone_function_type(&::OSG::VerifyGraphOp::clone)
                , default_clone_function_type(&VerifyGraphOp_wrapper::default_clone) );
        
        }
        { //::OSG::VerifyGraphOp::create
        
            typedef ::OSG::TransitPtr< OSG::VerifyGraphOp > ( *create_function_type )( bool,bool );
            
            VerifyGraphOp_exposer.def( 
                "create"
                , create_function_type( &::OSG::VerifyGraphOp::create )
                , ( bp::arg("repair")=(bool)(true), bp::arg("verbose")=(bool)(true) ) );
        
        }
        { //::OSG::VerifyGraphOp::getClassname
        
            typedef char const * ( *getClassname_function_type )(  );
            
            VerifyGraphOp_exposer.def( 
                "getClassname"
                , getClassname_function_type( &::OSG::VerifyGraphOp::getClassname ) );
        
        }
        { //::OSG::VerifyGraphOp::setParams
        
            typedef void ( ::OSG::VerifyGraphOp::*setParams_function_type )( ::std::string const ) ;
            typedef void ( VerifyGraphOp_wrapper::*default_setParams_function_type )( ::std::string const ) ;
            
            VerifyGraphOp_exposer.def( 
                "setParams"
                , setParams_function_type(&::OSG::VerifyGraphOp::setParams)
                , default_setParams_function_type(&VerifyGraphOp_wrapper::default_setParams)
                , ( bp::arg("params") ) );
        
        }
        { //::OSG::VerifyGraphOp::setRepair
        
            typedef void ( ::OSG::VerifyGraphOp::*setRepair_function_type )( bool ) ;
            
            VerifyGraphOp_exposer.def( 
                "setRepair"
                , setRepair_function_type( &::OSG::VerifyGraphOp::setRepair )
                , ( bp::arg("repair") ) );
        
        }
        { //::OSG::VerifyGraphOp::setVerbose
        
            typedef void ( ::OSG::VerifyGraphOp::*setVerbose_function_type )( bool ) ;
            
            VerifyGraphOp_exposer.def( 
                "setVerbose"
                , setVerbose_function_type( &::OSG::VerifyGraphOp::setVerbose )
                , ( bp::arg("verbose") ) );
        
        }
        { //::OSG::VerifyGraphOp::traverse
        
            typedef bool ( ::OSG::VerifyGraphOp::*traverse_function_type )( ::OSG::Node * ) ;
            typedef bool ( VerifyGraphOp_wrapper::*default_traverse_function_type )( ::OSG::Node * ) ;
            
            VerifyGraphOp_exposer.def( 
                "traverse"
                , traverse_function_type(&::OSG::VerifyGraphOp::traverse)
                , default_traverse_function_type(&VerifyGraphOp_wrapper::default_traverse)
                , ( bp::arg("node") ) );
        
        }
        { //::OSG::VerifyGraphOp::traverseEnter
        
            typedef ::OSG::ActionBase::ResultE ( VerifyGraphOp_wrapper::*traverseEnter_function_type )( ::OSG::Node * const ) ;
            
            VerifyGraphOp_exposer.def( 
                "traverseEnter"
                , traverseEnter_function_type( &VerifyGraphOp_wrapper::default_traverseEnter )
                , ( bp::arg("node") ) );
        
        }
        { //::OSG::VerifyGraphOp::traverseLeave
        
            typedef ::OSG::ActionBase::ResultE ( VerifyGraphOp_wrapper::*traverseLeave_function_type )( ::OSG::Node * const,::OSG::ActionBase::ResultE ) ;
            
            VerifyGraphOp_exposer.def( 
                "traverseLeave"
                , traverseLeave_function_type( &VerifyGraphOp_wrapper::default_traverseLeave )
                , ( bp::arg("node"), bp::arg("res") ) );
        
        }
        { //::OSG::VerifyGraphOp::usage
        
            typedef ::std::string ( ::OSG::VerifyGraphOp::*usage_function_type )(  ) ;
            typedef ::std::string ( VerifyGraphOp_wrapper::*default_usage_function_type )(  ) ;
            
            VerifyGraphOp_exposer.def( 
                "usage"
                , usage_function_type(&::OSG::VerifyGraphOp::usage)
                , default_usage_function_type(&VerifyGraphOp_wrapper::default_usage) );
        
        }
        VerifyGraphOp_exposer.staticmethod( "create" );
        VerifyGraphOp_exposer.staticmethod( "getClassname" );
        bp::implicitly_convertible<OSG::VerifyGraphOp::ObjRefPtr, OSG::GraphOp::ObjRefPtr>();
        bp::implicitly_convertible<OSG::VerifyGraphOp::ObjTransitPtr, OSG::GraphOp::ObjRefPtr>();
        bp::implicitly_convertible<OSG::VerifyGraphOp::ObjTransitPtr, OSG::VerifyGraphOp::ObjRefPtr>();
    }

}