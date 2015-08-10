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
#include "ShaderVariableVec4fBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_ShaderVariableVec4fBase_class(){

    { //::OSG::ShaderVariableVec4fBase
        typedef bp::class_< OSG::ShaderVariableVec4fBase, bp::bases< OSG::ShaderValueVariable >, boost::noncopyable > ShaderVariableVec4fBase_exposer_t;
        ShaderVariableVec4fBase_exposer_t ShaderVariableVec4fBase_exposer = ShaderVariableVec4fBase_exposer_t( "ShaderVariableVec4fBase", bp::no_init );
        bp::scope ShaderVariableVec4fBase_scope( ShaderVariableVec4fBase_exposer );
        bp::scope().attr("ValueFieldId") = (int)OSG::ShaderVariableVec4fBase::ValueFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::ShaderVariableVec4fBase::NextFieldId;
        { //::OSG::ShaderVariableVec4fBase::copyFromBin
        
            typedef void ( ::OSG::ShaderVariableVec4fBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ShaderVariableVec4fBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::ShaderVariableVec4fBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ShaderVariableVec4fBase::copyToBin
        
            typedef void ( ::OSG::ShaderVariableVec4fBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ShaderVariableVec4fBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::ShaderVariableVec4fBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ShaderVariableVec4fBase::create
        
            typedef ::OSG::ShaderVariableVec4fTransitPtr ( *create_function_type )(  );
            
            ShaderVariableVec4fBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::ShaderVariableVec4fBase::create ) );
        
        }
        { //::OSG::ShaderVariableVec4fBase::createDependent
        
            typedef ::OSG::ShaderVariableVec4fTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            ShaderVariableVec4fBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::ShaderVariableVec4fBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::ShaderVariableVec4fBase::createLocal
        
            typedef ::OSG::ShaderVariableVec4fTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            ShaderVariableVec4fBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::ShaderVariableVec4fBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::ShaderVariableVec4fBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::ShaderVariableVec4fBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            ShaderVariableVec4fBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::ShaderVariableVec4fBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::ShaderVariableVec4fBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            ShaderVariableVec4fBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::ShaderVariableVec4fBase::getClassGroupId ) );
        
        }
        { //::OSG::ShaderVariableVec4fBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            ShaderVariableVec4fBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::ShaderVariableVec4fBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::ShaderVariableVec4fBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            ShaderVariableVec4fBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::ShaderVariableVec4fBase::getClassTypeId ) );
        
        }
        { //::OSG::ShaderVariableVec4fBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::ShaderVariableVec4fBase::*getContainerSize_function_type )(  ) const;
            
            ShaderVariableVec4fBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::ShaderVariableVec4fBase::getContainerSize ) );
        
        }
        { //::OSG::ShaderVariableVec4fBase::getSFValue
        
            typedef ::OSG::SFVec4f const * ( ::OSG::ShaderVariableVec4fBase::*getSFValue_function_type )(  ) const;
            
            ShaderVariableVec4fBase_exposer.def( 
                "getSFValue"
                , getSFValue_function_type( &::OSG::ShaderVariableVec4fBase::getSFValue )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderVariableVec4fBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::ShaderVariableVec4fBase::*getType_function_type )(  ) ;
            
            ShaderVariableVec4fBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ShaderVariableVec4fBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderVariableVec4fBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::ShaderVariableVec4fBase::*getType_function_type )(  ) const;
            
            ShaderVariableVec4fBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ShaderVariableVec4fBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderVariableVec4fBase::getValue
        
            typedef ::OSG::Vec4f const & ( ::OSG::ShaderVariableVec4fBase::*getValue_function_type )(  ) const;
            
            ShaderVariableVec4fBase_exposer.def( 
                "getValue"
                , getValue_function_type( &::OSG::ShaderVariableVec4fBase::getValue )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::ShaderVariableVec4fBase::setValue
        
            typedef void ( ::OSG::ShaderVariableVec4fBase::*setValue_function_type )( ::OSG::Vec4f const & ) ;
            
            ShaderVariableVec4fBase_exposer.def( 
                "setValue"
                , setValue_function_type( &::OSG::ShaderVariableVec4fBase::setValue )
                , ( bp::arg("value") ) );
        
        }
        ShaderVariableVec4fBase_exposer.staticmethod( "create" );
        ShaderVariableVec4fBase_exposer.staticmethod( "createDependent" );
        ShaderVariableVec4fBase_exposer.staticmethod( "createLocal" );
        ShaderVariableVec4fBase_exposer.staticmethod( "getClassGroupId" );
        ShaderVariableVec4fBase_exposer.staticmethod( "getClassType" );
        ShaderVariableVec4fBase_exposer.staticmethod( "getClassTypeId" );
    }

}
