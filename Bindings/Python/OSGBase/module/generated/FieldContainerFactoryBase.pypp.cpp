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
#include "OSGBase_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "FieldContainerFactoryBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_FieldContainerFactoryBase_class(){

    { //::OSG::FieldContainerFactoryBase
        typedef bp::class_< OSG::FieldContainerFactoryBase, boost::noncopyable > FieldContainerFactoryBase_exposer_t;
        FieldContainerFactoryBase_exposer_t FieldContainerFactoryBase_exposer = FieldContainerFactoryBase_exposer_t( "FieldContainerFactoryBase", bp::no_init );
        bp::scope FieldContainerFactoryBase_scope( FieldContainerFactoryBase_exposer );
        { //::OSG::FieldContainerFactoryBase::begin
        
            typedef ::OSG::DerivedFieldContainerTypeIterator ( ::OSG::FieldContainerFactoryBase::*begin_function_type )( ::OSG::FieldContainerType const & ) ;
            
            FieldContainerFactoryBase_exposer.def( 
                "begin"
                , begin_function_type( &::OSG::FieldContainerFactoryBase::begin )
                , ( bp::arg("oRef") ) );
        
        }
        { //::OSG::FieldContainerFactoryBase::deregisterContainer
        
            typedef bool ( ::OSG::FieldContainerFactoryBase::*deregisterContainer_function_type )( ::OSG::UInt32 const ) ;
            
            FieldContainerFactoryBase_exposer.def( 
                "deregisterContainer"
                , deregisterContainer_function_type( &::OSG::FieldContainerFactoryBase::deregisterContainer )
                , ( bp::arg("uiContainerId") ) );
        
        }
        { //::OSG::FieldContainerFactoryBase::dump
        
            typedef void ( ::OSG::FieldContainerFactoryBase::*dump_function_type )(  ) ;
            
            FieldContainerFactoryBase_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::FieldContainerFactoryBase::dump ) );
        
        }
        { //::OSG::FieldContainerFactoryBase::end
        
            typedef ::OSG::DerivedFieldContainerTypeIterator ( ::OSG::FieldContainerFactoryBase::*end_function_type )(  ) ;
            
            FieldContainerFactoryBase_exposer.def( 
                "end"
                , end_function_type( &::OSG::FieldContainerFactoryBase::end ) );
        
        }
        { //::OSG::FieldContainerFactoryBase::findContainer
        
            typedef ::OSG::Int32 ( ::OSG::FieldContainerFactoryBase::*findContainer_function_type )( ::OSG::FieldContainer * ) const;
            
            FieldContainerFactoryBase_exposer.def( 
                "findContainer"
                , findContainer_function_type( &::OSG::FieldContainerFactoryBase::findContainer )
                , ( bp::arg("ptr") ) );
        
        }
        { //::OSG::FieldContainerFactoryBase::getContainer
        
            typedef ::OSG::FieldContainer * ( ::OSG::FieldContainerFactoryBase::*getContainer_function_type )( ::OSG::UInt32 ) const;
            
            FieldContainerFactoryBase_exposer.def( 
                "getContainer"
                , getContainer_function_type( &::OSG::FieldContainerFactoryBase::getContainer )
                , ( bp::arg("uiContainerId") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FieldContainerFactoryBase::getContainerHandler
        
            typedef ::OSG::AspectStoreP ( ::OSG::FieldContainerFactoryBase::*getContainerHandler_function_type )( ::OSG::UInt32 ) const;
            
            FieldContainerFactoryBase_exposer.def( 
                "getContainerHandler"
                , getContainerHandler_function_type( &::OSG::FieldContainerFactoryBase::getContainerHandler )
                , ( bp::arg("uiContainerId") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FieldContainerFactoryBase::getMappedContainer
        
            typedef ::OSG::FieldContainer * ( ::OSG::FieldContainerFactoryBase::*getMappedContainer_function_type )( ::OSG::UInt32 ) const;
            
            FieldContainerFactoryBase_exposer.def( 
                "getMappedContainer"
                , getMappedContainer_function_type( &::OSG::FieldContainerFactoryBase::getMappedContainer )
                , ( bp::arg("uiContainerId") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FieldContainerFactoryBase::getNumLiveContainers
        
            typedef ::OSG::SizeT ( ::OSG::FieldContainerFactoryBase::*getNumLiveContainers_function_type )(  ) const;
            
            FieldContainerFactoryBase_exposer.def( 
                "getNumLiveContainers"
                , getNumLiveContainers_function_type( &::OSG::FieldContainerFactoryBase::getNumLiveContainers ) );
        
        }
        { //::OSG::FieldContainerFactoryBase::getNumTotalContainers
        
            typedef ::OSG::SizeT ( ::OSG::FieldContainerFactoryBase::*getNumTotalContainers_function_type )(  ) const;
            
            FieldContainerFactoryBase_exposer.def( 
                "getNumTotalContainers"
                , getNumTotalContainers_function_type( &::OSG::FieldContainerFactoryBase::getNumTotalContainers ) );
        
        }
        { //::OSG::FieldContainerFactoryBase::lockStore
        
            typedef void ( ::OSG::FieldContainerFactoryBase::*lockStore_function_type )(  ) ;
            
            FieldContainerFactoryBase_exposer.def( 
                "lockStore"
                , lockStore_function_type( &::OSG::FieldContainerFactoryBase::lockStore ) );
        
        }
        { //::OSG::FieldContainerFactoryBase::registerContainer
        
            typedef ::OSG::UInt32 ( ::OSG::FieldContainerFactoryBase::*registerContainer_function_type )( ::OSG::FieldContainer * const & ) ;
            
            FieldContainerFactoryBase_exposer.def( 
                "registerContainer"
                , registerContainer_function_type( &::OSG::FieldContainerFactoryBase::registerContainer )
                , ( bp::arg("pContainer") ) );
        
        }
        { //::OSG::FieldContainerFactoryBase::setMapper
        
            typedef void ( ::OSG::FieldContainerFactoryBase::*setMapper_function_type )( ::OSG::ContainerIdMapper * ) ;
            
            FieldContainerFactoryBase_exposer.def( 
                "setMapper"
                , setMapper_function_type( &::OSG::FieldContainerFactoryBase::setMapper )
                , ( bp::arg("pMapper") ) );
        
        }
        { //::OSG::FieldContainerFactoryBase::unlockStore
        
            typedef void ( ::OSG::FieldContainerFactoryBase::*unlockStore_function_type )(  ) ;
            
            FieldContainerFactoryBase_exposer.def( 
                "unlockStore"
                , unlockStore_function_type( &::OSG::FieldContainerFactoryBase::unlockStore ) );
        
        }
    }

}
