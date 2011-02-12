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
#endif

#include "boost/python.hpp"
#include "OSGBase_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "BoxVolume.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_BoxVolume_class(){

    { //::OSG::BoxVolume
        typedef bp::class_< OSG::BoxVolume, bp::bases< OSG::Volume > > BoxVolume_exposer_t;
        BoxVolume_exposer_t BoxVolume_exposer = BoxVolume_exposer_t( "BoxVolume", bp::init< >() );
        bp::scope BoxVolume_scope( BoxVolume_exposer );
        BoxVolume_exposer.def( bp::init< OSG::Real32, OSG::Real32, OSG::Real32, OSG::Real32, OSG::Real32, OSG::Real32 >(( bp::arg("xmin"), bp::arg("ymin"), bp::arg("zmin"), bp::arg("xmax"), bp::arg("ymax"), bp::arg("zmax") )) );
        BoxVolume_exposer.def( bp::init< OSG::Pnt3f const &, OSG::Pnt3f const & >(( bp::arg("min"), bp::arg("max") )) );
        BoxVolume_exposer.def( bp::init< OSG::BoxVolume const & >(( bp::arg("obj") )) );
        { //::OSG::BoxVolume::dump
        
            typedef void ( ::OSG::BoxVolume::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            BoxVolume_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::BoxVolume::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::BoxVolume::extendBy
        
            typedef void ( ::OSG::BoxVolume::*extendBy_function_type )( ::OSG::Pnt3f const & ) ;
            
            BoxVolume_exposer.def( 
                "extendBy"
                , extendBy_function_type( &::OSG::BoxVolume::extendBy )
                , ( bp::arg("pt") ) );
        
        }
        { //::OSG::BoxVolume::extendBy
        
            typedef void ( ::OSG::BoxVolume::*extendBy_function_type )( ::OSG::Volume const & ) ;
            
            BoxVolume_exposer.def( 
                "extendBy"
                , extendBy_function_type( &::OSG::BoxVolume::extendBy )
                , ( bp::arg("volume") ) );
        
        }
        { //::OSG::BoxVolume::extendBy
        
            typedef void ( ::OSG::BoxVolume::*extendBy_function_type )( ::OSG::BoxVolume const & ) ;
            
            BoxVolume_exposer.def( 
                "extendBy"
                , extendBy_function_type( &::OSG::BoxVolume::extendBy )
                , ( bp::arg("volume") ) );
        
        }
        { //::OSG::BoxVolume::getBounds
        
            typedef void ( ::OSG::BoxVolume::*getBounds_function_type )( ::OSG::Pnt3f &,::OSG::Pnt3f & ) const;
            
            BoxVolume_exposer.def( 
                "getBounds"
                , getBounds_function_type( &::OSG::BoxVolume::getBounds )
                , ( bp::arg("min"), bp::arg("max") ) );
        
        }
        { //::OSG::BoxVolume::getBounds
        
            typedef void ( ::OSG::BoxVolume::*getBounds_function_type )( ::OSG::Real32 &,::OSG::Real32 &,::OSG::Real32 &,::OSG::Real32 &,::OSG::Real32 &,::OSG::Real32 & ) const;
            
            BoxVolume_exposer.def( 
                "getBounds"
                , getBounds_function_type( &::OSG::BoxVolume::getBounds )
                , ( bp::arg("xmin"), bp::arg("ymin"), bp::arg("zmin"), bp::arg("xmax"), bp::arg("ymax"), bp::arg("zmax") ) );
        
        }
        { //::OSG::BoxVolume::getCenter
        
            typedef void ( ::OSG::BoxVolume::*getCenter_function_type )( ::OSG::Pnt3f & ) const;
            
            BoxVolume_exposer.def( 
                "getCenter"
                , getCenter_function_type( &::OSG::BoxVolume::getCenter )
                , ( bp::arg("center") ) );
        
        }
        { //::OSG::BoxVolume::getCorners
        
            typedef void ( ::OSG::BoxVolume::*getCorners_function_type )( ::OSG::Pnt3f &,::OSG::Pnt3f &,::OSG::Pnt3f &,::OSG::Pnt3f &,::OSG::Pnt3f &,::OSG::Pnt3f &,::OSG::Pnt3f &,::OSG::Pnt3f & ) const;
            
            BoxVolume_exposer.def( 
                "getCorners"
                , getCorners_function_type( &::OSG::BoxVolume::getCorners )
                , ( bp::arg("nlt"), bp::arg("nlb"), bp::arg("nrt"), bp::arg("nrb"), bp::arg("flt"), bp::arg("flb"), bp::arg("frt"), bp::arg("frb") ) );
        
        }
        { //::OSG::BoxVolume::getMax
        
            typedef ::OSG::Pnt3f const & ( ::OSG::BoxVolume::*getMax_function_type )(  ) const;
            
            BoxVolume_exposer.def( 
                "getMax"
                , getMax_function_type( &::OSG::BoxVolume::getMax )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::BoxVolume::getMin
        
            typedef ::OSG::Pnt3f const & ( ::OSG::BoxVolume::*getMin_function_type )(  ) const;
            
            BoxVolume_exposer.def( 
                "getMin"
                , getMin_function_type( &::OSG::BoxVolume::getMin )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::BoxVolume::getOrigin
        
            typedef void ( ::OSG::BoxVolume::*getOrigin_function_type )( ::OSG::Real32 &,::OSG::Real32 &,::OSG::Real32 & ) const;
            
            BoxVolume_exposer.def( 
                "getOrigin"
                , getOrigin_function_type( &::OSG::BoxVolume::getOrigin )
                , ( bp::arg("originX"), bp::arg("originY"), bp::arg("originZ") ) );
        
        }
        { //::OSG::BoxVolume::getScalarVolume
        
            typedef ::OSG::Real32 ( ::OSG::BoxVolume::*getScalarVolume_function_type )(  ) const;
            
            BoxVolume_exposer.def( 
                "getScalarVolume"
                , getScalarVolume_function_type( &::OSG::BoxVolume::getScalarVolume ) );
        
        }
        { //::OSG::BoxVolume::getSize
        
            typedef void ( ::OSG::BoxVolume::*getSize_function_type )( ::OSG::Real32 &,::OSG::Real32 &,::OSG::Real32 & ) const;
            
            BoxVolume_exposer.def( 
                "getSize"
                , getSize_function_type( &::OSG::BoxVolume::getSize )
                , ( bp::arg("sizeX"), bp::arg("sizeY"), bp::arg("sizeZ") ) );
        
        }
        { //::OSG::BoxVolume::getSize
        
            typedef void ( ::OSG::BoxVolume::*getSize_function_type )( ::OSG::Vec3f & ) const;
            
            BoxVolume_exposer.def( 
                "getSize"
                , getSize_function_type( &::OSG::BoxVolume::getSize )
                , ( bp::arg("vec") ) );
        
        }
        { //::OSG::BoxVolume::intersect
        
            typedef bool ( ::OSG::BoxVolume::*intersect_function_type )( ::OSG::Pnt3f const & ) const;
            
            BoxVolume_exposer.def( 
                "intersect"
                , intersect_function_type( &::OSG::BoxVolume::intersect )
                , ( bp::arg("point") ) );
        
        }
        { //::OSG::BoxVolume::intersect
        
            typedef bool ( ::OSG::BoxVolume::*intersect_function_type )( ::OSG::Line const & ) const;
            
            BoxVolume_exposer.def( 
                "intersect"
                , intersect_function_type( &::OSG::BoxVolume::intersect )
                , ( bp::arg("line") ) );
        
        }
        { //::OSG::BoxVolume::intersect
        
            typedef bool ( ::OSG::BoxVolume::*intersect_function_type )( ::OSG::Line const &,::OSG::Real32 &,::OSG::Real32 & ) const;
            
            BoxVolume_exposer.def( 
                "intersect"
                , intersect_function_type( &::OSG::BoxVolume::intersect )
                , ( bp::arg("line"), bp::arg("min"), bp::arg("max") ) );
        
        }
        { //::OSG::BoxVolume::intersect
        
            typedef bool ( ::OSG::BoxVolume::*intersect_function_type )( ::OSG::Volume const & ) const;
            
            BoxVolume_exposer.def( 
                "intersect"
                , intersect_function_type( &::OSG::BoxVolume::intersect )
                , ( bp::arg("volume") ) );
        
        }
        { //::OSG::BoxVolume::intersect
        
            typedef bool ( ::OSG::BoxVolume::*intersect_function_type )( ::OSG::BoxVolume const & ) const;
            
            BoxVolume_exposer.def( 
                "intersect"
                , intersect_function_type( &::OSG::BoxVolume::intersect )
                , ( bp::arg("bb") ) );
        
        }
        { //::OSG::BoxVolume::isOnSurface
        
            typedef bool ( ::OSG::BoxVolume::*isOnSurface_function_type )( ::OSG::Pnt3f const & ) const;
            
            BoxVolume_exposer.def( 
                "isOnSurface"
                , isOnSurface_function_type( &::OSG::BoxVolume::isOnSurface )
                , ( bp::arg("point") ) );
        
        }
        { //::OSG::BoxVolume::print
        
            typedef void ( ::OSG::BoxVolume::*print_function_type )( ::std::ostream & ) const;
            
            BoxVolume_exposer.def( 
                "print"
                , print_function_type( &::OSG::BoxVolume::print )
                , ( bp::arg("os") ) );
        
        }
        { //::OSG::BoxVolume::setBounds
        
            typedef void ( ::OSG::BoxVolume::*setBounds_function_type )( ::OSG::Real32,::OSG::Real32,::OSG::Real32 ) ;
            
            BoxVolume_exposer.def( 
                "setBounds"
                , setBounds_function_type( &::OSG::BoxVolume::setBounds )
                , ( bp::arg("w"), bp::arg("h"), bp::arg("d") ) );
        
        }
        { //::OSG::BoxVolume::setBounds
        
            typedef void ( ::OSG::BoxVolume::*setBounds_function_type )( ::OSG::Real32,::OSG::Real32,::OSG::Real32,::OSG::Real32,::OSG::Real32,::OSG::Real32 ) ;
            
            BoxVolume_exposer.def( 
                "setBounds"
                , setBounds_function_type( &::OSG::BoxVolume::setBounds )
                , ( bp::arg("xmin"), bp::arg("ymin"), bp::arg("zmin"), bp::arg("xmax"), bp::arg("ymax"), bp::arg("zmax") ) );
        
        }
        { //::OSG::BoxVolume::setBounds
        
            typedef void ( ::OSG::BoxVolume::*setBounds_function_type )( ::OSG::Pnt3f const &,::OSG::Pnt3f const & ) ;
            
            BoxVolume_exposer.def( 
                "setBounds"
                , setBounds_function_type( &::OSG::BoxVolume::setBounds )
                , ( bp::arg("min"), bp::arg("max") ) );
        
        }
        { //::OSG::BoxVolume::setBoundsByCenterAndSize
        
            typedef void ( ::OSG::BoxVolume::*setBoundsByCenterAndSize_function_type )( ::OSG::Pnt3f const &,::OSG::Vec3f const & ) ;
            
            BoxVolume_exposer.def( 
                "setBoundsByCenterAndSize"
                , setBoundsByCenterAndSize_function_type( &::OSG::BoxVolume::setBoundsByCenterAndSize )
                , ( bp::arg("center"), bp::arg("size") ) );
        
        }
        { //::OSG::BoxVolume::transform
        
            typedef void ( ::OSG::BoxVolume::*transform_function_type )( ::OSG::Matrix const & ) ;
            
            BoxVolume_exposer.def( 
                "transform"
                , transform_function_type( &::OSG::BoxVolume::transform )
                , ( bp::arg("m") ) );
        
        }
    }

}