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
#include "Quaternion.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_Quaternion_class(){

    { //::OSG::QuaternionBase< float >
        typedef bp::class_< OSG::QuaternionBase< float > > Quaternion_exposer_t;
        Quaternion_exposer_t Quaternion_exposer = Quaternion_exposer_t( "Quaternion", bp::init< >() );
        bp::scope Quaternion_scope( Quaternion_exposer );
        Quaternion_exposer.def( bp::init< float const * >(( bp::arg("values") )) );
        bp::implicitly_convertible< float const *, OSG::QuaternionBase< float > >();
        Quaternion_exposer.def( bp::init< float, float, float, float >(( bp::arg("x"), bp::arg("y"), bp::arg("z"), bp::arg("w") )) );
        Quaternion_exposer.def( bp::init< OSG::QuaternionBase< float > const & >(( bp::arg("source") )) );
        Quaternion_exposer.def( bp::init< OSG::TransformationMatrix< float > const & >(( bp::arg("matrix") )) );
        bp::implicitly_convertible< OSG::TransformationMatrix< float > const &, OSG::QuaternionBase< float > >();
        Quaternion_exposer.def( bp::init< OSG::Vector< float, 3u > const &, float >(( bp::arg("axis"), bp::arg("angle") )) );
        Quaternion_exposer.def( bp::init< OSG::Vector< float, 3u > const &, OSG::Vector< float, 3u > const & >(( bp::arg("rotateFrom"), bp::arg("rotateTo") )) );
        { //::OSG::QuaternionBase< float >::conj
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef ::OSG::QuaternionBase< float > ( *conj_function_type )( ::OSG::QuaternionBase< float > const & );
            
            Quaternion_exposer.def( 
                "conj"
                , conj_function_type( &::OSG::QuaternionBase< float >::conj )
                , ( bp::arg("val") ) );
        
        }
        { //::OSG::QuaternionBase< float >::conj
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef ::OSG::QuaternionBase< float > ( exported_class_t::*conj_function_type )(  ) const;
            
            Quaternion_exposer.def( 
                "conj"
                , conj_function_type( &::OSG::QuaternionBase< float >::conj ) );
        
        }
        { //::OSG::QuaternionBase< float >::conjThis
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef void ( exported_class_t::*conjThis_function_type )(  ) ;
            
            Quaternion_exposer.def( 
                "conjThis"
                , conjThis_function_type( &::OSG::QuaternionBase< float >::conjThis ) );
        
        }
        { //::OSG::QuaternionBase< float >::dot
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef float ( exported_class_t::*dot_function_type )( ::OSG::QuaternionBase< float > const & ) const;
            
            Quaternion_exposer.def( 
                "dot"
                , dot_function_type( &::OSG::QuaternionBase< float >::dot )
                , ( bp::arg("rValue") ) );
        
        }
        { //::OSG::QuaternionBase< float >::equals
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef bool ( exported_class_t::*equals_function_type )( ::OSG::QuaternionBase< float > const &,float const ) const;
            
            Quaternion_exposer.def( 
                "equals"
                , equals_function_type( &::OSG::QuaternionBase< float >::equals )
                , ( bp::arg("rot"), bp::arg("tolerance") ) );
        
        }
        { //::OSG::QuaternionBase< float >::exp
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef ::OSG::QuaternionBase< float > ( *exp_function_type )( ::OSG::QuaternionBase< float > const & );
            
            Quaternion_exposer.def( 
                "exp"
                , exp_function_type( &::OSG::QuaternionBase< float >::exp )
                , ( bp::arg("val") ) );
        
        }
        { //::OSG::QuaternionBase< float >::exp
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef ::OSG::QuaternionBase< float > ( exported_class_t::*exp_function_type )(  ) const;
            
            Quaternion_exposer.def( 
                "exp"
                , exp_function_type( &::OSG::QuaternionBase< float >::exp ) );
        
        }
        { //::OSG::QuaternionBase< float >::expThis
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef void ( exported_class_t::*expThis_function_type )(  ) ;
            
            Quaternion_exposer.def( 
                "expThis"
                , expThis_function_type( &::OSG::QuaternionBase< float >::expThis ) );
        
        }
        { //::OSG::QuaternionBase< float >::getEulerAngleDeg
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef void ( exported_class_t::*getEulerAngleDeg_function_type )( ::OSG::Vector< float, 3u > & ) const;
            
            Quaternion_exposer.def( 
                "getEulerAngleDeg"
                , getEulerAngleDeg_function_type( &::OSG::QuaternionBase< float >::getEulerAngleDeg )
                , ( bp::arg("euler") ) );
        
        }
        { //::OSG::QuaternionBase< float >::getEulerAngleRad
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef void ( exported_class_t::*getEulerAngleRad_function_type )( ::OSG::Vector< float, 3u > & ) const;
            
            Quaternion_exposer.def( 
                "getEulerAngleRad"
                , getEulerAngleRad_function_type( &::OSG::QuaternionBase< float >::getEulerAngleRad )
                , ( bp::arg("euler") ) );
        
        }
        { //::OSG::QuaternionBase< float >::getValue
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef void ( exported_class_t::*getValue_function_type )( ::OSG::TransformationMatrix< float > & ) const;
            
            Quaternion_exposer.def( 
                "getValue"
                , getValue_function_type( &::OSG::QuaternionBase< float >::getValue )
                , ( bp::arg("matrix") ) );
        
        }
        { //::OSG::QuaternionBase< float >::getValuesOnly
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef void ( exported_class_t::*getValuesOnly_function_type )( ::OSG::TransformationMatrix< float > & ) const;
            
            Quaternion_exposer.def( 
                "getValuesOnly"
                , getValuesOnly_function_type( &::OSG::QuaternionBase< float >::getValuesOnly )
                , ( bp::arg("matrix") ) );
        
        }
        { //::OSG::QuaternionBase< float >::identity
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef ::OSG::QuaternionBase< float > const & ( *identity_function_type )(  );
            
            Quaternion_exposer.def( 
                "identity"
                , identity_function_type( &::OSG::QuaternionBase< float >::identity )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::QuaternionBase< float >::inverse
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef ::OSG::QuaternionBase< float > ( *inverse_function_type )( ::OSG::QuaternionBase< float > const & );
            
            Quaternion_exposer.def( 
                "inverse"
                , inverse_function_type( &::OSG::QuaternionBase< float >::inverse )
                , ( bp::arg("val") ) );
        
        }
        { //::OSG::QuaternionBase< float >::inverse
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef ::OSG::QuaternionBase< float > ( exported_class_t::*inverse_function_type )(  ) const;
            
            Quaternion_exposer.def( 
                "inverse"
                , inverse_function_type( &::OSG::QuaternionBase< float >::inverse ) );
        
        }
        { //::OSG::QuaternionBase< float >::invert
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef void ( exported_class_t::*invert_function_type )(  ) ;
            
            Quaternion_exposer.def( 
                "invert"
                , invert_function_type( &::OSG::QuaternionBase< float >::invert ) );
        
        }
        { //::OSG::QuaternionBase< float >::length
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef float ( exported_class_t::*length_function_type )(  ) const;
            
            Quaternion_exposer.def( 
                "length"
                , length_function_type( &::OSG::QuaternionBase< float >::length ) );
        
        }
        { //::OSG::QuaternionBase< float >::lengthSquared
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef float ( exported_class_t::*lengthSquared_function_type )(  ) const;
            
            Quaternion_exposer.def( 
                "lengthSquared"
                , lengthSquared_function_type( &::OSG::QuaternionBase< float >::lengthSquared ) );
        
        }
        { //::OSG::QuaternionBase< float >::log
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef ::OSG::QuaternionBase< float > ( *log_function_type )( ::OSG::QuaternionBase< float > const & );
            
            Quaternion_exposer.def( 
                "log"
                , log_function_type( &::OSG::QuaternionBase< float >::log )
                , ( bp::arg("val") ) );
        
        }
        { //::OSG::QuaternionBase< float >::log
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef ::OSG::QuaternionBase< float > ( exported_class_t::*log_function_type )(  ) const;
            
            Quaternion_exposer.def( 
                "log"
                , log_function_type( &::OSG::QuaternionBase< float >::log ) );
        
        }
        { //::OSG::QuaternionBase< float >::logThis
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef void ( exported_class_t::*logThis_function_type )(  ) ;
            
            Quaternion_exposer.def( 
                "logThis"
                , logThis_function_type( &::OSG::QuaternionBase< float >::logThis ) );
        
        }
        { //::OSG::QuaternionBase< float >::mult
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef void ( exported_class_t::*mult_function_type )( ::OSG::QuaternionBase< float > const & ) ;
            
            Quaternion_exposer.def( 
                "mult"
                , mult_function_type( &::OSG::QuaternionBase< float >::mult )
                , ( bp::arg("other") ) );
        
        }
        { //::OSG::QuaternionBase< float >::multLeft
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef void ( exported_class_t::*multLeft_function_type )( ::OSG::QuaternionBase< float > const & ) ;
            
            Quaternion_exposer.def( 
                "multLeft"
                , multLeft_function_type( &::OSG::QuaternionBase< float >::multLeft )
                , ( bp::arg("other") ) );
        
        }
        { //::OSG::QuaternionBase< float >::multVec
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef void ( exported_class_t::*multVec_function_type )( ::OSG::Vector< float, 3u > const &,::OSG::Vector< float, 3u > & ) const;
            
            Quaternion_exposer.def( 
                "multVec"
                , multVec_function_type( &::OSG::QuaternionBase< float >::multVec )
                , ( bp::arg("src"), bp::arg("dst") ) );
        
        }
        { //::OSG::QuaternionBase< float >::nlerp
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef ::OSG::QuaternionBase< float > ( *nlerp_function_type )( ::OSG::QuaternionBase< float > const &,::OSG::QuaternionBase< float > const &,float const );
            
            Quaternion_exposer.def( 
                "nlerp"
                , nlerp_function_type( &::OSG::QuaternionBase< float >::nlerp )
                , ( bp::arg("rot0"), bp::arg("rot1"), bp::arg("t") ) );
        
        }
        { //::OSG::QuaternionBase< float >::nlerpThis
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef void ( exported_class_t::*nlerpThis_function_type )( ::OSG::QuaternionBase< float > const &,::OSG::QuaternionBase< float > const &,float const ) ;
            
            Quaternion_exposer.def( 
                "nlerpThis"
                , nlerpThis_function_type( &::OSG::QuaternionBase< float >::nlerpThis )
                , ( bp::arg("rot0"), bp::arg("rot1"), bp::arg("t") ) );
        
        }
        { //::OSG::QuaternionBase< float >::normalize
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef void ( exported_class_t::*normalize_function_type )(  ) ;
            
            Quaternion_exposer.def( 
                "normalize"
                , normalize_function_type( &::OSG::QuaternionBase< float >::normalize ) );
        
        }
        Quaternion_exposer.def( bp::self != bp::self );
        Quaternion_exposer.def( bp::self * bp::self );
        Quaternion_exposer.def( bp::self * bp::other< float >() );
        Quaternion_exposer.def( bp::self *= bp::self );
        Quaternion_exposer.def( bp::self + bp::self );
        Quaternion_exposer.def( bp::self += bp::self );
        Quaternion_exposer.def( bp::self - bp::self );
        Quaternion_exposer.def( bp::self / bp::self );
        Quaternion_exposer.def( bp::self / bp::other< float >() );
        Quaternion_exposer.def( bp::self == bp::self );
        { //::OSG::QuaternionBase< float >::operator[]
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef float & ( exported_class_t::*__getitem___function_type )( ::OSG::UInt32 const ) ;
            
            Quaternion_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::OSG::QuaternionBase< float >::operator[] )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::OSG::QuaternionBase< float >::operator[]
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef float const & ( exported_class_t::*__getitem___function_type )( ::OSG::UInt32 const ) const;
            
            Quaternion_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::OSG::QuaternionBase< float >::operator[] )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::QuaternionBase< float >::scaleAngle
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef void ( exported_class_t::*scaleAngle_function_type )( float ) ;
            
            Quaternion_exposer.def( 
                "scaleAngle"
                , scaleAngle_function_type( &::OSG::QuaternionBase< float >::scaleAngle )
                , ( bp::arg("scaleFactor") ) );
        
        }
        { //::OSG::QuaternionBase< float >::setIdentity
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef void ( exported_class_t::*setIdentity_function_type )(  ) ;
            
            Quaternion_exposer.def( 
                "setIdentity"
                , setIdentity_function_type( &::OSG::QuaternionBase< float >::setIdentity ) );
        
        }
        { //::OSG::QuaternionBase< float >::setValue
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef void ( exported_class_t::*setValue_function_type )( ::OSG::QuaternionBase< float > const & ) ;
            
            Quaternion_exposer.def( 
                "setValue"
                , setValue_function_type( &::OSG::QuaternionBase< float >::setValue )
                , ( bp::arg("quat") ) );
        
        }
        { //::OSG::QuaternionBase< float >::setValue
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef void ( exported_class_t::*setValue_function_type )( ::OSG::TransformationMatrix< float > const & ) ;
            
            Quaternion_exposer.def( 
                "setValue"
                , setValue_function_type( &::OSG::QuaternionBase< float >::setValue )
                , ( bp::arg("matrix") ) );
        
        }
        { //::OSG::QuaternionBase< float >::setValue
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef void ( exported_class_t::*setValue_function_type )( ::OSG::Vector< float, 3u > const &,::OSG::Vector< float, 3u > const & ) ;
            
            Quaternion_exposer.def( 
                "setValue"
                , setValue_function_type( &::OSG::QuaternionBase< float >::setValue )
                , ( bp::arg("rotateFrom"), bp::arg("rotateTo") ) );
        
        }
        { //::OSG::QuaternionBase< float >::setValue
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef void ( exported_class_t::*setValue_function_type )( float const,float const,float const ) ;
            
            Quaternion_exposer.def( 
                "setValue"
                , setValue_function_type( &::OSG::QuaternionBase< float >::setValue )
                , ( bp::arg("alpha"), bp::arg("beta"), bp::arg("gamma") ) );
        
        }
        { //::OSG::QuaternionBase< float >::setValueAsAxisDeg
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef void ( exported_class_t::*setValueAsAxisDeg_function_type )( float const * ) ;
            
            Quaternion_exposer.def( 
                "setValueAsAxisDeg"
                , setValueAsAxisDeg_function_type( &::OSG::QuaternionBase< float >::setValueAsAxisDeg )
                , ( bp::arg("valsP") ) );
        
        }
        { //::OSG::QuaternionBase< float >::setValueAsAxisDeg
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef void ( exported_class_t::*setValueAsAxisDeg_function_type )( float const,float const,float const,float const ) ;
            
            Quaternion_exposer.def( 
                "setValueAsAxisDeg"
                , setValueAsAxisDeg_function_type( &::OSG::QuaternionBase< float >::setValueAsAxisDeg )
                , ( bp::arg("x"), bp::arg("y"), bp::arg("z"), bp::arg("w") ) );
        
        }
        { //::OSG::QuaternionBase< float >::setValueAsAxisDeg
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef void ( exported_class_t::*setValueAsAxisDeg_function_type )( ::OSG::Vector< float, 3u > const &,float ) ;
            
            Quaternion_exposer.def( 
                "setValueAsAxisDeg"
                , setValueAsAxisDeg_function_type( &::OSG::QuaternionBase< float >::setValueAsAxisDeg )
                , ( bp::arg("axis"), bp::arg("angle") ) );
        
        }
        { //::OSG::QuaternionBase< float >::setValueAsAxisDeg
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef void ( exported_class_t::*setValueAsAxisDeg_function_type )( ::OSG::Char8 const * ) ;
            
            Quaternion_exposer.def( 
                "setValueAsAxisDeg"
                , setValueAsAxisDeg_function_type( &::OSG::QuaternionBase< float >::setValueAsAxisDeg )
                , ( bp::arg("str") ) );
        
        }
        { //::OSG::QuaternionBase< float >::setValueAsAxisRad
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef void ( exported_class_t::*setValueAsAxisRad_function_type )( float const * ) ;
            
            Quaternion_exposer.def( 
                "setValueAsAxisRad"
                , setValueAsAxisRad_function_type( &::OSG::QuaternionBase< float >::setValueAsAxisRad )
                , ( bp::arg("valsP") ) );
        
        }
        { //::OSG::QuaternionBase< float >::setValueAsAxisRad
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef void ( exported_class_t::*setValueAsAxisRad_function_type )( float const,float const,float const,float const ) ;
            
            Quaternion_exposer.def( 
                "setValueAsAxisRad"
                , setValueAsAxisRad_function_type( &::OSG::QuaternionBase< float >::setValueAsAxisRad )
                , ( bp::arg("x"), bp::arg("y"), bp::arg("z"), bp::arg("w") ) );
        
        }
        { //::OSG::QuaternionBase< float >::setValueAsAxisRad
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef void ( exported_class_t::*setValueAsAxisRad_function_type )( ::OSG::Vector< float, 3u > const &,float ) ;
            
            Quaternion_exposer.def( 
                "setValueAsAxisRad"
                , setValueAsAxisRad_function_type( &::OSG::QuaternionBase< float >::setValueAsAxisRad )
                , ( bp::arg("axis"), bp::arg("angle") ) );
        
        }
        { //::OSG::QuaternionBase< float >::setValueAsAxisRad
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef void ( exported_class_t::*setValueAsAxisRad_function_type )( ::OSG::Char8 const * ) ;
            
            Quaternion_exposer.def( 
                "setValueAsAxisRad"
                , setValueAsAxisRad_function_type( &::OSG::QuaternionBase< float >::setValueAsAxisRad )
                , ( bp::arg("str") ) );
        
        }
        { //::OSG::QuaternionBase< float >::setValueAsQuat
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef void ( exported_class_t::*setValueAsQuat_function_type )( float const * ) ;
            
            Quaternion_exposer.def( 
                "setValueAsQuat"
                , setValueAsQuat_function_type( &::OSG::QuaternionBase< float >::setValueAsQuat )
                , ( bp::arg("valsP") ) );
        
        }
        { //::OSG::QuaternionBase< float >::setValueAsQuat
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef void ( exported_class_t::*setValueAsQuat_function_type )( float const,float const,float const,float const ) ;
            
            Quaternion_exposer.def( 
                "setValueAsQuat"
                , setValueAsQuat_function_type( &::OSG::QuaternionBase< float >::setValueAsQuat )
                , ( bp::arg("x"), bp::arg("y"), bp::arg("z"), bp::arg("w") ) );
        
        }
        { //::OSG::QuaternionBase< float >::setValueAsQuat
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef void ( exported_class_t::*setValueAsQuat_function_type )( ::OSG::Char8 const * ) ;
            
            Quaternion_exposer.def( 
                "setValueAsQuat"
                , setValueAsQuat_function_type( &::OSG::QuaternionBase< float >::setValueAsQuat )
                , ( bp::arg("str") ) );
        
        }
        { //::OSG::QuaternionBase< float >::setValueFromCString
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef void ( exported_class_t::*setValueFromCString_function_type )( ::OSG::Char8 const * ) ;
            
            Quaternion_exposer.def( 
                "setValueFromCString"
                , setValueFromCString_function_type( &::OSG::QuaternionBase< float >::setValueFromCString )
                , ( bp::arg("szString") ) );
        
        }
        { //::OSG::QuaternionBase< float >::setValueFromCString
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef void ( exported_class_t::*setValueFromCString_function_type )( ::OSG::Char8 * ) ;
            
            Quaternion_exposer.def( 
                "setValueFromCString"
                , setValueFromCString_function_type( &::OSG::QuaternionBase< float >::setValueFromCString )
                , ( bp::arg("szString") ) );
        
        }
        { //::OSG::QuaternionBase< float >::slerp
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef ::OSG::QuaternionBase< float > ( *slerp_function_type )( ::OSG::QuaternionBase< float > const &,::OSG::QuaternionBase< float > const &,float const );
            
            Quaternion_exposer.def( 
                "slerp"
                , slerp_function_type( &::OSG::QuaternionBase< float >::slerp )
                , ( bp::arg("rot0"), bp::arg("rot1"), bp::arg("t") ) );
        
        }
        { //::OSG::QuaternionBase< float >::slerpThis
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef void ( exported_class_t::*slerpThis_function_type )( ::OSG::QuaternionBase< float > const &,::OSG::QuaternionBase< float > const &,float const ) ;
            
            Quaternion_exposer.def( 
                "slerpThis"
                , slerpThis_function_type( &::OSG::QuaternionBase< float >::slerpThis )
                , ( bp::arg("rot0"), bp::arg("rot1"), bp::arg("t") ) );
        
        }
        { //::OSG::QuaternionBase< float >::squad
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef ::OSG::QuaternionBase< float > ( *squad_function_type )( ::std::vector< OSG::QuaternionBase<float> > const &,::std::vector< float > const &,::OSG::Real32 const & );
            
            Quaternion_exposer.def( 
                "squad"
                , squad_function_type( &::OSG::QuaternionBase< float >::squad )
                , ( bp::arg("Q"), bp::arg("t"), bp::arg("s") ) );
        
        }
        { //::OSG::QuaternionBase< float >::squad
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef void ( *squad_function_type )( ::std::vector< OSG::QuaternionBase<float> > const &,::std::vector< float > const &,::OSG::Real32 const &,::OSG::QuaternionBase< float > & );
            
            Quaternion_exposer.def( 
                "squad"
                , squad_function_type( &::OSG::QuaternionBase< float >::squad )
                , ( bp::arg("Q"), bp::arg("t"), bp::arg("s"), bp::arg("Result") ) );
        
        }
        { //::OSG::QuaternionBase< float >::w
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef float ( exported_class_t::*w_function_type )(  ) const;
            
            Quaternion_exposer.def( 
                "w"
                , w_function_type( &::OSG::QuaternionBase< float >::w ) );
        
        }
        { //::OSG::QuaternionBase< float >::x
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef float ( exported_class_t::*x_function_type )(  ) const;
            
            Quaternion_exposer.def( 
                "x"
                , x_function_type( &::OSG::QuaternionBase< float >::x ) );
        
        }
        { //::OSG::QuaternionBase< float >::y
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef float ( exported_class_t::*y_function_type )(  ) const;
            
            Quaternion_exposer.def( 
                "y"
                , y_function_type( &::OSG::QuaternionBase< float >::y ) );
        
        }
        { //::OSG::QuaternionBase< float >::z
        
            typedef OSG::QuaternionBase< float > exported_class_t;
            typedef float ( exported_class_t::*z_function_type )(  ) const;
            
            Quaternion_exposer.def( 
                "z"
                , z_function_type( &::OSG::QuaternionBase< float >::z ) );
        
        }
        Quaternion_exposer.staticmethod( "conj" );
        Quaternion_exposer.staticmethod( "exp" );
        Quaternion_exposer.staticmethod( "identity" );
        Quaternion_exposer.staticmethod( "inverse" );
        Quaternion_exposer.staticmethod( "log" );
        Quaternion_exposer.staticmethod( "nlerp" );
        Quaternion_exposer.staticmethod( "slerp" );
        Quaternion_exposer.staticmethod( "squad" );
        Quaternion_exposer.def("getValues",osgwrap::getValues4<OSG::QuaternionBase<OSG::Real32> >);
        Quaternion_exposer.def("getValueAsQuat",osgwrap::getValues4<OSG::QuaternionBase<OSG::Real32> >);
        Quaternion_exposer.def("getValueAsAxisDeg",osgwrap::getValueAsAxisDeg<OSG::Real32>);
        Quaternion_exposer.def("getValueAsAxisRad",osgwrap::getValueAsAxisRad<OSG::Real32>);
        Quaternion_exposer.def("__setitem__",osgwrap::setArrayElement<OSG::Quaternion, OSG::Quaternion::ValueType>);
        Quaternion_exposer.def(boost::python::self_ns::str(boost::python::self));
    }

}
