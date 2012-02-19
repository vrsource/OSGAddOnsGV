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
#endif
#if WIN32
#pragma warning(disable : 4267)
#pragma warning(disable : 4344)
#endif

#include "boost/python.hpp"
#include "OSGDrawable_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "GeoMultiPropertyData.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_GeoMultiPropertyData_class(){

    { //::OSG::GeoMultiPropertyData
        typedef bp::class_< OSG::GeoMultiPropertyData, bp::bases< OSG::GeoMultiPropertyDataBase >, OSG::GeoMultiPropertyData::ObjRecPtr, boost::noncopyable > GeoMultiPropertyData_exposer_t;
        GeoMultiPropertyData_exposer_t GeoMultiPropertyData_exposer = GeoMultiPropertyData_exposer_t( "GeoMultiPropertyData", bp::no_init );
        bp::scope GeoMultiPropertyData_scope( GeoMultiPropertyData_exposer );
        { //::OSG::GeoMultiPropertyData::changed
        
            typedef void ( ::OSG::GeoMultiPropertyData::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            GeoMultiPropertyData_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::GeoMultiPropertyData::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("detail") ) );
        
        }
        { //::OSG::GeoMultiPropertyData::dump
        
            typedef void ( ::OSG::GeoMultiPropertyData::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            GeoMultiPropertyData_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::GeoMultiPropertyData::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::GeoMultiPropertyData::getClass
        
            typedef ::OSG::StateChunkClass const * ( ::OSG::GeoMultiPropertyData::*getClass_function_type )(  ) const;
            
            GeoMultiPropertyData_exposer.def( 
                "getClass"
                , getClass_function_type( &::OSG::GeoMultiPropertyData::getClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeoMultiPropertyData::getStaticClass
        
            typedef ::OSG::StateChunkClass const * ( *getStaticClass_function_type )(  );
            
            GeoMultiPropertyData_exposer.def( 
                "getStaticClass"
                , getStaticClass_function_type( &::OSG::GeoMultiPropertyData::getStaticClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeoMultiPropertyData::getStaticClassId
        
            typedef ::OSG::UInt32 ( *getStaticClassId_function_type )(  );
            
            GeoMultiPropertyData_exposer.def( 
                "getStaticClassId"
                , getStaticClassId_function_type( &::OSG::GeoMultiPropertyData::getStaticClassId ) );
        
        }
        { //::OSG::GeoMultiPropertyData::isTransparent
        
            typedef bool ( ::OSG::GeoMultiPropertyData::*isTransparent_function_type )(  ) const;
            
            GeoMultiPropertyData_exposer.def( 
                "isTransparent"
                , isTransparent_function_type( &::OSG::GeoMultiPropertyData::isTransparent ) );
        
        }
        { //::OSG::GeoMultiPropertyData::resize
        
            typedef void ( ::OSG::GeoMultiPropertyData::*resize_function_type )( ::OSG::SizeT ) ;
            
            GeoMultiPropertyData_exposer.def( 
                "resize"
                , resize_function_type( &::OSG::GeoMultiPropertyData::resize )
                , ( bp::arg("size") ) );
        
        }
        { //::OSG::GeoMultiPropertyData::size
        
            typedef ::OSG::SizeT ( ::OSG::GeoMultiPropertyData::*size_function_type )(  ) const;
            
            GeoMultiPropertyData_exposer.def( 
                "size"
                , size_function_type( &::OSG::GeoMultiPropertyData::size ) );
        
        }
        { //::OSG::GeoMultiPropertyData::size32
        
            typedef ::OSG::UInt32 ( ::OSG::GeoMultiPropertyData::*size32_function_type )(  ) const;
            
            GeoMultiPropertyData_exposer.def( 
                "size32"
                , size32_function_type( &::OSG::GeoMultiPropertyData::size32 ) );
        
        }
        { //::OSG::GeoMultiPropertyData::switchCost
        
            typedef ::OSG::Real32 ( ::OSG::GeoMultiPropertyData::*switchCost_function_type )( ::OSG::StateChunk * ) ;
            
            GeoMultiPropertyData_exposer.def( 
                "switchCost"
                , switchCost_function_type( &::OSG::GeoMultiPropertyData::switchCost )
                , ( bp::arg("chunk") ) );
        
        }
        GeoMultiPropertyData_exposer.staticmethod( "getStaticClass" );
        GeoMultiPropertyData_exposer.staticmethod( "getStaticClassId" );
        pyopensg::register_transit< OSG::GeoMultiPropertyData >::execute();
        bp::implicitly_convertible< OSG::GeoMultiPropertyData::ObjRecPtr, OSG::GeoMultiPropertyData* >();
        bp::implicitly_convertible< OSG::GeoMultiPropertyData::ObjRecPtr, OSG::GeoMultiPropertyData::ObjCPtr >();
        bp::implicitly_convertible< OSG::GeoMultiPropertyData::ObjRecPtr, OSG::StateChunk* >();
        bp::implicitly_convertible< OSG::GeoMultiPropertyData::ObjRecPtr, OSG::StateChunk::ObjRecPtr >();
        bp::implicitly_convertible<OSG::GeoMultiPropertyData::ObjRecPtr, OSG::StateChunk::ObjCPtr>();
    }

}
