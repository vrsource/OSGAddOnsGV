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
#include "OSGBase_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "PerfMonitor.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct SingletonHolder_less__OSG_scope_PerfMonitorBase__greater__wrapper : OSG::SingletonHolder< OSG::PerfMonitorBase >, bp::wrapper< OSG::SingletonHolder< OSG::PerfMonitorBase > > {

    static void init(  ){
        OSG::SingletonHolder< OSG::PerfMonitorBase >::init(  );
    }

};

void register_PerfMonitor_class(){

    { //::OSG::SingletonHolder< OSG::PerfMonitorBase >
        typedef bp::class_< SingletonHolder_less__OSG_scope_PerfMonitorBase__greater__wrapper, boost::noncopyable > PerfMonitor_exposer_t;
        PerfMonitor_exposer_t PerfMonitor_exposer = PerfMonitor_exposer_t( "PerfMonitor", bp::no_init );
        bp::scope PerfMonitor_scope( PerfMonitor_exposer );
        { //::OSG::SingletonHolder< OSG::PerfMonitorBase >::destroy
        
            typedef OSG::SingletonHolder< OSG::PerfMonitorBase > exported_class_t;
            typedef bool ( *destroy_function_type )(  );
            
            PerfMonitor_exposer.def( 
                "destroy"
                , destroy_function_type( &::OSG::SingletonHolder< OSG::PerfMonitorBase >::destroy ) );
        
        }
        { //::OSG::SingletonHolder< OSG::PerfMonitorBase >::init
        
            typedef OSG::SingletonHolder< OSG::PerfMonitorBase > exported_class_t;
            typedef void ( *init_function_type )(  );
            
            PerfMonitor_exposer.def( 
                "init"
                , init_function_type( &SingletonHolder_less__OSG_scope_PerfMonitorBase__greater__wrapper::init ) );
        
        }
        { //::OSG::SingletonHolder< OSG::PerfMonitorBase >::the
        
            typedef OSG::SingletonHolder< OSG::PerfMonitorBase > exported_class_t;
            typedef ::OSG::PerfMonitorBase * ( *the_function_type )(  );
            
            PerfMonitor_exposer.def( 
                "the"
                , the_function_type( &::OSG::SingletonHolder< OSG::PerfMonitorBase >::the )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        PerfMonitor_exposer.staticmethod( "destroy" );
        PerfMonitor_exposer.staticmethod( "init" );
        PerfMonitor_exposer.staticmethod( "the" );
    }

}
