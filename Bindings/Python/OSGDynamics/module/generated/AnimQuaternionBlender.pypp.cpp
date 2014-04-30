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
#include "OSGDynamics_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "AnimQuaternionBlender.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_AnimQuaternionBlender_class(){

    { //::OSG::AnimQuaternionBlender
        typedef bp::class_< OSG::AnimQuaternionBlender, bp::bases< OSG::AnimQuaternionBlenderBase >, OSG::AnimQuaternionBlender::ObjRecPtr, boost::noncopyable > AnimQuaternionBlender_exposer_t;
        AnimQuaternionBlender_exposer_t AnimQuaternionBlender_exposer = AnimQuaternionBlender_exposer_t( "AnimQuaternionBlender", bp::no_init );
        bp::scope AnimQuaternionBlender_scope( AnimQuaternionBlender_exposer );
        { //::OSG::AnimQuaternionBlender::addChannel
        
            typedef void ( ::OSG::AnimQuaternionBlender::*addChannel_function_type )( ::OSG::AnimChannel * ) ;
            
            AnimQuaternionBlender_exposer.def( 
                "addChannel"
                , addChannel_function_type( &::OSG::AnimQuaternionBlender::addChannel )
                , ( bp::arg("channel") ) );
        
        }
        { //::OSG::AnimQuaternionBlender::changed
        
            typedef void ( ::OSG::AnimQuaternionBlender::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            AnimQuaternionBlender_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::AnimQuaternionBlender::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::AnimQuaternionBlender::connectTo
        
            typedef void ( ::OSG::AnimQuaternionBlender::*connectTo_function_type )( ::OSG::AttachmentContainer *,::std::string const & ) ;
            
            AnimQuaternionBlender_exposer.def( 
                "connectTo"
                , connectTo_function_type( &::OSG::AnimQuaternionBlender::connectTo )
                , ( bp::arg("container"), bp::arg("fieldName") ) );
        
        }
        { //::OSG::AnimQuaternionBlender::dump
        
            typedef void ( ::OSG::AnimQuaternionBlender::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            AnimQuaternionBlender_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::AnimQuaternionBlender::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::AnimQuaternionBlender::frame
        
            typedef void ( ::OSG::AnimQuaternionBlender::*frame_function_type )( ::OSG::Time,::OSG::UInt32 ) ;
            
            AnimQuaternionBlender_exposer.def( 
                "frame"
                , frame_function_type( &::OSG::AnimQuaternionBlender::frame )
                , ( bp::arg("oTime"), bp::arg("uiFrame") ) );
        
        }
        { //::OSG::AnimQuaternionBlender::init
        
            typedef bool ( ::OSG::AnimQuaternionBlender::*init_function_type )(  ) ;
            
            AnimQuaternionBlender_exposer.def( 
                "init"
                , init_function_type( &::OSG::AnimQuaternionBlender::init ) );
        
        }
        { //::OSG::AnimQuaternionBlender::shutdown
        
            typedef void ( ::OSG::AnimQuaternionBlender::*shutdown_function_type )(  ) ;
            
            AnimQuaternionBlender_exposer.def( 
                "shutdown"
                , shutdown_function_type( &::OSG::AnimQuaternionBlender::shutdown ) );
        
        }
        { //::OSG::AnimQuaternionBlender::subChannel
        
            typedef void ( ::OSG::AnimQuaternionBlender::*subChannel_function_type )( ::OSG::AnimChannel * ) ;
            
            AnimQuaternionBlender_exposer.def( 
                "subChannel"
                , subChannel_function_type( &::OSG::AnimQuaternionBlender::subChannel )
                , ( bp::arg("channel") ) );
        
        }
        pyopensg::register_transit< OSG::AnimQuaternionBlender >::execute();
        bp::implicitly_convertible< OSG::AnimQuaternionBlender::ObjRecPtr, OSG::AnimQuaternionBlender* >();
        bp::implicitly_convertible< OSG::AnimQuaternionBlender::ObjRecPtr, OSG::AnimQuaternionBlender::ObjCPtr >();
        bp::implicitly_convertible< OSG::AnimQuaternionBlender::ObjRecPtr, OSG::AnimBlender* >();
        bp::implicitly_convertible< OSG::AnimQuaternionBlender::ObjRecPtr, OSG::AnimBlender::ObjRecPtr >();
        bp::implicitly_convertible<OSG::AnimQuaternionBlender::ObjRecPtr, OSG::AnimBlender::ObjCPtr>();
    }

}
