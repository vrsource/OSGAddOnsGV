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
#include "ShaderVariableMVec4fBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

boost::python::list ShaderVariableMVec4fBase_getMFValue(OSG::ShaderVariableMVec4fBase *self)
{
   boost::python::list result;
   OSG::MFVec4f const * mf_data = self->getMFValue();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

void register_ShaderVariableMVec4fBase_class(){

    { //::OSG::ShaderVariableMVec4fBase
        typedef bp::class_< OSG::ShaderVariableMVec4fBase, bp::bases< OSG::ShaderValueVariable >, boost::noncopyable > ShaderVariableMVec4fBase_exposer_t;
        ShaderVariableMVec4fBase_exposer_t ShaderVariableMVec4fBase_exposer = ShaderVariableMVec4fBase_exposer_t( "ShaderVariableMVec4fBase", bp::no_init );
        bp::scope ShaderVariableMVec4fBase_scope( ShaderVariableMVec4fBase_exposer );
        bp::scope().attr("ValueFieldId") = (int)OSG::ShaderVariableMVec4fBase::ValueFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::ShaderVariableMVec4fBase::NextFieldId;
        { //::OSG::ShaderVariableMVec4fBase::copyFromBin
        
            typedef void ( ::OSG::ShaderVariableMVec4fBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ShaderVariableMVec4fBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::ShaderVariableMVec4fBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ShaderVariableMVec4fBase::copyToBin
        
            typedef void ( ::OSG::ShaderVariableMVec4fBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ShaderVariableMVec4fBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::ShaderVariableMVec4fBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ShaderVariableMVec4fBase::create
        
            typedef ::OSG::ShaderVariableMVec4fTransitPtr ( *create_function_type )(  );
            
            ShaderVariableMVec4fBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::ShaderVariableMVec4fBase::create ) );
        
        }
        { //::OSG::ShaderVariableMVec4fBase::createDependent
        
            typedef ::OSG::ShaderVariableMVec4fTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            ShaderVariableMVec4fBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::ShaderVariableMVec4fBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::ShaderVariableMVec4fBase::createLocal
        
            typedef ::OSG::ShaderVariableMVec4fTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            ShaderVariableMVec4fBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::ShaderVariableMVec4fBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::ShaderVariableMVec4fBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::ShaderVariableMVec4fBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            ShaderVariableMVec4fBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::ShaderVariableMVec4fBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::ShaderVariableMVec4fBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            ShaderVariableMVec4fBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::ShaderVariableMVec4fBase::getClassGroupId ) );
        
        }
        { //::OSG::ShaderVariableMVec4fBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            ShaderVariableMVec4fBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::ShaderVariableMVec4fBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::ShaderVariableMVec4fBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            ShaderVariableMVec4fBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::ShaderVariableMVec4fBase::getClassTypeId ) );
        
        }
        { //::OSG::ShaderVariableMVec4fBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::ShaderVariableMVec4fBase::*getContainerSize_function_type )(  ) const;
            
            ShaderVariableMVec4fBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::ShaderVariableMVec4fBase::getContainerSize ) );
        
        }
        { //::OSG::ShaderVariableMVec4fBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::ShaderVariableMVec4fBase::*getType_function_type )(  ) ;
            
            ShaderVariableMVec4fBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ShaderVariableMVec4fBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderVariableMVec4fBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::ShaderVariableMVec4fBase::*getType_function_type )(  ) const;
            
            ShaderVariableMVec4fBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ShaderVariableMVec4fBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderVariableMVec4fBase::getValue
        
            typedef ::OSG::Vec4f const & ( ::OSG::ShaderVariableMVec4fBase::*getValue_function_type )( ::OSG::UInt32 const ) const;
            
            ShaderVariableMVec4fBase_exposer.def( 
                "getValue"
                , getValue_function_type( &::OSG::ShaderVariableMVec4fBase::getValue )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        ShaderVariableMVec4fBase_exposer.staticmethod( "create" );
        ShaderVariableMVec4fBase_exposer.staticmethod( "createDependent" );
        ShaderVariableMVec4fBase_exposer.staticmethod( "createLocal" );
        ShaderVariableMVec4fBase_exposer.staticmethod( "getClassGroupId" );
        ShaderVariableMVec4fBase_exposer.staticmethod( "getClassType" );
        ShaderVariableMVec4fBase_exposer.staticmethod( "getClassTypeId" );
        ShaderVariableMVec4fBase_exposer.def("getMFValue",ShaderVariableMVec4fBase_getMFValue);
    }

}
