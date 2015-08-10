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
#include "__convenience.pypp.hpp"
#include "__call_policies.pypp.hpp"
#include "OSGBase_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "Plane.pypp.hpp"

using namespace std;
namespace bp = boost::python;

static boost::python::tuple intersect_1ae0b3229395ec6fea05959d6e1004c7( ::OSG::Plane const & inst, ::OSG::Plane const & pl ){
    OSG::Line intersection2;
    bool result = inst.intersect(pl, intersection2);
    return bp::make_tuple( result, intersection2 );
}

static boost::python::tuple intersect_422b4819a67dd604f95a289c2a33664b( ::OSG::Plane const & inst, ::OSG::Line const & l ){
    OSG::Point<float, 3u> intersection2;
    bool result = inst.intersect(l, intersection2);
    return bp::make_tuple( result, intersection2 );
}

static boost::python::tuple intersect_b2ddef634f93d137b320d331bba0a7e9( ::OSG::Plane const & inst, ::OSG::Line const & l ){
    float t2;
    bool result = inst.intersect(l, t2);
    return bp::make_tuple( result, t2 );
}

static boost::python::tuple intersectInfinite_ecf75f482cf72f5bb06e2f48caedf6ea( ::OSG::Plane const & inst, ::OSG::Line const & l ){
    float t2;
    bool result = inst.intersectInfinite(l, t2);
    return bp::make_tuple( result, t2 );
}

static boost::python::tuple intersectInfinite_6a2ff5d33bbc8765b45604a87b32cb50( ::OSG::Plane const & inst, ::OSG::Line const & l ){
    OSG::Point<float, 3u> intersection2;
    bool result = inst.intersectInfinite(l, intersection2);
    return bp::make_tuple( result, intersection2 );
}

