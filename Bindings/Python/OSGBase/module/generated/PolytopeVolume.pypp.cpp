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
#include "PolytopeVolume.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_PolytopeVolume_class(){

    { //::OSG::PolytopeVolume
        typedef bp::class_< OSG::PolytopeVolume, bp::bases< OSG::Volume > > PolytopeVolume_exposer_t;
        PolytopeVolume_exposer_t PolytopeVolume_exposer = PolytopeVolume_exposer_t( "PolytopeVolume", bp::init< >() );
        bp::scope PolytopeVolume_scope( PolytopeVolume_exposer );
        PolytopeVolume_exposer.def( bp::init< OSG::UInt16 const & >(( bp::arg("s") )) );
        bp::implicitly_convertible< OSG::UInt16 const &, OSG::PolytopeVolume >();
        PolytopeVolume_exposer.def( bp::init< OSG::PolytopeVolume const & >(( bp::arg("obj") )) );
        { //::OSG::PolytopeVolume::dump
        
            typedef void ( ::OSG::PolytopeVolume::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            PolytopeVolume_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::PolytopeVolume::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::PolytopeVolume::extendBy
        
            typedef void ( ::OSG::PolytopeVolume::*extendBy_function_type )( ::OSG::Pnt3f const & ) ;
            
            PolytopeVolume_exposer.def( 
                "extendBy"
                , extendBy_function_type( &::OSG::PolytopeVolume::extendBy )
                , ( bp::arg("pt") ) );
        
        }
        { //::OSG::PolytopeVolume::extendBy
        
            typedef void ( ::OSG::PolytopeVolume::*extendBy_function_type )( ::OSG::Volume const & ) ;
            
            PolytopeVolume_exposer.def( 
                "extendBy"
                , extendBy_function_type( &::OSG::PolytopeVolume::extendBy )
                , ( bp::arg("volume") ) );
        
        }
        { //::OSG::PolytopeVolume::extendBy
        
            typedef void ( ::OSG::PolytopeVolume::*extendBy_function_type )( ::OSG::PolytopeVolume const & ) ;
            
            PolytopeVolume_exposer.def( 
                "extendBy"
                , extendBy_function_type( &::OSG::PolytopeVolume::extendBy )
                , ( bp::arg("volume") ) );
        
        }
        { //::OSG::PolytopeVolume::getBounds
        
            typedef void ( ::OSG::PolytopeVolume::*getBounds_function_type )( ::OSG::Pnt3f &,::OSG::Pnt3f & ) const;
            
            PolytopeVolume_exposer.def( 
                "getBounds"
                , getBounds_function_type( &::OSG::PolytopeVolume::getBounds )
                , ( bp::arg("minPnt"), bp::arg("maxPnt") ) );
        
        }
        { //::OSG::PolytopeVolume::getCenter
        
            typedef void ( ::OSG::PolytopeVolume::*getCenter_function_type )( ::OSG::Pnt3f & ) const;
            
            PolytopeVolume_exposer.def( 
                "getCenter"
                , getCenter_function_type( &::OSG::PolytopeVolume::getCenter )
                , ( bp::arg("center") ) );
        
        }
        { //::OSG::PolytopeVolume::getNear
        
            typedef ::OSG::Plane const & ( ::OSG::PolytopeVolume::*getNear_function_type )(  ) const;
            
            PolytopeVolume_exposer.def( 
                "getNear"
                , getNear_function_type( &::OSG::PolytopeVolume::getNear )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::PolytopeVolume::getScalarVolume
        
            typedef ::OSG::Real32 ( ::OSG::PolytopeVolume::*getScalarVolume_function_type )(  ) const;
            
            PolytopeVolume_exposer.def( 
                "getScalarVolume"
                , getScalarVolume_function_type( &::OSG::PolytopeVolume::getScalarVolume ) );
        
        }
        { //::OSG::PolytopeVolume::intersect
        
            typedef bool ( ::OSG::PolytopeVolume::*intersect_function_type )( ::OSG::Pnt3f const & ) const;
            
            PolytopeVolume_exposer.def( 
                "intersect"
                , intersect_function_type( &::OSG::PolytopeVolume::intersect )
                , ( bp::arg("point") ) );
        
        }
        { //::OSG::PolytopeVolume::intersect
        
            typedef bool ( ::OSG::PolytopeVolume::*intersect_function_type )( ::OSG::Line const & ) const;
            
            PolytopeVolume_exposer.def( 
                "intersect"
                , intersect_function_type( &::OSG::PolytopeVolume::intersect )
                , ( bp::arg("line") ) );
        
        }
        { //::OSG::PolytopeVolume::intersect
        
            typedef bool ( ::OSG::PolytopeVolume::*intersect_function_type )( ::OSG::Line const &,::OSG::Real32 &,::OSG::Real32 & ) const;
            
            PolytopeVolume_exposer.def( 
                "intersect"
                , intersect_function_type( &::OSG::PolytopeVolume::intersect )
                , ( bp::arg("line"), bp::arg("minDist"), bp::arg("maxDist") ) );
        
        }
        { //::OSG::PolytopeVolume::intersect
        
            typedef bool ( ::OSG::PolytopeVolume::*intersect_function_type )( ::OSG::Volume const & ) const;
            
            PolytopeVolume_exposer.def( 
                "intersect"
                , intersect_function_type( &::OSG::PolytopeVolume::intersect )
                , ( bp::arg("volume") ) );
        
        }
        { //::OSG::PolytopeVolume::intersect
        
            typedef bool ( ::OSG::PolytopeVolume::*intersect_function_type )( ::OSG::PolytopeVolume const & ) const;
            
            PolytopeVolume_exposer.def( 
                "intersect"
                , intersect_function_type( &::OSG::PolytopeVolume::intersect )
                , ( bp::arg("volume") ) );
        
        }
        { //::OSG::PolytopeVolume::isOnSurface
        
            typedef bool ( ::OSG::PolytopeVolume::*isOnSurface_function_type )( ::OSG::Pnt3f const & ) const;
            
            PolytopeVolume_exposer.def( 
                "isOnSurface"
                , isOnSurface_function_type( &::OSG::PolytopeVolume::isOnSurface )
                , ( bp::arg("point") ) );
        
        }
        { //::OSG::PolytopeVolume::print
        
            typedef void ( ::OSG::PolytopeVolume::*print_function_type )( ::std::ostream & ) const;
            
            PolytopeVolume_exposer.def( 
                "print"
                , print_function_type( &::OSG::PolytopeVolume::print )
                , ( bp::arg("os") ) );
        
        }
        { //::OSG::PolytopeVolume::setPlane
        
            typedef void ( ::OSG::PolytopeVolume::*setPlane_function_type )( ::OSG::Plane const &,::OSG::UInt16 const ) ;
            
            PolytopeVolume_exposer.def( 
                "setPlane"
                , setPlane_function_type( &::OSG::PolytopeVolume::setPlane )
                , ( bp::arg("arg0"), bp::arg("arg1") ) );
        
        }
        { //::OSG::PolytopeVolume::transform
        
            typedef void ( ::OSG::PolytopeVolume::*transform_function_type )( ::OSG::Matrix const & ) ;
            
            PolytopeVolume_exposer.def( 
                "transform"
                , transform_function_type( &::OSG::PolytopeVolume::transform )
                , ( bp::arg("m") ) );
        
        }
    }

}
