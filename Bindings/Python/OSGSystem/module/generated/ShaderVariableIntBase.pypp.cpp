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
#include "ShaderVariableIntBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_ShaderVariableIntBase_class(){

    { //::OSG::ShaderVariableIntBase
        typedef bp::class_< OSG::ShaderVariableIntBase, bp::bases< OSG::ShaderValueVariable >, boost::noncopyable > ShaderVariableIntBase_exposer_t;
        ShaderVariableIntBase_exposer_t ShaderVariableIntBase_exposer = ShaderVariableIntBase_exposer_t( "ShaderVariableIntBase", bp::no_init );
        bp::scope ShaderVariableIntBase_scope( ShaderVariableIntBase_exposer );
        bp::scope().attr("ValueFieldId") = (int)OSG::ShaderVariableIntBase::ValueFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::ShaderVariableIntBase::NextFieldId;
        { //::OSG::ShaderVariableIntBase::copyFromBin
        
            typedef void ( ::OSG::ShaderVariableIntBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ShaderVariableIntBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::ShaderVariableIntBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ShaderVariableIntBase::copyToBin
        
            typedef void ( ::OSG::ShaderVariableIntBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ShaderVariableIntBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::ShaderVariableIntBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ShaderVariableIntBase::create
        
            typedef ::OSG::ShaderVariableIntTransitPtr ( *create_function_type )(  );
            
            ShaderVariableIntBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::ShaderVariableIntBase::create ) );
        
        }
        { //::OSG::ShaderVariableIntBase::createDependent
        
            typedef ::OSG::ShaderVariableIntTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            ShaderVariableIntBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::ShaderVariableIntBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::ShaderVariableIntBase::createLocal
        
            typedef ::OSG::ShaderVariableIntTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            ShaderVariableIntBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::ShaderVariableIntBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::ShaderVariableIntBase::getBinSize
        
            typedef ::OSG::UInt32 ( ::OSG::ShaderVariableIntBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            ShaderVariableIntBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::ShaderVariableIntBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::ShaderVariableIntBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            ShaderVariableIntBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::ShaderVariableIntBase::getClassGroupId ) );
        
        }
        { //::OSG::ShaderVariableIntBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            ShaderVariableIntBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::ShaderVariableIntBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::ShaderVariableIntBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            ShaderVariableIntBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::ShaderVariableIntBase::getClassTypeId ) );
        
        }
        { //::OSG::ShaderVariableIntBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::ShaderVariableIntBase::*getContainerSize_function_type )(  ) const;
            
            ShaderVariableIntBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::ShaderVariableIntBase::getContainerSize ) );
        
        }
        { //::OSG::ShaderVariableIntBase::getSFValue
        
            typedef ::OSG::SFInt32 const * ( ::OSG::ShaderVariableIntBase::*getSFValue_function_type )(  ) const;
            
            ShaderVariableIntBase_exposer.def( 
                "getSFValue"
                , getSFValue_function_type( &::OSG::ShaderVariableIntBase::getSFValue )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderVariableIntBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::ShaderVariableIntBase::*getType_function_type )(  ) ;
            
            ShaderVariableIntBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ShaderVariableIntBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderVariableIntBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::ShaderVariableIntBase::*getType_function_type )(  ) const;
            
            ShaderVariableIntBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ShaderVariableIntBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderVariableIntBase::getValue
        
            typedef ::OSG::Int32 ( ::OSG::ShaderVariableIntBase::*getValue_function_type )(  ) const;
            
            ShaderVariableIntBase_exposer.def( 
                "getValue"
                , getValue_function_type( &::OSG::ShaderVariableIntBase::getValue ) );
        
        }
        { //::OSG::ShaderVariableIntBase::setValue
        
            typedef void ( ::OSG::ShaderVariableIntBase::*setValue_function_type )( ::OSG::Int32 const ) ;
            
            ShaderVariableIntBase_exposer.def( 
                "setValue"
                , setValue_function_type( &::OSG::ShaderVariableIntBase::setValue )
                , ( bp::arg("value") ) );
        
        }
        ShaderVariableIntBase_exposer.staticmethod( "create" );
        ShaderVariableIntBase_exposer.staticmethod( "createDependent" );
        ShaderVariableIntBase_exposer.staticmethod( "createLocal" );
        ShaderVariableIntBase_exposer.staticmethod( "getClassGroupId" );
        ShaderVariableIntBase_exposer.staticmethod( "getClassType" );
        ShaderVariableIntBase_exposer.staticmethod( "getClassTypeId" );
    }

}