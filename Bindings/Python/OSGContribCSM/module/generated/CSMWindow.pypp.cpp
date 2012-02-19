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
#if WIN32
#pragma warning(disable : 4267)
#pragma warning(disable : 4344)
#endif

#include "boost/python.hpp"
#include "OSGContribCSM_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "CSMWindow.pypp.hpp"

using namespace std;
namespace bp = boost::python;

namespace
{

OSG::FieldContainerRecPtr
wrapFindNamedComponent(OSG::CSMWindow* self, const OSG::Char8* szName)
{
   return OSG::FieldContainerRecPtr(self->findNamedComponent(szName));
}

}

void register_CSMWindow_class(){

    { //::OSG::CSMWindow
        typedef bp::class_< OSG::CSMWindow, bp::bases< OSG::CSMWindowBase >, boost::noncopyable > CSMWindow_exposer_t;
        CSMWindow_exposer_t CSMWindow_exposer = CSMWindow_exposer_t( "CSMWindow", bp::no_init );
        bp::scope CSMWindow_scope( CSMWindow_exposer );
        { //::OSG::CSMWindow::changed
        
            typedef void ( ::OSG::CSMWindow::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            CSMWindow_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::CSMWindow::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::CSMWindow::dump
        
            typedef void ( ::OSG::CSMWindow::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            CSMWindow_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::CSMWindow::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::CSMWindow::getParent
        
            typedef ::OSG::CSMDrawer * ( ::OSG::CSMWindow::*getParent_function_type )(  ) const;
            
            CSMWindow_exposer.def( 
                "getParent"
                , getParent_function_type( &::OSG::CSMWindow::getParent )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMWindow::getWindow
        
            typedef ::OSG::Window * ( ::OSG::CSMWindow::*getWindow_function_type )(  ) const;
            
            CSMWindow_exposer.def( 
                "getWindow"
                , getWindow_function_type( &::OSG::CSMWindow::getWindow )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMWindow::getXPos
        
            typedef ::OSG::Real32 ( ::OSG::CSMWindow::*getXPos_function_type )(  ) const;
            
            CSMWindow_exposer.def( 
                "getXPos"
                , getXPos_function_type( &::OSG::CSMWindow::getXPos ) );
        
        }
        { //::OSG::CSMWindow::getXSize
        
            typedef ::OSG::Real32 ( ::OSG::CSMWindow::*getXSize_function_type )(  ) const;
            
            CSMWindow_exposer.def( 
                "getXSize"
                , getXSize_function_type( &::OSG::CSMWindow::getXSize ) );
        
        }
        { //::OSG::CSMWindow::getYPos
        
            typedef ::OSG::Real32 ( ::OSG::CSMWindow::*getYPos_function_type )(  ) const;
            
            CSMWindow_exposer.def( 
                "getYPos"
                , getYPos_function_type( &::OSG::CSMWindow::getYPos ) );
        
        }
        { //::OSG::CSMWindow::getYSize
        
            typedef ::OSG::Real32 ( ::OSG::CSMWindow::*getYSize_function_type )(  ) const;
            
            CSMWindow_exposer.def( 
                "getYSize"
                , getYSize_function_type( &::OSG::CSMWindow::getYSize ) );
        
        }
        { //::OSG::CSMWindow::init
        
            typedef bool ( ::OSG::CSMWindow::*init_function_type )(  ) ;
            
            CSMWindow_exposer.def( 
                "init"
                , init_function_type( &::OSG::CSMWindow::init ) );
        
        }
        { //::OSG::CSMWindow::queueTask
        
            typedef void ( ::OSG::CSMWindow::*queueTask_function_type )( ::OSG::DrawTask * ) ;
            
            CSMWindow_exposer.def( 
                "queueTask"
                , queueTask_function_type( &::OSG::CSMWindow::queueTask )
                , ( bp::arg("pTask") ) );
        
        }
        { //::OSG::CSMWindow::translateGlobalCoordinatesAbs
        
            typedef ::OSG::Vec2i ( ::OSG::CSMWindow::*translateGlobalCoordinatesAbs_function_type )( ::OSG::Int32,::OSG::Int32 ) ;
            
            CSMWindow_exposer.def( 
                "translateGlobalCoordinatesAbs"
                , translateGlobalCoordinatesAbs_function_type( &::OSG::CSMWindow::translateGlobalCoordinatesAbs )
                , ( bp::arg("iX"), bp::arg("iY") ) );
        
        }
        { //::OSG::CSMWindow::translateGlobalCoordinatesRel
        
            typedef ::OSG::Vec2i ( ::OSG::CSMWindow::*translateGlobalCoordinatesRel_function_type )( ::OSG::Real32,::OSG::Real32 ) ;
            
            CSMWindow_exposer.def( 
                "translateGlobalCoordinatesRel"
                , translateGlobalCoordinatesRel_function_type( &::OSG::CSMWindow::translateGlobalCoordinatesRel )
                , ( bp::arg("rX"), bp::arg("rY") ) );
        
        }
        { //::OSG::CSMWindow::translateScreenCoordinatesRel
        
            typedef ::OSG::Vec2f ( ::OSG::CSMWindow::*translateScreenCoordinatesRel_function_type )( ::OSG::Real32,::OSG::Real32 ) ;
            
            CSMWindow_exposer.def( 
                "translateScreenCoordinatesRel"
                , translateScreenCoordinatesRel_function_type( &::OSG::CSMWindow::translateScreenCoordinatesRel )
                , ( bp::arg("rX"), bp::arg("rY") ) );
        
        }
        { //::OSG::CSMWindow::translateToScreenCoordinatesAbs
        
            typedef ::OSG::Vec2f ( ::OSG::CSMWindow::*translateToScreenCoordinatesAbs_function_type )( ::OSG::Real32,::OSG::Real32 ) ;
            
            CSMWindow_exposer.def( 
                "translateToScreenCoordinatesAbs"
                , translateToScreenCoordinatesAbs_function_type( &::OSG::CSMWindow::translateToScreenCoordinatesAbs )
                , ( bp::arg("rX"), bp::arg("rY") ) );
        
        }
        pyopensg::register_transit< OSG::CSMWindow >::execute();
        bp::register_ptr_to_python< OSG::CSMWindow::ObjRecPtr >();
        bp::implicitly_convertible< OSG::CSMWindow::ObjRecPtr, OSG::CSMWindow* >();
        bp::implicitly_convertible< OSG::CSMWindow::ObjRecPtr, OSG::CSMWindow::ObjCPtr >();
        bp::implicitly_convertible< OSG::CSMWindow::ObjRecPtr, OSG::AttachmentContainer* >();
        bp::implicitly_convertible< OSG::CSMWindow::ObjRecPtr, OSG::AttachmentContainer::ObjRecPtr >();
        bp::implicitly_convertible<OSG::CSMWindow::ObjRecPtr, OSG::AttachmentContainer::ObjCPtr>();
        CSMWindow_exposer.def("findNamedComponent", wrapFindNamedComponent, (bp::arg("szName")));
    }

}
