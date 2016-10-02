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
#include "OSGBase_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "MemoryObject.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct MemoryObject_wrapper : OSG::MemoryObject, bp::wrapper< OSG::MemoryObject > {

    void addRef(  ){
        OSG::MemoryObject::addRef(  );
    }

    void addReferenceUnrecorded(  ){
        OSG::MemoryObject::addReferenceUnrecorded(  );
    }

    ::OSG::Int32 getRefCount(  ){
        return OSG::MemoryObject::getRefCount(  );
    }

    void subRef(  ){
        OSG::MemoryObject::subRef(  );
    }

    void subReferenceUnrecorded(  ){
        OSG::MemoryObject::subReferenceUnrecorded(  );
    }

};

void register_MemoryObject_class(){

    { //::OSG::MemoryObject
        typedef bp::class_< MemoryObject_wrapper, boost::noncopyable > MemoryObject_exposer_t;
        MemoryObject_exposer_t MemoryObject_exposer = MemoryObject_exposer_t( "MemoryObject", bp::no_init );
        bp::scope MemoryObject_scope( MemoryObject_exposer );
        { //::OSG::MemoryObject::addRef
        
            typedef void ( MemoryObject_wrapper::*addRef_function_type )(  ) ;
            
            MemoryObject_exposer.def( 
                "addRef"
                , addRef_function_type( &MemoryObject_wrapper::addRef ) );
        
        }
        { //::OSG::MemoryObject::addReferenceUnrecorded
        
            typedef void ( MemoryObject_wrapper::*addReferenceUnrecorded_function_type )(  ) ;
            
            MemoryObject_exposer.def( 
                "addReferenceUnrecorded"
                , addReferenceUnrecorded_function_type( &MemoryObject_wrapper::addReferenceUnrecorded ) );
        
        }
        { //::OSG::MemoryObject::getRefCount
        
            typedef ::OSG::Int32 ( MemoryObject_wrapper::*getRefCount_function_type )(  ) ;
            
            MemoryObject_exposer.def( 
                "getRefCount"
                , getRefCount_function_type( &MemoryObject_wrapper::getRefCount ) );
        
        }
        { //::OSG::MemoryObject::subRef
        
            typedef void ( MemoryObject_wrapper::*subRef_function_type )(  ) ;
            
            MemoryObject_exposer.def( 
                "subRef"
                , subRef_function_type( &MemoryObject_wrapper::subRef ) );
        
        }
        { //::OSG::MemoryObject::subReferenceUnrecorded
        
            typedef void ( MemoryObject_wrapper::*subReferenceUnrecorded_function_type )(  ) ;
            
            MemoryObject_exposer.def( 
                "subReferenceUnrecorded"
                , subReferenceUnrecorded_function_type( &MemoryObject_wrapper::subReferenceUnrecorded ) );
        
        }
    }

}
