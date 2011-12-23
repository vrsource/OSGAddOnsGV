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
#if WIN32
#pragma warning(disable : 4267)
#pragma warning(disable : 4344)
#endif

#include "boost/python.hpp"
#include "OSGBase_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "Color3ub.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_Color3ub_class(){

    { //::OSG::Color3< unsigned char >
        typedef bp::class_< OSG::Color3< unsigned char >, bp::bases< OSG::Vector< unsigned char, 3u > > > Color3ub_exposer_t;
        Color3ub_exposer_t Color3ub_exposer = Color3ub_exposer_t( "Color3ub", bp::init< >() );
        bp::scope Color3ub_scope( Color3ub_exposer );
        Color3ub_exposer.def( bp::init< OSG::Vector< unsigned char, 3u > const & >(( bp::arg("source") )) );
        bp::implicitly_convertible< OSG::Vector< unsigned char, 3u > const &, OSG::Color3< unsigned char > >();
        Color3ub_exposer.def( bp::init< unsigned char, unsigned char, unsigned char >(( bp::arg("red"), bp::arg("green"), bp::arg("blue") )) );
        { //::OSG::Color3< unsigned char >::blue
        
            typedef OSG::Color3< unsigned char > exported_class_t;
            typedef unsigned char ( exported_class_t::*blue_function_type )(  ) const;
            
            Color3ub_exposer.def( 
                "blue"
                , blue_function_type( &::OSG::Color3< unsigned char >::blue ) );
        
        }
        { //::OSG::Color3< unsigned char >::clear
        
            typedef OSG::Color3< unsigned char > exported_class_t;
            typedef void ( exported_class_t::*clear_function_type )(  ) ;
            
            Color3ub_exposer.def( 
                "clear"
                , clear_function_type( &::OSG::Color3< unsigned char >::clear ) );
        
        }
        { //::OSG::Color3< unsigned char >::convertFromHSV
        
            typedef OSG::Color3< unsigned char > exported_class_t;
            typedef void ( *convertFromHSV_function_type )( unsigned char *,::OSG::Real32 const,::OSG::Real32 const,::OSG::Real32 const );
            
            Color3ub_exposer.def( 
                "convertFromHSV"
                , convertFromHSV_function_type( &::OSG::Color3< unsigned char >::convertFromHSV )
                , ( bp::arg("rgbP"), bp::arg("h"), bp::arg("s"), bp::arg("v") ) );
        
        }
        { //::OSG::Color3< unsigned char >::getRGB
        
            typedef OSG::Color3< unsigned char > exported_class_t;
            typedef ::OSG::UInt32 ( exported_class_t::*getRGB_function_type )(  ) const;
            
            Color3ub_exposer.def( 
                "getRGB"
                , getRGB_function_type( &::OSG::Color3< unsigned char >::getRGB ) );
        
        }
        { //::OSG::Color3< unsigned char >::green
        
            typedef OSG::Color3< unsigned char > exported_class_t;
            typedef unsigned char ( exported_class_t::*green_function_type )(  ) const;
            
            Color3ub_exposer.def( 
                "green"
                , green_function_type( &::OSG::Color3< unsigned char >::green ) );
        
        }
        { //::OSG::Color3< unsigned char >::maxPart
        
            typedef OSG::Color3< unsigned char > exported_class_t;
            typedef ::OSG::UInt32 ( *maxPart_function_type )( unsigned char const * );
            
            Color3ub_exposer.def( 
                "maxPart"
                , maxPart_function_type( &::OSG::Color3< unsigned char >::maxPart )
                , ( bp::arg("rgbP") ) );
        
        }
        { //::OSG::Color3< unsigned char >::minPart
        
            typedef OSG::Color3< unsigned char > exported_class_t;
            typedef ::OSG::UInt32 ( *minPart_function_type )( unsigned char const * );
            
            Color3ub_exposer.def( 
                "minPart"
                , minPart_function_type( &::OSG::Color3< unsigned char >::minPart )
                , ( bp::arg("rgbP") ) );
        
        }
        { //::OSG::Color3< unsigned char >::red
        
            typedef OSG::Color3< unsigned char > exported_class_t;
            typedef unsigned char ( exported_class_t::*red_function_type )(  ) const;
            
            Color3ub_exposer.def( 
                "red"
                , red_function_type( &::OSG::Color3< unsigned char >::red ) );
        
        }
        { //::OSG::Color3< unsigned char >::setRGB
        
            typedef OSG::Color3< unsigned char > exported_class_t;
            typedef void ( exported_class_t::*setRGB_function_type )( ::OSG::UInt32 ) ;
            
            Color3ub_exposer.def( 
                "setRGB"
                , setRGB_function_type( &::OSG::Color3< unsigned char >::setRGB )
                , ( bp::arg("rgbPack") ) );
        
        }
        { //::OSG::Color3< unsigned char >::setRandom
        
            typedef OSG::Color3< unsigned char > exported_class_t;
            typedef void ( exported_class_t::*setRandom_function_type )(  ) ;
            
            Color3ub_exposer.def( 
                "setRandom"
                , setRandom_function_type( &::OSG::Color3< unsigned char >::setRandom ) );
        
        }
        { //::OSG::Color3< unsigned char >::setValue
        
            typedef OSG::Color3< unsigned char > exported_class_t;
            typedef void ( exported_class_t::*setValue_function_type )( ::OSG::Char8 const * ) ;
            
            Color3ub_exposer.def( 
                "setValue"
                , setValue_function_type( &::OSG::Color3< unsigned char >::setValue )
                , ( bp::arg("szString") ) );
        
        }
        { //::OSG::Color3< unsigned char >::setValuesHSV
        
            typedef OSG::Color3< unsigned char > exported_class_t;
            typedef void ( exported_class_t::*setValuesHSV_function_type )( ::OSG::Real32 const,::OSG::Real32 const,::OSG::Real32 const ) ;
            
            Color3ub_exposer.def( 
                "setValuesHSV"
                , setValuesHSV_function_type( &::OSG::Color3< unsigned char >::setValuesHSV )
                , ( bp::arg("h"), bp::arg("s"), bp::arg("v") ) );
        
        }
        { //::OSG::Color3< unsigned char >::setValuesRGB
        
            typedef OSG::Color3< unsigned char > exported_class_t;
            typedef void ( exported_class_t::*setValuesRGB_function_type )( unsigned char const,unsigned char const,unsigned char const ) ;
            
            Color3ub_exposer.def( 
                "setValuesRGB"
                , setValuesRGB_function_type( &::OSG::Color3< unsigned char >::setValuesRGB )
                , ( bp::arg("red"), bp::arg("green"), bp::arg("blue") ) );
        
        }
        Color3ub_exposer.def_readonly( "Null", OSG::Color3< unsigned char >::Null );
        Color3ub_exposer.staticmethod( "convertFromHSV" );
        Color3ub_exposer.staticmethod( "maxPart" );
        Color3ub_exposer.staticmethod( "minPart" );
        Color3ub_exposer.def("getValuesRGB",Color3_getValuesRGB_tuple<OSG::UInt8>);
        Color3ub_exposer.def("getValuesHSV",Color_getValuesHSV< OSG::Color3ub >);
        Color3ub_exposer.def("__setitem__",osgwrap::setArrayElement<OSG::Color3ub,OSG::Color3ub::ValueType>);
        Color3ub_exposer.def(boost::python::self_ns::str(boost::python::self));
    }

}
