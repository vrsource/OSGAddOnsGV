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
#include "FrustumVolume.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_FrustumVolume_class(){

    { //::OSG::FrustumVolume
        typedef bp::class_< OSG::FrustumVolume, bp::bases< OSG::Volume > > FrustumVolume_exposer_t;
        FrustumVolume_exposer_t FrustumVolume_exposer = FrustumVolume_exposer_t( "FrustumVolume", bp::init< >() );
        bp::scope FrustumVolume_scope( FrustumVolume_exposer );
        bp::scope().attr("P_NONE") = (int)OSG::FrustumVolume::P_NONE;
        bp::scope().attr("P_NEAR") = (int)OSG::FrustumVolume::P_NEAR;
        bp::scope().attr("P_FAR") = (int)OSG::FrustumVolume::P_FAR;
        bp::scope().attr("P_LEFT") = (int)OSG::FrustumVolume::P_LEFT;
        bp::scope().attr("P_RIGHT") = (int)OSG::FrustumVolume::P_RIGHT;
        bp::scope().attr("P_TOP") = (int)OSG::FrustumVolume::P_TOP;
        bp::scope().attr("P_BOTTOM") = (int)OSG::FrustumVolume::P_BOTTOM;
        bp::scope().attr("P_ALL") = (int)OSG::FrustumVolume::P_ALL;
        FrustumVolume_exposer.def( bp::init< OSG::Plane const &, OSG::Plane const &, OSG::Plane const &, OSG::Plane const &, OSG::Plane const &, OSG::Plane const & >(( bp::arg("pnear"), bp::arg("pfar"), bp::arg("left"), bp::arg("right"), bp::arg("top"), bp::arg("bottom") )) );
        FrustumVolume_exposer.def( bp::init< OSG::FrustumVolume const & >(( bp::arg("obj") )) );
        { //::OSG::FrustumVolume::dump
        
            typedef void ( ::OSG::FrustumVolume::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            FrustumVolume_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::FrustumVolume::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::FrustumVolume::extendBy
        
            typedef void ( ::OSG::FrustumVolume::*extendBy_function_type )( ::OSG::Pnt3f const & ) ;
            
            FrustumVolume_exposer.def( 
                "extendBy"
                , extendBy_function_type( &::OSG::FrustumVolume::extendBy )
                , ( bp::arg("pt") ) );
        
        }
        { //::OSG::FrustumVolume::extendBy
        
            typedef void ( ::OSG::FrustumVolume::*extendBy_function_type )( ::OSG::Volume const & ) ;
            
            FrustumVolume_exposer.def( 
                "extendBy"
                , extendBy_function_type( &::OSG::FrustumVolume::extendBy )
                , ( bp::arg("volume") ) );
        
        }
        { //::OSG::FrustumVolume::extendBy
        
            typedef void ( ::OSG::FrustumVolume::*extendBy_function_type )( ::OSG::FrustumVolume const & ) ;
            
            FrustumVolume_exposer.def( 
                "extendBy"
                , extendBy_function_type( &::OSG::FrustumVolume::extendBy )
                , ( bp::arg("volume") ) );
        
        }
        { //::OSG::FrustumVolume::getBottom
        
            typedef ::OSG::Plane const & ( ::OSG::FrustumVolume::*getBottom_function_type )(  ) const;
            
            FrustumVolume_exposer.def( 
                "getBottom"
                , getBottom_function_type( &::OSG::FrustumVolume::getBottom )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::FrustumVolume::getBounds
        
            typedef void ( ::OSG::FrustumVolume::*getBounds_function_type )( ::OSG::Pnt3f &,::OSG::Pnt3f & ) const;
            
            FrustumVolume_exposer.def( 
                "getBounds"
                , getBounds_function_type( &::OSG::FrustumVolume::getBounds )
                , ( bp::arg("minPnt"), bp::arg("maxPnt") ) );
        
        }
        { //::OSG::FrustumVolume::getCenter
        
            typedef void ( ::OSG::FrustumVolume::*getCenter_function_type )( ::OSG::Pnt3f & ) const;
            
            FrustumVolume_exposer.def( 
                "getCenter"
                , getCenter_function_type( &::OSG::FrustumVolume::getCenter )
                , ( bp::arg("center") ) );
        
        }
        { //::OSG::FrustumVolume::getCorners
        
            typedef void ( ::OSG::FrustumVolume::*getCorners_function_type )( ::OSG::Pnt3f &,::OSG::Pnt3f &,::OSG::Pnt3f &,::OSG::Pnt3f &,::OSG::Pnt3f &,::OSG::Pnt3f &,::OSG::Pnt3f &,::OSG::Pnt3f & ) const;
            
            FrustumVolume_exposer.def( 
                "getCorners"
                , getCorners_function_type( &::OSG::FrustumVolume::getCorners )
                , ( bp::arg("nlt"), bp::arg("nlb"), bp::arg("nrt"), bp::arg("nrb"), bp::arg("flt"), bp::arg("flb"), bp::arg("frt"), bp::arg("frb") ) );
        
        }
        { //::OSG::FrustumVolume::getFar
        
            typedef ::OSG::Plane const & ( ::OSG::FrustumVolume::*getFar_function_type )(  ) const;
            
            FrustumVolume_exposer.def( 
                "getFar"
                , getFar_function_type( &::OSG::FrustumVolume::getFar )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::FrustumVolume::getLeft
        
            typedef ::OSG::Plane const & ( ::OSG::FrustumVolume::*getLeft_function_type )(  ) const;
            
            FrustumVolume_exposer.def( 
                "getLeft"
                , getLeft_function_type( &::OSG::FrustumVolume::getLeft )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::FrustumVolume::getNear
        
            typedef ::OSG::Plane const & ( ::OSG::FrustumVolume::*getNear_function_type )(  ) const;
            
            FrustumVolume_exposer.def( 
                "getNear"
                , getNear_function_type( &::OSG::FrustumVolume::getNear )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::FrustumVolume::getRight
        
            typedef ::OSG::Plane const & ( ::OSG::FrustumVolume::*getRight_function_type )(  ) const;
            
            FrustumVolume_exposer.def( 
                "getRight"
                , getRight_function_type( &::OSG::FrustumVolume::getRight )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::FrustumVolume::getScalarVolume
        
            typedef ::OSG::Real32 ( ::OSG::FrustumVolume::*getScalarVolume_function_type )(  ) const;
            
            FrustumVolume_exposer.def( 
                "getScalarVolume"
                , getScalarVolume_function_type( &::OSG::FrustumVolume::getScalarVolume ) );
        
        }
        { //::OSG::FrustumVolume::getTop
        
            typedef ::OSG::Plane const & ( ::OSG::FrustumVolume::*getTop_function_type )(  ) const;
            
            FrustumVolume_exposer.def( 
                "getTop"
                , getTop_function_type( &::OSG::FrustumVolume::getTop )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::FrustumVolume::intersect
        
            typedef bool ( ::OSG::FrustumVolume::*intersect_function_type )( ::OSG::Pnt3f const & ) const;
            
            FrustumVolume_exposer.def( 
                "intersect"
                , intersect_function_type( &::OSG::FrustumVolume::intersect )
                , ( bp::arg("point") ) );
        
        }
        { //::OSG::FrustumVolume::intersect
        
            typedef bool ( ::OSG::FrustumVolume::*intersect_function_type )( ::OSG::Line const & ) const;
            
            FrustumVolume_exposer.def( 
                "intersect"
                , intersect_function_type( &::OSG::FrustumVolume::intersect )
                , ( bp::arg("line") ) );
        
        }
        { //::OSG::FrustumVolume::intersect
        
            typedef bool ( ::OSG::FrustumVolume::*intersect_function_type )( ::OSG::Line const &,::OSG::Real32 &,::OSG::Real32 & ) const;
            
            FrustumVolume_exposer.def( 
                "intersect"
                , intersect_function_type( &::OSG::FrustumVolume::intersect )
                , ( bp::arg("line"), bp::arg("minDist"), bp::arg("maxDist") ) );
        
        }
        { //::OSG::FrustumVolume::intersect
        
            typedef bool ( ::OSG::FrustumVolume::*intersect_function_type )( ::OSG::Volume const & ) const;
            
            FrustumVolume_exposer.def( 
                "intersect"
                , intersect_function_type( &::OSG::FrustumVolume::intersect )
                , ( bp::arg("volume") ) );
        
        }
        { //::OSG::FrustumVolume::intersect
        
            typedef bool ( ::OSG::FrustumVolume::*intersect_function_type )( ::OSG::FrustumVolume const & ) const;
            
            FrustumVolume_exposer.def( 
                "intersect"
                , intersect_function_type( &::OSG::FrustumVolume::intersect )
                , ( bp::arg("volume") ) );
        
        }
        { //::OSG::FrustumVolume::isOnSurface
        
            typedef bool ( ::OSG::FrustumVolume::*isOnSurface_function_type )( ::OSG::Pnt3f const & ) const;
            
            FrustumVolume_exposer.def( 
                "isOnSurface"
                , isOnSurface_function_type( &::OSG::FrustumVolume::isOnSurface )
                , ( bp::arg("point") ) );
        
        }
        { //::OSG::FrustumVolume::print
        
            typedef void ( ::OSG::FrustumVolume::*print_function_type )( ::std::ostream & ) const;
            
            FrustumVolume_exposer.def( 
                "print"
                , print_function_type( &::OSG::FrustumVolume::print )
                , ( bp::arg("os") ) );
        
        }
        { //::OSG::FrustumVolume::setPlanes
        
            typedef void ( ::OSG::FrustumVolume::*setPlanes_function_type )( ::OSG::Plane const &,::OSG::Plane const &,::OSG::Plane const &,::OSG::Plane const &,::OSG::Plane const &,::OSG::Plane const & ) ;
            
            FrustumVolume_exposer.def( 
                "setPlanes"
                , setPlanes_function_type( &::OSG::FrustumVolume::setPlanes )
                , ( bp::arg("pnear"), bp::arg("pfar"), bp::arg("left"), bp::arg("right"), bp::arg("top"), bp::arg("bottom") ) );
        
        }
        { //::OSG::FrustumVolume::setPlanes
        
            typedef void ( ::OSG::FrustumVolume::*setPlanes_function_type )( ::OSG::Pnt3f const &,::OSG::Pnt3f const &,::OSG::Pnt3f const &,::OSG::Pnt3f const &,::OSG::Pnt3f const &,::OSG::Pnt3f const &,::OSG::Pnt3f const &,::OSG::Pnt3f const & ) ;
            
            FrustumVolume_exposer.def( 
                "setPlanes"
                , setPlanes_function_type( &::OSG::FrustumVolume::setPlanes )
                , ( bp::arg("nlt"), bp::arg("nlb"), bp::arg("nrt"), bp::arg("nrb"), bp::arg("flt"), bp::arg("flb"), bp::arg("frt"), bp::arg("frb") ) );
        
        }
        { //::OSG::FrustumVolume::setPlanes
        
            typedef void ( ::OSG::FrustumVolume::*setPlanes_function_type )( ::OSG::Matrix const & ) ;
            
            FrustumVolume_exposer.def( 
                "setPlanes"
                , setPlanes_function_type( &::OSG::FrustumVolume::setPlanes )
                , ( bp::arg("matrix") ) );
        
        }
        { //::OSG::FrustumVolume::transform
        
            typedef void ( ::OSG::FrustumVolume::*transform_function_type )( ::OSG::Matrix const & ) ;
            
            FrustumVolume_exposer.def( 
                "transform"
                , transform_function_type( &::OSG::FrustumVolume::transform )
                , ( bp::arg("m") ) );
        
        }
    }

}
