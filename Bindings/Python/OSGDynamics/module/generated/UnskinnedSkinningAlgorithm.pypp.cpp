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
#include "OSGDynamics_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "UnskinnedSkinningAlgorithm.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_UnskinnedSkinningAlgorithm_class(){

    { //::OSG::UnskinnedSkinningAlgorithm
        typedef bp::class_< OSG::UnskinnedSkinningAlgorithm, bp::bases< OSG::UnskinnedSkinningAlgorithmBase >, OSG::UnskinnedSkinningAlgorithm::ObjRecPtr, boost::noncopyable > UnskinnedSkinningAlgorithm_exposer_t;
        UnskinnedSkinningAlgorithm_exposer_t UnskinnedSkinningAlgorithm_exposer = UnskinnedSkinningAlgorithm_exposer_t( "UnskinnedSkinningAlgorithm", bp::no_init );
        bp::scope UnskinnedSkinningAlgorithm_scope( UnskinnedSkinningAlgorithm_exposer );
        { //::OSG::UnskinnedSkinningAlgorithm::adjustVolume
        
            typedef void ( ::OSG::UnskinnedSkinningAlgorithm::*adjustVolume_function_type )( ::OSG::Volume & ) ;
            
            UnskinnedSkinningAlgorithm_exposer.def( 
                "adjustVolume"
                , adjustVolume_function_type( &::OSG::UnskinnedSkinningAlgorithm::adjustVolume )
                , ( bp::arg("volume") ) );
        
        }
        { //::OSG::UnskinnedSkinningAlgorithm::changed
        
            typedef void ( ::OSG::UnskinnedSkinningAlgorithm::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            UnskinnedSkinningAlgorithm_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::UnskinnedSkinningAlgorithm::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::UnskinnedSkinningAlgorithm::dump
        
            typedef void ( ::OSG::UnskinnedSkinningAlgorithm::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            UnskinnedSkinningAlgorithm_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::UnskinnedSkinningAlgorithm::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::UnskinnedSkinningAlgorithm::getRenderMode
        
            typedef ::OSG::SkinnedGeometry::RenderModeE ( ::OSG::UnskinnedSkinningAlgorithm::*getRenderMode_function_type )(  ) const;
            
            UnskinnedSkinningAlgorithm_exposer.def( 
                "getRenderMode"
                , getRenderMode_function_type( &::OSG::UnskinnedSkinningAlgorithm::getRenderMode ) );
        
        }
        { //::OSG::UnskinnedSkinningAlgorithm::intersectEnter
        
            typedef ::OSG::ActionBase::ResultE ( ::OSG::UnskinnedSkinningAlgorithm::*intersectEnter_function_type )( ::OSG::Action * ) ;
            
            UnskinnedSkinningAlgorithm_exposer.def( 
                "intersectEnter"
                , intersectEnter_function_type( &::OSG::UnskinnedSkinningAlgorithm::intersectEnter )
                , ( bp::arg("action") ) );
        
        }
        { //::OSG::UnskinnedSkinningAlgorithm::renderEnter
        
            typedef ::OSG::ActionBase::ResultE ( ::OSG::UnskinnedSkinningAlgorithm::*renderEnter_function_type )( ::OSG::Action * ) ;
            
            UnskinnedSkinningAlgorithm_exposer.def( 
                "renderEnter"
                , renderEnter_function_type( &::OSG::UnskinnedSkinningAlgorithm::renderEnter )
                , ( bp::arg("action") ) );
        
        }
        { //::OSG::UnskinnedSkinningAlgorithm::renderLeave
        
            typedef ::OSG::ActionBase::ResultE ( ::OSG::UnskinnedSkinningAlgorithm::*renderLeave_function_type )( ::OSG::Action * ) ;
            
            UnskinnedSkinningAlgorithm_exposer.def( 
                "renderLeave"
                , renderLeave_function_type( &::OSG::UnskinnedSkinningAlgorithm::renderLeave )
                , ( bp::arg("action") ) );
        
        }
        pyopensg::register_transit< OSG::UnskinnedSkinningAlgorithm >::execute();
        bp::implicitly_convertible< OSG::UnskinnedSkinningAlgorithm::ObjRecPtr, OSG::UnskinnedSkinningAlgorithm* >();
        bp::implicitly_convertible< OSG::UnskinnedSkinningAlgorithm::ObjRecPtr, OSG::UnskinnedSkinningAlgorithm::ObjCPtr >();
        bp::implicitly_convertible< OSG::UnskinnedSkinningAlgorithm::ObjRecPtr, OSG::SkinningAlgorithm* >();
        bp::implicitly_convertible< OSG::UnskinnedSkinningAlgorithm::ObjRecPtr, OSG::SkinningAlgorithm::ObjRecPtr >();
        bp::implicitly_convertible<OSG::UnskinnedSkinningAlgorithm::ObjRecPtr, OSG::SkinningAlgorithm::ObjCPtr>();
    }

}
