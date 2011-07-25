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
#include "OSGScripting_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "PythonScriptBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct PythonScriptBase_wrapper : OSG::PythonScriptBase, bp::wrapper< OSG::PythonScriptBase > {

    virtual ::OSG::UInt32 addField( ::OSG::UInt32 const uiFieldTypeId, ::OSG::Char8 const * szFieldName ) {
        if( bp::override func_addField = this->get_override( "addField" ) )
            return func_addField( uiFieldTypeId, szFieldName );
        else{
            return this->OSG::DynFieldContainer< OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > > >::addField( uiFieldTypeId, szFieldName );
        }
    }
    
    ::OSG::UInt32 default_addField( ::OSG::UInt32 const uiFieldTypeId, ::OSG::Char8 const * szFieldName ) {
        return OSG::DynFieldContainer< OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > > >::addField( uiFieldTypeId, szFieldName );
    }

    virtual ::OSG::UInt32 addField( ::OSG::Char8 const * szFieldType, ::OSG::Char8 const * szFieldName ) {
        if( bp::override func_addField = this->get_override( "addField" ) )
            return func_addField( szFieldType, szFieldName );
        else{
            return this->OSG::DynFieldContainer< OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > > >::addField( szFieldType, szFieldName );
        }
    }
    
    ::OSG::UInt32 default_addField( ::OSG::Char8 const * szFieldType, ::OSG::Char8 const * szFieldName ) {
        return OSG::DynFieldContainer< OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > > >::addField( szFieldType, szFieldName );
    }

    virtual ::OSG::FieldContainerType & getFinalType(  ){
        throw std::logic_error("warning W1049: This method could not be overriden in Python - method returns reference to local variable!");
    }

    virtual ::OSG::FieldContainerType const & getFinalType(  ) const {
        throw std::logic_error("warning W1049: This method could not be overriden in Python - method returns reference to local variable!");
    }

};

void register_PythonScriptBase_class(){

    { //::OSG::PythonScriptBase
        typedef bp::class_< PythonScriptBase_wrapper, bp::bases< OSG::Script >, boost::noncopyable > PythonScriptBase_exposer_t;
        PythonScriptBase_exposer_t PythonScriptBase_exposer = PythonScriptBase_exposer_t( "PythonScriptBase", bp::no_init );
        bp::scope PythonScriptBase_scope( PythonScriptBase_exposer );
        { //::OSG::PythonScriptBase::copyFromBin
        
            typedef void ( ::OSG::PythonScriptBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            PythonScriptBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::PythonScriptBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::PythonScriptBase::copyToBin
        
            typedef void ( ::OSG::PythonScriptBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            PythonScriptBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::PythonScriptBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::PythonScriptBase::create
        
            typedef ::OSG::PythonScriptTransitPtr ( *create_function_type )(  );
            
            PythonScriptBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::PythonScriptBase::create ) );
        
        }
        { //::OSG::PythonScriptBase::createDependent
        
            typedef ::OSG::PythonScriptTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            PythonScriptBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::PythonScriptBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::PythonScriptBase::createLocal
        
            typedef ::OSG::PythonScriptTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            PythonScriptBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::PythonScriptBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::PythonScriptBase::getBinSize
        
            typedef ::OSG::UInt32 ( ::OSG::PythonScriptBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            PythonScriptBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::PythonScriptBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::PythonScriptBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            PythonScriptBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::PythonScriptBase::getClassGroupId ) );
        
        }
        { //::OSG::PythonScriptBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            PythonScriptBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::PythonScriptBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::PythonScriptBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            PythonScriptBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::PythonScriptBase::getClassTypeId ) );
        
        }
        { //::OSG::PythonScriptBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::PythonScriptBase::*getContainerSize_function_type )(  ) const;
            
            PythonScriptBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::PythonScriptBase::getContainerSize ) );
        
        }
        { //::OSG::PythonScriptBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::PythonScriptBase::*getType_function_type )(  ) ;
            
            PythonScriptBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::PythonScriptBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PythonScriptBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::PythonScriptBase::*getType_function_type )(  ) const;
            
            PythonScriptBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::PythonScriptBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DynFieldContainer< OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > > >::addField
        
            typedef OSG::PythonScriptBase exported_class_t;
            typedef ::OSG::UInt32 ( exported_class_t::*addField_function_type )( ::OSG::FieldDescriptionBase const & ) ;
            
            PythonScriptBase_exposer.def( 
                "addField"
                , addField_function_type( &::OSG::DynFieldContainer< OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > > >::addField )
                , ( bp::arg("fieldDesc") ) );
        
        }
        { //::OSG::DynFieldContainer< OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > > >::addField
        
            typedef OSG::PythonScriptBase exported_class_t;
            typedef ::OSG::UInt32 ( exported_class_t::*addField_function_type )( ::OSG::UInt32 const,::OSG::Char8 const * ) ;
            typedef ::OSG::UInt32 ( PythonScriptBase_wrapper::*default_addField_function_type )( ::OSG::UInt32 const,::OSG::Char8 const * ) ;
            
            PythonScriptBase_exposer.def( 
                "addField"
                , addField_function_type(&::OSG::DynFieldContainer< OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > > >::addField)
                , default_addField_function_type(&PythonScriptBase_wrapper::default_addField)
                , ( bp::arg("uiFieldTypeId"), bp::arg("szFieldName") ) );
        
        }
        { //::OSG::DynFieldContainer< OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > > >::addField
        
            typedef OSG::PythonScriptBase exported_class_t;
            typedef ::OSG::UInt32 ( exported_class_t::*addField_function_type )( ::OSG::Char8 const *,::OSG::Char8 const * ) ;
            typedef ::OSG::UInt32 ( PythonScriptBase_wrapper::*default_addField_function_type )( ::OSG::Char8 const *,::OSG::Char8 const * ) ;
            
            PythonScriptBase_exposer.def( 
                "addField"
                , addField_function_type(&::OSG::DynFieldContainer< OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > > >::addField)
                , default_addField_function_type(&PythonScriptBase_wrapper::default_addField)
                , ( bp::arg("szFieldType"), bp::arg("szFieldName") ) );
        
        }
        { //::OSG::DynFieldContainer< OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > > >::getFinalType
        
            typedef OSG::PythonScriptBase exported_class_t;
            typedef ::OSG::FieldContainerType & ( PythonScriptBase_wrapper::*getFinalType_function_type )(  ) ;
            
            PythonScriptBase_exposer.def( 
                "getFinalType"
                , getFinalType_function_type( &PythonScriptBase_wrapper::getFinalType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DynFieldContainer< OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > > >::getFinalType
        
            typedef OSG::PythonScriptBase exported_class_t;
            typedef ::OSG::FieldContainerType const & ( PythonScriptBase_wrapper::*getFinalType_function_type )(  ) const;
            
            PythonScriptBase_exposer.def( 
                "getFinalType"
                , getFinalType_function_type( &PythonScriptBase_wrapper::getFinalType )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        PythonScriptBase_exposer.staticmethod( "create" );
        PythonScriptBase_exposer.staticmethod( "createDependent" );
        PythonScriptBase_exposer.staticmethod( "createLocal" );
        PythonScriptBase_exposer.staticmethod( "getClassGroupId" );
        PythonScriptBase_exposer.staticmethod( "getClassType" );
        PythonScriptBase_exposer.staticmethod( "getClassTypeId" );
    }

}
