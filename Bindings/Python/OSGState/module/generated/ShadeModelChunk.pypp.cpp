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
#include "ShadeModelChunk.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_ShadeModelChunk_class(){

    { //::OSG::ShadeModelChunk
        typedef bp::class_< OSG::ShadeModelChunk, bp::bases< OSG::ShadeModelChunkBase >, OSG::ShadeModelChunk::ObjRecPtr, boost::noncopyable > ShadeModelChunk_exposer_t;
        ShadeModelChunk_exposer_t ShadeModelChunk_exposer = ShadeModelChunk_exposer_t( "ShadeModelChunk", bp::no_init );
        bp::scope ShadeModelChunk_scope( ShadeModelChunk_exposer );
        { //::OSG::ShadeModelChunk::changed
        
            typedef void ( ::OSG::ShadeModelChunk::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            ShadeModelChunk_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::ShadeModelChunk::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::ShadeModelChunk::dump
        
            typedef void ( ::OSG::ShadeModelChunk::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            ShadeModelChunk_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::ShadeModelChunk::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::ShadeModelChunk::getClass
        
            typedef ::OSG::StateChunkClass const * ( ::OSG::ShadeModelChunk::*getClass_function_type )(  ) const;
            
            ShadeModelChunk_exposer.def( 
                "getClass"
                , getClass_function_type( &::OSG::ShadeModelChunk::getClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShadeModelChunk::getStaticClass
        
            typedef ::OSG::StateChunkClass const * ( *getStaticClass_function_type )(  );
            
            ShadeModelChunk_exposer.def( 
                "getStaticClass"
                , getStaticClass_function_type( &::OSG::ShadeModelChunk::getStaticClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShadeModelChunk::getStaticClassId
        
            typedef ::OSG::UInt32 ( *getStaticClassId_function_type )(  );
            
            ShadeModelChunk_exposer.def( 
                "getStaticClassId"
                , getStaticClassId_function_type( &::OSG::ShadeModelChunk::getStaticClassId ) );
        
        }
        { //::OSG::ShadeModelChunk::switchCost
        
            typedef ::OSG::Real32 ( ::OSG::ShadeModelChunk::*switchCost_function_type )( ::OSG::StateChunk * ) ;
            
            ShadeModelChunk_exposer.def( 
                "switchCost"
                , switchCost_function_type( &::OSG::ShadeModelChunk::switchCost )
                , ( bp::arg("chunk") ) );
        
        }
        ShadeModelChunk_exposer.staticmethod( "getStaticClass" );
        ShadeModelChunk_exposer.staticmethod( "getStaticClassId" );
        pyopensg::register_transit< OSG::ShadeModelChunk >::execute();
        bp::implicitly_convertible< OSG::ShadeModelChunk::ObjRecPtr, OSG::ShadeModelChunk* >();
        bp::implicitly_convertible< OSG::ShadeModelChunk::ObjRecPtr, OSG::ShadeModelChunk::ObjCPtr >();
        bp::implicitly_convertible< OSG::ShadeModelChunk::ObjRecPtr, OSG::StateChunk* >();
        bp::implicitly_convertible< OSG::ShadeModelChunk::ObjRecPtr, OSG::StateChunk::ObjRecPtr >();
        bp::implicitly_convertible<OSG::ShadeModelChunk::ObjRecPtr, OSG::StateChunk::ObjCPtr>();
    }

}
