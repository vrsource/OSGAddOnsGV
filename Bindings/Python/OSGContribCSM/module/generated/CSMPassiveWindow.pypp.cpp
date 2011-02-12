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
#endif

#include "boost/python.hpp"
#include "OSGContribCSM_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "CSMPassiveWindow.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_CSMPassiveWindow_class(){

    { //::OSG::CSMPassiveWindow
        typedef bp::class_< OSG::CSMPassiveWindow, bp::bases< OSG::CSMPassiveWindowBase >, OSG::CSMPassiveWindow::ObjRecPtr, boost::noncopyable > CSMPassiveWindow_exposer_t;
        CSMPassiveWindow_exposer_t CSMPassiveWindow_exposer = CSMPassiveWindow_exposer_t( "CSMPassiveWindow", bp::no_init );
        bp::scope CSMPassiveWindow_scope( CSMPassiveWindow_exposer );
        { //::OSG::CSMPassiveWindow::changed
        
            typedef void ( ::OSG::CSMPassiveWindow::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            CSMPassiveWindow_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::CSMPassiveWindow::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::CSMPassiveWindow::dump
        
            typedef void ( ::OSG::CSMPassiveWindow::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            CSMPassiveWindow_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::CSMPassiveWindow::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::CSMPassiveWindow::init
        
            typedef bool ( ::OSG::CSMPassiveWindow::*init_function_type )(  ) ;
            
            CSMPassiveWindow_exposer.def( 
                "init"
                , init_function_type( &::OSG::CSMPassiveWindow::init ) );
        
        }
        pyopensg::register_transit< OSG::CSMPassiveWindow >::execute();
        bp::implicitly_convertible< OSG::CSMPassiveWindow::ObjRecPtr, OSG::CSMPassiveWindow* >();
        bp::implicitly_convertible< OSG::CSMPassiveWindow::ObjRecPtr, OSG::CSMPassiveWindow::ObjCPtr >();
        bp::implicitly_convertible< OSG::CSMPassiveWindow::ObjRecPtr, OSG::CSMWindow* >();
        bp::implicitly_convertible< OSG::CSMPassiveWindow::ObjRecPtr, OSG::CSMWindow::ObjRecPtr >();
        bp::implicitly_convertible<OSG::CSMPassiveWindow::ObjRecPtr, OSG::CSMWindow::ObjCPtr>();
    }

}