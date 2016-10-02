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
#include "OSGSystem_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "ShaderExecutableChunk.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_ShaderExecutableChunk_class(){

    { //::OSG::ShaderExecutableChunk
        typedef bp::class_< OSG::ShaderExecutableChunk, bp::bases< OSG::ShaderExecutableChunkBase >, OSG::ShaderExecutableChunk::ObjRecPtr, boost::noncopyable > ShaderExecutableChunk_exposer_t;
        ShaderExecutableChunk_exposer_t ShaderExecutableChunk_exposer = ShaderExecutableChunk_exposer_t( "ShaderExecutableChunk", bp::no_init );
        bp::scope ShaderExecutableChunk_scope( ShaderExecutableChunk_exposer );
        { //::OSG::ShaderExecutableChunk::changed
        
            typedef void ( ::OSG::ShaderExecutableChunk::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            ShaderExecutableChunk_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::ShaderExecutableChunk::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::ShaderExecutableChunk::dump
        
            typedef void ( ::OSG::ShaderExecutableChunk::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            ShaderExecutableChunk_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::ShaderExecutableChunk::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::ShaderExecutableChunk::getChunkId
        
            typedef ::OSG::UInt16 ( ::OSG::ShaderExecutableChunk::*getChunkId_function_type )(  ) ;
            
            ShaderExecutableChunk_exposer.def( 
                "getChunkId"
                , getChunkId_function_type( &::OSG::ShaderExecutableChunk::getChunkId ) );
        
        }
        { //::OSG::ShaderExecutableChunk::getClass
        
            typedef ::OSG::StateChunkClass const * ( ::OSG::ShaderExecutableChunk::*getClass_function_type )(  ) const;
            
            ShaderExecutableChunk_exposer.def( 
                "getClass"
                , getClass_function_type( &::OSG::ShaderExecutableChunk::getClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderExecutableChunk::getStaticClass
        
            typedef ::OSG::StateChunkClass const * ( *getStaticClass_function_type )(  );
            
            ShaderExecutableChunk_exposer.def( 
                "getStaticClass"
                , getStaticClass_function_type( &::OSG::ShaderExecutableChunk::getStaticClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderExecutableChunk::getStaticClassId
        
            typedef ::OSG::UInt32 ( *getStaticClassId_function_type )(  );
            
            ShaderExecutableChunk_exposer.def( 
                "getStaticClassId"
                , getStaticClassId_function_type( &::OSG::ShaderExecutableChunk::getStaticClassId ) );
        
        }
        { //::OSG::ShaderExecutableChunk::merge
        
            typedef void ( ::OSG::ShaderExecutableChunk::*merge_function_type )( ::OSG::ShaderProgramChunk const * ) ;
            
            ShaderExecutableChunk_exposer.def( 
                "merge"
                , merge_function_type( &::OSG::ShaderExecutableChunk::merge )
                , ( bp::arg("pChunk") ) );
        
        }
        { //::OSG::ShaderExecutableChunk::updateObjectDependencies
        
            typedef void ( ::OSG::ShaderExecutableChunk::*updateObjectDependencies_function_type )( ::OSG::DrawEnv *,::OSG::UInt32 ) ;
            
            ShaderExecutableChunk_exposer.def( 
                "updateObjectDependencies"
                , updateObjectDependencies_function_type( &::OSG::ShaderExecutableChunk::updateObjectDependencies )
                , ( bp::arg("pEnv"), bp::arg("index")=(::OSG::UInt32)(0) ) );
        
        }
        ShaderExecutableChunk_exposer.staticmethod( "getStaticClass" );
        ShaderExecutableChunk_exposer.staticmethod( "getStaticClassId" );
        pyopensg::register_transit< OSG::ShaderExecutableChunk >::execute();
        bp::implicitly_convertible< OSG::ShaderExecutableChunk::ObjRecPtr, OSG::ShaderExecutableChunk* >();
        bp::implicitly_convertible< OSG::ShaderExecutableChunk::ObjRecPtr, OSG::ShaderExecutableChunk::ObjCPtr >();
        bp::implicitly_convertible< OSG::ShaderExecutableChunk::ObjRecPtr, OSG::StateChunk* >();
        bp::implicitly_convertible< OSG::ShaderExecutableChunk::ObjRecPtr, OSG::StateChunk::ObjRecPtr >();
        bp::implicitly_convertible<OSG::ShaderExecutableChunk::ObjRecPtr, OSG::StateChunk::ObjCPtr>();
    }

}
