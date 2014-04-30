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
#include "ShaderExecutableChunkBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

boost::python::list ShaderExecutableChunkBase_getMFAttributes(OSG::ShaderExecutableChunkBase *self)
{
   boost::python::list result;
   OSG::MFShaderAttribute const * mf_data = self->getMFAttributes();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

void register_ShaderExecutableChunkBase_class(){

    { //::OSG::ShaderExecutableChunkBase
        typedef bp::class_< OSG::ShaderExecutableChunkBase, bp::bases< OSG::StateChunk >, boost::noncopyable > ShaderExecutableChunkBase_exposer_t;
        ShaderExecutableChunkBase_exposer_t ShaderExecutableChunkBase_exposer = ShaderExecutableChunkBase_exposer_t( "ShaderExecutableChunkBase", bp::no_init );
        bp::scope ShaderExecutableChunkBase_scope( ShaderExecutableChunkBase_exposer );
        bp::scope().attr("VertexShaderFieldId") = (int)OSG::ShaderExecutableChunkBase::VertexShaderFieldId;
        bp::scope().attr("TessControlShaderFieldId") = (int)OSG::ShaderExecutableChunkBase::TessControlShaderFieldId;
        bp::scope().attr("TessEvaluationShaderFieldId") = (int)OSG::ShaderExecutableChunkBase::TessEvaluationShaderFieldId;
        bp::scope().attr("GeometryShaderFieldId") = (int)OSG::ShaderExecutableChunkBase::GeometryShaderFieldId;
        bp::scope().attr("FragmentShaderFieldId") = (int)OSG::ShaderExecutableChunkBase::FragmentShaderFieldId;
        bp::scope().attr("VariablesFieldId") = (int)OSG::ShaderExecutableChunkBase::VariablesFieldId;
        bp::scope().attr("VariableLocationsFieldId") = (int)OSG::ShaderExecutableChunkBase::VariableLocationsFieldId;
        bp::scope().attr("ProceduralVariableLocationsFieldId") = (int)OSG::ShaderExecutableChunkBase::ProceduralVariableLocationsFieldId;
        bp::scope().attr("GeometryVerticesOutFieldId") = (int)OSG::ShaderExecutableChunkBase::GeometryVerticesOutFieldId;
        bp::scope().attr("GeometryInputTypeFieldId") = (int)OSG::ShaderExecutableChunkBase::GeometryInputTypeFieldId;
        bp::scope().attr("GeometryOutputTypeFieldId") = (int)OSG::ShaderExecutableChunkBase::GeometryOutputTypeFieldId;
        bp::scope().attr("AttributesFieldId") = (int)OSG::ShaderExecutableChunkBase::AttributesFieldId;
        bp::scope().attr("GLIdFieldId") = (int)OSG::ShaderExecutableChunkBase::GLIdFieldId;
        bp::scope().attr("PointSizeFieldId") = (int)OSG::ShaderExecutableChunkBase::PointSizeFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::ShaderExecutableChunkBase::NextFieldId;
        { //::OSG::ShaderExecutableChunkBase::copyFromBin
        
            typedef void ( ::OSG::ShaderExecutableChunkBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ShaderExecutableChunkBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::ShaderExecutableChunkBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ShaderExecutableChunkBase::copyToBin
        
            typedef void ( ::OSG::ShaderExecutableChunkBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ShaderExecutableChunkBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::ShaderExecutableChunkBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ShaderExecutableChunkBase::create
        
            typedef ::OSG::ShaderExecutableChunkTransitPtr ( *create_function_type )(  );
            
            ShaderExecutableChunkBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::ShaderExecutableChunkBase::create ) );
        
        }
        { //::OSG::ShaderExecutableChunkBase::createDependent
        
            typedef ::OSG::ShaderExecutableChunkTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            ShaderExecutableChunkBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::ShaderExecutableChunkBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::ShaderExecutableChunkBase::createLocal
        
            typedef ::OSG::ShaderExecutableChunkTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            ShaderExecutableChunkBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::ShaderExecutableChunkBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::ShaderExecutableChunkBase::getAttributes
        
            typedef ::OSG::ShaderAttribute const & ( ::OSG::ShaderExecutableChunkBase::*getAttributes_function_type )( ::OSG::UInt32 const ) const;
            
            ShaderExecutableChunkBase_exposer.def( 
                "getAttributes"
                , getAttributes_function_type( &::OSG::ShaderExecutableChunkBase::getAttributes )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::ShaderExecutableChunkBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::ShaderExecutableChunkBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            ShaderExecutableChunkBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::ShaderExecutableChunkBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::ShaderExecutableChunkBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            ShaderExecutableChunkBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::ShaderExecutableChunkBase::getClassGroupId ) );
        
        }
        { //::OSG::ShaderExecutableChunkBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            ShaderExecutableChunkBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::ShaderExecutableChunkBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::ShaderExecutableChunkBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            ShaderExecutableChunkBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::ShaderExecutableChunkBase::getClassTypeId ) );
        
        }
        { //::OSG::ShaderExecutableChunkBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::ShaderExecutableChunkBase::*getContainerSize_function_type )(  ) const;
            
            ShaderExecutableChunkBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::ShaderExecutableChunkBase::getContainerSize ) );
        
        }
        { //::OSG::ShaderExecutableChunkBase::getGLId
        
            typedef ::OSG::UInt32 ( ::OSG::ShaderExecutableChunkBase::*getGLId_function_type )(  ) const;
            
            ShaderExecutableChunkBase_exposer.def( 
                "getGLId"
                , getGLId_function_type( &::OSG::ShaderExecutableChunkBase::getGLId ) );
        
        }
        { //::OSG::ShaderExecutableChunkBase::getGeometryInputType
        
            typedef ::GLenum const & ( ::OSG::ShaderExecutableChunkBase::*getGeometryInputType_function_type )(  ) const;
            
            ShaderExecutableChunkBase_exposer.def( 
                "getGeometryInputType"
                , getGeometryInputType_function_type( &::OSG::ShaderExecutableChunkBase::getGeometryInputType )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::ShaderExecutableChunkBase::getGeometryOutputType
        
            typedef ::GLenum const & ( ::OSG::ShaderExecutableChunkBase::*getGeometryOutputType_function_type )(  ) const;
            
            ShaderExecutableChunkBase_exposer.def( 
                "getGeometryOutputType"
                , getGeometryOutputType_function_type( &::OSG::ShaderExecutableChunkBase::getGeometryOutputType )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::ShaderExecutableChunkBase::getGeometryVerticesOut
        
            typedef ::OSG::UInt32 ( ::OSG::ShaderExecutableChunkBase::*getGeometryVerticesOut_function_type )(  ) const;
            
            ShaderExecutableChunkBase_exposer.def( 
                "getGeometryVerticesOut"
                , getGeometryVerticesOut_function_type( &::OSG::ShaderExecutableChunkBase::getGeometryVerticesOut ) );
        
        }
        { //::OSG::ShaderExecutableChunkBase::getPointSize
        
            typedef bool ( ::OSG::ShaderExecutableChunkBase::*getPointSize_function_type )(  ) const;
            
            ShaderExecutableChunkBase_exposer.def( 
                "getPointSize"
                , getPointSize_function_type( &::OSG::ShaderExecutableChunkBase::getPointSize ) );
        
        }
        { //::OSG::ShaderExecutableChunkBase::getSFGLId
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::ShaderExecutableChunkBase::*getSFGLId_function_type )(  ) const;
            
            ShaderExecutableChunkBase_exposer.def( 
                "getSFGLId"
                , getSFGLId_function_type( &::OSG::ShaderExecutableChunkBase::getSFGLId )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderExecutableChunkBase::getSFGeometryInputType
        
            typedef ::OSG::SFGLenum const * ( ::OSG::ShaderExecutableChunkBase::*getSFGeometryInputType_function_type )(  ) const;
            
            ShaderExecutableChunkBase_exposer.def( 
                "getSFGeometryInputType"
                , getSFGeometryInputType_function_type( &::OSG::ShaderExecutableChunkBase::getSFGeometryInputType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderExecutableChunkBase::getSFGeometryOutputType
        
            typedef ::OSG::SFGLenum const * ( ::OSG::ShaderExecutableChunkBase::*getSFGeometryOutputType_function_type )(  ) const;
            
            ShaderExecutableChunkBase_exposer.def( 
                "getSFGeometryOutputType"
                , getSFGeometryOutputType_function_type( &::OSG::ShaderExecutableChunkBase::getSFGeometryOutputType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderExecutableChunkBase::getSFGeometryVerticesOut
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::ShaderExecutableChunkBase::*getSFGeometryVerticesOut_function_type )(  ) const;
            
            ShaderExecutableChunkBase_exposer.def( 
                "getSFGeometryVerticesOut"
                , getSFGeometryVerticesOut_function_type( &::OSG::ShaderExecutableChunkBase::getSFGeometryVerticesOut )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderExecutableChunkBase::getSFPointSize
        
            typedef ::OSG::SFBool const * ( ::OSG::ShaderExecutableChunkBase::*getSFPointSize_function_type )(  ) const;
            
            ShaderExecutableChunkBase_exposer.def( 
                "getSFPointSize"
                , getSFPointSize_function_type( &::OSG::ShaderExecutableChunkBase::getSFPointSize )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderExecutableChunkBase::getSFVariables
        
            typedef ::OSG::SFUnrecChildShaderProgramVariablesPtr const * ( ::OSG::ShaderExecutableChunkBase::*getSFVariables_function_type )(  ) const;
            
            ShaderExecutableChunkBase_exposer.def( 
                "getSFVariables"
                , getSFVariables_function_type( &::OSG::ShaderExecutableChunkBase::getSFVariables )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderExecutableChunkBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::ShaderExecutableChunkBase::*getType_function_type )(  ) ;
            
            ShaderExecutableChunkBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ShaderExecutableChunkBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderExecutableChunkBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::ShaderExecutableChunkBase::*getType_function_type )(  ) const;
            
            ShaderExecutableChunkBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ShaderExecutableChunkBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderExecutableChunkBase::getVariables
        
            typedef ::OSG::ShaderProgramVariables * ( ::OSG::ShaderExecutableChunkBase::*getVariables_function_type )(  ) const;
            
            ShaderExecutableChunkBase_exposer.def( 
                "getVariables"
                , getVariables_function_type( &::OSG::ShaderExecutableChunkBase::getVariables )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderExecutableChunkBase::setGLId
        
            typedef void ( ::OSG::ShaderExecutableChunkBase::*setGLId_function_type )( ::OSG::UInt32 const ) ;
            
            ShaderExecutableChunkBase_exposer.def( 
                "setGLId"
                , setGLId_function_type( &::OSG::ShaderExecutableChunkBase::setGLId )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ShaderExecutableChunkBase::setGeometryInputType
        
            typedef void ( ::OSG::ShaderExecutableChunkBase::*setGeometryInputType_function_type )( ::GLenum const & ) ;
            
            ShaderExecutableChunkBase_exposer.def( 
                "setGeometryInputType"
                , setGeometryInputType_function_type( &::OSG::ShaderExecutableChunkBase::setGeometryInputType )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ShaderExecutableChunkBase::setGeometryOutputType
        
            typedef void ( ::OSG::ShaderExecutableChunkBase::*setGeometryOutputType_function_type )( ::GLenum const & ) ;
            
            ShaderExecutableChunkBase_exposer.def( 
                "setGeometryOutputType"
                , setGeometryOutputType_function_type( &::OSG::ShaderExecutableChunkBase::setGeometryOutputType )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ShaderExecutableChunkBase::setGeometryVerticesOut
        
            typedef void ( ::OSG::ShaderExecutableChunkBase::*setGeometryVerticesOut_function_type )( ::OSG::UInt32 const ) ;
            
            ShaderExecutableChunkBase_exposer.def( 
                "setGeometryVerticesOut"
                , setGeometryVerticesOut_function_type( &::OSG::ShaderExecutableChunkBase::setGeometryVerticesOut )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ShaderExecutableChunkBase::setPointSize
        
            typedef void ( ::OSG::ShaderExecutableChunkBase::*setPointSize_function_type )( bool const ) ;
            
            ShaderExecutableChunkBase_exposer.def( 
                "setPointSize"
                , setPointSize_function_type( &::OSG::ShaderExecutableChunkBase::setPointSize )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ShaderExecutableChunkBase::setVariables
        
            typedef void ( ::OSG::ShaderExecutableChunkBase::*setVariables_function_type )( ::OSG::ShaderProgramVariables * const ) ;
            
            ShaderExecutableChunkBase_exposer.def( 
                "setVariables"
                , setVariables_function_type( &::OSG::ShaderExecutableChunkBase::setVariables )
                , ( bp::arg("value") ) );
        
        }
        ShaderExecutableChunkBase_exposer.staticmethod( "create" );
        ShaderExecutableChunkBase_exposer.staticmethod( "createDependent" );
        ShaderExecutableChunkBase_exposer.staticmethod( "createLocal" );
        ShaderExecutableChunkBase_exposer.staticmethod( "getClassGroupId" );
        ShaderExecutableChunkBase_exposer.staticmethod( "getClassType" );
        ShaderExecutableChunkBase_exposer.staticmethod( "getClassTypeId" );
        ShaderExecutableChunkBase_exposer.def("getMFAttributes",ShaderExecutableChunkBase_getMFAttributes);
    }

}
