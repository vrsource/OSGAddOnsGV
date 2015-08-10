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
#include "OSGScripting_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "FrameTaskMixinContainerMixinHeadNodeCoreScriptDesc.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct FrameTaskMixin_less__OSG_scope_ContainerMixinHead_less__OSG_scope_NodeCoreScriptDesc__greater___greater__wrapper : OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > >, bp::wrapper< OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > > > {

    virtual void dump( ::OSG::UInt32 uiIndent=0, long unsigned int const bvFlags=0 ) const  {
        if( bp::override func_dump = this->get_override( "dump" ) )
            func_dump( uiIndent, bvFlags );
        else{
            this->OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > >::dump( uiIndent, bvFlags );
        }
    }
    
    void default_dump( ::OSG::UInt32 uiIndent=0, long unsigned int const bvFlags=0 ) const  {
        OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > >::dump( uiIndent, bvFlags );
    }

    virtual void frame( ::OSG::Time oTime, ::OSG::UInt32 uiFrame ){
        bp::override func_frame = this->get_override( "frame" );
        func_frame( oTime, uiFrame );
    }

};

void register_FrameTaskMixinContainerMixinHeadNodeCoreScriptDesc_class(){

    { //::OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > >
        typedef bp::class_< FrameTaskMixin_less__OSG_scope_ContainerMixinHead_less__OSG_scope_NodeCoreScriptDesc__greater___greater__wrapper, bp::bases< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > >, boost::noncopyable > FrameTaskMixinContainerMixinHeadNodeCoreScriptDesc_exposer_t;
        FrameTaskMixinContainerMixinHeadNodeCoreScriptDesc_exposer_t FrameTaskMixinContainerMixinHeadNodeCoreScriptDesc_exposer = FrameTaskMixinContainerMixinHeadNodeCoreScriptDesc_exposer_t( "FrameTaskMixinContainerMixinHeadNodeCoreScriptDesc", bp::no_init );
        bp::scope FrameTaskMixinContainerMixinHeadNodeCoreScriptDesc_scope( FrameTaskMixinContainerMixinHeadNodeCoreScriptDesc_exposer );
        { //::OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > >::dump
        
            typedef OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > > exported_class_t;
            typedef void ( exported_class_t::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            typedef void ( FrameTaskMixin_less__OSG_scope_ContainerMixinHead_less__OSG_scope_NodeCoreScriptDesc__greater___greater__wrapper::*default_dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            FrameTaskMixinContainerMixinHeadNodeCoreScriptDesc_exposer.def( 
                "dump"
                , dump_function_type(&::OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > >::dump)
                , default_dump_function_type(&FrameTaskMixin_less__OSG_scope_ContainerMixinHead_less__OSG_scope_NodeCoreScriptDesc__greater___greater__wrapper::default_dump)
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::FrameTaskInterface::frame
        
            typedef void ( ::OSG::FrameTaskInterface::*frame_function_type )( ::OSG::Time,::OSG::UInt32 ) ;
            
            FrameTaskMixinContainerMixinHeadNodeCoreScriptDesc_exposer.def( 
                "frame"
                , bp::pure_virtual( frame_function_type(&::OSG::FrameTaskInterface::frame) )
                , ( bp::arg("oTime"), bp::arg("uiFrame") ) );
        
        }
    }

}
