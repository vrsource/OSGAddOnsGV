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
#include "OSGWindow_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "TileCameraDecorator.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_TileCameraDecorator_class(){

    { //::OSG::TileCameraDecorator
        typedef bp::class_< OSG::TileCameraDecorator, bp::bases< OSG::TileCameraDecoratorBase >, OSG::TileCameraDecorator::ObjRecPtr, boost::noncopyable > TileCameraDecorator_exposer_t;
        TileCameraDecorator_exposer_t TileCameraDecorator_exposer = TileCameraDecorator_exposer_t( "TileCameraDecorator", bp::no_init );
        bp::scope TileCameraDecorator_scope( TileCameraDecorator_exposer );
        { //::OSG::TileCameraDecorator::changed
        
            typedef void ( ::OSG::TileCameraDecorator::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            TileCameraDecorator_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::TileCameraDecorator::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("detail") ) );
        
        }
        { //::OSG::TileCameraDecorator::dump
        
            typedef void ( ::OSG::TileCameraDecorator::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            TileCameraDecorator_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::TileCameraDecorator::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::TileCameraDecorator::getDecoration
        
            typedef void ( ::OSG::TileCameraDecorator::*getDecoration_function_type )( ::OSG::Matrix &,::OSG::UInt32,::OSG::UInt32 ) ;
            
            TileCameraDecorator_exposer.def( 
                "getDecoration"
                , getDecoration_function_type( &::OSG::TileCameraDecorator::getDecoration )
                , ( bp::arg("result"), bp::arg("width"), bp::arg("height") ) );
        
        }
        { //::OSG::TileCameraDecorator::getProjection
        
            typedef void ( ::OSG::TileCameraDecorator::*getProjection_function_type )( ::OSG::Matrix &,::OSG::UInt32,::OSG::UInt32 ) ;
            
            TileCameraDecorator_exposer.def( 
                "getProjection"
                , getProjection_function_type( &::OSG::TileCameraDecorator::getProjection )
                , ( bp::arg("result"), bp::arg("width"), bp::arg("height") ) );
        
        }
        { //::OSG::TileCameraDecorator::setFullSize
        
            typedef void ( ::OSG::TileCameraDecorator::*setFullSize_function_type )( ::OSG::UInt32,::OSG::UInt32 ) ;
            
            TileCameraDecorator_exposer.def( 
                "setFullSize"
                , setFullSize_function_type( &::OSG::TileCameraDecorator::setFullSize )
                , ( bp::arg("width"), bp::arg("height") ) );
        
        }
        { //::OSG::TileCameraDecorator::setSize
        
            typedef void ( ::OSG::TileCameraDecorator::*setSize_function_type )( ::OSG::Real32,::OSG::Real32,::OSG::Real32,::OSG::Real32 ) ;
            
            TileCameraDecorator_exposer.def( 
                "setSize"
                , setSize_function_type( &::OSG::TileCameraDecorator::setSize )
                , ( bp::arg("left"), bp::arg("bottom"), bp::arg("right"), bp::arg("top") ) );
        
        }
        { //::OSG::TileCameraDecorator::tileGetFullSize
        
            typedef ::OSG::Vec2u ( ::OSG::TileCameraDecorator::*tileGetFullSize_function_type )(  ) const;
            
            TileCameraDecorator_exposer.def( 
                "tileGetFullSize"
                , tileGetFullSize_function_type( &::OSG::TileCameraDecorator::tileGetFullSize ) );
        
        }
        { //::OSG::TileCameraDecorator::tileGetRegion
        
            typedef ::OSG::Vec4f ( ::OSG::TileCameraDecorator::*tileGetRegion_function_type )(  ) const;
            
            TileCameraDecorator_exposer.def( 
                "tileGetRegion"
                , tileGetRegion_function_type( &::OSG::TileCameraDecorator::tileGetRegion ) );
        
        }
        pyopensg::register_transit< OSG::TileCameraDecorator >::execute();
        bp::implicitly_convertible< OSG::TileCameraDecorator::ObjRecPtr, OSG::TileCameraDecorator* >();
        bp::implicitly_convertible< OSG::TileCameraDecorator::ObjRecPtr, OSG::TileCameraDecorator::ObjCPtr >();
        bp::implicitly_convertible< OSG::TileCameraDecorator::ObjRecPtr, OSG::CameraDecorator* >();
        bp::implicitly_convertible< OSG::TileCameraDecorator::ObjRecPtr, OSG::CameraDecorator::ObjRecPtr >();
        bp::implicitly_convertible<OSG::TileCameraDecorator::ObjRecPtr, OSG::CameraDecorator::ObjCPtr>();
    }

}
