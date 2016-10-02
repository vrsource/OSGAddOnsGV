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
#include "OSGDrawable_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "GeoIntegralBufferProperty.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_GeoIntegralBufferProperty_class(){

    { //::OSG::GeoIntegralBufferProperty
        typedef bp::class_< OSG::GeoIntegralBufferProperty, bp::bases< OSG::GeoIntegralBufferPropertyBase >, OSG::GeoIntegralBufferProperty::ObjRecPtr, boost::noncopyable > GeoIntegralBufferProperty_exposer_t;
        GeoIntegralBufferProperty_exposer_t GeoIntegralBufferProperty_exposer = GeoIntegralBufferProperty_exposer_t( "GeoIntegralBufferProperty", bp::no_init );
        bp::scope GeoIntegralBufferProperty_scope( GeoIntegralBufferProperty_exposer );
        { //::OSG::GeoIntegralBufferProperty::changed
        
            typedef void ( ::OSG::GeoIntegralBufferProperty::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            GeoIntegralBufferProperty_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::GeoIntegralBufferProperty::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::GeoIntegralBufferProperty::dump
        
            typedef void ( ::OSG::GeoIntegralBufferProperty::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            GeoIntegralBufferProperty_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::GeoIntegralBufferProperty::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::GeoIntegralBufferProperty::size
        
            typedef ::OSG::SizeT ( ::OSG::GeoIntegralBufferProperty::*size_function_type )(  ) const;
            
            GeoIntegralBufferProperty_exposer.def( 
                "size"
                , size_function_type( &::OSG::GeoIntegralBufferProperty::size ) );
        
        }
        { //::OSG::GeoIntegralBufferProperty::size32
        
            typedef ::OSG::UInt32 ( ::OSG::GeoIntegralBufferProperty::*size32_function_type )(  ) const;
            
            GeoIntegralBufferProperty_exposer.def( 
                "size32"
                , size32_function_type( &::OSG::GeoIntegralBufferProperty::size32 ) );
        
        }
        pyopensg::register_transit< OSG::GeoIntegralBufferProperty >::execute();
        bp::implicitly_convertible< OSG::GeoIntegralBufferProperty::ObjRecPtr, OSG::GeoIntegralBufferProperty* >();
        bp::implicitly_convertible< OSG::GeoIntegralBufferProperty::ObjRecPtr, OSG::GeoIntegralBufferProperty::ObjCPtr >();
        bp::implicitly_convertible< OSG::GeoIntegralBufferProperty::ObjRecPtr, OSG::GeoIntegralProperty* >();
        bp::implicitly_convertible< OSG::GeoIntegralBufferProperty::ObjRecPtr, OSG::GeoIntegralProperty::ObjRecPtr >();
        bp::implicitly_convertible<OSG::GeoIntegralBufferProperty::ObjRecPtr, OSG::GeoIntegralProperty::ObjCPtr>();
    }

}
