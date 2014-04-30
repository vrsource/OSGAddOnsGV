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
#include "ShaderVariableBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_ShaderVariableBase_class(){

    { //::OSG::ShaderVariableBase
        typedef bp::class_< OSG::ShaderVariableBase, bp::bases< ::OSG::FieldContainer >, boost::noncopyable > ShaderVariableBase_exposer_t;
        ShaderVariableBase_exposer_t ShaderVariableBase_exposer = ShaderVariableBase_exposer_t( "ShaderVariableBase", bp::no_init );
        bp::scope ShaderVariableBase_scope( ShaderVariableBase_exposer );
        bp::scope().attr("NameFieldId") = (int)OSG::ShaderVariableBase::NameFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::ShaderVariableBase::NextFieldId;
        { //::OSG::ShaderVariableBase::copyFromBin
        
            typedef void ( ::OSG::ShaderVariableBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ShaderVariableBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::ShaderVariableBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ShaderVariableBase::copyToBin
        
            typedef void ( ::OSG::ShaderVariableBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ShaderVariableBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::ShaderVariableBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ShaderVariableBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::ShaderVariableBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            ShaderVariableBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::ShaderVariableBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::ShaderVariableBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            ShaderVariableBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::ShaderVariableBase::getClassGroupId ) );
        
        }
        { //::OSG::ShaderVariableBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            ShaderVariableBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::ShaderVariableBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::ShaderVariableBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            ShaderVariableBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::ShaderVariableBase::getClassTypeId ) );
        
        }
        { //::OSG::ShaderVariableBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::ShaderVariableBase::*getContainerSize_function_type )(  ) const;
            
            ShaderVariableBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::ShaderVariableBase::getContainerSize ) );
        
        }
        { //::OSG::ShaderVariableBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::ShaderVariableBase::*getType_function_type )(  ) ;
            
            ShaderVariableBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ShaderVariableBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderVariableBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::ShaderVariableBase::*getType_function_type )(  ) const;
            
            ShaderVariableBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ShaderVariableBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        ShaderVariableBase_exposer.staticmethod( "getClassGroupId" );
        ShaderVariableBase_exposer.staticmethod( "getClassType" );
        ShaderVariableBase_exposer.staticmethod( "getClassTypeId" );
    }

}
