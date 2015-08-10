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
#include "OSGSystem_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "FrameBufferObject.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_FrameBufferObject_class(){

    { //::OSG::FrameBufferObject
        typedef bp::class_< OSG::FrameBufferObject, bp::bases< OSG::FrameBufferObjectBase >, OSG::FrameBufferObject::ObjRecPtr, boost::noncopyable > FrameBufferObject_exposer_t;
        FrameBufferObject_exposer_t FrameBufferObject_exposer = FrameBufferObject_exposer_t( "FrameBufferObject", bp::no_init );
        bp::scope FrameBufferObject_scope( FrameBufferObject_exposer );
        { //::OSG::FrameBufferObject::activateFBOById
        
            typedef void ( *activateFBOById_function_type )( ::OSG::DrawEnv *,::OSG::UInt32 );
            
            FrameBufferObject_exposer.def( 
                "activateFBOById"
                , activateFBOById_function_type( &::OSG::FrameBufferObject::activateFBOById )
                , ( bp::arg("pEnv"), bp::arg("uiOSGId") ) );
        
        }
        { //::OSG::FrameBufferObject::changed
        
            typedef void ( ::OSG::FrameBufferObject::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            FrameBufferObject_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::FrameBufferObject::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("detail") ) );
        
        }
        { //::OSG::FrameBufferObject::deactivateFBOById
        
            typedef void ( *deactivateFBOById_function_type )( ::OSG::DrawEnv * );
            
            FrameBufferObject_exposer.def( 
                "deactivateFBOById"
                , deactivateFBOById_function_type( &::OSG::FrameBufferObject::deactivateFBOById )
                , ( bp::arg("pEnv") ) );
        
        }
        { //::OSG::FrameBufferObject::dump
        
            typedef void ( ::OSG::FrameBufferObject::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            FrameBufferObject_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::FrameBufferObject::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::FrameBufferObject::resizeAll
        
            typedef void ( ::OSG::FrameBufferObject::*resizeAll_function_type )( ::OSG::UInt32,::OSG::UInt32 ) ;
            
            FrameBufferObject_exposer.def( 
                "resizeAll"
                , resizeAll_function_type( &::OSG::FrameBufferObject::resizeAll )
                , ( bp::arg("uiWidth"), bp::arg("uiHeight") ) );
        
        }
        { //::OSG::FrameBufferObject::setColorAttachment
        
            typedef void ( ::OSG::FrameBufferObject::*setColorAttachment_function_type )( ::OSG::FrameBufferAttachment *,::OSG::UInt32 ) ;
            
            FrameBufferObject_exposer.def( 
                "setColorAttachment"
                , setColorAttachment_function_type( &::OSG::FrameBufferObject::setColorAttachment )
                , ( bp::arg("pAttachment"), bp::arg("uiSlot") ) );
        
        }
        { //::OSG::FrameBufferObject::setSize
        
            typedef void ( ::OSG::FrameBufferObject::*setSize_function_type )( ::OSG::UInt32,::OSG::UInt32 ) ;
            
            FrameBufferObject_exposer.def( 
                "setSize"
                , setSize_function_type( &::OSG::FrameBufferObject::setSize )
                , ( bp::arg("uiWidth"), bp::arg("uiHeight") ) );
        
        }
        FrameBufferObject_exposer.staticmethod( "activateFBOById" );
        FrameBufferObject_exposer.staticmethod( "deactivateFBOById" );
        pyopensg::register_transit< OSG::FrameBufferObject >::execute();
        bp::implicitly_convertible< OSG::FrameBufferObject::ObjRecPtr, OSG::FrameBufferObject* >();
        bp::implicitly_convertible< OSG::FrameBufferObject::ObjRecPtr, OSG::FrameBufferObject::ObjCPtr >();
        bp::implicitly_convertible< OSG::FrameBufferObject::ObjRecPtr, OSG::AttachmentContainer* >();
        bp::implicitly_convertible< OSG::FrameBufferObject::ObjRecPtr, OSG::AttachmentContainer::ObjRecPtr >();
        bp::implicitly_convertible<OSG::FrameBufferObject::ObjRecPtr, OSG::AttachmentContainer::ObjCPtr>();
    }

}
