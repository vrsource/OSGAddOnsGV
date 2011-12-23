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
#include "Color4f.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_Color4f_class(){

    { //::OSG::Color4< float >
        typedef bp::class_< OSG::Color4< float >, bp::bases< OSG::Vector< float, 4u > > > Color4f_exposer_t;
        Color4f_exposer_t Color4f_exposer = Color4f_exposer_t( "Color4f", bp::init< >() );
        bp::scope Color4f_scope( Color4f_exposer );
        Color4f_exposer.def( bp::init< OSG::Vector< float, 4u > const & >(( bp::arg("source") )) );
        bp::implicitly_convertible< OSG::Vector< float, 4u > const &, OSG::Color4< float > >();
        Color4f_exposer.def( bp::init< float, float, float, float >(( bp::arg("red"), bp::arg("green"), bp::arg("blue"), bp::arg("alpha") )) );
        { //::OSG::Color4< float >::alpha
        
            typedef OSG::Color4< float > exported_class_t;
            typedef float ( exported_class_t::*alpha_function_type )(  ) const;
            
            Color4f_exposer.def( 
                "alpha"
                , alpha_function_type( &::OSG::Color4< float >::alpha ) );
        
        }
        { //::OSG::Color4< float >::blue
        
            typedef OSG::Color4< float > exported_class_t;
            typedef float ( exported_class_t::*blue_function_type )(  ) const;
            
            Color4f_exposer.def( 
                "blue"
                , blue_function_type( &::OSG::Color4< float >::blue ) );
        
        }
        { //::OSG::Color4< float >::clear
        
            typedef OSG::Color4< float > exported_class_t;
            typedef void ( exported_class_t::*clear_function_type )(  ) ;
            
            Color4f_exposer.def( 
                "clear"
                , clear_function_type( &::OSG::Color4< float >::clear ) );
        
        }
        { //::OSG::Color4< float >::getRGBA
        
            typedef OSG::Color4< float > exported_class_t;
            typedef ::OSG::UInt32 ( exported_class_t::*getRGBA_function_type )(  ) const;
            
            Color4f_exposer.def( 
                "getRGBA"
                , getRGBA_function_type( &::OSG::Color4< float >::getRGBA ) );
        
        }
        { //::OSG::Color4< float >::green
        
            typedef OSG::Color4< float > exported_class_t;
            typedef float ( exported_class_t::*green_function_type )(  ) const;
            
            Color4f_exposer.def( 
                "green"
                , green_function_type( &::OSG::Color4< float >::green ) );
        
        }
        { //::OSG::Color4< float >::red
        
            typedef OSG::Color4< float > exported_class_t;
            typedef float ( exported_class_t::*red_function_type )(  ) const;
            
            Color4f_exposer.def( 
                "red"
                , red_function_type( &::OSG::Color4< float >::red ) );
        
        }
        { //::OSG::Color4< float >::setRGBA
        
            typedef OSG::Color4< float > exported_class_t;
            typedef void ( exported_class_t::*setRGBA_function_type )( ::OSG::UInt32 ) ;
            
            Color4f_exposer.def( 
                "setRGBA"
                , setRGBA_function_type( &::OSG::Color4< float >::setRGBA )
                , ( bp::arg("rgbPack") ) );
        
        }
        { //::OSG::Color4< float >::setRandom
        
            typedef OSG::Color4< float > exported_class_t;
            typedef void ( exported_class_t::*setRandom_function_type )(  ) ;
            
            Color4f_exposer.def( 
                "setRandom"
                , setRandom_function_type( &::OSG::Color4< float >::setRandom ) );
        
        }
        { //::OSG::Color4< float >::setValue
        
            typedef OSG::Color4< float > exported_class_t;
            typedef void ( exported_class_t::*setValue_function_type )( ::OSG::Char8 const * ) ;
            
            Color4f_exposer.def( 
                "setValue"
                , setValue_function_type( &::OSG::Color4< float >::setValue )
                , ( bp::arg("szString") ) );
        
        }
        { //::OSG::Color4< float >::setValuesHSV
        
            typedef OSG::Color4< float > exported_class_t;
            typedef void ( exported_class_t::*setValuesHSV_function_type )( ::OSG::Real32 const,::OSG::Real32 const,::OSG::Real32 const ) ;
            
            Color4f_exposer.def( 
                "setValuesHSV"
                , setValuesHSV_function_type( &::OSG::Color4< float >::setValuesHSV )
                , ( bp::arg("h"), bp::arg("s"), bp::arg("v") ) );
        
        }
        { //::OSG::Color4< float >::setValuesRGBA
        
            typedef OSG::Color4< float > exported_class_t;
            typedef void ( exported_class_t::*setValuesRGBA_function_type )( float const,float const,float const,float const ) ;
            
            Color4f_exposer.def( 
                "setValuesRGBA"
                , setValuesRGBA_function_type( &::OSG::Color4< float >::setValuesRGBA )
                , ( bp::arg("red"), bp::arg("green"), bp::arg("blue"), bp::arg("alpha") ) );
        
        }
        Color4f_exposer.def_readonly( "Null", OSG::Color4< float >::Null );
        Color4f_exposer.def("getValuesRGBA",Color4_getValuesRGBA_tuple<OSG::Real32>);
        Color4f_exposer.def("getValuesHSV",Color_getValuesHSV< OSG::Color4f >);
        Color4f_exposer.def("__setitem__",osgwrap::setArrayElement<OSG::Color4f,OSG::Color4f::ValueType>);
        Color4f_exposer.def(boost::python::self_ns::str(boost::python::self));
    }

}
