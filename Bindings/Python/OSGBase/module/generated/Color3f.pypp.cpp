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
#include "Color3f.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_Color3f_class(){

    { //::OSG::Color3< float >
        typedef bp::class_< OSG::Color3< float >, bp::bases< OSG::Vector< float, 3u > > > Color3f_exposer_t;
        Color3f_exposer_t Color3f_exposer = Color3f_exposer_t( "Color3f", bp::init< >() );
        bp::scope Color3f_scope( Color3f_exposer );
        Color3f_exposer.def( bp::init< OSG::Vector< float, 3u > const & >(( bp::arg("source") )) );
        bp::implicitly_convertible< OSG::Vector< float, 3u > const &, OSG::Color3< float > >();
        Color3f_exposer.def( bp::init< float, float, float >(( bp::arg("redVal"), bp::arg("greenVal"), bp::arg("blueVal") )) );
        { //::OSG::Color3< float >::blue
        
            typedef OSG::Color3< float > exported_class_t;
            typedef float ( exported_class_t::*blue_function_type )(  ) const;
            
            Color3f_exposer.def( 
                "blue"
                , blue_function_type( &::OSG::Color3< float >::blue ) );
        
        }
        { //::OSG::Color3< float >::clear
        
            typedef OSG::Color3< float > exported_class_t;
            typedef void ( exported_class_t::*clear_function_type )(  ) ;
            
            Color3f_exposer.def( 
                "clear"
                , clear_function_type( &::OSG::Color3< float >::clear ) );
        
        }
        { //::OSG::Color3< float >::convertFromHSV
        
            typedef OSG::Color3< float > exported_class_t;
            typedef void ( *convertFromHSV_function_type )( float *,::OSG::Real32 const,::OSG::Real32 const,::OSG::Real32 const );
            
            Color3f_exposer.def( 
                "convertFromHSV"
                , convertFromHSV_function_type( &::OSG::Color3< float >::convertFromHSV )
                , ( bp::arg("rgbP"), bp::arg("h"), bp::arg("s"), bp::arg("v") ) );
        
        }
        { //::OSG::Color3< float >::getRGB
        
            typedef OSG::Color3< float > exported_class_t;
            typedef ::OSG::UInt32 ( exported_class_t::*getRGB_function_type )(  ) const;
            
            Color3f_exposer.def( 
                "getRGB"
                , getRGB_function_type( &::OSG::Color3< float >::getRGB ) );
        
        }
        { //::OSG::Color3< float >::green
        
            typedef OSG::Color3< float > exported_class_t;
            typedef float ( exported_class_t::*green_function_type )(  ) const;
            
            Color3f_exposer.def( 
                "green"
                , green_function_type( &::OSG::Color3< float >::green ) );
        
        }
        { //::OSG::Color3< float >::maxPart
        
            typedef OSG::Color3< float > exported_class_t;
            typedef ::OSG::UInt32 ( *maxPart_function_type )( float const * );
            
            Color3f_exposer.def( 
                "maxPart"
                , maxPart_function_type( &::OSG::Color3< float >::maxPart )
                , ( bp::arg("rgbP") ) );
        
        }
        { //::OSG::Color3< float >::minPart
        
            typedef OSG::Color3< float > exported_class_t;
            typedef ::OSG::UInt32 ( *minPart_function_type )( float const * );
            
            Color3f_exposer.def( 
                "minPart"
                , minPart_function_type( &::OSG::Color3< float >::minPart )
                , ( bp::arg("rgbP") ) );
        
        }
        { //::OSG::Color3< float >::red
        
            typedef OSG::Color3< float > exported_class_t;
            typedef float ( exported_class_t::*red_function_type )(  ) const;
            
            Color3f_exposer.def( 
                "red"
                , red_function_type( &::OSG::Color3< float >::red ) );
        
        }
        { //::OSG::Color3< float >::setRGB
        
            typedef OSG::Color3< float > exported_class_t;
            typedef void ( exported_class_t::*setRGB_function_type )( ::OSG::UInt32 ) ;
            
            Color3f_exposer.def( 
                "setRGB"
                , setRGB_function_type( &::OSG::Color3< float >::setRGB )
                , ( bp::arg("rgbPack") ) );
        
        }
        { //::OSG::Color3< float >::setRandom
        
            typedef OSG::Color3< float > exported_class_t;
            typedef void ( exported_class_t::*setRandom_function_type )(  ) ;
            
            Color3f_exposer.def( 
                "setRandom"
                , setRandom_function_type( &::OSG::Color3< float >::setRandom ) );
        
        }
        { //::OSG::Color3< float >::setValue
        
            typedef OSG::Color3< float > exported_class_t;
            typedef void ( exported_class_t::*setValue_function_type )( ::OSG::Char8 const * ) ;
            
            Color3f_exposer.def( 
                "setValue"
                , setValue_function_type( &::OSG::Color3< float >::setValue )
                , ( bp::arg("szString") ) );
        
        }
        { //::OSG::Color3< float >::setValuesHSV
        
            typedef OSG::Color3< float > exported_class_t;
            typedef void ( exported_class_t::*setValuesHSV_function_type )( ::OSG::Real32 const,::OSG::Real32 const,::OSG::Real32 const ) ;
            
            Color3f_exposer.def( 
                "setValuesHSV"
                , setValuesHSV_function_type( &::OSG::Color3< float >::setValuesHSV )
                , ( bp::arg("h"), bp::arg("s"), bp::arg("v") ) );
        
        }
        { //::OSG::Color3< float >::setValuesRGB
        
            typedef OSG::Color3< float > exported_class_t;
            typedef void ( exported_class_t::*setValuesRGB_function_type )( float const,float const,float const ) ;
            
            Color3f_exposer.def( 
                "setValuesRGB"
                , setValuesRGB_function_type( &::OSG::Color3< float >::setValuesRGB )
                , ( bp::arg("redVal"), bp::arg("greenVal"), bp::arg("blueVal") ) );
        
        }
        Color3f_exposer.def_readonly( "Null", OSG::Color3< float >::Null );
        Color3f_exposer.staticmethod( "convertFromHSV" );
        Color3f_exposer.staticmethod( "maxPart" );
        Color3f_exposer.staticmethod( "minPart" );
        Color3f_exposer.def("getValuesRGB",Color3_getValuesRGB_tuple<OSG::Real32>);
        Color3f_exposer.def("getValuesHSV",Color_getValuesHSV< OSG::Color3f >);
        Color3f_exposer.def("__setitem__",osgwrap::setArrayElement<OSG::Color3f,OSG::Color3f::ValueType>);
        Color3f_exposer.def(boost::python::self_ns::str(boost::python::self));
    }

}
