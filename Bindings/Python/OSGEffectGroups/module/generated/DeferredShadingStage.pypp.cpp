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
#include "OSGEffectGroups_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "DeferredShadingStage.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_DeferredShadingStage_class(){

    { //::OSG::DeferredShadingStage
        typedef bp::class_< OSG::DeferredShadingStage, bp::bases< OSG::DeferredShadingStageBase >, OSG::DeferredShadingStage::ObjRecPtr, boost::noncopyable > DeferredShadingStage_exposer_t;
        DeferredShadingStage_exposer_t DeferredShadingStage_exposer = DeferredShadingStage_exposer_t( "DeferredShadingStage", bp::no_init );
        bp::scope DeferredShadingStage_scope( DeferredShadingStage_exposer );
        { //::OSG::DeferredShadingStage::changed
        
            typedef void ( ::OSG::DeferredShadingStage::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            DeferredShadingStage_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::DeferredShadingStage::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::DeferredShadingStage::dump
        
            typedef void ( ::OSG::DeferredShadingStage::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            DeferredShadingStage_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::DeferredShadingStage::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        pyopensg::register_transit< OSG::DeferredShadingStage >::execute();
        bp::implicitly_convertible< OSG::DeferredShadingStage::ObjRecPtr, OSG::DeferredShadingStage* >();
        bp::implicitly_convertible< OSG::DeferredShadingStage::ObjRecPtr, OSG::DeferredShadingStage::ObjCPtr >();
        bp::implicitly_convertible< OSG::DeferredShadingStage::ObjRecPtr, OSG::SimpleStage* >();
        bp::implicitly_convertible< OSG::DeferredShadingStage::ObjRecPtr, OSG::SimpleStage::ObjRecPtr >();
        bp::implicitly_convertible<OSG::DeferredShadingStage::ObjRecPtr, OSG::SimpleStage::ObjCPtr>();
    }

}
