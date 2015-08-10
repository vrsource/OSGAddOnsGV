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
#include "OSGDynamics_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "AnimTemplateBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

boost::python::list AnimTemplateBase_getMFSources(OSG::AnimTemplateBase *self)
{
   boost::python::list result;
   OSG::MFUnrecAnimDataSourcePtr const * mf_data = self->getMFSources();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append(OSG::AnimDataSource::ObjRecPtr((*mf_data)[i]));
   }
   return result;
}

boost::python::list AnimTemplateBase_getMFTargetIds(OSG::AnimTemplateBase *self)
{
   boost::python::list result;
   OSG::MFString const * mf_data = self->getMFTargetIds();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

void register_AnimTemplateBase_class(){

    { //::OSG::AnimTemplateBase
        typedef bp::class_< OSG::AnimTemplateBase, bp::bases< ::OSG::AttachmentContainer >, boost::noncopyable > AnimTemplateBase_exposer_t;
        AnimTemplateBase_exposer_t AnimTemplateBase_exposer = AnimTemplateBase_exposer_t( "AnimTemplateBase", bp::no_init );
        bp::scope AnimTemplateBase_scope( AnimTemplateBase_exposer );
        bp::scope().attr("NameFieldId") = (int)OSG::AnimTemplateBase::NameFieldId;
        bp::scope().attr("SourcesFieldId") = (int)OSG::AnimTemplateBase::SourcesFieldId;
        bp::scope().attr("TargetIdsFieldId") = (int)OSG::AnimTemplateBase::TargetIdsFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::AnimTemplateBase::NextFieldId;
        { //::OSG::AnimTemplateBase::assignSources
        
            typedef void ( ::OSG::AnimTemplateBase::*assignSources_function_type )( ::OSG::MFUnrecAnimDataSourcePtr const & ) ;
            
            AnimTemplateBase_exposer.def( 
                "assignSources"
                , assignSources_function_type( &::OSG::AnimTemplateBase::assignSources )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::AnimTemplateBase::clearSources
        
            typedef void ( ::OSG::AnimTemplateBase::*clearSources_function_type )(  ) ;
            
            AnimTemplateBase_exposer.def( 
                "clearSources"
                , clearSources_function_type( &::OSG::AnimTemplateBase::clearSources ) );
        
        }
        { //::OSG::AnimTemplateBase::copyFromBin
        
            typedef void ( ::OSG::AnimTemplateBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            AnimTemplateBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::AnimTemplateBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::AnimTemplateBase::copyToBin
        
            typedef void ( ::OSG::AnimTemplateBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            AnimTemplateBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::AnimTemplateBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::AnimTemplateBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::AnimTemplateBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            AnimTemplateBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::AnimTemplateBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::AnimTemplateBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            AnimTemplateBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::AnimTemplateBase::getClassGroupId ) );
        
        }
        { //::OSG::AnimTemplateBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            AnimTemplateBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::AnimTemplateBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::AnimTemplateBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            AnimTemplateBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::AnimTemplateBase::getClassTypeId ) );
        
        }
        { //::OSG::AnimTemplateBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::AnimTemplateBase::*getContainerSize_function_type )(  ) const;
            
            AnimTemplateBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::AnimTemplateBase::getContainerSize ) );
        
        }
        { //::OSG::AnimTemplateBase::getName
        
            typedef ::std::string const & ( ::OSG::AnimTemplateBase::*getName_function_type )(  ) const;
            
            AnimTemplateBase_exposer.def( 
                "getName"
                , getName_function_type( &::OSG::AnimTemplateBase::getName )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::AnimTemplateBase::getSFName
        
            typedef ::OSG::SFString const * ( ::OSG::AnimTemplateBase::*getSFName_function_type )(  ) const;
            
            AnimTemplateBase_exposer.def( 
                "getSFName"
                , getSFName_function_type( &::OSG::AnimTemplateBase::getSFName )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::AnimTemplateBase::getSources
        
            typedef ::OSG::AnimDataSource * ( ::OSG::AnimTemplateBase::*getSources_function_type )( ::OSG::UInt32 const ) const;
            
            AnimTemplateBase_exposer.def( 
                "getSources"
                , getSources_function_type( &::OSG::AnimTemplateBase::getSources )
                , ( bp::arg("index") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::AnimTemplateBase::getTargetIds
        
            typedef ::std::string const & ( ::OSG::AnimTemplateBase::*getTargetIds_function_type )( ::OSG::UInt32 const ) const;
            
            AnimTemplateBase_exposer.def( 
                "getTargetIds"
                , getTargetIds_function_type( &::OSG::AnimTemplateBase::getTargetIds )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::AnimTemplateBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::AnimTemplateBase::*getType_function_type )(  ) ;
            
            AnimTemplateBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::AnimTemplateBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::AnimTemplateBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::AnimTemplateBase::*getType_function_type )(  ) const;
            
            AnimTemplateBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::AnimTemplateBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::AnimTemplateBase::pushToSources
        
            typedef void ( ::OSG::AnimTemplateBase::*pushToSources_function_type )( ::OSG::AnimDataSource * const ) ;
            
            AnimTemplateBase_exposer.def( 
                "pushToSources"
                , pushToSources_function_type( &::OSG::AnimTemplateBase::pushToSources )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::AnimTemplateBase::removeFromSources
        
            typedef void ( ::OSG::AnimTemplateBase::*removeFromSources_function_type )( ::OSG::UInt32 ) ;
            
            AnimTemplateBase_exposer.def( 
                "removeFromSources"
                , removeFromSources_function_type( &::OSG::AnimTemplateBase::removeFromSources )
                , ( bp::arg("uiIndex") ) );
        
        }
        { //::OSG::AnimTemplateBase::removeObjFromSources
        
            typedef void ( ::OSG::AnimTemplateBase::*removeObjFromSources_function_type )( ::OSG::AnimDataSource * const ) ;
            
            AnimTemplateBase_exposer.def( 
                "removeObjFromSources"
                , removeObjFromSources_function_type( &::OSG::AnimTemplateBase::removeObjFromSources )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::AnimTemplateBase::setName
        
            typedef void ( ::OSG::AnimTemplateBase::*setName_function_type )( ::std::string const & ) ;
            
            AnimTemplateBase_exposer.def( 
                "setName"
                , setName_function_type( &::OSG::AnimTemplateBase::setName )
                , ( bp::arg("value") ) );
        
        }
        AnimTemplateBase_exposer.staticmethod( "getClassGroupId" );
        AnimTemplateBase_exposer.staticmethod( "getClassType" );
        AnimTemplateBase_exposer.staticmethod( "getClassTypeId" );
        AnimTemplateBase_exposer.def("getMFSources",AnimTemplateBase_getMFSources);
        AnimTemplateBase_exposer.def("getMFTargetIds",AnimTemplateBase_getMFTargetIds);
    }

}
