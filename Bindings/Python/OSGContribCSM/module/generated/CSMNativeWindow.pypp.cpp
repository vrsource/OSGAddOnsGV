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
#include "OSGContribCSM_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "CSMNativeWindow.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_CSMNativeWindow_class(){

    { //::OSG::CSMNativeWindow
        typedef bp::class_< OSG::CSMNativeWindow, bp::bases< OSG::CSMNativeWindowBase >, OSG::CSMNativeWindow::ObjRecPtr, boost::noncopyable > CSMNativeWindow_exposer_t;
        CSMNativeWindow_exposer_t CSMNativeWindow_exposer = CSMNativeWindow_exposer_t( "CSMNativeWindow", bp::no_init );
        bp::scope CSMNativeWindow_scope( CSMNativeWindow_exposer );
        { //::OSG::CSMNativeWindow::changed
        
            typedef void ( ::OSG::CSMNativeWindow::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            CSMNativeWindow_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::CSMNativeWindow::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::CSMNativeWindow::dump
        
            typedef void ( ::OSG::CSMNativeWindow::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            CSMNativeWindow_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::CSMNativeWindow::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::CSMNativeWindow::init
        
            typedef bool ( ::OSG::CSMNativeWindow::*init_function_type )(  ) ;
            
            CSMNativeWindow_exposer.def( 
                "init"
                , init_function_type( &::OSG::CSMNativeWindow::init ) );
        
        }
        { //::OSG::CSMNativeWindow::initWindowSystemThreading
        
            typedef void ( *initWindowSystemThreading_function_type )(  );
            
            CSMNativeWindow_exposer.def( 
                "initWindowSystemThreading"
                , initWindowSystemThreading_function_type( &::OSG::CSMNativeWindow::initWindowSystemThreading ) );
        
        }
        { //::OSG::CSMNativeWindow::translateGlobalCoordinatesAbs
        
            typedef ::OSG::Vec2i ( ::OSG::CSMNativeWindow::*translateGlobalCoordinatesAbs_function_type )( ::OSG::Int32,::OSG::Int32 ) ;
            
            CSMNativeWindow_exposer.def( 
                "translateGlobalCoordinatesAbs"
                , translateGlobalCoordinatesAbs_function_type( &::OSG::CSMNativeWindow::translateGlobalCoordinatesAbs )
                , ( bp::arg("iX"), bp::arg("iY") ) );
        
        }
        { //::OSG::CSMNativeWindow::translateGlobalCoordinatesRel
        
            typedef ::OSG::Vec2i ( ::OSG::CSMNativeWindow::*translateGlobalCoordinatesRel_function_type )( ::OSG::Real32,::OSG::Real32 ) ;
            
            CSMNativeWindow_exposer.def( 
                "translateGlobalCoordinatesRel"
                , translateGlobalCoordinatesRel_function_type( &::OSG::CSMNativeWindow::translateGlobalCoordinatesRel )
                , ( bp::arg("rX"), bp::arg("rY") ) );
        
        }
        { //::OSG::CSMNativeWindow::translateScreenCoordinatesRel
        
            typedef ::OSG::Vec2f ( ::OSG::CSMNativeWindow::*translateScreenCoordinatesRel_function_type )( ::OSG::Real32,::OSG::Real32 ) ;
            
            CSMNativeWindow_exposer.def( 
                "translateScreenCoordinatesRel"
                , translateScreenCoordinatesRel_function_type( &::OSG::CSMNativeWindow::translateScreenCoordinatesRel )
                , ( bp::arg("rX"), bp::arg("rY") ) );
        
        }
        { //::OSG::CSMNativeWindow::translateToScreenCoordinatesAbs
        
            typedef ::OSG::Vec2f ( ::OSG::CSMNativeWindow::*translateToScreenCoordinatesAbs_function_type )( ::OSG::Real32,::OSG::Real32 ) ;
            
            CSMNativeWindow_exposer.def( 
                "translateToScreenCoordinatesAbs"
                , translateToScreenCoordinatesAbs_function_type( &::OSG::CSMNativeWindow::translateToScreenCoordinatesAbs )
                , ( bp::arg("rX"), bp::arg("rY") ) );
        
        }
        CSMNativeWindow_exposer.staticmethod( "initWindowSystemThreading" );
        pyopensg::register_transit< OSG::CSMNativeWindow >::execute();
        bp::implicitly_convertible< OSG::CSMNativeWindow::ObjRecPtr, OSG::CSMNativeWindow* >();
        bp::implicitly_convertible< OSG::CSMNativeWindow::ObjRecPtr, OSG::CSMNativeWindow::ObjCPtr >();
        bp::implicitly_convertible< OSG::CSMNativeWindow::ObjRecPtr, OSG::CSMWindow* >();
        bp::implicitly_convertible< OSG::CSMNativeWindow::ObjRecPtr, OSG::CSMWindow::ObjRecPtr >();
        bp::implicitly_convertible<OSG::CSMNativeWindow::ObjRecPtr, OSG::CSMWindow::ObjCPtr>();
    }

}
