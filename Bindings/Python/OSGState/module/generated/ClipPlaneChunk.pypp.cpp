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
#include "OSGState_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "ClipPlaneChunk.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_ClipPlaneChunk_class(){

    { //::OSG::ClipPlaneChunk
        typedef bp::class_< OSG::ClipPlaneChunk, bp::bases< OSG::ClipPlaneChunkBase >, OSG::ClipPlaneChunk::ObjRecPtr, boost::noncopyable > ClipPlaneChunk_exposer_t;
        ClipPlaneChunk_exposer_t ClipPlaneChunk_exposer = ClipPlaneChunk_exposer_t( "ClipPlaneChunk", bp::no_init );
        bp::scope ClipPlaneChunk_scope( ClipPlaneChunk_exposer );
        { //::OSG::ClipPlaneChunk::changed
        
            typedef void ( ::OSG::ClipPlaneChunk::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            ClipPlaneChunk_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::ClipPlaneChunk::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::ClipPlaneChunk::dump
        
            typedef void ( ::OSG::ClipPlaneChunk::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            ClipPlaneChunk_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::ClipPlaneChunk::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::ClipPlaneChunk::getClass
        
            typedef ::OSG::StateChunkClass const * ( ::OSG::ClipPlaneChunk::*getClass_function_type )(  ) const;
            
            ClipPlaneChunk_exposer.def( 
                "getClass"
                , getClass_function_type( &::OSG::ClipPlaneChunk::getClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ClipPlaneChunk::getStaticClass
        
            typedef ::OSG::StateChunkClass const * ( *getStaticClass_function_type )(  );
            
            ClipPlaneChunk_exposer.def( 
                "getStaticClass"
                , getStaticClass_function_type( &::OSG::ClipPlaneChunk::getStaticClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ClipPlaneChunk::getStaticClassId
        
            typedef ::OSG::UInt32 ( *getStaticClassId_function_type )(  );
            
            ClipPlaneChunk_exposer.def( 
                "getStaticClassId"
                , getStaticClassId_function_type( &::OSG::ClipPlaneChunk::getStaticClassId ) );
        
        }
        { //::OSG::ClipPlaneChunk::switchCost
        
            typedef ::OSG::Real32 ( ::OSG::ClipPlaneChunk::*switchCost_function_type )( ::OSG::StateChunk * ) ;
            
            ClipPlaneChunk_exposer.def( 
                "switchCost"
                , switchCost_function_type( &::OSG::ClipPlaneChunk::switchCost )
                , ( bp::arg("chunk") ) );
        
        }
        ClipPlaneChunk_exposer.staticmethod( "getStaticClass" );
        ClipPlaneChunk_exposer.staticmethod( "getStaticClassId" );
        pyopensg::register_transit< OSG::ClipPlaneChunk >::execute();
        bp::implicitly_convertible< OSG::ClipPlaneChunk::ObjRecPtr, OSG::ClipPlaneChunk* >();
        bp::implicitly_convertible< OSG::ClipPlaneChunk::ObjRecPtr, OSG::ClipPlaneChunk::ObjCPtr >();
        bp::implicitly_convertible< OSG::ClipPlaneChunk::ObjRecPtr, OSG::StateChunk* >();
        bp::implicitly_convertible< OSG::ClipPlaneChunk::ObjRecPtr, OSG::StateChunk::ObjRecPtr >();
        bp::implicitly_convertible<OSG::ClipPlaneChunk::ObjRecPtr, OSG::StateChunk::ObjCPtr>();
    }

}
