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
#include "OSGContribCSM_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "DeviceInterfaceSensor.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct DeviceInterfaceSensor_wrapper : OSG::DeviceInterfaceSensor, bp::wrapper< OSG::DeviceInterfaceSensor > {

    virtual void frame( ::OSG::Time oTime, ::OSG::UInt32 uiFrame ){
        bp::override func_frame = this->get_override( "frame" );
        func_frame( oTime, uiFrame );
    }

};

void register_DeviceInterfaceSensor_class(){

    { //::OSG::DeviceInterfaceSensor
        typedef bp::class_< DeviceInterfaceSensor_wrapper, bp::bases< OSG::DeviceInterfaceSensorBase >, boost::noncopyable > DeviceInterfaceSensor_exposer_t;
        DeviceInterfaceSensor_exposer_t DeviceInterfaceSensor_exposer = DeviceInterfaceSensor_exposer_t( "DeviceInterfaceSensor", bp::no_init );
        bp::scope DeviceInterfaceSensor_scope( DeviceInterfaceSensor_exposer );
        { //::OSG::DeviceInterfaceSensor::changed
        
            typedef void ( ::OSG::DeviceInterfaceSensor::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            DeviceInterfaceSensor_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::DeviceInterfaceSensor::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::DeviceInterfaceSensor::dump
        
            typedef void ( ::OSG::DeviceInterfaceSensor::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            DeviceInterfaceSensor_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::DeviceInterfaceSensor::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::DeviceInterfaceSensor::init
        
            typedef bool ( ::OSG::DeviceInterfaceSensor::*init_function_type )(  ) ;
            
            DeviceInterfaceSensor_exposer.def( 
                "init"
                , init_function_type( &::OSG::DeviceInterfaceSensor::init ) );
        
        }
        { //::OSG::DeviceInterfaceSensor::shutdown
        
            typedef void ( ::OSG::DeviceInterfaceSensor::*shutdown_function_type )(  ) ;
            
            DeviceInterfaceSensor_exposer.def( 
                "shutdown"
                , shutdown_function_type( &::OSG::DeviceInterfaceSensor::shutdown ) );
        
        }
        { //::OSG::FrameTaskInterface::frame
        
            typedef void ( ::OSG::FrameTaskInterface::*frame_function_type )( ::OSG::Time,::OSG::UInt32 ) ;
            
            DeviceInterfaceSensor_exposer.def( 
                "frame"
                , bp::pure_virtual( frame_function_type(&::OSG::FrameTaskInterface::frame) )
                , ( bp::arg("oTime"), bp::arg("uiFrame") ) );
        
        }
        pyopensg::register_transit< OSG::DeviceInterfaceSensor >::execute();
        bp::register_ptr_to_python< OSG::DeviceInterfaceSensor::ObjRecPtr >();
        bp::implicitly_convertible< OSG::DeviceInterfaceSensor::ObjRecPtr, OSG::DeviceInterfaceSensor* >();
        bp::implicitly_convertible< OSG::DeviceInterfaceSensor::ObjRecPtr, OSG::DeviceInterfaceSensor::ObjCPtr >();
        bp::implicitly_convertible< OSG::DeviceInterfaceSensor::ObjRecPtr, OSG::NodeCore* >();
        bp::implicitly_convertible< OSG::DeviceInterfaceSensor::ObjRecPtr, OSG::NodeCore::ObjRecPtr >();
        bp::implicitly_convertible<OSG::DeviceInterfaceSensor::ObjRecPtr, OSG::NodeCore::ObjCPtr>();
    }

}
