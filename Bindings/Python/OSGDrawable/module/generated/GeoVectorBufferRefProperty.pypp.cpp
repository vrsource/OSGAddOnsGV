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
#include "GeoVectorBufferRefProperty.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_GeoVectorBufferRefProperty_class(){

    { //::OSG::GeoVectorBufferRefProperty
        typedef bp::class_< OSG::GeoVectorBufferRefProperty, bp::bases< OSG::GeoVectorBufferRefPropertyBase >, OSG::GeoVectorBufferRefProperty::ObjRecPtr, boost::noncopyable > GeoVectorBufferRefProperty_exposer_t;
        GeoVectorBufferRefProperty_exposer_t GeoVectorBufferRefProperty_exposer = GeoVectorBufferRefProperty_exposer_t( "GeoVectorBufferRefProperty", bp::no_init );
        bp::scope GeoVectorBufferRefProperty_scope( GeoVectorBufferRefProperty_exposer );
        { //::OSG::GeoVectorBufferRefProperty::changed
        
            typedef void ( ::OSG::GeoVectorBufferRefProperty::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            GeoVectorBufferRefProperty_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::GeoVectorBufferRefProperty::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::GeoVectorBufferRefProperty::dump
        
            typedef void ( ::OSG::GeoVectorBufferRefProperty::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            GeoVectorBufferRefProperty_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::GeoVectorBufferRefProperty::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::GeoVectorBufferRefProperty::setGLId
        
            typedef void ( ::OSG::GeoVectorBufferRefProperty::*setGLId_function_type )( ::OSG::UInt32 ) ;
            
            GeoVectorBufferRefProperty_exposer.def( 
                "setGLId"
                , setGLId_function_type( &::OSG::GeoVectorBufferRefProperty::setGLId )
                , ( bp::arg("uiGLId") ) );
        
        }
        { //::OSG::GeoVectorBufferRefProperty::unmapBuffer
        
            typedef bool ( ::OSG::GeoVectorBufferRefProperty::*unmapBuffer_function_type )( ::OSG::DrawEnv * ) ;
            
            GeoVectorBufferRefProperty_exposer.def( 
                "unmapBuffer"
                , unmapBuffer_function_type( &::OSG::GeoVectorBufferRefProperty::unmapBuffer )
                , ( bp::arg("pEnv") ) );
        
        }
        pyopensg::register_transit< OSG::GeoVectorBufferRefProperty >::execute();
        bp::implicitly_convertible< OSG::GeoVectorBufferRefProperty::ObjRecPtr, OSG::GeoVectorBufferRefProperty* >();
        bp::implicitly_convertible< OSG::GeoVectorBufferRefProperty::ObjRecPtr, OSG::GeoVectorBufferRefProperty::ObjCPtr >();
        bp::implicitly_convertible< OSG::GeoVectorBufferRefProperty::ObjRecPtr, OSG::GeoVectorBufferProperty* >();
        bp::implicitly_convertible< OSG::GeoVectorBufferRefProperty::ObjRecPtr, OSG::GeoVectorBufferProperty::ObjRecPtr >();
        bp::implicitly_convertible<OSG::GeoVectorBufferRefProperty::ObjRecPtr, OSG::GeoVectorBufferProperty::ObjCPtr>();
    }

}
