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
#include "Pnt3d.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_Pnt3d_class(){

    { //::OSG::Point< double, 3u >
        typedef bp::class_< OSG::Point< double, 3u >, bp::bases< OSG::VecStorage3< double > > > Pnt3d_exposer_t;
        Pnt3d_exposer_t Pnt3d_exposer = Pnt3d_exposer_t( "Pnt3d", bp::init< >() );
        bp::scope Pnt3d_scope( Pnt3d_exposer );
        Pnt3d_exposer.def( bp::init< double const * >(( bp::arg("pVals") )) );
        bp::implicitly_convertible< double const *, OSG::Point< double, 3u > >();
        Pnt3d_exposer.def( bp::init< double * >(( bp::arg("pVals") )) );
        bp::implicitly_convertible< double *, OSG::Point< double, 3u > >();
        Pnt3d_exposer.def( bp::init< OSG::Point< double, 3u > const & >(( bp::arg("source") )) );
        Pnt3d_exposer.def( bp::init< double >(( bp::arg("rVal1") )) );
        bp::implicitly_convertible< double const, OSG::Point< double, 3u > >();
        Pnt3d_exposer.def( bp::init< double, double >(( bp::arg("rVal1"), bp::arg("rVal2") )) );
        Pnt3d_exposer.def( bp::init< double, double, double >(( bp::arg("rVal1"), bp::arg("rVal2"), bp::arg("rVal3") )) );
        Pnt3d_exposer.def( bp::init< double, double, double, double >(( bp::arg("rVal1"), bp::arg("rVal2"), bp::arg("rVal3"), bp::arg("rVal4") )) );
        { //::OSG::Point< double, 3u >::dist
        
            typedef OSG::Point< double, 3u > exported_class_t;
            typedef ::OSG::Real64 ( exported_class_t::*dist_function_type )( ::OSG::Point< double, 3u > const & ) const;
            
            Pnt3d_exposer.def( 
                "dist"
                , dist_function_type( &::OSG::Point< double, 3u >::dist )
                , ( bp::arg("pnt") ) );
        
        }
        { //::OSG::Point< double, 3u >::dist2
        
            typedef OSG::Point< double, 3u > exported_class_t;
            typedef ::OSG::Real64 ( exported_class_t::*dist2_function_type )( ::OSG::Point< double, 3u > const & ) const;
            
            Pnt3d_exposer.def( 
                "dist2"
                , dist2_function_type( &::OSG::Point< double, 3u >::dist2 )
                , ( bp::arg("pnt") ) );
        
        }
        { //::OSG::Point< double, 3u >::equals
        
            typedef OSG::Point< double, 3u > exported_class_t;
            typedef bool ( exported_class_t::*equals_function_type )( ::OSG::Point< double, 3u > const &,double const ) const;
            
            Pnt3d_exposer.def( 
                "equals"
                , equals_function_type( &::OSG::Point< double, 3u >::equals )
                , ( bp::arg("pnt"), bp::arg("tolerance") ) );
        
        }
        { //::OSG::Point< double, 3u >::isZero
        
            typedef OSG::Point< double, 3u > exported_class_t;
            typedef bool ( exported_class_t::*isZero_function_type )(  ) const;
            
            Pnt3d_exposer.def( 
                "isZero"
                , isZero_function_type( &::OSG::Point< double, 3u >::isZero ) );
        
        }
        { //::OSG::Point< double, 3u >::maxDim
        
            typedef OSG::Point< double, 3u > exported_class_t;
            typedef ::OSG::UInt32 ( exported_class_t::*maxDim_function_type )(  ) const;
            
            Pnt3d_exposer.def( 
                "maxDim"
                , maxDim_function_type( &::OSG::Point< double, 3u >::maxDim ) );
        
        }
        { //::OSG::Point< double, 3u >::maxDimAbs
        
            typedef OSG::Point< double, 3u > exported_class_t;
            typedef ::OSG::UInt32 ( exported_class_t::*maxDimAbs_function_type )(  ) const;
            
            Pnt3d_exposer.def( 
                "maxDimAbs"
                , maxDimAbs_function_type( &::OSG::Point< double, 3u >::maxDimAbs ) );
        
        }
        { //::OSG::Point< double, 3u >::maxValue
        
            typedef OSG::Point< double, 3u > exported_class_t;
            typedef ::OSG::Real64 ( exported_class_t::*maxValue_function_type )(  ) const;
            
            Pnt3d_exposer.def( 
                "maxValue"
                , maxValue_function_type( &::OSG::Point< double, 3u >::maxValue ) );
        
        }
        { //::OSG::Point< double, 3u >::negate
        
            typedef OSG::Point< double, 3u > exported_class_t;
            typedef void ( exported_class_t::*negate_function_type )(  ) ;
            
            Pnt3d_exposer.def( 
                "negate"
                , negate_function_type( &::OSG::Point< double, 3u >::negate ) );
        
        }
        Pnt3d_exposer.def( bp::self != bp::self );
        Pnt3d_exposer.def( bp::self * bp::other< double >() );
        Pnt3d_exposer.def( bp::self *= bp::other< double >() );
        Pnt3d_exposer.def( bp::self + bp::other< OSG::Vector< double, 3u > >() );
        Pnt3d_exposer.def( bp::self += bp::other< OSG::Vector< double, 3u > >() );
        Pnt3d_exposer.def( bp::self - bp::self );
        Pnt3d_exposer.def( bp::self - bp::other< OSG::Vector< double, 3u > >() );
        Pnt3d_exposer.def( -bp::self );
        Pnt3d_exposer.def( bp::self -= bp::other< OSG::Vector< double, 3u > >() );
        Pnt3d_exposer.def( bp::self / bp::other< double >() );
        Pnt3d_exposer.def( bp::self /= bp::other< double >() );
        Pnt3d_exposer.def( bp::self < bp::self );
        Pnt3d_exposer.def( bp::self == bp::self );
        { //::OSG::Point< double, 3u >::operator[]
        
            typedef OSG::Point< double, 3u > exported_class_t;
            typedef double & ( exported_class_t::*__getitem___function_type )( ::OSG::UInt32 const ) ;
            
            Pnt3d_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::OSG::Point< double, 3u >::operator[] )
                , ( bp::arg("uiVal") )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::OSG::Point< double, 3u >::operator[]
        
            typedef OSG::Point< double, 3u > exported_class_t;
            typedef double const & ( exported_class_t::*__getitem___function_type )( ::OSG::UInt32 const ) const;
            
            Pnt3d_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::OSG::Point< double, 3u >::operator[] )
                , ( bp::arg("uiVal") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::Point< double, 3u >::setNull
        
            typedef OSG::Point< double, 3u > exported_class_t;
            typedef void ( exported_class_t::*setNull_function_type )(  ) ;
            
            Pnt3d_exposer.def( 
                "setNull"
                , setNull_function_type( &::OSG::Point< double, 3u >::setNull ) );
        
        }
        { //::OSG::Point< double, 3u >::setValue
        
            typedef OSG::Point< double, 3u > exported_class_t;
            typedef void ( exported_class_t::*setValue_function_type )( ::OSG::Point< double, 3u > const & ) ;
            
            Pnt3d_exposer.def( 
                "setValue"
                , setValue_function_type( &::OSG::Point< double, 3u >::setValue )
                , ( bp::arg("pnt") ) );
        
        }
        { //::OSG::Point< double, 3u >::setValue
        
            typedef OSG::Point< double, 3u > exported_class_t;
            typedef void ( exported_class_t::*setValue_function_type )( double const * ) ;
            
            Pnt3d_exposer.def( 
                "setValue"
                , setValue_function_type( &::OSG::Point< double, 3u >::setValue )
                , ( bp::arg("pVals") ) );
        
        }
        { //::OSG::Point< double, 3u >::setValue
        
            typedef OSG::Point< double, 3u > exported_class_t;
            typedef void ( exported_class_t::*setValue_function_type )( double * ) ;
            
            Pnt3d_exposer.def( 
                "setValue"
                , setValue_function_type( &::OSG::Point< double, 3u >::setValue )
                , ( bp::arg("pVals") ) );
        
        }
        { //::OSG::Point< double, 3u >::setValueFromCString
        
            typedef OSG::Point< double, 3u > exported_class_t;
            typedef void ( exported_class_t::*setValueFromCString_function_type )( ::OSG::Char8 const * ) ;
            
            Pnt3d_exposer.def( 
                "setValueFromCString"
                , setValueFromCString_function_type( &::OSG::Point< double, 3u >::setValueFromCString )
                , ( bp::arg("szString") ) );
        
        }
        { //::OSG::Point< double, 3u >::setValueFromCString
        
            typedef OSG::Point< double, 3u > exported_class_t;
            typedef void ( exported_class_t::*setValueFromCString_function_type )( ::OSG::Char8 * ) ;
            
            Pnt3d_exposer.def( 
                "setValueFromCString"
                , setValueFromCString_function_type( &::OSG::Point< double, 3u >::setValueFromCString )
                , ( bp::arg("szString") ) );
        
        }
        { //::OSG::Point< double, 3u >::subZero
        
            typedef OSG::Point< double, 3u > exported_class_t;
            typedef ::OSG::Vector< double, 3u > & ( exported_class_t::*subZero_function_type )(  ) ;
            
            Pnt3d_exposer.def( 
                "subZero"
                , subZero_function_type( &::OSG::Point< double, 3u >::subZero )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::Point< double, 3u >::subZero
        
            typedef OSG::Point< double, 3u > exported_class_t;
            typedef ::OSG::Vector< double, 3u > const & ( exported_class_t::*subZero_function_type )(  ) const;
            
            Pnt3d_exposer.def( 
                "subZero"
                , subZero_function_type( &::OSG::Point< double, 3u >::subZero )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        Pnt3d_exposer.def("getValues",osgwrap::getValues3<OSG::Pnt3d>);
        Pnt3d_exposer.def("__setitem__",osgwrap::setArrayElement<OSG::Pnt3d,OSG::Pnt3d::ValueType>);
        Pnt3d_exposer.def(boost::python::self_ns::str(boost::python::self));
    }

}
