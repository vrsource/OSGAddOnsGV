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
#include "OSGDynamics_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "AnimTimeSensor.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_AnimTimeSensor_class(){

    { //::OSG::AnimTimeSensor
        typedef bp::class_< OSG::AnimTimeSensor, bp::bases< OSG::AnimTimeSensorBase >, OSG::AnimTimeSensor::ObjRecPtr, boost::noncopyable > AnimTimeSensor_exposer_t;
        AnimTimeSensor_exposer_t AnimTimeSensor_exposer = AnimTimeSensor_exposer_t( "AnimTimeSensor", bp::no_init );
        bp::scope AnimTimeSensor_scope( AnimTimeSensor_exposer );
        { //::OSG::AnimTimeSensor::changed
        
            typedef void ( ::OSG::AnimTimeSensor::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            AnimTimeSensor_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::AnimTimeSensor::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::AnimTimeSensor::dump
        
            typedef void ( ::OSG::AnimTimeSensor::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            AnimTimeSensor_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::AnimTimeSensor::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::AnimTimeSensor::frame
        
            typedef void ( ::OSG::AnimTimeSensor::*frame_function_type )( ::OSG::Time,::OSG::UInt32 ) ;
            
            AnimTimeSensor_exposer.def( 
                "frame"
                , frame_function_type( &::OSG::AnimTimeSensor::frame )
                , ( bp::arg("oTime"), bp::arg("uiFrame") ) );
        
        }
        pyopensg::register_transit< OSG::AnimTimeSensor >::execute();
        bp::implicitly_convertible< OSG::AnimTimeSensor::ObjRecPtr, OSG::AnimTimeSensor* >();
        bp::implicitly_convertible< OSG::AnimTimeSensor::ObjRecPtr, OSG::AnimTimeSensor::ObjCPtr >();
        bp::implicitly_convertible< OSG::AnimTimeSensor::ObjRecPtr, OSG::NodeCore* >();
        bp::implicitly_convertible< OSG::AnimTimeSensor::ObjRecPtr, OSG::NodeCore::ObjRecPtr >();
        bp::implicitly_convertible<OSG::AnimTimeSensor::ObjRecPtr, OSG::NodeCore::ObjCPtr>();
    }

}
