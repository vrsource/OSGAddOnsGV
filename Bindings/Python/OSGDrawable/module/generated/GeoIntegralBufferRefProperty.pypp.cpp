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
#include "GeoIntegralBufferRefProperty.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_GeoIntegralBufferRefProperty_class(){

    { //::OSG::GeoIntegralBufferRefProperty
        typedef bp::class_< OSG::GeoIntegralBufferRefProperty, bp::bases< OSG::GeoIntegralBufferRefPropertyBase >, OSG::GeoIntegralBufferRefProperty::ObjRecPtr, boost::noncopyable > GeoIntegralBufferRefProperty_exposer_t;
        GeoIntegralBufferRefProperty_exposer_t GeoIntegralBufferRefProperty_exposer = GeoIntegralBufferRefProperty_exposer_t( "GeoIntegralBufferRefProperty", bp::no_init );
        bp::scope GeoIntegralBufferRefProperty_scope( GeoIntegralBufferRefProperty_exposer );
        { //::OSG::GeoIntegralBufferRefProperty::changed
        
            typedef void ( ::OSG::GeoIntegralBufferRefProperty::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            GeoIntegralBufferRefProperty_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::GeoIntegralBufferRefProperty::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::GeoIntegralBufferRefProperty::dump
        
            typedef void ( ::OSG::GeoIntegralBufferRefProperty::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            GeoIntegralBufferRefProperty_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::GeoIntegralBufferRefProperty::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::GeoIntegralBufferRefProperty::setGLId
        
            typedef void ( ::OSG::GeoIntegralBufferRefProperty::*setGLId_function_type )( ::OSG::UInt32 ) ;
            
            GeoIntegralBufferRefProperty_exposer.def( 
                "setGLId"
                , setGLId_function_type( &::OSG::GeoIntegralBufferRefProperty::setGLId )
                , ( bp::arg("uiGLId") ) );
        
        }
        { //::OSG::GeoIntegralBufferRefProperty::unmapBuffer
        
            typedef bool ( ::OSG::GeoIntegralBufferRefProperty::*unmapBuffer_function_type )( ::OSG::DrawEnv * ) ;
            
            GeoIntegralBufferRefProperty_exposer.def( 
                "unmapBuffer"
                , unmapBuffer_function_type( &::OSG::GeoIntegralBufferRefProperty::unmapBuffer )
                , ( bp::arg("pEnv") ) );
        
        }
        pyopensg::register_transit< OSG::GeoIntegralBufferRefProperty >::execute();
        bp::implicitly_convertible< OSG::GeoIntegralBufferRefProperty::ObjRecPtr, OSG::GeoIntegralBufferRefProperty* >();
        bp::implicitly_convertible< OSG::GeoIntegralBufferRefProperty::ObjRecPtr, OSG::GeoIntegralBufferRefProperty::ObjCPtr >();
        bp::implicitly_convertible< OSG::GeoIntegralBufferRefProperty::ObjRecPtr, OSG::GeoIntegralBufferProperty* >();
        bp::implicitly_convertible< OSG::GeoIntegralBufferRefProperty::ObjRecPtr, OSG::GeoIntegralBufferProperty::ObjRecPtr >();
        bp::implicitly_convertible<OSG::GeoIntegralBufferRefProperty::ObjRecPtr, OSG::GeoIntegralBufferProperty::ObjCPtr>();
    }

}
