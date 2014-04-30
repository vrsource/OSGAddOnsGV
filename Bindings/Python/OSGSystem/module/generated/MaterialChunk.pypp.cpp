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
#include "OSGSystem_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "MaterialChunk.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_MaterialChunk_class(){

    { //::OSG::MaterialChunk
        typedef bp::class_< OSG::MaterialChunk, bp::bases< OSG::MaterialChunkBase >, OSG::MaterialChunk::ObjRecPtr, boost::noncopyable > MaterialChunk_exposer_t;
        MaterialChunk_exposer_t MaterialChunk_exposer = MaterialChunk_exposer_t( "MaterialChunk", bp::no_init );
        bp::scope MaterialChunk_scope( MaterialChunk_exposer );
        { //::OSG::MaterialChunk::changed
        
            typedef void ( ::OSG::MaterialChunk::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            MaterialChunk_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::MaterialChunk::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::MaterialChunk::dump
        
            typedef void ( ::OSG::MaterialChunk::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            MaterialChunk_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::MaterialChunk::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::MaterialChunk::getChunkId
        
            typedef ::OSG::UInt16 ( ::OSG::MaterialChunk::*getChunkId_function_type )(  ) ;
            
            MaterialChunk_exposer.def( 
                "getChunkId"
                , getChunkId_function_type( &::OSG::MaterialChunk::getChunkId ) );
        
        }
        { //::OSG::MaterialChunk::getClass
        
            typedef ::OSG::StateChunkClass const * ( ::OSG::MaterialChunk::*getClass_function_type )(  ) const;
            
            MaterialChunk_exposer.def( 
                "getClass"
                , getClass_function_type( &::OSG::MaterialChunk::getClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::MaterialChunk::getStaticClass
        
            typedef ::OSG::StateChunkClass const * ( *getStaticClass_function_type )(  );
            
            MaterialChunk_exposer.def( 
                "getStaticClass"
                , getStaticClass_function_type( &::OSG::MaterialChunk::getStaticClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::MaterialChunk::getStaticClassId
        
            typedef ::OSG::UInt32 ( *getStaticClassId_function_type )(  );
            
            MaterialChunk_exposer.def( 
                "getStaticClassId"
                , getStaticClassId_function_type( &::OSG::MaterialChunk::getStaticClassId ) );
        
        }
        { //::OSG::MaterialChunk::isTransparent
        
            typedef bool ( ::OSG::MaterialChunk::*isTransparent_function_type )(  ) const;
            
            MaterialChunk_exposer.def( 
                "isTransparent"
                , isTransparent_function_type( &::OSG::MaterialChunk::isTransparent ) );
        
        }
        { //::OSG::MaterialChunk::switchCost
        
            typedef ::OSG::Real32 ( ::OSG::MaterialChunk::*switchCost_function_type )( ::OSG::StateChunk * ) ;
            
            MaterialChunk_exposer.def( 
                "switchCost"
                , switchCost_function_type( &::OSG::MaterialChunk::switchCost )
                , ( bp::arg("chunk") ) );
        
        }
        MaterialChunk_exposer.staticmethod( "getStaticClass" );
        MaterialChunk_exposer.staticmethod( "getStaticClassId" );
        pyopensg::register_transit< OSG::MaterialChunk >::execute();
        bp::implicitly_convertible< OSG::MaterialChunk::ObjRecPtr, OSG::MaterialChunk* >();
        bp::implicitly_convertible< OSG::MaterialChunk::ObjRecPtr, OSG::MaterialChunk::ObjCPtr >();
        bp::implicitly_convertible< OSG::MaterialChunk::ObjRecPtr, OSG::StateChunk* >();
        bp::implicitly_convertible< OSG::MaterialChunk::ObjRecPtr, OSG::StateChunk::ObjRecPtr >();
        bp::implicitly_convertible<OSG::MaterialChunk::ObjRecPtr, OSG::StateChunk::ObjCPtr>();
    }

}
