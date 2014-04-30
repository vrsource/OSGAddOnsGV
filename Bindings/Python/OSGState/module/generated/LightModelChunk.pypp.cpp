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
#include "OSGState_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "LightModelChunk.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_LightModelChunk_class(){

    { //::OSG::LightModelChunk
        typedef bp::class_< OSG::LightModelChunk, bp::bases< OSG::LightModelChunkBase >, OSG::LightModelChunk::ObjRecPtr, boost::noncopyable > LightModelChunk_exposer_t;
        LightModelChunk_exposer_t LightModelChunk_exposer = LightModelChunk_exposer_t( "LightModelChunk", bp::no_init );
        bp::scope LightModelChunk_scope( LightModelChunk_exposer );
        { //::OSG::LightModelChunk::changed
        
            typedef void ( ::OSG::LightModelChunk::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            LightModelChunk_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::LightModelChunk::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::LightModelChunk::dump
        
            typedef void ( ::OSG::LightModelChunk::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            LightModelChunk_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::LightModelChunk::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::LightModelChunk::getClass
        
            typedef ::OSG::StateChunkClass const * ( ::OSG::LightModelChunk::*getClass_function_type )(  ) const;
            
            LightModelChunk_exposer.def( 
                "getClass"
                , getClass_function_type( &::OSG::LightModelChunk::getClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::LightModelChunk::getStaticClass
        
            typedef ::OSG::StateChunkClass const * ( *getStaticClass_function_type )(  );
            
            LightModelChunk_exposer.def( 
                "getStaticClass"
                , getStaticClass_function_type( &::OSG::LightModelChunk::getStaticClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::LightModelChunk::getStaticClassId
        
            typedef ::OSG::UInt32 ( *getStaticClassId_function_type )(  );
            
            LightModelChunk_exposer.def( 
                "getStaticClassId"
                , getStaticClassId_function_type( &::OSG::LightModelChunk::getStaticClassId ) );
        
        }
        { //::OSG::LightModelChunk::switchCost
        
            typedef ::OSG::Real32 ( ::OSG::LightModelChunk::*switchCost_function_type )( ::OSG::StateChunk * ) ;
            
            LightModelChunk_exposer.def( 
                "switchCost"
                , switchCost_function_type( &::OSG::LightModelChunk::switchCost )
                , ( bp::arg("chunk") ) );
        
        }
        LightModelChunk_exposer.staticmethod( "getStaticClass" );
        LightModelChunk_exposer.staticmethod( "getStaticClassId" );
        pyopensg::register_transit< OSG::LightModelChunk >::execute();
        bp::implicitly_convertible< OSG::LightModelChunk::ObjRecPtr, OSG::LightModelChunk* >();
        bp::implicitly_convertible< OSG::LightModelChunk::ObjRecPtr, OSG::LightModelChunk::ObjCPtr >();
        bp::implicitly_convertible< OSG::LightModelChunk::ObjRecPtr, OSG::StateChunk* >();
        bp::implicitly_convertible< OSG::LightModelChunk::ObjRecPtr, OSG::StateChunk::ObjRecPtr >();
        bp::implicitly_convertible<OSG::LightModelChunk::ObjRecPtr, OSG::StateChunk::ObjCPtr>();
    }

}
