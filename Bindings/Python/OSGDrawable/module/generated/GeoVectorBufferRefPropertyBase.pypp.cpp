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
#include "OSGDrawable_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "GeoVectorBufferRefPropertyBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_GeoVectorBufferRefPropertyBase_class(){

    { //::OSG::GeoVectorBufferRefPropertyBase
        typedef bp::class_< OSG::GeoVectorBufferRefPropertyBase, bp::bases< OSG::GeoVectorBufferProperty >, boost::noncopyable > GeoVectorBufferRefPropertyBase_exposer_t;
        GeoVectorBufferRefPropertyBase_exposer_t GeoVectorBufferRefPropertyBase_exposer = GeoVectorBufferRefPropertyBase_exposer_t( "GeoVectorBufferRefPropertyBase", bp::no_init );
        bp::scope GeoVectorBufferRefPropertyBase_scope( GeoVectorBufferRefPropertyBase_exposer );
        { //::OSG::GeoVectorBufferRefPropertyBase::copyFromBin
        
            typedef void ( ::OSG::GeoVectorBufferRefPropertyBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            GeoVectorBufferRefPropertyBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::GeoVectorBufferRefPropertyBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::GeoVectorBufferRefPropertyBase::copyToBin
        
            typedef void ( ::OSG::GeoVectorBufferRefPropertyBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            GeoVectorBufferRefPropertyBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::GeoVectorBufferRefPropertyBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::GeoVectorBufferRefPropertyBase::create
        
            typedef ::OSG::GeoVectorBufferRefPropertyTransitPtr ( *create_function_type )(  );
            
            GeoVectorBufferRefPropertyBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::GeoVectorBufferRefPropertyBase::create ) );
        
        }
        { //::OSG::GeoVectorBufferRefPropertyBase::createDependent
        
            typedef ::OSG::GeoVectorBufferRefPropertyTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            GeoVectorBufferRefPropertyBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::GeoVectorBufferRefPropertyBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::GeoVectorBufferRefPropertyBase::createLocal
        
            typedef ::OSG::GeoVectorBufferRefPropertyTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            GeoVectorBufferRefPropertyBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::GeoVectorBufferRefPropertyBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::GeoVectorBufferRefPropertyBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::GeoVectorBufferRefPropertyBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            GeoVectorBufferRefPropertyBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::GeoVectorBufferRefPropertyBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::GeoVectorBufferRefPropertyBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            GeoVectorBufferRefPropertyBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::GeoVectorBufferRefPropertyBase::getClassGroupId ) );
        
        }
        { //::OSG::GeoVectorBufferRefPropertyBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            GeoVectorBufferRefPropertyBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::GeoVectorBufferRefPropertyBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::GeoVectorBufferRefPropertyBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            GeoVectorBufferRefPropertyBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::GeoVectorBufferRefPropertyBase::getClassTypeId ) );
        
        }
        { //::OSG::GeoVectorBufferRefPropertyBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::GeoVectorBufferRefPropertyBase::*getContainerSize_function_type )(  ) const;
            
            GeoVectorBufferRefPropertyBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::GeoVectorBufferRefPropertyBase::getContainerSize ) );
        
        }
        { //::OSG::GeoVectorBufferRefPropertyBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::GeoVectorBufferRefPropertyBase::*getType_function_type )(  ) ;
            
            GeoVectorBufferRefPropertyBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::GeoVectorBufferRefPropertyBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeoVectorBufferRefPropertyBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::GeoVectorBufferRefPropertyBase::*getType_function_type )(  ) const;
            
            GeoVectorBufferRefPropertyBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::GeoVectorBufferRefPropertyBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        GeoVectorBufferRefPropertyBase_exposer.staticmethod( "create" );
        GeoVectorBufferRefPropertyBase_exposer.staticmethod( "createDependent" );
        GeoVectorBufferRefPropertyBase_exposer.staticmethod( "createLocal" );
        GeoVectorBufferRefPropertyBase_exposer.staticmethod( "getClassGroupId" );
        GeoVectorBufferRefPropertyBase_exposer.staticmethod( "getClassType" );
        GeoVectorBufferRefPropertyBase_exposer.staticmethod( "getClassTypeId" );
    }

}
