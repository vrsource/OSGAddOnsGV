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
#include "Pnt3f.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_Pnt3f_class(){

    { //::OSG::Point< float, 3u >
        typedef bp::class_< OSG::Point< float, 3u >, bp::bases< OSG::VecStorage3< float > > > Pnt3f_exposer_t;
        Pnt3f_exposer_t Pnt3f_exposer = Pnt3f_exposer_t( "Pnt3f", bp::init< >() );
        bp::scope Pnt3f_scope( Pnt3f_exposer );
        Pnt3f_exposer.def( bp::init< float const * >(( bp::arg("pVals") )) );
        bp::implicitly_convertible< float const *, OSG::Point< float, 3u > >();
        Pnt3f_exposer.def( bp::init< float * >(( bp::arg("pVals") )) );
        bp::implicitly_convertible< float *, OSG::Point< float, 3u > >();
        Pnt3f_exposer.def( bp::init< OSG::Point< float, 3u > const & >(( bp::arg("source") )) );
        Pnt3f_exposer.def( bp::init< float >(( bp::arg("rVal1") )) );
        bp::implicitly_convertible< float const, OSG::Point< float, 3u > >();
        Pnt3f_exposer.def( bp::init< float, float >(( bp::arg("rVal1"), bp::arg("rVal2") )) );
        Pnt3f_exposer.def( bp::init< float, float, float >(( bp::arg("rVal1"), bp::arg("rVal2"), bp::arg("rVal3") )) );
        Pnt3f_exposer.def( bp::init< float, float, float, float >(( bp::arg("rVal1"), bp::arg("rVal2"), bp::arg("rVal3"), bp::arg("rVal4") )) );
        { //::OSG::Point< float, 3u >::dist
        
            typedef OSG::Point< float, 3u > exported_class_t;
            typedef ::OSG::Real32 ( exported_class_t::*dist_function_type )( ::OSG::Point< float, 3u > const & ) const;
            
            Pnt3f_exposer.def( 
                "dist"
                , dist_function_type( &::OSG::Point< float, 3u >::dist )
                , ( bp::arg("pnt") ) );
        
        }
        { //::OSG::Point< float, 3u >::dist2
        
            typedef OSG::Point< float, 3u > exported_class_t;
            typedef ::OSG::Real32 ( exported_class_t::*dist2_function_type )( ::OSG::Point< float, 3u > const & ) const;
            
            Pnt3f_exposer.def( 
                "dist2"
                , dist2_function_type( &::OSG::Point< float, 3u >::dist2 )
                , ( bp::arg("pnt") ) );
        
        }
        { //::OSG::Point< float, 3u >::equals
        
            typedef OSG::Point< float, 3u > exported_class_t;
            typedef bool ( exported_class_t::*equals_function_type )( ::OSG::Point< float, 3u > const &,float const ) const;
            
            Pnt3f_exposer.def( 
                "equals"
                , equals_function_type( &::OSG::Point< float, 3u >::equals )
                , ( bp::arg("pnt"), bp::arg("tolerance") ) );
        
        }
        { //::OSG::Point< float, 3u >::isZero
        
            typedef OSG::Point< float, 3u > exported_class_t;
            typedef bool ( exported_class_t::*isZero_function_type )(  ) const;
            
            Pnt3f_exposer.def( 
                "isZero"
                , isZero_function_type( &::OSG::Point< float, 3u >::isZero ) );
        
        }
        { //::OSG::Point< float, 3u >::maxDim
        
            typedef OSG::Point< float, 3u > exported_class_t;
            typedef ::OSG::UInt32 ( exported_class_t::*maxDim_function_type )(  ) const;
            
            Pnt3f_exposer.def( 
                "maxDim"
                , maxDim_function_type( &::OSG::Point< float, 3u >::maxDim ) );
        
        }
        { //::OSG::Point< float, 3u >::maxDimAbs
        
            typedef OSG::Point< float, 3u > exported_class_t;
            typedef ::OSG::UInt32 ( exported_class_t::*maxDimAbs_function_type )(  ) const;
            
            Pnt3f_exposer.def( 
                "maxDimAbs"
                , maxDimAbs_function_type( &::OSG::Point< float, 3u >::maxDimAbs ) );
        
        }
        { //::OSG::Point< float, 3u >::maxValue
        
            typedef OSG::Point< float, 3u > exported_class_t;
            typedef ::OSG::Real32 ( exported_class_t::*maxValue_function_type )(  ) const;
            
            Pnt3f_exposer.def( 
                "maxValue"
                , maxValue_function_type( &::OSG::Point< float, 3u >::maxValue ) );
        
        }
        { //::OSG::Point< float, 3u >::negate
        
            typedef OSG::Point< float, 3u > exported_class_t;
            typedef void ( exported_class_t::*negate_function_type )(  ) ;
            
            Pnt3f_exposer.def( 
                "negate"
                , negate_function_type( &::OSG::Point< float, 3u >::negate ) );
        
        }
        Pnt3f_exposer.def( bp::self != bp::self );
        Pnt3f_exposer.def( bp::self * bp::other< float >() );
        Pnt3f_exposer.def( bp::self *= bp::other< float >() );
        Pnt3f_exposer.def( bp::self + bp::other< OSG::Vector< float, 3u > >() );
        Pnt3f_exposer.def( bp::self += bp::other< OSG::Vector< float, 3u > >() );
        Pnt3f_exposer.def( bp::self - bp::self );
        Pnt3f_exposer.def( bp::self - bp::other< OSG::Vector< float, 3u > >() );
        Pnt3f_exposer.def( -bp::self );
        Pnt3f_exposer.def( bp::self -= bp::other< OSG::Vector< float, 3u > >() );
        Pnt3f_exposer.def( bp::self / bp::other< float >() );
        Pnt3f_exposer.def( bp::self /= bp::other< float >() );
        Pnt3f_exposer.def( bp::self < bp::self );
        Pnt3f_exposer.def( bp::self == bp::self );
        { //::OSG::Point< float, 3u >::operator[]
        
            typedef OSG::Point< float, 3u > exported_class_t;
            typedef float & ( exported_class_t::*__getitem___function_type )( ::OSG::UInt32 const ) ;
            
            Pnt3f_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::OSG::Point< float, 3u >::operator[] )
                , ( bp::arg("uiVal") )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::OSG::Point< float, 3u >::operator[]
        
            typedef OSG::Point< float, 3u > exported_class_t;
            typedef float const & ( exported_class_t::*__getitem___function_type )( ::OSG::UInt32 const ) const;
            
            Pnt3f_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::OSG::Point< float, 3u >::operator[] )
                , ( bp::arg("uiVal") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::Point< float, 3u >::setNull
        
            typedef OSG::Point< float, 3u > exported_class_t;
            typedef void ( exported_class_t::*setNull_function_type )(  ) ;
            
            Pnt3f_exposer.def( 
                "setNull"
                , setNull_function_type( &::OSG::Point< float, 3u >::setNull ) );
        
        }
        { //::OSG::Point< float, 3u >::setValue
        
            typedef OSG::Point< float, 3u > exported_class_t;
            typedef void ( exported_class_t::*setValue_function_type )( ::OSG::Point< float, 3u > const & ) ;
            
            Pnt3f_exposer.def( 
                "setValue"
                , setValue_function_type( &::OSG::Point< float, 3u >::setValue )
                , ( bp::arg("pnt") ) );
        
        }
        { //::OSG::Point< float, 3u >::setValue
        
            typedef OSG::Point< float, 3u > exported_class_t;
            typedef void ( exported_class_t::*setValue_function_type )( float const * ) ;
            
            Pnt3f_exposer.def( 
                "setValue"
                , setValue_function_type( &::OSG::Point< float, 3u >::setValue )
                , ( bp::arg("pVals") ) );
        
        }
        { //::OSG::Point< float, 3u >::setValue
        
            typedef OSG::Point< float, 3u > exported_class_t;
            typedef void ( exported_class_t::*setValue_function_type )( float * ) ;
            
            Pnt3f_exposer.def( 
                "setValue"
                , setValue_function_type( &::OSG::Point< float, 3u >::setValue )
                , ( bp::arg("pVals") ) );
        
        }
        { //::OSG::Point< float, 3u >::setValueFromCString
        
            typedef OSG::Point< float, 3u > exported_class_t;
            typedef void ( exported_class_t::*setValueFromCString_function_type )( ::OSG::Char8 const * ) ;
            
            Pnt3f_exposer.def( 
                "setValueFromCString"
                , setValueFromCString_function_type( &::OSG::Point< float, 3u >::setValueFromCString )
                , ( bp::arg("szString") ) );
        
        }
        { //::OSG::Point< float, 3u >::setValueFromCString
        
            typedef OSG::Point< float, 3u > exported_class_t;
            typedef void ( exported_class_t::*setValueFromCString_function_type )( ::OSG::Char8 * ) ;
            
            Pnt3f_exposer.def( 
                "setValueFromCString"
                , setValueFromCString_function_type( &::OSG::Point< float, 3u >::setValueFromCString )
                , ( bp::arg("szString") ) );
        
        }
        { //::OSG::Point< float, 3u >::subZero
        
            typedef OSG::Point< float, 3u > exported_class_t;
            typedef ::OSG::Vector< float, 3u > & ( exported_class_t::*subZero_function_type )(  ) ;
            
            Pnt3f_exposer.def( 
                "subZero"
                , subZero_function_type( &::OSG::Point< float, 3u >::subZero )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::Point< float, 3u >::subZero
        
            typedef OSG::Point< float, 3u > exported_class_t;
            typedef ::OSG::Vector< float, 3u > const & ( exported_class_t::*subZero_function_type )(  ) const;
            
            Pnt3f_exposer.def( 
                "subZero"
                , subZero_function_type( &::OSG::Point< float, 3u >::subZero )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        Pnt3f_exposer.def("getValues",osgwrap::getValues3<OSG::Pnt3f>);
        Pnt3f_exposer.def("__setitem__",osgwrap::setArrayElement<OSG::Pnt3f,OSG::Pnt3f::ValueType>);
        Pnt3f_exposer.def(boost::python::self_ns::str(boost::python::self));
    }

}