void register_Plane_class(){

    { //::OSG::Plane
        typedef bp::class_< OSG::Plane > Plane_exposer_t;
        Plane_exposer_t Plane_exposer = Plane_exposer_t( "Plane", bp::init< >() );
        bp::scope Plane_scope( Plane_exposer );
        Plane_exposer.def( bp::init< OSG::Plane const & >(( bp::arg("obj") )) );
        Plane_exposer.def( bp::init< OSG::Pnt3f const &, OSG::Pnt3f const &, OSG::Pnt3f const & >(( bp::arg("p0"), bp::arg("p1"), bp::arg("p2") )) );
        Plane_exposer.def( bp::init< OSG::Vec3f const &, OSG::Real32 >(( bp::arg("n"), bp::arg("d") )) );
        Plane_exposer.def( bp::init< OSG::Vec3f const &, OSG::Pnt3f const & >(( bp::arg("n"), bp::arg("p") )) );
        { //::OSG::Plane::clip
        
            typedef int ( ::OSG::Plane::*clip_function_type )( ::OSG::Pnt3f *,::OSG::Pnt3f *,int ) const;
            
            Plane_exposer.def( 
                "clip"
                , clip_function_type( &::OSG::Plane::clip )
                , ( bp::arg("polyIn"), bp::arg("polyOut"), bp::arg("count") ) );
        
        }
        { //::OSG::Plane::distance
        
            typedef ::OSG::Real32 ( ::OSG::Plane::*distance_function_type )( ::OSG::Pnt3f const & ) const;
            
            Plane_exposer.def( 
                "distance"
                , distance_function_type( &::OSG::Plane::distance )
                , ( bp::arg("pnt") ) );
        
        }
        { //::OSG::Plane::getDistanceFromOrigin
        
            typedef ::OSG::Real32 ( ::OSG::Plane::*getDistanceFromOrigin_function_type )(  ) const;
            
            Plane_exposer.def( 
                "getDistanceFromOrigin"
                , getDistanceFromOrigin_function_type( &::OSG::Plane::getDistanceFromOrigin ) );
        
        }
        { //::OSG::Plane::getNormal
        
            typedef ::OSG::Vec3f const & ( ::OSG::Plane::*getNormal_function_type )(  ) const;
            
            Plane_exposer.def( 
                "getNormal"
                , getNormal_function_type( &::OSG::Plane::getNormal )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::Plane::intersect
        
            typedef boost::python::tuple ( *intersect_function_type )( ::OSG::Plane const &,::OSG::Plane const & );
            
            Plane_exposer.def( 
                "intersect"
                , intersect_function_type( &intersect_1ae0b3229395ec6fea05959d6e1004c7 )
                , ( bp::arg("inst"), bp::arg("pl") ) );
        
        }
        { //::OSG::Plane::intersect
        
            typedef boost::python::tuple ( *intersect_function_type )( ::OSG::Plane const &,::OSG::Line const & );
            
            Plane_exposer.def( 
                "intersect"
                , intersect_function_type( &intersect_422b4819a67dd604f95a289c2a33664b )
                , ( bp::arg("inst"), bp::arg("l") ) );
        
        }
        { //::OSG::Plane::intersect
        
            typedef boost::python::tuple ( *intersect_function_type )( ::OSG::Plane const &,::OSG::Line const & );
            
            Plane_exposer.def( 
                "intersect"
                , intersect_function_type( &intersect_b2ddef634f93d137b320d331bba0a7e9 )
                , ( bp::arg("inst"), bp::arg("l") ) );
        
        }
        { //::OSG::Plane::intersectInfinite
        
            typedef boost::python::tuple ( *intersectInfinite_function_type )( ::OSG::Plane const &,::OSG::Line const & );
            
            Plane_exposer.def( 
                "intersectInfinite"
                , intersectInfinite_function_type( &intersectInfinite_ecf75f482cf72f5bb06e2f48caedf6ea )
                , ( bp::arg("inst"), bp::arg("l") ) );
        
        }
        { //::OSG::Plane::intersectInfinite
        
            typedef boost::python::tuple ( *intersectInfinite_function_type )( ::OSG::Plane const &,::OSG::Line const & );
            
            Plane_exposer.def( 
                "intersectInfinite"
                , intersectInfinite_function_type( &intersectInfinite_6a2ff5d33bbc8765b45604a87b32cb50 )
                , ( bp::arg("inst"), bp::arg("l") ) );
        
        }
        { //::OSG::Plane::isInHalfSpace
        
            typedef bool ( ::OSG::Plane::*isInHalfSpace_function_type )( ::OSG::Pnt3f const & ) const;
            
            Plane_exposer.def( 
                "isInHalfSpace"
                , isInHalfSpace_function_type( &::OSG::Plane::isInHalfSpace )
                , ( bp::arg("point") ) );
        
        }
        { //::OSG::Plane::isInHalfSpace
        
            typedef bool ( ::OSG::Plane::*isInHalfSpace_function_type )( ::OSG::Pnt3f const &,::OSG::Pnt3f const & ) const;
            
            Plane_exposer.def( 
                "isInHalfSpace"
                , isInHalfSpace_function_type( &::OSG::Plane::isInHalfSpace )
                , ( bp::arg("min"), bp::arg("max") ) );
        
        }
        { //::OSG::Plane::isOnPlane
        
            typedef bool ( ::OSG::Plane::*isOnPlane_function_type )( ::OSG::Pnt3f const & ) const;
            
            Plane_exposer.def( 
                "isOnPlane"
                , isOnPlane_function_type( &::OSG::Plane::isOnPlane )
                , ( bp::arg("point") ) );
        
        }
        { //::OSG::Plane::isOutHalfSpace
        
            typedef bool ( ::OSG::Plane::*isOutHalfSpace_function_type )( ::OSG::Pnt3f const &,::OSG::Pnt3f const & ) const;
            
            Plane_exposer.def( 
                "isOutHalfSpace"
                , isOutHalfSpace_function_type( &::OSG::Plane::isOutHalfSpace )
                , ( bp::arg("min"), bp::arg("max") ) );
        
        }
        { //::OSG::Plane::offset
        
            typedef void ( ::OSG::Plane::*offset_function_type )( ::OSG::Real32 ) ;
            
            Plane_exposer.def( 
                "offset"
                , offset_function_type( &::OSG::Plane::offset )
                , ( bp::arg("d") ) );
        
        }
        Plane_exposer.def( bp::self != bp::self );
        Plane_exposer.def( bp::self == bp::self );
        { //::OSG::Plane::set
        
            typedef void ( ::OSG::Plane::*set_function_type )( ::OSG::Vec3f const &,::OSG::Real32 ) ;
            
            Plane_exposer.def( 
                "set"
                , set_function_type( &::OSG::Plane::set )
                , ( bp::arg("normal"), bp::arg("distance") ) );
        
        }
        { //::OSG::Plane::set
        
            typedef void ( ::OSG::Plane::*set_function_type )( ::OSG::Real32,::OSG::Real32,::OSG::Real32,::OSG::Real32 ) ;
            
            Plane_exposer.def( 
                "set"
                , set_function_type( &::OSG::Plane::set )
                , ( bp::arg("x"), bp::arg("y"), bp::arg("z"), bp::arg("distance") ) );
        
        }
        { //::OSG::Plane::set
        
            typedef void ( ::OSG::Plane::*set_function_type )( ::OSG::Vec4f const & ) ;
            
            Plane_exposer.def( 
                "set"
                , set_function_type( &::OSG::Plane::set )
                , ( bp::arg("plane") ) );
        
        }
        { //::OSG::Plane::setDirectionIndexPoint
        
            typedef void ( ::OSG::Plane::*setDirectionIndexPoint_function_type )( ::OSG::Pnt3f const &,::OSG::Pnt3f const &,::OSG::UInt8 const,::OSG::Pnt3f & ) const;
            
            Plane_exposer.def( 
                "setDirectionIndexPoint"
                , setDirectionIndexPoint_function_type( &::OSG::Plane::setDirectionIndexPoint )
                , ( bp::arg("min"), bp::arg("max"), bp::arg("index"), bp::arg("pnt") ) );
        
        }
        { //::OSG::Plane::transform
        
            typedef void ( ::OSG::Plane::*transform_function_type )( ::OSG::Matrix const & ) ;
            
            Plane_exposer.def( 
                "transform"
                , transform_function_type( &::OSG::Plane::transform )
                , ( bp::arg("matrix") ) );
        
        }
    }

}
