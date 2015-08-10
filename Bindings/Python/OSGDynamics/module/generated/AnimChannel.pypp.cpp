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
#include "OSGDynamics_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "AnimChannel.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_AnimChannel_class(){

    { //::OSG::AnimChannel
        typedef bp::class_< OSG::AnimChannel, bp::bases< OSG::AnimChannelBase >, boost::noncopyable > AnimChannel_exposer_t;
        AnimChannel_exposer_t AnimChannel_exposer = AnimChannel_exposer_t( "AnimChannel", bp::no_init );
        bp::scope AnimChannel_scope( AnimChannel_exposer );
        { //::OSG::AnimChannel::changed
        
            typedef void ( ::OSG::AnimChannel::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            AnimChannel_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::AnimChannel::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::AnimChannel::dump
        
            typedef void ( ::OSG::AnimChannel::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            AnimChannel_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::AnimChannel::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::AnimChannel::evaluate
        
            typedef void ( ::OSG::AnimChannel::*evaluate_function_type )(  ) ;
            
            AnimChannel_exposer.def( 
                "evaluate"
                , evaluate_function_type( &::OSG::AnimChannel::evaluate ) );
        
        }
        { //::OSG::AnimChannel::getEnabled
        
            typedef bool ( ::OSG::AnimChannel::*getEnabled_function_type )(  ) const;
            
            AnimChannel_exposer.def( 
                "getEnabled"
                , getEnabled_function_type( &::OSG::AnimChannel::getEnabled ) );
        
        }
        pyopensg::register_transit< OSG::AnimChannel >::execute();
        bp::register_ptr_to_python< OSG::AnimChannel::ObjRecPtr >();
        bp::implicitly_convertible< OSG::AnimChannel::ObjRecPtr, OSG::AnimChannel* >();
        bp::implicitly_convertible< OSG::AnimChannel::ObjRecPtr, OSG::AnimChannel::ObjCPtr >();
        bp::implicitly_convertible< OSG::AnimChannel::ObjRecPtr, OSG::NodeCore* >();
        bp::implicitly_convertible< OSG::AnimChannel::ObjRecPtr, OSG::NodeCore::ObjRecPtr >();
        bp::implicitly_convertible<OSG::AnimChannel::ObjRecPtr, OSG::NodeCore::ObjCPtr>();
    }

}
