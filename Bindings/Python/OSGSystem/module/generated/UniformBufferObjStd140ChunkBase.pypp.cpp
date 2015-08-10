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
#include "OSGSystem_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "UniformBufferObjStd140ChunkBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

boost::python::list UniformBufferObjStd140ChunkBase_getMFBuffer(OSG::UniformBufferObjStd140ChunkBase *self)
{
   boost::python::list result;
   OSG::MFUInt8 const * mf_data = self->getMFBuffer();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

void register_UniformBufferObjStd140ChunkBase_class(){

    { //::OSG::UniformBufferObjStd140ChunkBase
        typedef bp::class_< OSG::UniformBufferObjStd140ChunkBase, bp::bases< OSG::StateChunk >, boost::noncopyable > UniformBufferObjStd140ChunkBase_exposer_t;
        UniformBufferObjStd140ChunkBase_exposer_t UniformBufferObjStd140ChunkBase_exposer = UniformBufferObjStd140ChunkBase_exposer_t( "UniformBufferObjStd140ChunkBase", bp::no_init );
        bp::scope UniformBufferObjStd140ChunkBase_scope( UniformBufferObjStd140ChunkBase_exposer );
        bp::scope().attr("GLIdFieldId") = (int)OSG::UniformBufferObjStd140ChunkBase::GLIdFieldId;
        bp::scope().attr("UsageFieldId") = (int)OSG::UniformBufferObjStd140ChunkBase::UsageFieldId;
        bp::scope().attr("BufferFieldId") = (int)OSG::UniformBufferObjStd140ChunkBase::BufferFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::UniformBufferObjStd140ChunkBase::NextFieldId;
        { //::OSG::UniformBufferObjStd140ChunkBase::copyFromBin
        
            typedef void ( ::OSG::UniformBufferObjStd140ChunkBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            UniformBufferObjStd140ChunkBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::UniformBufferObjStd140ChunkBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::UniformBufferObjStd140ChunkBase::copyToBin
        
            typedef void ( ::OSG::UniformBufferObjStd140ChunkBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            UniformBufferObjStd140ChunkBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::UniformBufferObjStd140ChunkBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::UniformBufferObjStd140ChunkBase::create
        
            typedef ::OSG::UniformBufferObjStd140ChunkTransitPtr ( *create_function_type )(  );
            
            UniformBufferObjStd140ChunkBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::UniformBufferObjStd140ChunkBase::create ) );
        
        }
        { //::OSG::UniformBufferObjStd140ChunkBase::createDependent
        
            typedef ::OSG::UniformBufferObjStd140ChunkTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            UniformBufferObjStd140ChunkBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::UniformBufferObjStd140ChunkBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::UniformBufferObjStd140ChunkBase::createLocal
        
            typedef ::OSG::UniformBufferObjStd140ChunkTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            UniformBufferObjStd140ChunkBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::UniformBufferObjStd140ChunkBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::UniformBufferObjStd140ChunkBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::UniformBufferObjStd140ChunkBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            UniformBufferObjStd140ChunkBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::UniformBufferObjStd140ChunkBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::UniformBufferObjStd140ChunkBase::getBuffer
        
            typedef ::OSG::UInt8 ( ::OSG::UniformBufferObjStd140ChunkBase::*getBuffer_function_type )( ::OSG::UInt32 const ) const;
            
            UniformBufferObjStd140ChunkBase_exposer.def( 
                "getBuffer"
                , getBuffer_function_type( &::OSG::UniformBufferObjStd140ChunkBase::getBuffer )
                , ( bp::arg("index") ) );
        
        }
        { //::OSG::UniformBufferObjStd140ChunkBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            UniformBufferObjStd140ChunkBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::UniformBufferObjStd140ChunkBase::getClassGroupId ) );
        
        }
        { //::OSG::UniformBufferObjStd140ChunkBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            UniformBufferObjStd140ChunkBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::UniformBufferObjStd140ChunkBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::UniformBufferObjStd140ChunkBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            UniformBufferObjStd140ChunkBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::UniformBufferObjStd140ChunkBase::getClassTypeId ) );
        
        }
        { //::OSG::UniformBufferObjStd140ChunkBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::UniformBufferObjStd140ChunkBase::*getContainerSize_function_type )(  ) const;
            
            UniformBufferObjStd140ChunkBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::UniformBufferObjStd140ChunkBase::getContainerSize ) );
        
        }
        { //::OSG::UniformBufferObjStd140ChunkBase::getGLId
        
            typedef ::GLenum const & ( ::OSG::UniformBufferObjStd140ChunkBase::*getGLId_function_type )(  ) const;
            
            UniformBufferObjStd140ChunkBase_exposer.def( 
                "getGLId"
                , getGLId_function_type( &::OSG::UniformBufferObjStd140ChunkBase::getGLId )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::UniformBufferObjStd140ChunkBase::getSFGLId
        
            typedef ::OSG::SFGLenum const * ( ::OSG::UniformBufferObjStd140ChunkBase::*getSFGLId_function_type )(  ) const;
            
            UniformBufferObjStd140ChunkBase_exposer.def( 
                "getSFGLId"
                , getSFGLId_function_type( &::OSG::UniformBufferObjStd140ChunkBase::getSFGLId )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::UniformBufferObjStd140ChunkBase::getSFUsage
        
            typedef ::OSG::SFGLenum const * ( ::OSG::UniformBufferObjStd140ChunkBase::*getSFUsage_function_type )(  ) const;
            
            UniformBufferObjStd140ChunkBase_exposer.def( 
                "getSFUsage"
                , getSFUsage_function_type( &::OSG::UniformBufferObjStd140ChunkBase::getSFUsage )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::UniformBufferObjStd140ChunkBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::UniformBufferObjStd140ChunkBase::*getType_function_type )(  ) ;
            
            UniformBufferObjStd140ChunkBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::UniformBufferObjStd140ChunkBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::UniformBufferObjStd140ChunkBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::UniformBufferObjStd140ChunkBase::*getType_function_type )(  ) const;
            
            UniformBufferObjStd140ChunkBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::UniformBufferObjStd140ChunkBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::UniformBufferObjStd140ChunkBase::getUsage
        
            typedef ::GLenum const & ( ::OSG::UniformBufferObjStd140ChunkBase::*getUsage_function_type )(  ) const;
            
            UniformBufferObjStd140ChunkBase_exposer.def( 
                "getUsage"
                , getUsage_function_type( &::OSG::UniformBufferObjStd140ChunkBase::getUsage )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::UniformBufferObjStd140ChunkBase::setGLId
        
            typedef void ( ::OSG::UniformBufferObjStd140ChunkBase::*setGLId_function_type )( ::GLenum const & ) ;
            
            UniformBufferObjStd140ChunkBase_exposer.def( 
                "setGLId"
                , setGLId_function_type( &::OSG::UniformBufferObjStd140ChunkBase::setGLId )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::UniformBufferObjStd140ChunkBase::setUsage
        
            typedef void ( ::OSG::UniformBufferObjStd140ChunkBase::*setUsage_function_type )( ::GLenum const & ) ;
            
            UniformBufferObjStd140ChunkBase_exposer.def( 
                "setUsage"
                , setUsage_function_type( &::OSG::UniformBufferObjStd140ChunkBase::setUsage )
                , ( bp::arg("value") ) );
        
        }
        UniformBufferObjStd140ChunkBase_exposer.staticmethod( "create" );
        UniformBufferObjStd140ChunkBase_exposer.staticmethod( "createDependent" );
        UniformBufferObjStd140ChunkBase_exposer.staticmethod( "createLocal" );
        UniformBufferObjStd140ChunkBase_exposer.staticmethod( "getClassGroupId" );
        UniformBufferObjStd140ChunkBase_exposer.staticmethod( "getClassType" );
        UniformBufferObjStd140ChunkBase_exposer.staticmethod( "getClassTypeId" );
        UniformBufferObjStd140ChunkBase_exposer.def("getMFBuffer",UniformBufferObjStd140ChunkBase_getMFBuffer);
    }

}
