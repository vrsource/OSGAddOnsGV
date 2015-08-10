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
#include "OSGCluster_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "ClusterNetwork.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_ClusterNetwork_class(){

    { //::OSG::ClusterNetwork
        typedef bp::class_< OSG::ClusterNetwork, bp::bases< ::OSG::MemoryObject >, boost::noncopyable > ClusterNetwork_exposer_t;
        ClusterNetwork_exposer_t ClusterNetwork_exposer = ClusterNetwork_exposer_t( "ClusterNetwork", bp::no_init );
        bp::scope ClusterNetwork_scope( ClusterNetwork_exposer );
        bp::scope().attr("ALL_NODES") = (int)OSG::ClusterNetwork::ALL_NODES;
        { //::OSG::ClusterNetwork::connectAllGroupToPoint
        
            typedef void ( ::OSG::ClusterNetwork::*connectAllGroupToPoint_function_type )( ::OSG::UInt32,::std::string const & ) ;
            
            ClusterNetwork_exposer.def( 
                "connectAllGroupToPoint"
                , connectAllGroupToPoint_function_type( &::OSG::ClusterNetwork::connectAllGroupToPoint )
                , ( bp::arg("thidId"), bp::arg("connectionType") ) );
        
        }
        { //::OSG::ClusterNetwork::connectAllPointToPoint
        
            typedef void ( ::OSG::ClusterNetwork::*connectAllPointToPoint_function_type )( ::OSG::UInt32,::std::string const & ) ;
            
            ClusterNetwork_exposer.def( 
                "connectAllPointToPoint"
                , connectAllPointToPoint_function_type( &::OSG::ClusterNetwork::connectAllPointToPoint )
                , ( bp::arg("thidId"), bp::arg("connectionType") ) );
        
        }
        { //::OSG::ClusterNetwork::getAspect
        
            typedef ::OSG::RemoteAspect * ( ::OSG::ClusterNetwork::*getAspect_function_type )(  ) ;
            
            ClusterNetwork_exposer.def( 
                "getAspect"
                , getAspect_function_type( &::OSG::ClusterNetwork::getAspect )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ClusterNetwork::getConnection
        
            typedef ::OSG::Connection * ( ::OSG::ClusterNetwork::*getConnection_function_type )( ::OSG::UInt32 ) ;
            
            ClusterNetwork_exposer.def( 
                "getConnection"
                , getConnection_function_type( &::OSG::ClusterNetwork::getConnection )
                , ( bp::arg("id") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ClusterNetwork::getConnection
        
            typedef ::std::vector< OSG::Connection* > & ( ::OSG::ClusterNetwork::*getConnection_function_type )(  ) ;
            
            ClusterNetwork_exposer.def( 
                "getConnection"
                , getConnection_function_type( &::OSG::ClusterNetwork::getConnection )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ClusterNetwork::getGroupConnection
        
            typedef ::OSG::GroupConnection * ( ::OSG::ClusterNetwork::*getGroupConnection_function_type )( ::OSG::UInt32 ) ;
            
            ClusterNetwork_exposer.def( 
                "getGroupConnection"
                , getGroupConnection_function_type( &::OSG::ClusterNetwork::getGroupConnection )
                , ( bp::arg("id") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ClusterNetwork::getInstance
        
            typedef ::OSG::ClusterNetwork * ( *getInstance_function_type )( ::OSG::UInt32 );
            
            ClusterNetwork_exposer.def( 
                "getInstance"
                , getInstance_function_type( &::OSG::ClusterNetwork::getInstance )
                , ( bp::arg("ClusterWindowId") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ClusterNetwork::getMainConnection
        
            typedef ::OSG::Connection * ( ::OSG::ClusterNetwork::*getMainConnection_function_type )(  ) ;
            
            ClusterNetwork_exposer.def( 
                "getMainConnection"
                , getMainConnection_function_type( &::OSG::ClusterNetwork::getMainConnection )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ClusterNetwork::getMainGroupConnection
        
            typedef ::OSG::GroupConnection * ( ::OSG::ClusterNetwork::*getMainGroupConnection_function_type )(  ) ;
            
            ClusterNetwork_exposer.def( 
                "getMainGroupConnection"
                , getMainGroupConnection_function_type( &::OSG::ClusterNetwork::getMainGroupConnection )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ClusterNetwork::getMainPointConnection
        
            typedef ::OSG::PointConnection * ( ::OSG::ClusterNetwork::*getMainPointConnection_function_type )(  ) ;
            
            ClusterNetwork_exposer.def( 
                "getMainPointConnection"
                , getMainPointConnection_function_type( &::OSG::ClusterNetwork::getMainPointConnection )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ClusterNetwork::getPointConnection
        
            typedef ::OSG::PointConnection * ( ::OSG::ClusterNetwork::*getPointConnection_function_type )( ::OSG::UInt32 ) ;
            
            ClusterNetwork_exposer.def( 
                "getPointConnection"
                , getPointConnection_function_type( &::OSG::ClusterNetwork::getPointConnection )
                , ( bp::arg("id") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ClusterNetwork::setAspect
        
            typedef void ( ::OSG::ClusterNetwork::*setAspect_function_type )( ::OSG::RemoteAspect * ) ;
            
            ClusterNetwork_exposer.def( 
                "setAspect"
                , setAspect_function_type( &::OSG::ClusterNetwork::setAspect )
                , ( bp::arg("aspect") ) );
        
        }
        { //::OSG::ClusterNetwork::setConnection
        
            typedef void ( ::OSG::ClusterNetwork::*setConnection_function_type )( ::OSG::UInt32,::OSG::Connection * ) ;
            
            ClusterNetwork_exposer.def( 
                "setConnection"
                , setConnection_function_type( &::OSG::ClusterNetwork::setConnection )
                , ( bp::arg("id"), bp::arg("connection") ) );
        
        }
        { //::OSG::ClusterNetwork::setMainConnection
        
            typedef void ( ::OSG::ClusterNetwork::*setMainConnection_function_type )( ::OSG::Connection * ) ;
            
            ClusterNetwork_exposer.def( 
                "setMainConnection"
                , setMainConnection_function_type( &::OSG::ClusterNetwork::setMainConnection )
                , ( bp::arg("connection") ) );
        
        }
        ClusterNetwork_exposer.staticmethod( "getInstance" );
    }

}
