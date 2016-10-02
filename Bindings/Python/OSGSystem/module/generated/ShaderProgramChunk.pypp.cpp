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
#include "ShaderProgramChunk.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_ShaderProgramChunk_class(){

    { //::OSG::ShaderProgramChunk
        typedef bp::class_< OSG::ShaderProgramChunk, bp::bases< OSG::ShaderProgramChunkBase >, OSG::ShaderProgramChunk::ObjRecPtr, boost::noncopyable > ShaderProgramChunk_exposer_t;
        ShaderProgramChunk_exposer_t ShaderProgramChunk_exposer = ShaderProgramChunk_exposer_t( "ShaderProgramChunk", bp::no_init );
        bp::scope ShaderProgramChunk_scope( ShaderProgramChunk_exposer );
        { //::OSG::ShaderProgramChunk::addShader
        
            typedef void ( ::OSG::ShaderProgramChunk::*addShader_function_type )( ::OSG::ShaderProgram * const ) ;
            
            ShaderProgramChunk_exposer.def( 
                "addShader"
                , addShader_function_type( &::OSG::ShaderProgramChunk::addShader )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ShaderProgramChunk::changed
        
            typedef void ( ::OSG::ShaderProgramChunk::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            ShaderProgramChunk_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::ShaderProgramChunk::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::ShaderProgramChunk::dump
        
            typedef void ( ::OSG::ShaderProgramChunk::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            ShaderProgramChunk_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::ShaderProgramChunk::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::ShaderProgramChunk::getChunkId
        
            typedef ::OSG::UInt16 ( ::OSG::ShaderProgramChunk::*getChunkId_function_type )(  ) ;
            
            ShaderProgramChunk_exposer.def( 
                "getChunkId"
                , getChunkId_function_type( &::OSG::ShaderProgramChunk::getChunkId ) );
        
        }
        { //::OSG::ShaderProgramChunk::getClass
        
            typedef ::OSG::StateChunkClass const * ( ::OSG::ShaderProgramChunk::*getClass_function_type )(  ) const;
            
            ShaderProgramChunk_exposer.def( 
                "getClass"
                , getClass_function_type( &::OSG::ShaderProgramChunk::getClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderProgramChunk::getStaticClass
        
            typedef ::OSG::StateChunkClass const * ( *getStaticClass_function_type )(  );
            
            ShaderProgramChunk_exposer.def( 
                "getStaticClass"
                , getStaticClass_function_type( &::OSG::ShaderProgramChunk::getStaticClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderProgramChunk::getStaticClassId
        
            typedef ::OSG::UInt32 ( *getStaticClassId_function_type )(  );
            
            ShaderProgramChunk_exposer.def( 
                "getStaticClassId"
                , getStaticClassId_function_type( &::OSG::ShaderProgramChunk::getStaticClassId ) );
        
        }
        ShaderProgramChunk_exposer.staticmethod( "getStaticClass" );
        ShaderProgramChunk_exposer.staticmethod( "getStaticClassId" );
        pyopensg::register_transit< OSG::ShaderProgramChunk >::execute();
        bp::implicitly_convertible< OSG::ShaderProgramChunk::ObjRecPtr, OSG::ShaderProgramChunk* >();
        bp::implicitly_convertible< OSG::ShaderProgramChunk::ObjRecPtr, OSG::ShaderProgramChunk::ObjCPtr >();
        bp::implicitly_convertible< OSG::ShaderProgramChunk::ObjRecPtr, OSG::StateChunk* >();
        bp::implicitly_convertible< OSG::ShaderProgramChunk::ObjRecPtr, OSG::StateChunk::ObjRecPtr >();
        bp::implicitly_convertible<OSG::ShaderProgramChunk::ObjRecPtr, OSG::StateChunk::ObjCPtr>();
    }

}
