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
#pragma GCC diagnostic warning "-Wshadow"
#endif
#if WIN32
#pragma warning(disable : 4267)
#pragma warning(disable : 4344)
#endif

#include "boost/python.hpp"
#include "OSGScripting_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "ScriptBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct ScriptBase_wrapper : OSG::ScriptBase, bp::wrapper< OSG::ScriptBase > {

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

    virtual void dump( ::OSG::UInt32 uiIndent=0, long unsigned int const bvFlags=0 ) const  {
        if( bp::override func_dump = this->get_override( "dump" ) )
            func_dump( uiIndent, bvFlags );
        else{
            this->OSG::DynFieldContainer< OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > > >::dump( uiIndent, bvFlags );
        }
    }
    
    void default_dump( ::OSG::UInt32 uiIndent=0, long unsigned int const bvFlags=0 ) const  {
        OSG::DynFieldContainer< OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > > >::dump( uiIndent, bvFlags );
    }

    virtual void frame( ::OSG::Time oTime, ::OSG::UInt32 uiFrame ){
        bp::override func_frame = this->get_override( "frame" );
        func_frame( oTime, uiFrame );
    }

    virtual ::OSG::FieldContainerType & getFinalType(  ){
        throw std::logic_error("warning W1049: This method could not be overriden in Python - method returns reference to local variable!");
    }

    virtual ::OSG::FieldContainerType const & getFinalType(  ) const {
        throw std::logic_error("warning W1049: This method could not be overriden in Python - method returns reference to local variable!");
    }

};

