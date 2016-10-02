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
#include "Vec4d.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_Vec4d_class(){

    { //::OSG::Vector< double, 4u >
        typedef bp::class_< OSG::Vector< double, 4u >, bp::bases< OSG::Point< double, 4u > > > Vec4d_exposer_t;
        Vec4d_exposer_t Vec4d_exposer = Vec4d_exposer_t( "Vec4d", bp::init< >() );
        bp::scope Vec4d_scope( Vec4d_exposer );
        Vec4d_exposer.def( bp::init< double const * >(( bp::arg("pVals") )) );
        bp::implicitly_convertible< double const *, OSG::Vector< double, 4u > >();
        Vec4d_exposer.def( bp::init< double * >(( bp::arg("pVals") )) );
        bp::implicitly_convertible< double *, OSG::Vector< double, 4u > >();
        Vec4d_exposer.def( bp::init< OSG::Vector< double, 4u > const & >(( bp::arg("source") )) );
        Vec4d_exposer.def( bp::init< double >(( bp::arg("rVal1") )) );
        bp::implicitly_convertible< double const, OSG::Vector< double, 4u > >();
        Vec4d_exposer.def( bp::init< double, double >(( bp::arg("rVal1"), bp::arg("rVal2") )) );
        Vec4d_exposer.def( bp::init< double, double, double >(( bp::arg("rVal1"), bp::arg("rVal2"), bp::arg("rVal3") )) );
        Vec4d_exposer.def( bp::init< double, double, double, double >(( bp::arg("rVal1"), bp::arg("rVal2"), bp::arg("rVal3"), bp::arg("rVal4") )) );
        { //::OSG::Vector< double, 4u >::addToZero
        
            typedef OSG::Vector< double, 4u > exported_class_t;
            typedef ::OSG::Point< double, 4u > const & ( exported_class_t::*addToZero_function_type )(  ) const;
            
            Vec4d_exposer.def( 
                "addToZero"
                , addToZero_function_type( &::OSG::Vector< double, 4u >::addToZero )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::Vector< double, 4u >::addToZero
        
            typedef OSG::Vector< double, 4u > exported_class_t;
            typedef ::OSG::Point< double, 4u > & ( exported_class_t::*addToZero_function_type )(  ) ;
            
            Vec4d_exposer.def( 
                "addToZero"
                , addToZero_function_type( &::OSG::Vector< double, 4u >::addToZero )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::Vector< double, 4u >::cross
        
            typedef OSG::Vector< double, 4u > exported_class_t;
            typedef ::OSG::Vector< double, 4u > ( exported_class_t::*cross_function_type )( ::OSG::Vector< double, 4u > const & ) const;
            
            Vec4d_exposer.def( 
                "cross"
                , cross_function_type( &::OSG::Vector< double, 4u >::cross )
                , ( bp::arg("vec") ) );
        
        }
        { //::OSG::Vector< double, 4u >::crossThis
        
            typedef OSG::Vector< double, 4u > exported_class_t;
            typedef void ( exported_class_t::*crossThis_function_type )( ::OSG::Vector< double, 4u > const & ) ;
            
            Vec4d_exposer.def( 
                "crossThis"
                , crossThis_function_type( &::OSG::Vector< double, 4u >::crossThis )
                , ( bp::arg("vec") ) );
        
        }
        { //::OSG::Vector< double, 4u >::dot
        
            typedef OSG::Vector< double, 4u > exported_class_t;
            typedef double ( exported_class_t::*dot_function_type )( ::OSG::Vector< double, 4u > const & ) const;
            
            Vec4d_exposer.def( 
                "dot"
                , dot_function_type( &::OSG::Vector< double, 4u >::dot )
                , ( bp::arg("vec") ) );
        
        }
        { //::OSG::Vector< double, 4u >::dot
        
            typedef OSG::Vector< double, 4u > exported_class_t;
            typedef double ( exported_class_t::*dot_function_type )( ::OSG::Point< double, 4u > const & ) const;
            
            Vec4d_exposer.def( 
                "dot"
                , dot_function_type( &::OSG::Vector< double, 4u >::dot )
                , ( bp::arg("pnt") ) );
        
        }
        { //::OSG::Vector< double, 4u >::enclosedAngle
        
            typedef OSG::Vector< double, 4u > exported_class_t;
            typedef ::OSG::Real64 ( exported_class_t::*enclosedAngle_function_type )( ::OSG::Vector< double, 4u > const & ) const;
            
            Vec4d_exposer.def( 
                "enclosedAngle"
                , enclosedAngle_function_type( &::OSG::Vector< double, 4u >::enclosedAngle )
                , ( bp::arg("vec") ) );
        
        }
        { //::OSG::Vector< double, 4u >::length
        
            typedef OSG::Vector< double, 4u > exported_class_t;
            typedef ::OSG::Real64 ( exported_class_t::*length_function_type )(  ) const;
            
            Vec4d_exposer.def( 
                "length"
                , length_function_type( &::OSG::Vector< double, 4u >::length ) );
        
        }
        { //::OSG::Vector< double, 4u >::normalize
        
            typedef OSG::Vector< double, 4u > exported_class_t;
            typedef void ( exported_class_t::*normalize_function_type )(  ) ;
            
            Vec4d_exposer.def( 
                "normalize"
                , normalize_function_type( &::OSG::Vector< double, 4u >::normalize ) );
        
        }
        Vec4d_exposer.def( bp::self != bp::self );
        Vec4d_exposer.def( bp::self % bp::self );
        Vec4d_exposer.def( bp::self * bp::self );
        Vec4d_exposer.def( bp::self * bp::other< OSG::Point< double, 4u > >() );
        Vec4d_exposer.def( bp::self * bp::other< double >() );
        Vec4d_exposer.def( bp::self + bp::self );
        Vec4d_exposer.def( bp::self - bp::self );
        Vec4d_exposer.def( -bp::self );
        Vec4d_exposer.def( bp::self / bp::other< double >() );
        Vec4d_exposer.def( bp::self < bp::self );
        Vec4d_exposer.def( bp::self == bp::self );
        { //::OSG::Vector< double, 4u >::projectTo
        
            typedef OSG::Vector< double, 4u > exported_class_t;
            typedef ::OSG::Real64 ( exported_class_t::*projectTo_function_type )( ::OSG::Vector< double, 4u > const & ) ;
            
            Vec4d_exposer.def( 
                "projectTo"
                , projectTo_function_type( &::OSG::Vector< double, 4u >::projectTo )
                , ( bp::arg("toVec") ) );
        
        }
        { //::OSG::Vector< double, 4u >::reflect
        
            typedef OSG::Vector< double, 4u > exported_class_t;
            typedef ::OSG::Vector< double, 4u > ( exported_class_t::*reflect_function_type )( ::OSG::Vector< double, 4u > const & ) const;
            
            Vec4d_exposer.def( 
                "reflect"
                , reflect_function_type( &::OSG::Vector< double, 4u >::reflect )
                , ( bp::arg("Normal") ) );
        
        }
        { //::OSG::Vector< double, 4u >::squareLength
        
            typedef OSG::Vector< double, 4u > exported_class_t;
            typedef ::OSG::Real64 ( exported_class_t::*squareLength_function_type )(  ) const;
            
            Vec4d_exposer.def( 
                "squareLength"
                , squareLength_function_type( &::OSG::Vector< double, 4u >::squareLength ) );
        
        }
        { //::OSG::Vector< double, 4u >::subZero
        
            typedef OSG::Vector< double, 4u > exported_class_t;
            typedef ::OSG::Vector< double, 4u > & ( exported_class_t::*subZero_function_type )(  ) ;
            
            Vec4d_exposer.def( 
                "subZero"
                , subZero_function_type( &::OSG::Vector< double, 4u >::subZero )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::Vector< double, 4u >::subZero
        
            typedef OSG::Vector< double, 4u > exported_class_t;
            typedef ::OSG::Vector< double, 4u > const & ( exported_class_t::*subZero_function_type )(  ) const;
            
            Vec4d_exposer.def( 
                "subZero"
                , subZero_function_type( &::OSG::Vector< double, 4u >::subZero )
                , bp::return_internal_reference< >() );
        
        }
        Vec4d_exposer.def("__setitem__",osgwrap::setArrayElement<OSG::Vec4d,OSG::Vec4d::ValueType>);
        Vec4d_exposer.def(boost::python::self_ns::str(boost::python::self));
    }

}
