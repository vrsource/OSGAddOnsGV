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
#include "OSGDynamics_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "SkinnedGeometry.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_SkinnedGeometry_class(){

    { //::OSG::SkinnedGeometry
        typedef bp::class_< OSG::SkinnedGeometry, bp::bases< OSG::SkinnedGeometryBase >, OSG::SkinnedGeometry::ObjRecPtr, boost::noncopyable > SkinnedGeometry_exposer_t;
        SkinnedGeometry_exposer_t SkinnedGeometry_exposer = SkinnedGeometry_exposer_t( "SkinnedGeometry", bp::no_init );
        bp::scope SkinnedGeometry_scope( SkinnedGeometry_exposer );
        bp::enum_< OSG::SkinnedGeometry::RenderModeE>("RenderModeE")
            .value("RMUnskinned", OSG::SkinnedGeometry::RMUnskinned)
            .value("RMSkeleton", OSG::SkinnedGeometry::RMSkeleton)
            .value("RMSkinnedCPU", OSG::SkinnedGeometry::RMSkinnedCPU)
            .value("RMSkinnedGPU", OSG::SkinnedGeometry::RMSkinnedGPU)
            .export_values()
            ;
        { //::OSG::SkinnedGeometry::adjustVolume
        
            typedef void ( ::OSG::SkinnedGeometry::*adjustVolume_function_type )( ::OSG::Volume & ) ;
            
            SkinnedGeometry_exposer.def( 
                "adjustVolume"
                , adjustVolume_function_type( &::OSG::SkinnedGeometry::adjustVolume )
                , ( bp::arg("volume") ) );
        
        }
        { //::OSG::SkinnedGeometry::animBindEnter
        
            typedef ::OSG::ActionBase::ResultE ( ::OSG::SkinnedGeometry::*animBindEnter_function_type )( ::OSG::Action * ) ;
            
            SkinnedGeometry_exposer.def( 
                "animBindEnter"
                , animBindEnter_function_type( &::OSG::SkinnedGeometry::animBindEnter )
                , ( bp::arg("action") ) );
        
        }
        { //::OSG::SkinnedGeometry::changed
        
            typedef void ( ::OSG::SkinnedGeometry::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            SkinnedGeometry_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::SkinnedGeometry::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::SkinnedGeometry::dump
        
            typedef void ( ::OSG::SkinnedGeometry::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            SkinnedGeometry_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::SkinnedGeometry::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::SkinnedGeometry::fill
        
            typedef void ( ::OSG::SkinnedGeometry::*fill_function_type )( ::OSG::DrawableStatsAttachment * ) ;
            
            SkinnedGeometry_exposer.def( 
                "fill"
                , fill_function_type( &::OSG::SkinnedGeometry::fill )
                , ( bp::arg("drawStats") ) );
        
        }
        { //::OSG::SkinnedGeometry::intersectEnter
        
            typedef ::OSG::ActionBase::ResultE ( ::OSG::SkinnedGeometry::*intersectEnter_function_type )( ::OSG::Action * ) ;
            
            SkinnedGeometry_exposer.def( 
                "intersectEnter"
                , intersectEnter_function_type( &::OSG::SkinnedGeometry::intersectEnter )
                , ( bp::arg("action") ) );
        
        }
        { //::OSG::SkinnedGeometry::renderEnter
        
            typedef ::OSG::ActionBase::ResultE ( ::OSG::SkinnedGeometry::*renderEnter_function_type )( ::OSG::Action * ) ;
            
            SkinnedGeometry_exposer.def( 
                "renderEnter"
                , renderEnter_function_type( &::OSG::SkinnedGeometry::renderEnter )
                , ( bp::arg("action") ) );
        
        }
        { //::OSG::SkinnedGeometry::renderLeave
        
            typedef ::OSG::ActionBase::ResultE ( ::OSG::SkinnedGeometry::*renderLeave_function_type )( ::OSG::Action * ) ;
            
            SkinnedGeometry_exposer.def( 
                "renderLeave"
                , renderLeave_function_type( &::OSG::SkinnedGeometry::renderLeave )
                , ( bp::arg("action") ) );
        
        }
        pyopensg::register_transit< OSG::SkinnedGeometry >::execute();
        bp::implicitly_convertible< OSG::SkinnedGeometry::ObjRecPtr, OSG::SkinnedGeometry* >();
        bp::implicitly_convertible< OSG::SkinnedGeometry::ObjRecPtr, OSG::SkinnedGeometry::ObjCPtr >();
        bp::implicitly_convertible< OSG::SkinnedGeometry::ObjRecPtr, OSG::Geometry* >();
        bp::implicitly_convertible< OSG::SkinnedGeometry::ObjRecPtr, OSG::Geometry::ObjRecPtr >();
        bp::implicitly_convertible<OSG::SkinnedGeometry::ObjRecPtr, OSG::Geometry::ObjCPtr>();
    }

}
