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
#include "OSGContribCSM_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "TransformationInterfaceSensor.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_TransformationInterfaceSensor_class(){

    { //::OSG::TransformationInterfaceSensor
        typedef bp::class_< OSG::TransformationInterfaceSensor, bp::bases< OSG::TransformationInterfaceSensorBase >, OSG::TransformationInterfaceSensor::ObjRecPtr, boost::noncopyable > TransformationInterfaceSensor_exposer_t;
        TransformationInterfaceSensor_exposer_t TransformationInterfaceSensor_exposer = TransformationInterfaceSensor_exposer_t( "TransformationInterfaceSensor", bp::no_init );
        bp::scope TransformationInterfaceSensor_scope( TransformationInterfaceSensor_exposer );
        { //::OSG::TransformationInterfaceSensor::changed
        
            typedef void ( ::OSG::TransformationInterfaceSensor::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            TransformationInterfaceSensor_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::TransformationInterfaceSensor::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::TransformationInterfaceSensor::dump
        
            typedef void ( ::OSG::TransformationInterfaceSensor::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            TransformationInterfaceSensor_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::TransformationInterfaceSensor::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::TransformationInterfaceSensor::frame
        
            typedef void ( ::OSG::TransformationInterfaceSensor::*frame_function_type )( ::OSG::Time,::OSG::UInt32 ) ;
            
            TransformationInterfaceSensor_exposer.def( 
                "frame"
                , frame_function_type( &::OSG::TransformationInterfaceSensor::frame )
                , ( bp::arg("oTime"), bp::arg("uiFrame") ) );
        
        }
        { //::OSG::TransformationInterfaceSensor::init
        
            typedef bool ( ::OSG::TransformationInterfaceSensor::*init_function_type )(  ) ;
            
            TransformationInterfaceSensor_exposer.def( 
                "init"
                , init_function_type( &::OSG::TransformationInterfaceSensor::init ) );
        
        }
        { //::OSG::TransformationInterfaceSensor::shutdown
        
            typedef void ( ::OSG::TransformationInterfaceSensor::*shutdown_function_type )(  ) ;
            
            TransformationInterfaceSensor_exposer.def( 
                "shutdown"
                , shutdown_function_type( &::OSG::TransformationInterfaceSensor::shutdown ) );
        
        }
        pyopensg::register_transit< OSG::TransformationInterfaceSensor >::execute();
        bp::implicitly_convertible< OSG::TransformationInterfaceSensor::ObjRecPtr, OSG::TransformationInterfaceSensor* >();
        bp::implicitly_convertible< OSG::TransformationInterfaceSensor::ObjRecPtr, OSG::TransformationInterfaceSensor::ObjCPtr >();
        bp::implicitly_convertible< OSG::TransformationInterfaceSensor::ObjRecPtr, OSG::DeviceInterfaceSensor* >();
        bp::implicitly_convertible< OSG::TransformationInterfaceSensor::ObjRecPtr, OSG::DeviceInterfaceSensor::ObjRecPtr >();
        bp::implicitly_convertible<OSG::TransformationInterfaceSensor::ObjRecPtr, OSG::DeviceInterfaceSensor::ObjCPtr>();
    }

}
