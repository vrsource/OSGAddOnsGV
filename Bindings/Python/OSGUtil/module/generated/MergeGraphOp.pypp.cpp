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
#include "MergeGraphOp.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct MergeGraphOp_wrapper : OSG::MergeGraphOp, bp::wrapper< OSG::MergeGraphOp > {

    virtual ::OSG::GraphOpTransitPtr clone(  ) {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone(  );
        else{
            return this->OSG::MergeGraphOp::clone(  );
        }
    }
    
    ::OSG::GraphOpTransitPtr default_clone(  ) {
        return OSG::MergeGraphOp::clone( );
    }

    virtual void setParams( ::std::string const params ) {
        if( bp::override func_setParams = this->get_override( "setParams" ) )
            func_setParams( params );
        else{
            this->OSG::MergeGraphOp::setParams( params );
        }
    }
    
    void default_setParams( ::std::string const params ) {
        OSG::MergeGraphOp::setParams( params );
    }

    virtual bool traverse( ::OSG::Node * node ) {
        if( bp::override func_traverse = this->get_override( "traverse" ) )
            return func_traverse( boost::python::ptr(node) );
        else{
            return this->OSG::MergeGraphOp::traverse( boost::python::ptr(node) );
        }
    }
    
    bool default_traverse( ::OSG::Node * node ) {
        return OSG::MergeGraphOp::traverse( boost::python::ptr(node) );
    }

};

void register_MergeGraphOp_class(){

    { //::OSG::MergeGraphOp
        typedef bp::class_< MergeGraphOp_wrapper, bp::bases< OSG::GraphOp >, boost::noncopyable > MergeGraphOp_exposer_t;
        MergeGraphOp_exposer_t MergeGraphOp_exposer = MergeGraphOp_exposer_t( "MergeGraphOp", bp::no_init );
        bp::scope MergeGraphOp_scope( MergeGraphOp_exposer );
        { //::OSG::MergeGraphOp::clone
        
            typedef ::OSG::GraphOpTransitPtr ( ::OSG::MergeGraphOp::*clone_function_type )(  ) ;
            typedef ::OSG::GraphOpTransitPtr ( MergeGraphOp_wrapper::*default_clone_function_type )(  ) ;
            
            MergeGraphOp_exposer.def( 
                "clone"
                , clone_function_type(&::OSG::MergeGraphOp::clone)
                , default_clone_function_type(&MergeGraphOp_wrapper::default_clone) );
        
        }
        { //::OSG::MergeGraphOp::create
        
            typedef ::OSG::TransitPtr< OSG::MergeGraphOp > ( *create_function_type )(  );
            
            MergeGraphOp_exposer.def( 
                "create"
                , create_function_type( &::OSG::MergeGraphOp::create ) );
        
        }
        { //::OSG::MergeGraphOp::getClassname
        
            typedef char const * ( *getClassname_function_type )(  );
            
            MergeGraphOp_exposer.def( 
                "getClassname"
                , getClassname_function_type( &::OSG::MergeGraphOp::getClassname ) );
        
        }
        { //::OSG::MergeGraphOp::setParams
        
            typedef void ( ::OSG::MergeGraphOp::*setParams_function_type )( ::std::string const ) ;
            typedef void ( MergeGraphOp_wrapper::*default_setParams_function_type )( ::std::string const ) ;
            
            MergeGraphOp_exposer.def( 
                "setParams"
                , setParams_function_type(&::OSG::MergeGraphOp::setParams)
                , default_setParams_function_type(&MergeGraphOp_wrapper::default_setParams)
                , ( bp::arg("params") ) );
        
        }
        { //::OSG::MergeGraphOp::traverse
        
            typedef bool ( ::OSG::MergeGraphOp::*traverse_function_type )( ::OSG::Node * ) ;
            typedef bool ( MergeGraphOp_wrapper::*default_traverse_function_type )( ::OSG::Node * ) ;
            
            MergeGraphOp_exposer.def( 
                "traverse"
                , traverse_function_type(&::OSG::MergeGraphOp::traverse)
                , default_traverse_function_type(&MergeGraphOp_wrapper::default_traverse)
                , ( bp::arg("node") ) );
        
        }
        MergeGraphOp_exposer.staticmethod( "create" );
        MergeGraphOp_exposer.staticmethod( "getClassname" );
        bp::implicitly_convertible<OSG::MergeGraphOp::ObjRefPtr, OSG::GraphOp::ObjRefPtr>();
        bp::implicitly_convertible<OSG::MergeGraphOp::ObjTransitPtr, OSG::GraphOp::ObjRefPtr>();
        bp::implicitly_convertible<OSG::MergeGraphOp::ObjTransitPtr, OSG::MergeGraphOp::ObjRefPtr>();
    }

}
