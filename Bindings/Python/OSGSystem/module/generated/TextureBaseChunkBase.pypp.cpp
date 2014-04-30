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
#include "TextureBaseChunkBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_TextureBaseChunkBase_class(){

    { //::OSG::TextureBaseChunkBase
        typedef bp::class_< OSG::TextureBaseChunkBase, bp::bases< OSG::StateChunk >, boost::noncopyable > TextureBaseChunkBase_exposer_t;
        TextureBaseChunkBase_exposer_t TextureBaseChunkBase_exposer = TextureBaseChunkBase_exposer_t( "TextureBaseChunkBase", bp::no_init );
        bp::scope TextureBaseChunkBase_scope( TextureBaseChunkBase_exposer );
        bp::scope().attr("TargetFieldId") = (int)OSG::TextureBaseChunkBase::TargetFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::TextureBaseChunkBase::NextFieldId;
        { //::OSG::TextureBaseChunkBase::copyFromBin
        
            typedef void ( ::OSG::TextureBaseChunkBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            TextureBaseChunkBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::TextureBaseChunkBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::TextureBaseChunkBase::copyToBin
        
            typedef void ( ::OSG::TextureBaseChunkBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            TextureBaseChunkBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::TextureBaseChunkBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::TextureBaseChunkBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::TextureBaseChunkBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            TextureBaseChunkBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::TextureBaseChunkBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::TextureBaseChunkBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            TextureBaseChunkBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::TextureBaseChunkBase::getClassGroupId ) );
        
        }
        { //::OSG::TextureBaseChunkBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            TextureBaseChunkBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::TextureBaseChunkBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::TextureBaseChunkBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            TextureBaseChunkBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::TextureBaseChunkBase::getClassTypeId ) );
        
        }
        { //::OSG::TextureBaseChunkBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::TextureBaseChunkBase::*getContainerSize_function_type )(  ) const;
            
            TextureBaseChunkBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::TextureBaseChunkBase::getContainerSize ) );
        
        }
        { //::OSG::TextureBaseChunkBase::getSFTarget
        
            typedef ::OSG::SFGLenum const * ( ::OSG::TextureBaseChunkBase::*getSFTarget_function_type )(  ) const;
            
            TextureBaseChunkBase_exposer.def( 
                "getSFTarget"
                , getSFTarget_function_type( &::OSG::TextureBaseChunkBase::getSFTarget )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TextureBaseChunkBase::getTarget
        
            typedef ::GLenum const & ( ::OSG::TextureBaseChunkBase::*getTarget_function_type )(  ) const;
            
            TextureBaseChunkBase_exposer.def( 
                "getTarget"
                , getTarget_function_type( &::OSG::TextureBaseChunkBase::getTarget )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::TextureBaseChunkBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::TextureBaseChunkBase::*getType_function_type )(  ) ;
            
            TextureBaseChunkBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::TextureBaseChunkBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TextureBaseChunkBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::TextureBaseChunkBase::*getType_function_type )(  ) const;
            
            TextureBaseChunkBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::TextureBaseChunkBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TextureBaseChunkBase::setTarget
        
            typedef void ( ::OSG::TextureBaseChunkBase::*setTarget_function_type )( ::GLenum const & ) ;
            
            TextureBaseChunkBase_exposer.def( 
                "setTarget"
                , setTarget_function_type( &::OSG::TextureBaseChunkBase::setTarget )
                , ( bp::arg("value") ) );
        
        }
        TextureBaseChunkBase_exposer.staticmethod( "getClassGroupId" );
        TextureBaseChunkBase_exposer.staticmethod( "getClassType" );
        TextureBaseChunkBase_exposer.staticmethod( "getClassTypeId" );
    }

}
