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

#include "boost/python.hpp"
#include "OSGSystem_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "ShaderProgramBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

boost::python::list ShaderProgramBase_getMFParameter(OSG::ShaderProgramBase *self)
{
   boost::python::list result;
   OSG::MFShaderParameter const * mf_data = self->getMFParameter();
   const OSG::UInt32 size(mf_data->size());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

void register_ShaderProgramBase_class(){

    { //::OSG::ShaderProgramBase
        typedef bp::class_< OSG::ShaderProgramBase, bp::bases< ::OSG::FieldContainer >, boost::noncopyable > ShaderProgramBase_exposer_t;
        ShaderProgramBase_exposer_t ShaderProgramBase_exposer = ShaderProgramBase_exposer_t( "ShaderProgramBase", bp::no_init );
        bp::scope ShaderProgramBase_scope( ShaderProgramBase_exposer );
        bp::scope().attr("ShaderTypeFieldId") = (int)OSG::ShaderProgramBase::ShaderTypeFieldId;
        bp::scope().attr("ProgramFieldId") = (int)OSG::ShaderProgramBase::ProgramFieldId;
        bp::scope().attr("GLIdFieldId") = (int)OSG::ShaderProgramBase::GLIdFieldId;
        bp::scope().attr("VariablesFieldId") = (int)OSG::ShaderProgramBase::VariablesFieldId;
        bp::scope().attr("ParameterFieldId") = (int)OSG::ShaderProgramBase::ParameterFieldId;
        bp::scope().attr("CgFrontEndFieldId") = (int)OSG::ShaderProgramBase::CgFrontEndFieldId;
        bp::scope().attr("PointSizeFieldId") = (int)OSG::ShaderProgramBase::PointSizeFieldId;
        bp::scope().attr("ParentsFieldId") = (int)OSG::ShaderProgramBase::ParentsFieldId;
        bp::scope().attr("DestroyedFunctorsFieldId") = (int)OSG::ShaderProgramBase::DestroyedFunctorsFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::ShaderProgramBase::NextFieldId;
        { //::OSG::ShaderProgramBase::copyFromBin
        
            typedef void ( ::OSG::ShaderProgramBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ShaderProgramBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::ShaderProgramBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ShaderProgramBase::copyToBin
        
            typedef void ( ::OSG::ShaderProgramBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ShaderProgramBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::ShaderProgramBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ShaderProgramBase::create
        
            typedef ::OSG::ShaderProgramTransitPtr ( *create_function_type )(  );
            
            ShaderProgramBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::ShaderProgramBase::create ) );
        
        }
        { //::OSG::ShaderProgramBase::createDependent
        
            typedef ::OSG::ShaderProgramTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            ShaderProgramBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::ShaderProgramBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::ShaderProgramBase::createLocal
        
            typedef ::OSG::ShaderProgramTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            ShaderProgramBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::ShaderProgramBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::ShaderProgramBase::getBinSize
        
            typedef ::OSG::UInt32 ( ::OSG::ShaderProgramBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            ShaderProgramBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::ShaderProgramBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::ShaderProgramBase::getCgFrontEnd
        
            typedef bool ( ::OSG::ShaderProgramBase::*getCgFrontEnd_function_type )(  ) const;
            
            ShaderProgramBase_exposer.def( 
                "getCgFrontEnd"
                , getCgFrontEnd_function_type( &::OSG::ShaderProgramBase::getCgFrontEnd ) );
        
        }
        { //::OSG::ShaderProgramBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            ShaderProgramBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::ShaderProgramBase::getClassGroupId ) );
        
        }
        { //::OSG::ShaderProgramBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            ShaderProgramBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::ShaderProgramBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::ShaderProgramBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            ShaderProgramBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::ShaderProgramBase::getClassTypeId ) );
        
        }
        { //::OSG::ShaderProgramBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::ShaderProgramBase::*getContainerSize_function_type )(  ) const;
            
            ShaderProgramBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::ShaderProgramBase::getContainerSize ) );
        
        }
        { //::OSG::ShaderProgramBase::getGLId
        
            typedef ::OSG::UInt32 ( ::OSG::ShaderProgramBase::*getGLId_function_type )(  ) const;
            
            ShaderProgramBase_exposer.def( 
                "getGLId"
                , getGLId_function_type( &::OSG::ShaderProgramBase::getGLId ) );
        
        }
        { //::OSG::ShaderProgramBase::getParameter
        
            typedef ::OSG::ShaderParameter const & ( ::OSG::ShaderProgramBase::*getParameter_function_type )( ::OSG::UInt32 const ) const;
            
            ShaderProgramBase_exposer.def( 
                "getParameter"
                , getParameter_function_type( &::OSG::ShaderProgramBase::getParameter )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::ShaderProgramBase::getPointSize
        
            typedef bool ( ::OSG::ShaderProgramBase::*getPointSize_function_type )(  ) const;
            
            ShaderProgramBase_exposer.def( 
                "getPointSize"
                , getPointSize_function_type( &::OSG::ShaderProgramBase::getPointSize ) );
        
        }
        { //::OSG::ShaderProgramBase::getProgram
        
            typedef ::std::string const & ( ::OSG::ShaderProgramBase::*getProgram_function_type )(  ) const;
            
            ShaderProgramBase_exposer.def( 
                "getProgram"
                , getProgram_function_type( &::OSG::ShaderProgramBase::getProgram )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::ShaderProgramBase::getSFCgFrontEnd
        
            typedef ::OSG::SFBool const * ( ::OSG::ShaderProgramBase::*getSFCgFrontEnd_function_type )(  ) const;
            
            ShaderProgramBase_exposer.def( 
                "getSFCgFrontEnd"
                , getSFCgFrontEnd_function_type( &::OSG::ShaderProgramBase::getSFCgFrontEnd )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderProgramBase::getSFGLId
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::ShaderProgramBase::*getSFGLId_function_type )(  ) const;
            
            ShaderProgramBase_exposer.def( 
                "getSFGLId"
                , getSFGLId_function_type( &::OSG::ShaderProgramBase::getSFGLId )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderProgramBase::getSFPointSize
        
            typedef ::OSG::SFBool const * ( ::OSG::ShaderProgramBase::*getSFPointSize_function_type )(  ) const;
            
            ShaderProgramBase_exposer.def( 
                "getSFPointSize"
                , getSFPointSize_function_type( &::OSG::ShaderProgramBase::getSFPointSize )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderProgramBase::getSFProgram
        
            typedef ::OSG::SFString const * ( ::OSG::ShaderProgramBase::*getSFProgram_function_type )(  ) const;
            
            ShaderProgramBase_exposer.def( 
                "getSFProgram"
                , getSFProgram_function_type( &::OSG::ShaderProgramBase::getSFProgram )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderProgramBase::getSFShaderType
        
            typedef ::OSG::SFGLenum const * ( ::OSG::ShaderProgramBase::*getSFShaderType_function_type )(  ) const;
            
            ShaderProgramBase_exposer.def( 
                "getSFShaderType"
                , getSFShaderType_function_type( &::OSG::ShaderProgramBase::getSFShaderType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderProgramBase::getSFVariables
        
            typedef ::OSG::SFUnrecChildShaderProgramVariablesPtr const * ( ::OSG::ShaderProgramBase::*getSFVariables_function_type )(  ) const;
            
            ShaderProgramBase_exposer.def( 
                "getSFVariables"
                , getSFVariables_function_type( &::OSG::ShaderProgramBase::getSFVariables )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderProgramBase::getShaderType
        
            typedef ::GLenum const & ( ::OSG::ShaderProgramBase::*getShaderType_function_type )(  ) const;
            
            ShaderProgramBase_exposer.def( 
                "getShaderType"
                , getShaderType_function_type( &::OSG::ShaderProgramBase::getShaderType )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::ShaderProgramBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::ShaderProgramBase::*getType_function_type )(  ) ;
            
            ShaderProgramBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ShaderProgramBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderProgramBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::ShaderProgramBase::*getType_function_type )(  ) const;
            
            ShaderProgramBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ShaderProgramBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderProgramBase::getVariables
        
            typedef ::OSG::ShaderProgramVariables * ( ::OSG::ShaderProgramBase::*getVariables_function_type )(  ) const;
            
            ShaderProgramBase_exposer.def( 
                "getVariables"
                , getVariables_function_type( &::OSG::ShaderProgramBase::getVariables )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderProgramBase::setCgFrontEnd
        
            typedef void ( ::OSG::ShaderProgramBase::*setCgFrontEnd_function_type )( bool const ) ;
            
            ShaderProgramBase_exposer.def( 
                "setCgFrontEnd"
                , setCgFrontEnd_function_type( &::OSG::ShaderProgramBase::setCgFrontEnd )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ShaderProgramBase::setGLId
        
            typedef void ( ::OSG::ShaderProgramBase::*setGLId_function_type )( ::OSG::UInt32 const ) ;
            
            ShaderProgramBase_exposer.def( 
                "setGLId"
                , setGLId_function_type( &::OSG::ShaderProgramBase::setGLId )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ShaderProgramBase::setPointSize
        
            typedef void ( ::OSG::ShaderProgramBase::*setPointSize_function_type )( bool const ) ;
            
            ShaderProgramBase_exposer.def( 
                "setPointSize"
                , setPointSize_function_type( &::OSG::ShaderProgramBase::setPointSize )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ShaderProgramBase::setProgram
        
            typedef void ( ::OSG::ShaderProgramBase::*setProgram_function_type )( ::std::string const & ) ;
            
            ShaderProgramBase_exposer.def( 
                "setProgram"
                , setProgram_function_type( &::OSG::ShaderProgramBase::setProgram )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ShaderProgramBase::setShaderType
        
            typedef void ( ::OSG::ShaderProgramBase::*setShaderType_function_type )( ::GLenum const & ) ;
            
            ShaderProgramBase_exposer.def( 
                "setShaderType"
                , setShaderType_function_type( &::OSG::ShaderProgramBase::setShaderType )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ShaderProgramBase::setVariables
        
            typedef void ( ::OSG::ShaderProgramBase::*setVariables_function_type )( ::OSG::ShaderProgramVariables * const ) ;
            
            ShaderProgramBase_exposer.def( 
                "setVariables"
                , setVariables_function_type( &::OSG::ShaderProgramBase::setVariables )
                , ( bp::arg("value") ) );
        
        }
        ShaderProgramBase_exposer.staticmethod( "create" );
        ShaderProgramBase_exposer.staticmethod( "createDependent" );
        ShaderProgramBase_exposer.staticmethod( "createLocal" );
        ShaderProgramBase_exposer.staticmethod( "getClassGroupId" );
        ShaderProgramBase_exposer.staticmethod( "getClassType" );
        ShaderProgramBase_exposer.staticmethod( "getClassTypeId" );
        ShaderProgramBase_exposer.def("getMFParameter",ShaderProgramBase_getMFParameter);
    }

}