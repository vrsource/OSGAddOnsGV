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
#include "ConnectorAttachment.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_ConnectorAttachment_class(){

    { //::OSG::ConnectorAttachment
        typedef bp::class_< OSG::ConnectorAttachment, bp::bases< OSG::ConnectorAttachmentBase >, OSG::ConnectorAttachment::ObjRecPtr, boost::noncopyable > ConnectorAttachment_exposer_t;
        ConnectorAttachment_exposer_t ConnectorAttachment_exposer = ConnectorAttachment_exposer_t( "ConnectorAttachment", bp::no_init );
        bp::scope ConnectorAttachment_scope( ConnectorAttachment_exposer );
        { //::OSG::ConnectorAttachment::addConnection
        
            typedef void ( ::OSG::ConnectorAttachment::*addConnection_function_type )( ::OSG::BasicFieldConnector * ) ;
            
            ConnectorAttachment_exposer.def( 
                "addConnection"
                , addConnection_function_type( &::OSG::ConnectorAttachment::addConnection )
                , ( bp::arg("pConnector") ) );
        
        }
        { //::OSG::ConnectorAttachment::changed
        
            typedef void ( ::OSG::ConnectorAttachment::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            ConnectorAttachment_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::ConnectorAttachment::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::ConnectorAttachment::dump
        
            typedef void ( ::OSG::ConnectorAttachment::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            ConnectorAttachment_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::ConnectorAttachment::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::ConnectorAttachment::hasConnectionTo
        
            typedef bool ( ::OSG::ConnectorAttachment::*hasConnectionTo_function_type )( ::OSG::FieldContainer const * ) const;
            
            ConnectorAttachment_exposer.def( 
                "hasConnectionTo"
                , hasConnectionTo_function_type( &::OSG::ConnectorAttachment::hasConnectionTo )
                , ( bp::arg("pDst") ) );
        
        }
        { //::OSG::ConnectorAttachment::processChanged
        
            typedef void ( ::OSG::ConnectorAttachment::*processChanged_function_type )( ::OSG::FieldContainer *,::OSG::BitVector,::OSG::UInt32 ) ;
            
            ConnectorAttachment_exposer.def( 
                "processChanged"
                , processChanged_function_type( &::OSG::ConnectorAttachment::processChanged )
                , ( bp::arg("pObj"), bp::arg("whichField"), bp::arg("origin") ) );
        
        }
        { //::OSG::ConnectorAttachment::removeConnectionTo
        
            typedef void ( ::OSG::ConnectorAttachment::*removeConnectionTo_function_type )( ::OSG::FieldContainer const * ) ;
            
            ConnectorAttachment_exposer.def( 
                "removeConnectionTo"
                , removeConnectionTo_function_type( &::OSG::ConnectorAttachment::removeConnectionTo )
                , ( bp::arg("pDst") ) );
        
        }
        { //::OSG::ConnectorAttachment::removeConnections
        
            typedef void ( ::OSG::ConnectorAttachment::*removeConnections_function_type )( ::OSG::BitVector,::OSG::FieldContainer const *,::OSG::BitVector ) ;
            
            ConnectorAttachment_exposer.def( 
                "removeConnections"
                , removeConnections_function_type( &::OSG::ConnectorAttachment::removeConnections )
                , ( bp::arg("bSrcMask"), bp::arg("pDst"), bp::arg("bDstMask") ) );
        
        }
        { //::OSG::ConnectorAttachment::targetDestroyed
        
            typedef void ( ::OSG::ConnectorAttachment::*targetDestroyed_function_type )( ::OSG::FieldContainer *,::OSG::BitVector,::OSG::UInt32 ) ;
            
            ConnectorAttachment_exposer.def( 
                "targetDestroyed"
                , targetDestroyed_function_type( &::OSG::ConnectorAttachment::targetDestroyed )
                , ( bp::arg("pObj"), bp::arg("whichField"), bp::arg("origin") ) );
        
        }
        pyopensg::register_transit< OSG::ConnectorAttachment >::execute();
        bp::implicitly_convertible< OSG::ConnectorAttachment::ObjRecPtr, OSG::ConnectorAttachment* >();
        bp::implicitly_convertible< OSG::ConnectorAttachment::ObjRecPtr, OSG::ConnectorAttachment::ObjCPtr >();
        bp::implicitly_convertible< OSG::ConnectorAttachment::ObjRecPtr, OSG::Attachment* >();
        bp::implicitly_convertible< OSG::ConnectorAttachment::ObjRecPtr, OSG::Attachment::ObjRecPtr >();
        bp::implicitly_convertible<OSG::ConnectorAttachment::ObjRecPtr, OSG::Attachment::ObjCPtr>();
    }

}
