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
#include "TextureSelectChunkBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct TextureSelectChunkBase_wrapper : OSG::TextureSelectChunkBase, bp::wrapper< OSG::TextureSelectChunkBase > {

    virtual ::GLenum determineInternalFormat(  ){
        bp::override func_determineInternalFormat = this->get_override( "determineInternalFormat" );
        return func_determineInternalFormat(  );
    }

    virtual ::OSG::Int32 getOpenGLId( ::OSG::DrawEnv * pEnv ){
        bp::override func_getOpenGLId = this->get_override( "getOpenGLId" );
        return func_getOpenGLId( boost::python::ptr(pEnv) );
    }

    virtual void validate( ::OSG::DrawEnv * pEnv ){
        bp::override func_validate = this->get_override( "validate" );
        func_validate( boost::python::ptr(pEnv) );
    }

};

boost::python::list TextureSelectChunkBase_getMFTextures(OSG::TextureSelectChunkBase *self)
{
   boost::python::list result;
   OSG::MFUnrecTextureBaseChunkPtr const * mf_data = self->getMFTextures();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append(OSG::TextureBaseChunk::ObjRecPtr((*mf_data)[i]));
   }
   return result;
}

void register_TextureSelectChunkBase_class(){

    { //::OSG::TextureSelectChunkBase
        typedef bp::class_< TextureSelectChunkBase_wrapper, bp::bases< ::OSG::TextureBaseChunk >, boost::noncopyable > TextureSelectChunkBase_exposer_t;
        TextureSelectChunkBase_exposer_t TextureSelectChunkBase_exposer = TextureSelectChunkBase_exposer_t( "TextureSelectChunkBase", bp::no_init );
        bp::scope TextureSelectChunkBase_scope( TextureSelectChunkBase_exposer );
        bp::scope().attr("ChoiceFieldId") = (int)OSG::TextureSelectChunkBase::ChoiceFieldId;
        bp::scope().attr("TexturesFieldId") = (int)OSG::TextureSelectChunkBase::TexturesFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::TextureSelectChunkBase::NextFieldId;
        { //::OSG::TextureSelectChunkBase::assignTextures
        
            typedef void ( ::OSG::TextureSelectChunkBase::*assignTextures_function_type )( ::OSG::MFUnrecTextureBaseChunkPtr const & ) ;
            
            TextureSelectChunkBase_exposer.def( 
                "assignTextures"
                , assignTextures_function_type( &::OSG::TextureSelectChunkBase::assignTextures )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::TextureSelectChunkBase::clearTextures
        
            typedef void ( ::OSG::TextureSelectChunkBase::*clearTextures_function_type )(  ) ;
            
            TextureSelectChunkBase_exposer.def( 
                "clearTextures"
                , clearTextures_function_type( &::OSG::TextureSelectChunkBase::clearTextures ) );
        
        }
        { //::OSG::TextureSelectChunkBase::copyFromBin
        
            typedef void ( ::OSG::TextureSelectChunkBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            TextureSelectChunkBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::TextureSelectChunkBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::TextureSelectChunkBase::copyToBin
        
            typedef void ( ::OSG::TextureSelectChunkBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            TextureSelectChunkBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::TextureSelectChunkBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::TextureSelectChunkBase::create
        
            typedef ::OSG::TextureSelectChunkTransitPtr ( *create_function_type )(  );
            
            TextureSelectChunkBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::TextureSelectChunkBase::create ) );
        
        }
        { //::OSG::TextureSelectChunkBase::createDependent
        
            typedef ::OSG::TextureSelectChunkTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            TextureSelectChunkBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::TextureSelectChunkBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::TextureSelectChunkBase::createLocal
        
            typedef ::OSG::TextureSelectChunkTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            TextureSelectChunkBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::TextureSelectChunkBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::TextureSelectChunkBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::TextureSelectChunkBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            TextureSelectChunkBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::TextureSelectChunkBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::TextureSelectChunkBase::getChoice
        
            typedef ::OSG::UInt32 ( ::OSG::TextureSelectChunkBase::*getChoice_function_type )(  ) const;
            
            TextureSelectChunkBase_exposer.def( 
                "getChoice"
                , getChoice_function_type( &::OSG::TextureSelectChunkBase::getChoice ) );
        
        }
        { //::OSG::TextureSelectChunkBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            TextureSelectChunkBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::TextureSelectChunkBase::getClassGroupId ) );
        
        }
        { //::OSG::TextureSelectChunkBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            TextureSelectChunkBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::TextureSelectChunkBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::TextureSelectChunkBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            TextureSelectChunkBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::TextureSelectChunkBase::getClassTypeId ) );
        
        }
        { //::OSG::TextureSelectChunkBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::TextureSelectChunkBase::*getContainerSize_function_type )(  ) const;
            
            TextureSelectChunkBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::TextureSelectChunkBase::getContainerSize ) );
        
        }
        { //::OSG::TextureSelectChunkBase::getSFChoice
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::TextureSelectChunkBase::*getSFChoice_function_type )(  ) const;
            
            TextureSelectChunkBase_exposer.def( 
                "getSFChoice"
                , getSFChoice_function_type( &::OSG::TextureSelectChunkBase::getSFChoice )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TextureSelectChunkBase::getTextures
        
            typedef ::OSG::TextureBaseChunk * ( ::OSG::TextureSelectChunkBase::*getTextures_function_type )( ::OSG::UInt32 const ) const;
            
            TextureSelectChunkBase_exposer.def( 
                "getTextures"
                , getTextures_function_type( &::OSG::TextureSelectChunkBase::getTextures )
                , ( bp::arg("index") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TextureSelectChunkBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::TextureSelectChunkBase::*getType_function_type )(  ) ;
            
            TextureSelectChunkBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::TextureSelectChunkBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TextureSelectChunkBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::TextureSelectChunkBase::*getType_function_type )(  ) const;
            
            TextureSelectChunkBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::TextureSelectChunkBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TextureSelectChunkBase::pushToTextures
        
            typedef void ( ::OSG::TextureSelectChunkBase::*pushToTextures_function_type )( ::OSG::TextureBaseChunk * const ) ;
            
            TextureSelectChunkBase_exposer.def( 
                "pushToTextures"
                , pushToTextures_function_type( &::OSG::TextureSelectChunkBase::pushToTextures )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::TextureSelectChunkBase::removeFromTextures
        
            typedef void ( ::OSG::TextureSelectChunkBase::*removeFromTextures_function_type )( ::OSG::UInt32 ) ;
            
            TextureSelectChunkBase_exposer.def( 
                "removeFromTextures"
                , removeFromTextures_function_type( &::OSG::TextureSelectChunkBase::removeFromTextures )
                , ( bp::arg("uiIndex") ) );
        
        }
        { //::OSG::TextureSelectChunkBase::removeObjFromTextures
        
            typedef void ( ::OSG::TextureSelectChunkBase::*removeObjFromTextures_function_type )( ::OSG::TextureBaseChunk * const ) ;
            
            TextureSelectChunkBase_exposer.def( 
                "removeObjFromTextures"
                , removeObjFromTextures_function_type( &::OSG::TextureSelectChunkBase::removeObjFromTextures )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::TextureSelectChunkBase::setChoice
        
            typedef void ( ::OSG::TextureSelectChunkBase::*setChoice_function_type )( ::OSG::UInt32 const ) ;
            
            TextureSelectChunkBase_exposer.def( 
                "setChoice"
                , setChoice_function_type( &::OSG::TextureSelectChunkBase::setChoice )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::TextureBaseChunk::determineInternalFormat
        
            typedef ::GLenum ( ::OSG::TextureBaseChunk::*determineInternalFormat_function_type )(  ) ;
            
            TextureSelectChunkBase_exposer.def( 
                "determineInternalFormat"
                , bp::pure_virtual( determineInternalFormat_function_type(&::OSG::TextureBaseChunk::determineInternalFormat) ) );
        
        }
        { //::OSG::TextureBaseChunk::getOpenGLId
        
            typedef ::OSG::Int32 ( ::OSG::TextureBaseChunk::*getOpenGLId_function_type )( ::OSG::DrawEnv * ) ;
            
            TextureSelectChunkBase_exposer.def( 
                "getOpenGLId"
                , bp::pure_virtual( getOpenGLId_function_type(&::OSG::TextureBaseChunk::getOpenGLId) )
                , ( bp::arg("pEnv") ) );
        
        }
        { //::OSG::TextureBaseChunk::validate
        
            typedef void ( ::OSG::TextureBaseChunk::*validate_function_type )( ::OSG::DrawEnv * ) ;
            
            TextureSelectChunkBase_exposer.def( 
                "validate"
                , bp::pure_virtual( validate_function_type(&::OSG::TextureBaseChunk::validate) )
                , ( bp::arg("pEnv") ) );
        
        }
        TextureSelectChunkBase_exposer.staticmethod( "create" );
        TextureSelectChunkBase_exposer.staticmethod( "createDependent" );
        TextureSelectChunkBase_exposer.staticmethod( "createLocal" );
        TextureSelectChunkBase_exposer.staticmethod( "getClassGroupId" );
        TextureSelectChunkBase_exposer.staticmethod( "getClassType" );
        TextureSelectChunkBase_exposer.staticmethod( "getClassTypeId" );
        TextureSelectChunkBase_exposer.def("getMFTextures",TextureSelectChunkBase_getMFTextures);
    }

}
