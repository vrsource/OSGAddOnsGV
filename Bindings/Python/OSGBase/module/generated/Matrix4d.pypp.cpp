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
#include "Matrix4d.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_Matrix4d_class(){

    { //::OSG::TransformationMatrix< double >
        typedef bp::class_< OSG::TransformationMatrix< double > > Matrix4d_exposer_t;
        Matrix4d_exposer_t Matrix4d_exposer = Matrix4d_exposer_t( "Matrix4d", bp::init< >() );
        bp::scope Matrix4d_scope( Matrix4d_exposer );
        Matrix4d_exposer.def( bp::init< OSG::TransformationMatrix< double > const & >(( bp::arg("source") )) );
        Matrix4d_exposer.def( bp::init< OSG::Vector< double, 3u > const &, OSG::Vector< double, 3u > const &, OSG::Vector< double, 3u > const & >(( bp::arg("vector1"), bp::arg("vector2"), bp::arg("vector3") )) );
        Matrix4d_exposer.def( bp::init< OSG::Vector< double, 4u > const &, OSG::Vector< double, 4u > const &, OSG::Vector< double, 4u > const &, OSG::Vector< double, 4u > const & >(( bp::arg("vector1"), bp::arg("vector2"), bp::arg("vector3"), bp::arg("vector4") )) );
        Matrix4d_exposer.def( bp::init< OSG::Vector< double, 3u > const &, OSG::Vector< double, 3u > const &, OSG::Vector< double, 3u > const &, OSG::Vector< double, 3u > const & >(( bp::arg("vector1"), bp::arg("vector2"), bp::arg("vector3"), bp::arg("vector4") )) );
        Matrix4d_exposer.def( bp::init< double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double >(( bp::arg("rVal00"), bp::arg("rVal10"), bp::arg("rVal20"), bp::arg("rVal30"), bp::arg("rVal01"), bp::arg("rVal11"), bp::arg("rVal21"), bp::arg("rVal31"), bp::arg("rVal02"), bp::arg("rVal12"), bp::arg("rVal22"), bp::arg("rVal32"), bp::arg("rVal03"), bp::arg("rVal13"), bp::arg("rVal23"), bp::arg("rVal33") )) );
        { //::OSG::TransformationMatrix< double >::add
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef void ( exported_class_t::*add_function_type )( ::OSG::TransformationMatrix< double > const & ) ;
            
            Matrix4d_exposer.def( 
                "add"
                , add_function_type( &::OSG::TransformationMatrix< double >::add )
                , ( bp::arg("matrix") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::addScaled
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef void ( exported_class_t::*addScaled_function_type )( ::OSG::TransformationMatrix< double > const &,double ) ;
            
            Matrix4d_exposer.def( 
                "addScaled"
                , addScaled_function_type( &::OSG::TransformationMatrix< double >::addScaled )
                , ( bp::arg("matrix"), bp::arg("s") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::det
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef double ( exported_class_t::*det_function_type )(  ) const;
            
            Matrix4d_exposer.def( 
                "det"
                , det_function_type( &::OSG::TransformationMatrix< double >::det ) );
        
        }
        { //::OSG::TransformationMatrix< double >::det3
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef double ( exported_class_t::*det3_function_type )(  ) const;
            
            Matrix4d_exposer.def( 
                "det3"
                , det3_function_type( &::OSG::TransformationMatrix< double >::det3 ) );
        
        }
        { //::OSG::TransformationMatrix< double >::equals
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef bool ( exported_class_t::*equals_function_type )( ::OSG::TransformationMatrix< double > const &,double const ) const;
            
            Matrix4d_exposer.def( 
                "equals"
                , equals_function_type( &::OSG::TransformationMatrix< double >::equals )
                , ( bp::arg("matrix"), bp::arg("tolerance") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::exp
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef bool ( exported_class_t::*exp_function_type )( ::OSG::TransformationMatrix< double > & ) const;
            
            Matrix4d_exposer.def( 
                "exp"
                , exp_function_type( &::OSG::TransformationMatrix< double >::exp )
                , ( bp::arg("result") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::expOf
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef bool ( exported_class_t::*expOf_function_type )( ::OSG::TransformationMatrix< double > const & ) ;
            
            Matrix4d_exposer.def( 
                "expOf"
                , expOf_function_type( &::OSG::TransformationMatrix< double >::expOf )
                , ( bp::arg("matrix") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::factor
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef bool ( exported_class_t::*factor_function_type )( ::OSG::TransformationMatrix< double > &,::OSG::Vector< double, 3u > &,::OSG::TransformationMatrix< double > &,::OSG::Vector< double, 3u > &,::OSG::TransformationMatrix< double > & ) const;
            
            Matrix4d_exposer.def( 
                "factor"
                , factor_function_type( &::OSG::TransformationMatrix< double >::factor )
                , ( bp::arg("r"), bp::arg("s"), bp::arg("u"), bp::arg("t"), bp::arg("proj") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::identity
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef ::OSG::TransformationMatrix< double > const & ( *identity_function_type )(  );
            
            Matrix4d_exposer.def( 
                "identity"
                , identity_function_type( &::OSG::TransformationMatrix< double >::identity )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::TransformationMatrix< double >::inverse
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef bool ( exported_class_t::*inverse_function_type )( ::OSG::TransformationMatrix< double > & ) const;
            
            Matrix4d_exposer.def( 
                "inverse"
                , inverse_function_type( &::OSG::TransformationMatrix< double >::inverse )
                , ( bp::arg("result") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::inverse3
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef bool ( exported_class_t::*inverse3_function_type )( ::OSG::TransformationMatrix< double > & ) const;
            
            Matrix4d_exposer.def( 
                "inverse3"
                , inverse3_function_type( &::OSG::TransformationMatrix< double >::inverse3 )
                , ( bp::arg("result") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::invert
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef bool ( exported_class_t::*invert_function_type )(  ) ;
            
            Matrix4d_exposer.def( 
                "invert"
                , invert_function_type( &::OSG::TransformationMatrix< double >::invert ) );
        
        }
        { //::OSG::TransformationMatrix< double >::invert3
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef bool ( exported_class_t::*invert3_function_type )(  ) ;
            
            Matrix4d_exposer.def( 
                "invert3"
                , invert3_function_type( &::OSG::TransformationMatrix< double >::invert3 ) );
        
        }
        { //::OSG::TransformationMatrix< double >::invertFrom
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef bool ( exported_class_t::*invertFrom_function_type )( ::OSG::TransformationMatrix< double > const & ) ;
            
            Matrix4d_exposer.def( 
                "invertFrom"
                , invertFrom_function_type( &::OSG::TransformationMatrix< double >::invertFrom )
                , ( bp::arg("matrix") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::invertFrom3
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef bool ( exported_class_t::*invertFrom3_function_type )( ::OSG::TransformationMatrix< double > const & ) ;
            
            Matrix4d_exposer.def( 
                "invertFrom3"
                , invertFrom3_function_type( &::OSG::TransformationMatrix< double >::invertFrom3 )
                , ( bp::arg("matrix") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::log
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef bool ( exported_class_t::*log_function_type )( ::OSG::TransformationMatrix< double > & ) const;
            
            Matrix4d_exposer.def( 
                "log"
                , log_function_type( &::OSG::TransformationMatrix< double >::log )
                , ( bp::arg("result") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::logOf
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef bool ( exported_class_t::*logOf_function_type )( ::OSG::TransformationMatrix< double > const & ) ;
            
            Matrix4d_exposer.def( 
                "logOf"
                , logOf_function_type( &::OSG::TransformationMatrix< double >::logOf )
                , ( bp::arg("matrix") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::mult
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef void ( exported_class_t::*mult_function_type )( ::OSG::Point< double, 4u > const &,::OSG::Point< double, 4u > & ) const;
            
            Matrix4d_exposer.def( 
                "mult"
                , mult_function_type( &::OSG::TransformationMatrix< double >::mult )
                , ( bp::arg("pntIn"), bp::arg("pntOut") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::mult
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef void ( exported_class_t::*mult_function_type )( ::OSG::Point< double, 3u > const &,::OSG::Point< double, 3u > & ) const;
            
            Matrix4d_exposer.def( 
                "mult"
                , mult_function_type( &::OSG::TransformationMatrix< double >::mult )
                , ( bp::arg("pntIn"), bp::arg("pntOut") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::mult
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef void ( exported_class_t::*mult_function_type )( ::OSG::Vector< double, 4u > const &,::OSG::Vector< double, 4u > & ) const;
            
            Matrix4d_exposer.def( 
                "mult"
                , mult_function_type( &::OSG::TransformationMatrix< double >::mult )
                , ( bp::arg("vecIn"), bp::arg("vecOut") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::mult
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef void ( exported_class_t::*mult_function_type )( ::OSG::Vector< double, 3u > const &,::OSG::Vector< double, 3u > & ) const;
            
            Matrix4d_exposer.def( 
                "mult"
                , mult_function_type( &::OSG::TransformationMatrix< double >::mult )
                , ( bp::arg("vecIn"), bp::arg("vecOut") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::mult3x3
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef void ( exported_class_t::*mult3x3_function_type )( ::OSG::Point< double, 3u > const &,::OSG::Point< double, 3u > & ) const;
            
            Matrix4d_exposer.def( 
                "mult3x3"
                , mult3x3_function_type( &::OSG::TransformationMatrix< double >::mult3x3 )
                , ( bp::arg("pntIn"), bp::arg("pntOut") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::mult3x3
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef void ( exported_class_t::*mult3x3_function_type )( ::OSG::Vector< double, 3u > const &,::OSG::Vector< double, 3u > & ) const;
            
            Matrix4d_exposer.def( 
                "mult3x3"
                , mult3x3_function_type( &::OSG::TransformationMatrix< double >::mult3x3 )
                , ( bp::arg("vecIn"), bp::arg("vecOut") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::multFull
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef void ( exported_class_t::*multFull_function_type )( ::OSG::Point< double, 3u > const &,::OSG::Point< double, 3u > & ) const;
            
            Matrix4d_exposer.def( 
                "multFull"
                , multFull_function_type( &::OSG::TransformationMatrix< double >::multFull )
                , ( bp::arg("pntIn"), bp::arg("pntOut") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::multFull
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef void ( exported_class_t::*multFull_function_type )( ::OSG::Vector< double, 3u > const &,::OSG::Vector< double, 3u > & ) const;
            
            Matrix4d_exposer.def( 
                "multFull"
                , multFull_function_type( &::OSG::TransformationMatrix< double >::multFull )
                , ( bp::arg("vecIn"), bp::arg("vecOut") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::multLeft
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef void ( exported_class_t::*multLeft_function_type )( ::OSG::Point< double, 3u > const &,::OSG::Point< double, 3u > & ) const;
            
            Matrix4d_exposer.def( 
                "multLeft"
                , multLeft_function_type( &::OSG::TransformationMatrix< double >::multLeft )
                , ( bp::arg("src"), bp::arg("dst") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::multLeft
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef void ( exported_class_t::*multLeft_function_type )( ::OSG::Vector< double, 3u > const &,::OSG::Vector< double, 3u > & ) const;
            
            Matrix4d_exposer.def( 
                "multLeft"
                , multLeft_function_type( &::OSG::TransformationMatrix< double >::multLeft )
                , ( bp::arg("src"), bp::arg("dst") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::multLeftFull
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef void ( exported_class_t::*multLeftFull_function_type )( ::OSG::Point< double, 3u > const &,::OSG::Point< double, 3u > & ) const;
            
            Matrix4d_exposer.def( 
                "multLeftFull"
                , multLeftFull_function_type( &::OSG::TransformationMatrix< double >::multLeftFull )
                , ( bp::arg("src"), bp::arg("dst") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::multLeftFull
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef void ( exported_class_t::*multLeftFull_function_type )( ::OSG::Vector< double, 3u > const &,::OSG::Vector< double, 3u > & ) const;
            
            Matrix4d_exposer.def( 
                "multLeftFull"
                , multLeftFull_function_type( &::OSG::TransformationMatrix< double >::multLeftFull )
                , ( bp::arg("vecIn"), bp::arg("vecOut") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::negate
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef void ( exported_class_t::*negate_function_type )(  ) ;
            
            Matrix4d_exposer.def( 
                "negate"
                , negate_function_type( &::OSG::TransformationMatrix< double >::negate ) );
        
        }
        { //::OSG::TransformationMatrix< double >::norm1
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef double ( exported_class_t::*norm1_function_type )(  ) const;
            
            Matrix4d_exposer.def( 
                "norm1"
                , norm1_function_type( &::OSG::TransformationMatrix< double >::norm1 ) );
        
        }
        { //::OSG::TransformationMatrix< double >::norm2
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef double ( exported_class_t::*norm2_function_type )(  ) const;
            
            Matrix4d_exposer.def( 
                "norm2"
                , norm2_function_type( &::OSG::TransformationMatrix< double >::norm2 ) );
        
        }
        { //::OSG::TransformationMatrix< double >::normInfinity
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef double ( exported_class_t::*normInfinity_function_type )(  ) const;
            
            Matrix4d_exposer.def( 
                "normInfinity"
                , normInfinity_function_type( &::OSG::TransformationMatrix< double >::normInfinity ) );
        
        }
        Matrix4d_exposer.def( bp::self != bp::self );
        Matrix4d_exposer.def( bp::self * bp::other< OSG::Point< double, 4u > >() );
        Matrix4d_exposer.def( bp::self * bp::other< OSG::Point< double, 3u > >() );
        Matrix4d_exposer.def( bp::self * bp::other< OSG::Vector< double, 4u > >() );
        Matrix4d_exposer.def( bp::self * bp::other< OSG::Vector< double, 3u > >() );
        Matrix4d_exposer.def( bp::self == bp::self );
        { //::OSG::TransformationMatrix< double >::operator[]
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef ::OSG::Vector< double, 4u > & ( exported_class_t::*__getitem___function_type )( ::OSG::UInt32 ) ;
            
            Matrix4d_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::OSG::TransformationMatrix< double >::operator[] )
                , ( bp::arg("uiIndex") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TransformationMatrix< double >::scale
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef void ( exported_class_t::*scale_function_type )( double ) ;
            
            Matrix4d_exposer.def( 
                "scale"
                , scale_function_type( &::OSG::TransformationMatrix< double >::scale )
                , ( bp::arg("s") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::setIdentity
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef void ( exported_class_t::*setIdentity_function_type )(  ) ;
            
            Matrix4d_exposer.def( 
                "setIdentity"
                , setIdentity_function_type( &::OSG::TransformationMatrix< double >::setIdentity ) );
        
        }
        { //::OSG::TransformationMatrix< double >::setRotate
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef void ( exported_class_t::*setRotate_function_type )( ::OSG::QuaternionBase< double > const & ) ;
            
            Matrix4d_exposer.def( 
                "setRotate"
                , setRotate_function_type( &::OSG::TransformationMatrix< double >::setRotate )
                , ( bp::arg("q") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::setScale
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef void ( exported_class_t::*setScale_function_type )( double const ) ;
            
            Matrix4d_exposer.def( 
                "setScale"
                , setScale_function_type( &::OSG::TransformationMatrix< double >::setScale )
                , ( bp::arg("s") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::setScale
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef void ( exported_class_t::*setScale_function_type )( double const,double const,double const ) ;
            
            Matrix4d_exposer.def( 
                "setScale"
                , setScale_function_type( &::OSG::TransformationMatrix< double >::setScale )
                , ( bp::arg("sx"), bp::arg("sy"), bp::arg("sz") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::setScale
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef void ( exported_class_t::*setScale_function_type )( ::OSG::Vector< double, 3u > const & ) ;
            
            Matrix4d_exposer.def( 
                "setScale"
                , setScale_function_type( &::OSG::TransformationMatrix< double >::setScale )
                , ( bp::arg("s") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::setTransform
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef void ( exported_class_t::*setTransform_function_type )( ::OSG::Vector< double, 3u > const & ) ;
            
            Matrix4d_exposer.def( 
                "setTransform"
                , setTransform_function_type( &::OSG::TransformationMatrix< double >::setTransform )
                , ( bp::arg("t") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::setTransform
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef void ( exported_class_t::*setTransform_function_type )( ::OSG::QuaternionBase< double > const & ) ;
            
            Matrix4d_exposer.def( 
                "setTransform"
                , setTransform_function_type( &::OSG::TransformationMatrix< double >::setTransform )
                , ( bp::arg("r") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::setTransform
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef void ( exported_class_t::*setTransform_function_type )( ::OSG::Vector< double, 3u > const &,::OSG::QuaternionBase< double > const & ) ;
            
            Matrix4d_exposer.def( 
                "setTransform"
                , setTransform_function_type( &::OSG::TransformationMatrix< double >::setTransform )
                , ( bp::arg("t"), bp::arg("r") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::setTransform
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef void ( exported_class_t::*setTransform_function_type )( ::OSG::Vector< double, 3u > const &,::OSG::QuaternionBase< double > const &,::OSG::Vector< double, 3u > const & ) ;
            
            Matrix4d_exposer.def( 
                "setTransform"
                , setTransform_function_type( &::OSG::TransformationMatrix< double >::setTransform )
                , ( bp::arg("t"), bp::arg("r"), bp::arg("s") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::setTransform
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef void ( exported_class_t::*setTransform_function_type )( ::OSG::Vector< double, 3u > const &,::OSG::QuaternionBase< double > const &,::OSG::Vector< double, 3u > const &,::OSG::QuaternionBase< double > const & ) ;
            
            Matrix4d_exposer.def( 
                "setTransform"
                , setTransform_function_type( &::OSG::TransformationMatrix< double >::setTransform )
                , ( bp::arg("t"), bp::arg("r"), bp::arg("s"), bp::arg("so") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::setTransform
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef void ( exported_class_t::*setTransform_function_type )( ::OSG::Vector< double, 3u > const &,::OSG::QuaternionBase< double > const &,::OSG::Vector< double, 3u > const &,::OSG::QuaternionBase< double > const &,::OSG::Vector< double, 3u > const & ) ;
            
            Matrix4d_exposer.def( 
                "setTransform"
                , setTransform_function_type( &::OSG::TransformationMatrix< double >::setTransform )
                , ( bp::arg("translation"), bp::arg("rotation"), bp::arg("scaleFactor"), bp::arg("scaleOrientation"), bp::arg("center") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::setTranslate
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef void ( exported_class_t::*setTranslate_function_type )( double const,double const,double const ) ;
            
            Matrix4d_exposer.def( 
                "setTranslate"
                , setTranslate_function_type( &::OSG::TransformationMatrix< double >::setTranslate )
                , ( bp::arg("tx"), bp::arg("ty"), bp::arg("tz") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::setTranslate
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef void ( exported_class_t::*setTranslate_function_type )( ::OSG::Vector< double, 3u > const & ) ;
            
            Matrix4d_exposer.def( 
                "setTranslate"
                , setTranslate_function_type( &::OSG::TransformationMatrix< double >::setTranslate )
                , ( bp::arg("t") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::setTranslate
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef void ( exported_class_t::*setTranslate_function_type )( ::OSG::Point< double, 3u > const & ) ;
            
            Matrix4d_exposer.def( 
                "setTranslate"
                , setTranslate_function_type( &::OSG::TransformationMatrix< double >::setTranslate )
                , ( bp::arg("t") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::setValue
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef void ( exported_class_t::*setValue_function_type )( ::OSG::TransformationMatrix< double > const & ) ;
            
            Matrix4d_exposer.def( 
                "setValue"
                , setValue_function_type( &::OSG::TransformationMatrix< double >::setValue )
                , ( bp::arg("mat") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::setValue
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef void ( exported_class_t::*setValue_function_type )( ::OSG::Vector< double, 3u > const &,::OSG::Vector< double, 3u > const &,::OSG::Vector< double, 3u > const & ) ;
            
            Matrix4d_exposer.def( 
                "setValue"
                , setValue_function_type( &::OSG::TransformationMatrix< double >::setValue )
                , ( bp::arg("vector1"), bp::arg("vector2"), bp::arg("vector3") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::setValue
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef void ( exported_class_t::*setValue_function_type )( ::OSG::Vector< double, 3u > const &,::OSG::Vector< double, 3u > const &,::OSG::Vector< double, 3u > const &,::OSG::Vector< double, 3u > const & ) ;
            
            Matrix4d_exposer.def( 
                "setValue"
                , setValue_function_type( &::OSG::TransformationMatrix< double >::setValue )
                , ( bp::arg("vector1"), bp::arg("vector2"), bp::arg("vector3"), bp::arg("vector4") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::setValue
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef void ( exported_class_t::*setValue_function_type )( double const,double const,double const,double const,double const,double const,double const,double const,double const,double const,double const,double const,double const,double const,double const,double const ) ;
            
            Matrix4d_exposer.def( 
                "setValue"
                , setValue_function_type( &::OSG::TransformationMatrix< double >::setValue )
                , ( bp::arg("rVal00"), bp::arg("rVal10"), bp::arg("rVal20"), bp::arg("rVal30"), bp::arg("rVal01"), bp::arg("rVal11"), bp::arg("rVal21"), bp::arg("rVal31"), bp::arg("rVal02"), bp::arg("rVal12"), bp::arg("rVal22"), bp::arg("rVal32"), bp::arg("rVal03"), bp::arg("rVal13"), bp::arg("rVal23"), bp::arg("rVal33") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::setValue
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef void ( exported_class_t::*setValue_function_type )( ::OSG::Vector< double, 4u > const * ) ;
            
            Matrix4d_exposer.def( 
                "setValue"
                , setValue_function_type( &::OSG::TransformationMatrix< double >::setValue )
                , ( bp::arg("pMat") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::setValue
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef void ( exported_class_t::*setValue_function_type )( ::OSG::Vector< double, 3u > const * ) ;
            
            Matrix4d_exposer.def( 
                "setValue"
                , setValue_function_type( &::OSG::TransformationMatrix< double >::setValue )
                , ( bp::arg("pMat") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::setValue
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef void ( exported_class_t::*setValue_function_type )( ::OSG::Char8 const *,bool ) ;
            
            Matrix4d_exposer.def( 
                "setValue"
                , setValue_function_type( &::OSG::TransformationMatrix< double >::setValue )
                , ( bp::arg("str"), bp::arg("bTransposed")=(bool)(true) ) );
        
        }
        { //::OSG::TransformationMatrix< double >::setValueTransposed
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef void ( exported_class_t::*setValueTransposed_function_type )( double const,double const,double const,double const,double const,double const,double const,double const,double const,double const,double const,double const,double const,double const,double const,double const ) ;
            
            Matrix4d_exposer.def( 
                "setValueTransposed"
                , setValueTransposed_function_type( &::OSG::TransformationMatrix< double >::setValueTransposed )
                , ( bp::arg("rVal00"), bp::arg("rVal01"), bp::arg("rVal02"), bp::arg("rVal03"), bp::arg("rVal10"), bp::arg("rVal11"), bp::arg("rVal12"), bp::arg("rVal13"), bp::arg("rVal20"), bp::arg("rVal21"), bp::arg("rVal22"), bp::arg("rVal23"), bp::arg("rVal30"), bp::arg("rVal31"), bp::arg("rVal32"), bp::arg("rVal33") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::sqrt
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef bool ( exported_class_t::*sqrt_function_type )( ::OSG::TransformationMatrix< double > & ) const;
            
            Matrix4d_exposer.def( 
                "sqrt"
                , sqrt_function_type( &::OSG::TransformationMatrix< double >::sqrt )
                , ( bp::arg("result") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::sqrt
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef bool ( exported_class_t::*sqrt_function_type )(  ) ;
            
            Matrix4d_exposer.def( 
                "sqrt"
                , sqrt_function_type( &::OSG::TransformationMatrix< double >::sqrt ) );
        
        }
        { //::OSG::TransformationMatrix< double >::sqrtOf
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef bool ( exported_class_t::*sqrtOf_function_type )( ::OSG::TransformationMatrix< double > const & ) ;
            
            Matrix4d_exposer.def( 
                "sqrtOf"
                , sqrtOf_function_type( &::OSG::TransformationMatrix< double >::sqrtOf )
                , ( bp::arg("matrix") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::transpose
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef bool ( exported_class_t::*transpose_function_type )(  ) ;
            
            Matrix4d_exposer.def( 
                "transpose"
                , transpose_function_type( &::OSG::TransformationMatrix< double >::transpose ) );
        
        }
        { //::OSG::TransformationMatrix< double >::transposeFrom
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef bool ( exported_class_t::*transposeFrom_function_type )( ::OSG::TransformationMatrix< double > const & ) ;
            
            Matrix4d_exposer.def( 
                "transposeFrom"
                , transposeFrom_function_type( &::OSG::TransformationMatrix< double >::transposeFrom )
                , ( bp::arg("matrix") ) );
        
        }
        { //::OSG::TransformationMatrix< double >::transposed
        
            typedef OSG::TransformationMatrix< double > exported_class_t;
            typedef bool ( exported_class_t::*transposed_function_type )( ::OSG::TransformationMatrix< double > & ) const;
            
            Matrix4d_exposer.def( 
                "transposed"
                , transposed_function_type( &::OSG::TransformationMatrix< double >::transposed )
                , ( bp::arg("result") ) );
        
        }
        Matrix4d_exposer.staticmethod( "identity" );
        Matrix4d_exposer.def("setValue", &osgwrap::setValueMatrix<double>, ( bp::arg("pMat"), bp::arg("bTransposed")=(bool)(true) ) );
        Matrix4d_exposer.def("getValues",osgwrap::getValuesMatrix<double>);
        Matrix4d_exposer.def("getTransform",osgwrap::getTransform_Matrix<double>);
        Matrix4d_exposer.def("mult",osgwrap::wrapMatrixMult<OSG::Real64, OSG::Real32>);
        Matrix4d_exposer.def("multLeft",osgwrap::wrapMatrixMultLeft<OSG::Real64, OSG::Real32>);
        Matrix4d_exposer.def("mult",osgwrap::wrapMatrixMult<OSG::Real64, OSG::Real64>);
        Matrix4d_exposer.def("multLeft",osgwrap::wrapMatrixMultLeft<OSG::Real64, OSG::Real64>);
        Matrix4d_exposer.def(boost::python::self_ns::str(boost::python::self));
    }

}
