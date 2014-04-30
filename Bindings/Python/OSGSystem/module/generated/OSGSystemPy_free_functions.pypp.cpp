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
#include "OSGSystem_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "OSGSystemPy_free_functions.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_free_functions(){

    { //::OSG::drawVolume
    
        typedef void ( *drawVolume_function_type )( ::OSG::CylinderVolume const & );
        
        bp::def( 
            "drawVolume"
            , drawVolume_function_type( &::OSG::drawVolume )
            , ( bp::arg("volume") ) );
    
    }

    { //::OSG::drawVolume
    
        typedef void ( *drawVolume_function_type )( ::OSG::FrustumVolume const & );
        
        bp::def( 
            "drawVolume"
            , drawVolume_function_type( &::OSG::drawVolume )
            , ( bp::arg("volume") ) );
    
    }

    { //::OSG::drawVolume
    
        typedef void ( *drawVolume_function_type )( ::OSG::SphereVolume const & );
        
        bp::def( 
            "drawVolume"
            , drawVolume_function_type( &::OSG::drawVolume )
            , ( bp::arg("volume") ) );
    
    }

    { //::OSG::drawVolume
    
        typedef void ( *drawVolume_function_type )( ::OSG::BoxVolume const & );
        
        bp::def( 
            "drawVolume"
            , drawVolume_function_type( &::OSG::drawVolume )
            , ( bp::arg("volume") ) );
    
    }

    { //::OSG::drawVolume
    
        typedef void ( *drawVolume_function_type )( ::OSG::Volume const & );
        
        bp::def( 
            "drawVolume"
            , drawVolume_function_type( &::OSG::drawVolume )
            , ( bp::arg("volume") ) );
    
    }

    { //::OSG::getDefaultMaterial
    
        typedef ::OSG::PrimeMaterial * ( *getDefaultMaterial_function_type )(  );
        
        bp::def( 
            "getDefaultMaterial"
            , getDefaultMaterial_function_type( &::OSG::getDefaultMaterial )
            , bp::return_value_policy< bp::reference_existing_object >() );
    
    }

    { //::OSG::getDefaultUnlitMaterial
    
        typedef ::OSG::PrimeMaterial * ( *getDefaultUnlitMaterial_function_type )(  );
        
        bp::def( 
            "getDefaultUnlitMaterial"
            , getDefaultUnlitMaterial_function_type( &::OSG::getDefaultUnlitMaterial )
            , bp::return_value_policy< bp::reference_existing_object >() );
    
    }

    { //::OSG::stringAttributeMap
    
        typedef ::OSG::StringAttributeMapTransitPtr ( *stringAttributeMap_function_type )( ::OSG::AttachmentContainer * );
        
        bp::def( 
            "stringAttributeMap"
            , stringAttributeMap_function_type( &::OSG::stringAttributeMap )
            , ( bp::arg("container") ) );
    
    }

}
