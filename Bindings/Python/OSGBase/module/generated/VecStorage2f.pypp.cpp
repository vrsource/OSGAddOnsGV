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
#include "VecStorage2f.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_VecStorage2f_class(){

    { //::OSG::VecStorage2< float >
        typedef bp::class_< OSG::VecStorage2< float >, boost::noncopyable > VecStorage2f_exposer_t;
        VecStorage2f_exposer_t VecStorage2f_exposer = VecStorage2f_exposer_t( "VecStorage2f", bp::init< >() );
        bp::scope VecStorage2f_scope( VecStorage2f_exposer );
        { //::OSG::VecStorage2< float >::setValues
        
            typedef OSG::VecStorage2< float > exported_class_t;
            typedef void ( exported_class_t::*setValues_function_type )( float const,float const ) ;
            
            VecStorage2f_exposer.def( 
                "setValues"
                , setValues_function_type( &::OSG::VecStorage2< float >::setValues )
                , ( bp::arg("rVal1"), bp::arg("rVal2") ) );
        
        }
        { //::OSG::VecStorage2< float >::x
        
            typedef OSG::VecStorage2< float > exported_class_t;
            typedef float ( exported_class_t::*x_function_type )(  ) const;
            
            VecStorage2f_exposer.def( 
                "x"
                , x_function_type( &::OSG::VecStorage2< float >::x ) );
        
        }
        { //::OSG::VecStorage2< float >::y
        
            typedef OSG::VecStorage2< float > exported_class_t;
            typedef float ( exported_class_t::*y_function_type )(  ) const;
            
            VecStorage2f_exposer.def( 
                "y"
                , y_function_type( &::OSG::VecStorage2< float >::y ) );
        
        }
        VecStorage2f_exposer.def("getSeparateValues",&osgwrap::VecStorage2_getSeparateValues_tuple<OSG::Real32>);
    }

}
