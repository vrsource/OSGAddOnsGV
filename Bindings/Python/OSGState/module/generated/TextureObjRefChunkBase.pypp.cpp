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
#include "OSGState_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "TextureObjRefChunkBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct TextureObjRefChunkBase_wrapper : OSG::TextureObjRefChunkBase, bp::wrapper< OSG::TextureObjRefChunkBase > {

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

void register_TextureObjRefChunkBase_class(){

    { //::OSG::TextureObjRefChunkBase
        typedef bp::class_< TextureObjRefChunkBase_wrapper, bp::bases< ::OSG::TextureBaseChunk >, boost::noncopyable > TextureObjRefChunkBase_exposer_t;
        TextureObjRefChunkBase_exposer_t TextureObjRefChunkBase_exposer = TextureObjRefChunkBase_exposer_t( "TextureObjRefChunkBase", bp::no_init );
        bp::scope TextureObjRefChunkBase_scope( TextureObjRefChunkBase_exposer );
        bp::scope().attr("OsgGLIdFieldId") = (int)OSG::TextureObjRefChunkBase::OsgGLIdFieldId;
        bp::scope().attr("OglGLIdFieldId") = (int)OSG::TextureObjRefChunkBase::OglGLIdFieldId;
        bp::scope().attr("InternalFormatFieldId") = (int)OSG::TextureObjRefChunkBase::InternalFormatFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::TextureObjRefChunkBase::NextFieldId;
        { //::OSG::TextureObjRefChunkBase::copyFromBin
        
            typedef void ( ::OSG::TextureObjRefChunkBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            TextureObjRefChunkBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::TextureObjRefChunkBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::TextureObjRefChunkBase::copyToBin
        
            typedef void ( ::OSG::TextureObjRefChunkBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            TextureObjRefChunkBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::TextureObjRefChunkBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::TextureObjRefChunkBase::create
        
            typedef ::OSG::TextureObjRefChunkTransitPtr ( *create_function_type )(  );
            
            TextureObjRefChunkBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::TextureObjRefChunkBase::create ) );
        
        }
        { //::OSG::TextureObjRefChunkBase::createDependent
        
            typedef ::OSG::TextureObjRefChunkTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            TextureObjRefChunkBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::TextureObjRefChunkBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::TextureObjRefChunkBase::createLocal
        
            typedef ::OSG::TextureObjRefChunkTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            TextureObjRefChunkBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::TextureObjRefChunkBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::TextureObjRefChunkBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::TextureObjRefChunkBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            TextureObjRefChunkBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::TextureObjRefChunkBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::TextureObjRefChunkBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            TextureObjRefChunkBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::TextureObjRefChunkBase::getClassGroupId ) );
        
        }
        { //::OSG::TextureObjRefChunkBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            TextureObjRefChunkBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::TextureObjRefChunkBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::TextureObjRefChunkBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            TextureObjRefChunkBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::TextureObjRefChunkBase::getClassTypeId ) );
        
        }
        { //::OSG::TextureObjRefChunkBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::TextureObjRefChunkBase::*getContainerSize_function_type )(  ) const;
            
            TextureObjRefChunkBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::TextureObjRefChunkBase::getContainerSize ) );
        
        }
        { //::OSG::TextureObjRefChunkBase::getInternalFormat
        
            typedef ::GLenum const & ( ::OSG::TextureObjRefChunkBase::*getInternalFormat_function_type )(  ) const;
            
            TextureObjRefChunkBase_exposer.def( 
                "getInternalFormat"
                , getInternalFormat_function_type( &::OSG::TextureObjRefChunkBase::getInternalFormat )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::TextureObjRefChunkBase::getOglGLId
        
            typedef ::GLenum const & ( ::OSG::TextureObjRefChunkBase::*getOglGLId_function_type )(  ) const;
            
            TextureObjRefChunkBase_exposer.def( 
                "getOglGLId"
                , getOglGLId_function_type( &::OSG::TextureObjRefChunkBase::getOglGLId )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::TextureObjRefChunkBase::getOsgGLId
        
            typedef ::GLenum const & ( ::OSG::TextureObjRefChunkBase::*getOsgGLId_function_type )(  ) const;
            
            TextureObjRefChunkBase_exposer.def( 
                "getOsgGLId"
                , getOsgGLId_function_type( &::OSG::TextureObjRefChunkBase::getOsgGLId )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::TextureObjRefChunkBase::getSFInternalFormat
        
            typedef ::OSG::SFGLenum const * ( ::OSG::TextureObjRefChunkBase::*getSFInternalFormat_function_type )(  ) const;
            
            TextureObjRefChunkBase_exposer.def( 
                "getSFInternalFormat"
                , getSFInternalFormat_function_type( &::OSG::TextureObjRefChunkBase::getSFInternalFormat )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TextureObjRefChunkBase::getSFOglGLId
        
            typedef ::OSG::SFGLenum const * ( ::OSG::TextureObjRefChunkBase::*getSFOglGLId_function_type )(  ) const;
            
            TextureObjRefChunkBase_exposer.def( 
                "getSFOglGLId"
                , getSFOglGLId_function_type( &::OSG::TextureObjRefChunkBase::getSFOglGLId )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TextureObjRefChunkBase::getSFOsgGLId
        
            typedef ::OSG::SFGLenum const * ( ::OSG::TextureObjRefChunkBase::*getSFOsgGLId_function_type )(  ) const;
            
            TextureObjRefChunkBase_exposer.def( 
                "getSFOsgGLId"
                , getSFOsgGLId_function_type( &::OSG::TextureObjRefChunkBase::getSFOsgGLId )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TextureObjRefChunkBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::TextureObjRefChunkBase::*getType_function_type )(  ) ;
            
            TextureObjRefChunkBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::TextureObjRefChunkBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TextureObjRefChunkBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::TextureObjRefChunkBase::*getType_function_type )(  ) const;
            
            TextureObjRefChunkBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::TextureObjRefChunkBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TextureObjRefChunkBase::setInternalFormat
        
            typedef void ( ::OSG::TextureObjRefChunkBase::*setInternalFormat_function_type )( ::GLenum const & ) ;
            
            TextureObjRefChunkBase_exposer.def( 
                "setInternalFormat"
                , setInternalFormat_function_type( &::OSG::TextureObjRefChunkBase::setInternalFormat )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::TextureObjRefChunkBase::setOglGLId
        
            typedef void ( ::OSG::TextureObjRefChunkBase::*setOglGLId_function_type )( ::GLenum const & ) ;
            
            TextureObjRefChunkBase_exposer.def( 
                "setOglGLId"
                , setOglGLId_function_type( &::OSG::TextureObjRefChunkBase::setOglGLId )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::TextureObjRefChunkBase::setOsgGLId
        
            typedef void ( ::OSG::TextureObjRefChunkBase::*setOsgGLId_function_type )( ::GLenum const & ) ;
            
            TextureObjRefChunkBase_exposer.def( 
                "setOsgGLId"
                , setOsgGLId_function_type( &::OSG::TextureObjRefChunkBase::setOsgGLId )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::TextureBaseChunk::determineInternalFormat
        
            typedef ::GLenum ( ::OSG::TextureBaseChunk::*determineInternalFormat_function_type )(  ) ;
            
            TextureObjRefChunkBase_exposer.def( 
                "determineInternalFormat"
                , bp::pure_virtual( determineInternalFormat_function_type(&::OSG::TextureBaseChunk::determineInternalFormat) ) );
        
        }
        { //::OSG::TextureBaseChunk::getOpenGLId
        
            typedef ::OSG::Int32 ( ::OSG::TextureBaseChunk::*getOpenGLId_function_type )( ::OSG::DrawEnv * ) ;
            
            TextureObjRefChunkBase_exposer.def( 
                "getOpenGLId"
                , bp::pure_virtual( getOpenGLId_function_type(&::OSG::TextureBaseChunk::getOpenGLId) )
                , ( bp::arg("pEnv") ) );
        
        }
        { //::OSG::TextureBaseChunk::validate
        
            typedef void ( ::OSG::TextureBaseChunk::*validate_function_type )( ::OSG::DrawEnv * ) ;
            
            TextureObjRefChunkBase_exposer.def( 
                "validate"
                , bp::pure_virtual( validate_function_type(&::OSG::TextureBaseChunk::validate) )
                , ( bp::arg("pEnv") ) );
        
        }
        TextureObjRefChunkBase_exposer.staticmethod( "create" );
        TextureObjRefChunkBase_exposer.staticmethod( "createDependent" );
        TextureObjRefChunkBase_exposer.staticmethod( "createLocal" );
        TextureObjRefChunkBase_exposer.staticmethod( "getClassGroupId" );
        TextureObjRefChunkBase_exposer.staticmethod( "getClassType" );
        TextureObjRefChunkBase_exposer.staticmethod( "getClassTypeId" );
    }

}
