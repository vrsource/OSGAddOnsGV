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
#pragma GCC diagnostic warning "-Wshadow"
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
#include "RemoteAspect.pypp.hpp"

using namespace std;
namespace bp = boost::python;

namespace
{

bool invokeCallback(bp::object obj, const OSG::FieldContainer* fc,
                    OSG::RemoteAspect* ra)
{
   return bp::extract<bool>(obj(fc, ra));
}

void wrapRegisterCreated(OSG::RemoteAspect* self,
                         const OSG::FieldContainerType& type, bp::object func)
{
   self->registerCreated(type, boost::bind(invokeCallback, func, _1, _2));
}

void wrapRegisterDestroyed(OSG::RemoteAspect* self,
                           const OSG::FieldContainerType& type,
                           bp::object func)
{
   self->registerDestroyed(type, boost::bind(invokeCallback, func, _1, _2));
}

void wrapRegisterChanged(OSG::RemoteAspect* self,
                         const OSG::FieldContainerType& type, bp::object func)
{
   self->registerChanged(type, boost::bind(invokeCallback, func, _1, _2));
}

}

void register_RemoteAspect_class(){

    { //::OSG::RemoteAspect
        typedef bp::class_< OSG::RemoteAspect, boost::noncopyable > RemoteAspect_exposer_t;
        RemoteAspect_exposer_t RemoteAspect_exposer = RemoteAspect_exposer_t( "RemoteAspect", bp::init< bp::optional< OSG::UInt32 > >(( bp::arg("aspectId")=(::OSG::UInt32)(0) )) );
        bp::scope RemoteAspect_scope( RemoteAspect_exposer );
        bp::enum_< OSG::RemoteAspect::DataTypes>("DataTypes")
            .value("SYNCENDED", OSG::RemoteAspect::SYNCENDED)
            .value("CREATED", OSG::RemoteAspect::CREATED)
            .value("DESTROYED", OSG::RemoteAspect::DESTROYED)
            .value("NEWTYPE", OSG::RemoteAspect::NEWTYPE)
            .value("CHANGED", OSG::RemoteAspect::CHANGED)
            .value("ADDREFED", OSG::RemoteAspect::ADDREFED)
            .value("SUBREFED", OSG::RemoteAspect::SUBREFED)
            .value("IDMAPPING", OSG::RemoteAspect::IDMAPPING)
            .export_values()
            ;
        bp::implicitly_convertible< OSG::UInt32, OSG::RemoteAspect >();
        { //::OSG::RemoteAspect::addFieldFilter
        
            typedef void ( *addFieldFilter_function_type )( ::OSG::UInt32,::OSG::BitVector );
            
            RemoteAspect_exposer.def( 
                "addFieldFilter"
                , addFieldFilter_function_type( &::OSG::RemoteAspect::addFieldFilter )
                , ( bp::arg("typeId"), bp::arg("mask") ) );
        
        }
        { //::OSG::RemoteAspect::receiveSync
        
            typedef void ( ::OSG::RemoteAspect::*receiveSync_function_type )( ::OSG::Connection &,bool ) ;
            
            RemoteAspect_exposer.def( 
                "receiveSync"
                , receiveSync_function_type( &::OSG::RemoteAspect::receiveSync )
                , ( bp::arg("connection"), bp::arg("applyToChangelist")=(bool)(false) ) );
        
        }
        { //::OSG::RemoteAspect::sendSync
        
            typedef void ( ::OSG::RemoteAspect::*sendSync_function_type )( ::OSG::Connection &,::OSG::ChangeList * ) ;
            
            RemoteAspect_exposer.def( 
                "sendSync"
                , sendSync_function_type( &::OSG::RemoteAspect::sendSync )
                , ( bp::arg("connection"), bp::arg("changeList")=0l ) );
        
        }
        { //::OSG::RemoteAspect::setStatistics
        
            typedef void ( ::OSG::RemoteAspect::*setStatistics_function_type )( ::OSG::StatCollector * ) ;
            
            RemoteAspect_exposer.def( 
                "setStatistics"
                , setStatistics_function_type( &::OSG::RemoteAspect::setStatistics )
                , ( bp::arg("stat") ) );
        
        }
        { //::OSG::RemoteAspect::subFieldFilter
        
            typedef void ( *subFieldFilter_function_type )( ::OSG::UInt32,::OSG::BitVector );
            
            RemoteAspect_exposer.def( 
                "subFieldFilter"
                , subFieldFilter_function_type( &::OSG::RemoteAspect::subFieldFilter )
                , ( bp::arg("typeId"), bp::arg("mask") ) );
        
        }
        RemoteAspect_exposer.def_readonly( "statSyncTime", OSG::RemoteAspect::statSyncTime );
        RemoteAspect_exposer.staticmethod( "addFieldFilter" );
        RemoteAspect_exposer.staticmethod( "subFieldFilter" );
        RemoteAspect_exposer.def("registerCreated", wrapRegisterCreated, (bp::arg("type"), bp::arg("func")));
        RemoteAspect_exposer.def("registerDestroyed", wrapRegisterDestroyed, (bp::arg("type"), bp::arg("func")));
        RemoteAspect_exposer.def("registerChanged", wrapRegisterChanged, (bp::arg("type"), bp::arg("func")));
    }

}
