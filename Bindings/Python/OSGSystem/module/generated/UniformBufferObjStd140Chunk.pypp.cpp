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
#include "OSGSystem_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "UniformBufferObjStd140Chunk.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_UniformBufferObjStd140Chunk_class(){

    { //::OSG::UniformBufferObjStd140Chunk
        typedef bp::class_< OSG::UniformBufferObjStd140Chunk, bp::bases< OSG::UniformBufferObjStd140ChunkBase >, OSG::UniformBufferObjStd140Chunk::ObjRecPtr, boost::noncopyable > UniformBufferObjStd140Chunk_exposer_t;
        UniformBufferObjStd140Chunk_exposer_t UniformBufferObjStd140Chunk_exposer = UniformBufferObjStd140Chunk_exposer_t( "UniformBufferObjStd140Chunk", bp::no_init );
        bp::scope UniformBufferObjStd140Chunk_scope( UniformBufferObjStd140Chunk_exposer );
        { //::OSG::UniformBufferObjStd140Chunk::changed
        
            typedef void ( ::OSG::UniformBufferObjStd140Chunk::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            UniformBufferObjStd140Chunk_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::UniformBufferObjStd140Chunk::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::UniformBufferObjStd140Chunk::dump
        
            typedef void ( ::OSG::UniformBufferObjStd140Chunk::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            UniformBufferObjStd140Chunk_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::UniformBufferObjStd140Chunk::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::UniformBufferObjStd140Chunk::getChunkId
        
            typedef ::OSG::UInt16 ( ::OSG::UniformBufferObjStd140Chunk::*getChunkId_function_type )(  ) ;
            
            UniformBufferObjStd140Chunk_exposer.def( 
                "getChunkId"
                , getChunkId_function_type( &::OSG::UniformBufferObjStd140Chunk::getChunkId ) );
        
        }
        { //::OSG::UniformBufferObjStd140Chunk::getClass
        
            typedef ::OSG::StateChunkClass const * ( ::OSG::UniformBufferObjStd140Chunk::*getClass_function_type )(  ) const;
            
            UniformBufferObjStd140Chunk_exposer.def( 
                "getClass"
                , getClass_function_type( &::OSG::UniformBufferObjStd140Chunk::getClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::UniformBufferObjStd140Chunk::getOpenGLId
        
            typedef ::OSG::Int32 ( ::OSG::UniformBufferObjStd140Chunk::*getOpenGLId_function_type )( ::OSG::DrawEnv * ) ;
            
            UniformBufferObjStd140Chunk_exposer.def( 
                "getOpenGLId"
                , getOpenGLId_function_type( &::OSG::UniformBufferObjStd140Chunk::getOpenGLId )
                , ( bp::arg("pEnv") ) );
        
        }
        { //::OSG::UniformBufferObjStd140Chunk::getStaticClass
        
            typedef ::OSG::StateChunkClass const * ( *getStaticClass_function_type )(  );
            
            UniformBufferObjStd140Chunk_exposer.def( 
                "getStaticClass"
                , getStaticClass_function_type( &::OSG::UniformBufferObjStd140Chunk::getStaticClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::UniformBufferObjStd140Chunk::getStaticClassId
        
            typedef ::OSG::UInt32 ( *getStaticClassId_function_type )(  );
            
            UniformBufferObjStd140Chunk_exposer.def( 
                "getStaticClassId"
                , getStaticClassId_function_type( &::OSG::UniformBufferObjStd140Chunk::getStaticClassId ) );
        
        }
        { //::OSG::UniformBufferObjStd140Chunk::validate
        
            typedef void ( ::OSG::UniformBufferObjStd140Chunk::*validate_function_type )( ::OSG::DrawEnv * ) ;
            
            UniformBufferObjStd140Chunk_exposer.def( 
                "validate"
                , validate_function_type( &::OSG::UniformBufferObjStd140Chunk::validate )
                , ( bp::arg("pEnv") ) );
        
        }
        UniformBufferObjStd140Chunk_exposer.staticmethod( "getStaticClass" );
        UniformBufferObjStd140Chunk_exposer.staticmethod( "getStaticClassId" );
        pyopensg::register_transit< OSG::UniformBufferObjStd140Chunk >::execute();
        bp::implicitly_convertible< OSG::UniformBufferObjStd140Chunk::ObjRecPtr, OSG::UniformBufferObjStd140Chunk* >();
        bp::implicitly_convertible< OSG::UniformBufferObjStd140Chunk::ObjRecPtr, OSG::UniformBufferObjStd140Chunk::ObjCPtr >();
        bp::implicitly_convertible< OSG::UniformBufferObjStd140Chunk::ObjRecPtr, OSG::StateChunk* >();
        bp::implicitly_convertible< OSG::UniformBufferObjStd140Chunk::ObjRecPtr, OSG::StateChunk::ObjRecPtr >();
        bp::implicitly_convertible<OSG::UniformBufferObjStd140Chunk::ObjRecPtr, OSG::StateChunk::ObjCPtr>();
    }

}
