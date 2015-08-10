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
#include "ShaderVariableMIntBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

boost::python::list ShaderVariableMIntBase_getMFValue(OSG::ShaderVariableMIntBase *self)
{
   boost::python::list result;
   OSG::MFInt32 const * mf_data = self->getMFValue();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

void register_ShaderVariableMIntBase_class(){

    { //::OSG::ShaderVariableMIntBase
        typedef bp::class_< OSG::ShaderVariableMIntBase, bp::bases< OSG::ShaderValueVariable >, boost::noncopyable > ShaderVariableMIntBase_exposer_t;
        ShaderVariableMIntBase_exposer_t ShaderVariableMIntBase_exposer = ShaderVariableMIntBase_exposer_t( "ShaderVariableMIntBase", bp::no_init );
        bp::scope ShaderVariableMIntBase_scope( ShaderVariableMIntBase_exposer );
        bp::scope().attr("ValueFieldId") = (int)OSG::ShaderVariableMIntBase::ValueFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::ShaderVariableMIntBase::NextFieldId;
        { //::OSG::ShaderVariableMIntBase::copyFromBin
        
            typedef void ( ::OSG::ShaderVariableMIntBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ShaderVariableMIntBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::ShaderVariableMIntBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ShaderVariableMIntBase::copyToBin
        
            typedef void ( ::OSG::ShaderVariableMIntBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ShaderVariableMIntBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::ShaderVariableMIntBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ShaderVariableMIntBase::create
        
            typedef ::OSG::ShaderVariableMIntTransitPtr ( *create_function_type )(  );
            
            ShaderVariableMIntBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::ShaderVariableMIntBase::create ) );
        
        }
        { //::OSG::ShaderVariableMIntBase::createDependent
        
            typedef ::OSG::ShaderVariableMIntTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            ShaderVariableMIntBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::ShaderVariableMIntBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::ShaderVariableMIntBase::createLocal
        
            typedef ::OSG::ShaderVariableMIntTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            ShaderVariableMIntBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::ShaderVariableMIntBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::ShaderVariableMIntBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::ShaderVariableMIntBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            ShaderVariableMIntBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::ShaderVariableMIntBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::ShaderVariableMIntBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            ShaderVariableMIntBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::ShaderVariableMIntBase::getClassGroupId ) );
        
        }
        { //::OSG::ShaderVariableMIntBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            ShaderVariableMIntBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::ShaderVariableMIntBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::ShaderVariableMIntBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            ShaderVariableMIntBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::ShaderVariableMIntBase::getClassTypeId ) );
        
        }
        { //::OSG::ShaderVariableMIntBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::ShaderVariableMIntBase::*getContainerSize_function_type )(  ) const;
            
            ShaderVariableMIntBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::ShaderVariableMIntBase::getContainerSize ) );
        
        }
        { //::OSG::ShaderVariableMIntBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::ShaderVariableMIntBase::*getType_function_type )(  ) ;
            
            ShaderVariableMIntBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ShaderVariableMIntBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderVariableMIntBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::ShaderVariableMIntBase::*getType_function_type )(  ) const;
            
            ShaderVariableMIntBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ShaderVariableMIntBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderVariableMIntBase::getValue
        
            typedef ::OSG::Int32 ( ::OSG::ShaderVariableMIntBase::*getValue_function_type )( ::OSG::UInt32 const ) const;
            
            ShaderVariableMIntBase_exposer.def( 
                "getValue"
                , getValue_function_type( &::OSG::ShaderVariableMIntBase::getValue )
                , ( bp::arg("index") ) );
        
        }
        ShaderVariableMIntBase_exposer.staticmethod( "create" );
        ShaderVariableMIntBase_exposer.staticmethod( "createDependent" );
        ShaderVariableMIntBase_exposer.staticmethod( "createLocal" );
        ShaderVariableMIntBase_exposer.staticmethod( "getClassGroupId" );
        ShaderVariableMIntBase_exposer.staticmethod( "getClassType" );
        ShaderVariableMIntBase_exposer.staticmethod( "getClassTypeId" );
        ShaderVariableMIntBase_exposer.def("getMFValue",ShaderVariableMIntBase_getMFValue);
    }

}
