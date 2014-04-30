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
#include "OSGBase_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "Color4ub.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_Color4ub_class(){

    { //::OSG::Color4< unsigned char >
        typedef bp::class_< OSG::Color4< unsigned char >, bp::bases< OSG::Vector< unsigned char, 4u > > > Color4ub_exposer_t;
        Color4ub_exposer_t Color4ub_exposer = Color4ub_exposer_t( "Color4ub", bp::init< >() );
        bp::scope Color4ub_scope( Color4ub_exposer );
        Color4ub_exposer.def( bp::init< OSG::Vector< unsigned char, 4u > const & >(( bp::arg("source") )) );
        bp::implicitly_convertible< OSG::Vector< unsigned char, 4u > const &, OSG::Color4< unsigned char > >();
        Color4ub_exposer.def( bp::init< unsigned char, unsigned char, unsigned char, unsigned char >(( bp::arg("red"), bp::arg("green"), bp::arg("blue"), bp::arg("alpha") )) );
        { //::OSG::Color4< unsigned char >::alpha
        
            typedef OSG::Color4< unsigned char > exported_class_t;
            typedef unsigned char ( exported_class_t::*alpha_function_type )(  ) const;
            
            Color4ub_exposer.def( 
                "alpha"
                , alpha_function_type( &::OSG::Color4< unsigned char >::alpha ) );
        
        }
        { //::OSG::Color4< unsigned char >::blue
        
            typedef OSG::Color4< unsigned char > exported_class_t;
            typedef unsigned char ( exported_class_t::*blue_function_type )(  ) const;
            
            Color4ub_exposer.def( 
                "blue"
                , blue_function_type( &::OSG::Color4< unsigned char >::blue ) );
        
        }
        { //::OSG::Color4< unsigned char >::clear
        
            typedef OSG::Color4< unsigned char > exported_class_t;
            typedef void ( exported_class_t::*clear_function_type )(  ) ;
            
            Color4ub_exposer.def( 
                "clear"
                , clear_function_type( &::OSG::Color4< unsigned char >::clear ) );
        
        }
        { //::OSG::Color4< unsigned char >::getRGBA
        
            typedef OSG::Color4< unsigned char > exported_class_t;
            typedef ::OSG::UInt32 ( exported_class_t::*getRGBA_function_type )(  ) const;
            
            Color4ub_exposer.def( 
                "getRGBA"
                , getRGBA_function_type( &::OSG::Color4< unsigned char >::getRGBA ) );
        
        }
        { //::OSG::Color4< unsigned char >::green
        
            typedef OSG::Color4< unsigned char > exported_class_t;
            typedef unsigned char ( exported_class_t::*green_function_type )(  ) const;
            
            Color4ub_exposer.def( 
                "green"
                , green_function_type( &::OSG::Color4< unsigned char >::green ) );
        
        }
        { //::OSG::Color4< unsigned char >::red
        
            typedef OSG::Color4< unsigned char > exported_class_t;
            typedef unsigned char ( exported_class_t::*red_function_type )(  ) const;
            
            Color4ub_exposer.def( 
                "red"
                , red_function_type( &::OSG::Color4< unsigned char >::red ) );
        
        }
        { //::OSG::Color4< unsigned char >::setRGBA
        
            typedef OSG::Color4< unsigned char > exported_class_t;
            typedef void ( exported_class_t::*setRGBA_function_type )( ::OSG::UInt32 ) ;
            
            Color4ub_exposer.def( 
                "setRGBA"
                , setRGBA_function_type( &::OSG::Color4< unsigned char >::setRGBA )
                , ( bp::arg("rgbPack") ) );
        
        }
        { //::OSG::Color4< unsigned char >::setRandom
        
            typedef OSG::Color4< unsigned char > exported_class_t;
            typedef void ( exported_class_t::*setRandom_function_type )(  ) ;
            
            Color4ub_exposer.def( 
                "setRandom"
                , setRandom_function_type( &::OSG::Color4< unsigned char >::setRandom ) );
        
        }
        { //::OSG::Color4< unsigned char >::setValue
        
            typedef OSG::Color4< unsigned char > exported_class_t;
            typedef void ( exported_class_t::*setValue_function_type )( ::OSG::Char8 const * ) ;
            
            Color4ub_exposer.def( 
                "setValue"
                , setValue_function_type( &::OSG::Color4< unsigned char >::setValue )
                , ( bp::arg("szString") ) );
        
        }
        { //::OSG::Color4< unsigned char >::setValuesHSV
        
            typedef OSG::Color4< unsigned char > exported_class_t;
            typedef void ( exported_class_t::*setValuesHSV_function_type )( ::OSG::Real32 const,::OSG::Real32 const,::OSG::Real32 const ) ;
            
            Color4ub_exposer.def( 
                "setValuesHSV"
                , setValuesHSV_function_type( &::OSG::Color4< unsigned char >::setValuesHSV )
                , ( bp::arg("h"), bp::arg("s"), bp::arg("v") ) );
        
        }
        { //::OSG::Color4< unsigned char >::setValuesRGBA
        
            typedef OSG::Color4< unsigned char > exported_class_t;
            typedef void ( exported_class_t::*setValuesRGBA_function_type )( unsigned char const,unsigned char const,unsigned char const,unsigned char const ) ;
            
            Color4ub_exposer.def( 
                "setValuesRGBA"
                , setValuesRGBA_function_type( &::OSG::Color4< unsigned char >::setValuesRGBA )
                , ( bp::arg("red"), bp::arg("green"), bp::arg("blue"), bp::arg("alpha") ) );
        
        }
        Color4ub_exposer.def_readonly( "Null", OSG::Color4< unsigned char >::Null );
        Color4ub_exposer.def("getValuesRGBA",Color4_getValuesRGBA_tuple<OSG::UInt8>);
        Color4ub_exposer.def("getValuesHSV",Color_getValuesHSV< OSG::Color4ub >);
        Color4ub_exposer.def("__setitem__",osgwrap::setArrayElement<OSG::Color4ub,OSG::Color4ub::ValueType>);
        Color4ub_exposer.def(boost::python::self_ns::str(boost::python::self));
    }

}
