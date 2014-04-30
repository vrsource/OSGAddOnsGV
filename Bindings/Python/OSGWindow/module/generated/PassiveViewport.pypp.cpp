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
#include "OSGWindow_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "PassiveViewport.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_PassiveViewport_class(){

    { //::OSG::PassiveViewport
        typedef bp::class_< OSG::PassiveViewport, bp::bases< OSG::PassiveViewportBase >, OSG::PassiveViewport::ObjRecPtr, boost::noncopyable > PassiveViewport_exposer_t;
        PassiveViewport_exposer_t PassiveViewport_exposer = PassiveViewport_exposer_t( "PassiveViewport", bp::no_init );
        bp::scope PassiveViewport_scope( PassiveViewport_exposer );
        { //::OSG::PassiveViewport::changed
        
            typedef void ( ::OSG::PassiveViewport::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            PassiveViewport_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::PassiveViewport::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("detail") ) );
        
        }
        { //::OSG::PassiveViewport::dump
        
            typedef void ( ::OSG::PassiveViewport::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            PassiveViewport_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::PassiveViewport::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::PassiveViewport::isPassive
        
            typedef bool ( ::OSG::PassiveViewport::*isPassive_function_type )(  ) ;
            
            PassiveViewport_exposer.def( 
                "isPassive"
                , isPassive_function_type( &::OSG::PassiveViewport::isPassive ) );
        
        }
        { //::OSG::PassiveViewport::render
        
            typedef void ( ::OSG::PassiveViewport::*render_function_type )( ::OSG::RenderActionBase * ) ;
            
            PassiveViewport_exposer.def( 
                "render"
                , render_function_type( &::OSG::PassiveViewport::render )
                , ( bp::arg("action") ) );
        
        }
        pyopensg::register_transit< OSG::PassiveViewport >::execute();
        bp::implicitly_convertible< OSG::PassiveViewport::ObjRecPtr, OSG::PassiveViewport* >();
        bp::implicitly_convertible< OSG::PassiveViewport::ObjRecPtr, OSG::PassiveViewport::ObjCPtr >();
        bp::implicitly_convertible< OSG::PassiveViewport::ObjRecPtr, OSG::Viewport* >();
        bp::implicitly_convertible< OSG::PassiveViewport::ObjRecPtr, OSG::Viewport::ObjRecPtr >();
        bp::implicitly_convertible<OSG::PassiveViewport::ObjRecPtr, OSG::Viewport::ObjCPtr>();
    }

}
