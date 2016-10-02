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
#include "OSGState_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "TextureImageChunk.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_TextureImageChunk_class(){

    { //::OSG::TextureImageChunk
        typedef bp::class_< OSG::TextureImageChunk, bp::bases< OSG::TextureImageChunkBase >, OSG::TextureImageChunk::ObjRecPtr, boost::noncopyable > TextureImageChunk_exposer_t;
        TextureImageChunk_exposer_t TextureImageChunk_exposer = TextureImageChunk_exposer_t( "TextureImageChunk", bp::no_init );
        bp::scope TextureImageChunk_scope( TextureImageChunk_exposer );
        { //::OSG::TextureImageChunk::changed
        
            typedef void ( ::OSG::TextureImageChunk::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            TextureImageChunk_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::TextureImageChunk::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::TextureImageChunk::dump
        
            typedef void ( ::OSG::TextureImageChunk::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            TextureImageChunk_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::TextureImageChunk::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::TextureImageChunk::getClass
        
            typedef ::OSG::StateChunkClass const * ( ::OSG::TextureImageChunk::*getClass_function_type )(  ) const;
            
            TextureImageChunk_exposer.def( 
                "getClass"
                , getClass_function_type( &::OSG::TextureImageChunk::getClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TextureImageChunk::getStaticClass
        
            typedef ::OSG::StateChunkClass const * ( *getStaticClass_function_type )(  );
            
            TextureImageChunk_exposer.def( 
                "getStaticClass"
                , getStaticClass_function_type( &::OSG::TextureImageChunk::getStaticClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TextureImageChunk::getStaticClassId
        
            typedef ::OSG::UInt32 ( *getStaticClassId_function_type )(  );
            
            TextureImageChunk_exposer.def( 
                "getStaticClassId"
                , getStaticClassId_function_type( &::OSG::TextureImageChunk::getStaticClassId ) );
        
        }
        { //::OSG::TextureImageChunk::isTransparent
        
            typedef bool ( ::OSG::TextureImageChunk::*isTransparent_function_type )(  ) const;
            
            TextureImageChunk_exposer.def( 
                "isTransparent"
                , isTransparent_function_type( &::OSG::TextureImageChunk::isTransparent ) );
        
        }
        { //::OSG::TextureImageChunk::switchCost
        
            typedef ::OSG::Real32 ( ::OSG::TextureImageChunk::*switchCost_function_type )( ::OSG::StateChunk * ) ;
            
            TextureImageChunk_exposer.def( 
                "switchCost"
                , switchCost_function_type( &::OSG::TextureImageChunk::switchCost )
                , ( bp::arg("chunk") ) );
        
        }
        TextureImageChunk_exposer.staticmethod( "getStaticClass" );
        TextureImageChunk_exposer.staticmethod( "getStaticClassId" );
        pyopensg::register_transit< OSG::TextureImageChunk >::execute();
        bp::implicitly_convertible< OSG::TextureImageChunk::ObjRecPtr, OSG::TextureImageChunk* >();
        bp::implicitly_convertible< OSG::TextureImageChunk::ObjRecPtr, OSG::TextureImageChunk::ObjCPtr >();
        bp::implicitly_convertible< OSG::TextureImageChunk::ObjRecPtr, OSG::StateChunk* >();
        bp::implicitly_convertible< OSG::TextureImageChunk::ObjRecPtr, OSG::StateChunk::ObjRecPtr >();
        bp::implicitly_convertible<OSG::TextureImageChunk::ObjRecPtr, OSG::StateChunk::ObjCPtr>();
    }

}
