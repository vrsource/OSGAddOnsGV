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
#include "ShearedStereoCameraDecorator.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_ShearedStereoCameraDecorator_class(){

    { //::OSG::ShearedStereoCameraDecorator
        typedef bp::class_< OSG::ShearedStereoCameraDecorator, bp::bases< OSG::ShearedStereoCameraDecoratorBase >, OSG::ShearedStereoCameraDecorator::ObjRecPtr, boost::noncopyable > ShearedStereoCameraDecorator_exposer_t;
        ShearedStereoCameraDecorator_exposer_t ShearedStereoCameraDecorator_exposer = ShearedStereoCameraDecorator_exposer_t( "ShearedStereoCameraDecorator", bp::no_init );
        bp::scope ShearedStereoCameraDecorator_scope( ShearedStereoCameraDecorator_exposer );
        { //::OSG::ShearedStereoCameraDecorator::changed
        
            typedef void ( ::OSG::ShearedStereoCameraDecorator::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            ShearedStereoCameraDecorator_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::ShearedStereoCameraDecorator::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("detail") ) );
        
        }
        { //::OSG::ShearedStereoCameraDecorator::dump
        
            typedef void ( ::OSG::ShearedStereoCameraDecorator::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            ShearedStereoCameraDecorator_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::ShearedStereoCameraDecorator::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::ShearedStereoCameraDecorator::getDecoration
        
            typedef void ( ::OSG::ShearedStereoCameraDecorator::*getDecoration_function_type )( ::OSG::Matrix &,::OSG::UInt32,::OSG::UInt32 ) ;
            
            ShearedStereoCameraDecorator_exposer.def( 
                "getDecoration"
                , getDecoration_function_type( &::OSG::ShearedStereoCameraDecorator::getDecoration )
                , ( bp::arg("result"), bp::arg("width"), bp::arg("height") ) );
        
        }
        { //::OSG::ShearedStereoCameraDecorator::getProjection
        
            typedef void ( ::OSG::ShearedStereoCameraDecorator::*getProjection_function_type )( ::OSG::Matrix &,::OSG::UInt32,::OSG::UInt32 ) ;
            
            ShearedStereoCameraDecorator_exposer.def( 
                "getProjection"
                , getProjection_function_type( &::OSG::ShearedStereoCameraDecorator::getProjection )
                , ( bp::arg("result"), bp::arg("width"), bp::arg("height") ) );
        
        }
        pyopensg::register_transit< OSG::ShearedStereoCameraDecorator >::execute();
        bp::implicitly_convertible< OSG::ShearedStereoCameraDecorator::ObjRecPtr, OSG::ShearedStereoCameraDecorator* >();
        bp::implicitly_convertible< OSG::ShearedStereoCameraDecorator::ObjRecPtr, OSG::ShearedStereoCameraDecorator::ObjCPtr >();
        bp::implicitly_convertible< OSG::ShearedStereoCameraDecorator::ObjRecPtr, OSG::StereoCameraDecorator* >();
        bp::implicitly_convertible< OSG::ShearedStereoCameraDecorator::ObjRecPtr, OSG::StereoCameraDecorator::ObjRecPtr >();
        bp::implicitly_convertible<OSG::ShearedStereoCameraDecorator::ObjRecPtr, OSG::StereoCameraDecorator::ObjCPtr>();
    }

}