void register_ScriptBase_class(){

    { //::OSG::ScriptBase
        typedef bp::class_< ScriptBase_wrapper, bp::bases< OSG::DynFieldContainer< OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > > > >, boost::noncopyable > ScriptBase_exposer_t;
        ScriptBase_exposer_t ScriptBase_exposer = ScriptBase_exposer_t( "ScriptBase", bp::no_init );
        bp::scope ScriptBase_scope( ScriptBase_exposer );
        bp::scope().attr("PriorityFieldId")   = (int)OSG::ScriptBase::PriorityFieldId;
        bp::scope().attr("PriorityFieldMask") = (int)OSG::TypeTraits<OSG::BitVector>::One << OSG::ScriptBase::PriorityFieldId;
        bp::scope().attr("ScriptFieldId")   = (int)OSG::ScriptBase::ScriptFieldId;
        bp::scope().attr("ScriptFieldMask") = (int)OSG::TypeTraits<OSG::BitVector>::One << OSG::ScriptBase::ScriptFieldId;
        bp::scope().attr("PriorityFieldId") = (int)OSG::ScriptBase::PriorityFieldId;
        bp::scope().attr("ScriptFieldId") = (int)OSG::ScriptBase::ScriptFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::ScriptBase::NextFieldId;
        { //::OSG::ScriptBase::copyFromBin
        
            typedef void ( ::OSG::ScriptBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ScriptBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::ScriptBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ScriptBase::copyToBin
        
            typedef void ( ::OSG::ScriptBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ScriptBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::ScriptBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ScriptBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::ScriptBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            ScriptBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::ScriptBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::ScriptBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            ScriptBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::ScriptBase::getClassGroupId ) );
        
        }
        { //::OSG::ScriptBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            ScriptBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::ScriptBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::ScriptBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            ScriptBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::ScriptBase::getClassTypeId ) );
        
        }
        { //::OSG::ScriptBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::ScriptBase::*getContainerSize_function_type )(  ) const;
            
            ScriptBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::ScriptBase::getContainerSize ) );
        
        }
        { //::OSG::ScriptBase::getPriority
        
            typedef ::OSG::Int32 ( ::OSG::ScriptBase::*getPriority_function_type )(  ) const;
            
            ScriptBase_exposer.def( 
                "getPriority"
                , getPriority_function_type( &::OSG::ScriptBase::getPriority ) );
        
        }
        { //::OSG::ScriptBase::getSFPriority
        
            typedef ::OSG::SFInt32 const * ( ::OSG::ScriptBase::*getSFPriority_function_type )(  ) const;
            
            ScriptBase_exposer.def( 
                "getSFPriority"
                , getSFPriority_function_type( &::OSG::ScriptBase::getSFPriority )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ScriptBase::getSFScript
        
            typedef ::OSG::SFString const * ( ::OSG::ScriptBase::*getSFScript_function_type )(  ) const;
            
            ScriptBase_exposer.def( 
                "getSFScript"
                , getSFScript_function_type( &::OSG::ScriptBase::getSFScript )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ScriptBase::getScript
        
            typedef ::std::string const & ( ::OSG::ScriptBase::*getScript_function_type )(  ) const;
            
            ScriptBase_exposer.def( 
                "getScript"
                , getScript_function_type( &::OSG::ScriptBase::getScript )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::ScriptBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::ScriptBase::*getType_function_type )(  ) ;
            
            ScriptBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ScriptBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ScriptBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::ScriptBase::*getType_function_type )(  ) const;
            
            ScriptBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ScriptBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ScriptBase::setPriority
        
            typedef void ( ::OSG::ScriptBase::*setPriority_function_type )( ::OSG::Int32 const ) ;
            
            ScriptBase_exposer.def( 
                "setPriority"
                , setPriority_function_type( &::OSG::ScriptBase::setPriority )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ScriptBase::setScript
        
            typedef void ( ::OSG::ScriptBase::*setScript_function_type )( ::std::string const & ) ;
            
            ScriptBase_exposer.def( 
                "setScript"
                , setScript_function_type( &::OSG::ScriptBase::setScript )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::DynFieldContainer< OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > > >::addField
        
            typedef OSG::ScriptBase exported_class_t;
            typedef ::OSG::UInt32 ( exported_class_t::*addField_function_type )( ::OSG::FieldDescriptionBase const & ) ;
            
            ScriptBase_exposer.def( 
                "addField"
                , addField_function_type( &::OSG::DynFieldContainer< OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > > >::addField )
                , ( bp::arg("fieldDesc") ) );
        
        }
        { //::OSG::DynFieldContainer< OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > > >::addField
        
            typedef OSG::ScriptBase exported_class_t;
            typedef ::OSG::UInt32 ( exported_class_t::*addField_function_type )( ::OSG::UInt32 const,::OSG::Char8 const * ) ;
            typedef ::OSG::UInt32 ( ScriptBase_wrapper::*default_addField_function_type )( ::OSG::UInt32 const,::OSG::Char8 const * ) ;
            
            ScriptBase_exposer.def( 
                "addField"
                , addField_function_type(&::OSG::DynFieldContainer< OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > > >::addField)
                , default_addField_function_type(&ScriptBase_wrapper::default_addField)
                , ( bp::arg("uiFieldTypeId"), bp::arg("szFieldName") ) );
        
        }
        { //::OSG::DynFieldContainer< OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > > >::addField
        
            typedef OSG::ScriptBase exported_class_t;
            typedef ::OSG::UInt32 ( exported_class_t::*addField_function_type )( ::OSG::Char8 const *,::OSG::Char8 const * ) ;
            typedef ::OSG::UInt32 ( ScriptBase_wrapper::*default_addField_function_type )( ::OSG::Char8 const *,::OSG::Char8 const * ) ;
            
            ScriptBase_exposer.def( 
                "addField"
                , addField_function_type(&::OSG::DynFieldContainer< OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > > >::addField)
                , default_addField_function_type(&ScriptBase_wrapper::default_addField)
                , ( bp::arg("szFieldType"), bp::arg("szFieldName") ) );
        
        }
        { //::OSG::DynFieldContainer< OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > > >::dump
        
            typedef OSG::ScriptBase exported_class_t;
            typedef void ( exported_class_t::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            typedef void ( ScriptBase_wrapper::*default_dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            ScriptBase_exposer.def( 
                "dump"
                , dump_function_type(&::OSG::DynFieldContainer< OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > > >::dump)
                , default_dump_function_type(&ScriptBase_wrapper::default_dump)
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::FrameTaskInterface::frame
        
            typedef void ( ::OSG::FrameTaskInterface::*frame_function_type )( ::OSG::Time,::OSG::UInt32 ) ;
            
            ScriptBase_exposer.def( 
                "frame"
                , bp::pure_virtual( frame_function_type(&::OSG::FrameTaskInterface::frame) )
                , ( bp::arg("oTime"), bp::arg("uiFrame") ) );
        
        }
        { //::OSG::DynFieldContainer< OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > > >::getFinalType
        
            typedef OSG::ScriptBase exported_class_t;
            typedef ::OSG::FieldContainerType & ( ScriptBase_wrapper::*getFinalType_function_type )(  ) ;
            
            ScriptBase_exposer.def( 
                "getFinalType"
                , getFinalType_function_type( &ScriptBase_wrapper::getFinalType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DynFieldContainer< OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > > >::getFinalType
        
            typedef OSG::ScriptBase exported_class_t;
            typedef ::OSG::FieldContainerType const & ( ScriptBase_wrapper::*getFinalType_function_type )(  ) const;
            
            ScriptBase_exposer.def( 
                "getFinalType"
                , getFinalType_function_type( &ScriptBase_wrapper::getFinalType )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        ScriptBase_exposer.staticmethod( "getClassGroupId" );
        ScriptBase_exposer.staticmethod( "getClassType" );
        ScriptBase_exposer.staticmethod( "getClassTypeId" );
        ScriptBase_exposer.add_property("Priority", &OSG::ScriptBase::getPriority, &OSG::ScriptBase::setPriority);
        ScriptBase_exposer.add_property("Script", bp::make_function(&OSG::ScriptBase::getScript, bp::return_value_policy<bp::copy_const_reference>()), &OSG::ScriptBase::setScript);
    }

}
