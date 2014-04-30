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
#include "ShaderVariableMatrixBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_ShaderVariableMatrixBase_class(){

    { //::OSG::ShaderVariableMatrixBase
        typedef bp::class_< OSG::ShaderVariableMatrixBase, bp::bases< OSG::ShaderValueVariable >, boost::noncopyable > ShaderVariableMatrixBase_exposer_t;
        ShaderVariableMatrixBase_exposer_t ShaderVariableMatrixBase_exposer = ShaderVariableMatrixBase_exposer_t( "ShaderVariableMatrixBase", bp::no_init );
        bp::scope ShaderVariableMatrixBase_scope( ShaderVariableMatrixBase_exposer );
        bp::scope().attr("ValueFieldId") = (int)OSG::ShaderVariableMatrixBase::ValueFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::ShaderVariableMatrixBase::NextFieldId;
        { //::OSG::ShaderVariableMatrixBase::copyFromBin
        
            typedef void ( ::OSG::ShaderVariableMatrixBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ShaderVariableMatrixBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::ShaderVariableMatrixBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ShaderVariableMatrixBase::copyToBin
        
            typedef void ( ::OSG::ShaderVariableMatrixBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ShaderVariableMatrixBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::ShaderVariableMatrixBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ShaderVariableMatrixBase::create
        
            typedef ::OSG::ShaderVariableMatrixTransitPtr ( *create_function_type )(  );
            
            ShaderVariableMatrixBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::ShaderVariableMatrixBase::create ) );
        
        }
        { //::OSG::ShaderVariableMatrixBase::createDependent
        
            typedef ::OSG::ShaderVariableMatrixTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            ShaderVariableMatrixBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::ShaderVariableMatrixBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::ShaderVariableMatrixBase::createLocal
        
            typedef ::OSG::ShaderVariableMatrixTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            ShaderVariableMatrixBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::ShaderVariableMatrixBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::ShaderVariableMatrixBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::ShaderVariableMatrixBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            ShaderVariableMatrixBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::ShaderVariableMatrixBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::ShaderVariableMatrixBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            ShaderVariableMatrixBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::ShaderVariableMatrixBase::getClassGroupId ) );
        
        }
        { //::OSG::ShaderVariableMatrixBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            ShaderVariableMatrixBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::ShaderVariableMatrixBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::ShaderVariableMatrixBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            ShaderVariableMatrixBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::ShaderVariableMatrixBase::getClassTypeId ) );
        
        }
        { //::OSG::ShaderVariableMatrixBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::ShaderVariableMatrixBase::*getContainerSize_function_type )(  ) const;
            
            ShaderVariableMatrixBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::ShaderVariableMatrixBase::getContainerSize ) );
        
        }
        { //::OSG::ShaderVariableMatrixBase::getSFValue
        
            typedef ::OSG::SFMatrix const * ( ::OSG::ShaderVariableMatrixBase::*getSFValue_function_type )(  ) const;
            
            ShaderVariableMatrixBase_exposer.def( 
                "getSFValue"
                , getSFValue_function_type( &::OSG::ShaderVariableMatrixBase::getSFValue )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderVariableMatrixBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::ShaderVariableMatrixBase::*getType_function_type )(  ) ;
            
            ShaderVariableMatrixBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ShaderVariableMatrixBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderVariableMatrixBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::ShaderVariableMatrixBase::*getType_function_type )(  ) const;
            
            ShaderVariableMatrixBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ShaderVariableMatrixBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderVariableMatrixBase::getValue
        
            typedef ::OSG::Matrix const & ( ::OSG::ShaderVariableMatrixBase::*getValue_function_type )(  ) const;
            
            ShaderVariableMatrixBase_exposer.def( 
                "getValue"
                , getValue_function_type( &::OSG::ShaderVariableMatrixBase::getValue )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::ShaderVariableMatrixBase::setValue
        
            typedef void ( ::OSG::ShaderVariableMatrixBase::*setValue_function_type )( ::OSG::Matrix const & ) ;
            
            ShaderVariableMatrixBase_exposer.def( 
                "setValue"
                , setValue_function_type( &::OSG::ShaderVariableMatrixBase::setValue )
                , ( bp::arg("value") ) );
        
        }
        ShaderVariableMatrixBase_exposer.staticmethod( "create" );
        ShaderVariableMatrixBase_exposer.staticmethod( "createDependent" );
        ShaderVariableMatrixBase_exposer.staticmethod( "createLocal" );
        ShaderVariableMatrixBase_exposer.staticmethod( "getClassGroupId" );
        ShaderVariableMatrixBase_exposer.staticmethod( "getClassType" );
        ShaderVariableMatrixBase_exposer.staticmethod( "getClassTypeId" );
    }

}
