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
#if WIN32
#pragma warning(disable : 4267)
#pragma warning(disable : 4344)
#endif

#include "boost/python.hpp"
#include "OSGDrawable_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "GeometryBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct GeometryBase_wrapper : OSG::GeometryBase, bp::wrapper< OSG::GeometryBase > {

    virtual void fill( ::OSG::DrawableStatsAttachment * pStat ){
        bp::override func_fill = this->get_override( "fill" );
        func_fill( boost::python::ptr(pStat) );
    }

};

boost::python::list GeometryBase_getMFProperties(OSG::GeometryBase *self)
{
   boost::python::list result;
   OSG::MFUnrecChildGeoVectorPropertyPtr const * mf_data = self->getMFProperties();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append(OSG::GeoVectorProperty::ObjRecPtr((*mf_data)[i]));
   }
   return result;
}

boost::python::list GeometryBase_getMFPropIndices(OSG::GeometryBase *self)
{
   boost::python::list result;
   OSG::MFUnrecChildGeoIntegralPropertyPtr const * mf_data = self->getMFPropIndices();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append(OSG::GeoIntegralProperty::ObjRecPtr((*mf_data)[i]));
   }
   return result;
}

void register_GeometryBase_class(){

    { //::OSG::GeometryBase
        typedef bp::class_< GeometryBase_wrapper, bp::bases< ::OSG::MaterialDrawable >, boost::noncopyable > GeometryBase_exposer_t;
        GeometryBase_exposer_t GeometryBase_exposer = GeometryBase_exposer_t( "GeometryBase", bp::no_init );
        bp::scope GeometryBase_scope( GeometryBase_exposer );
        bp::scope().attr("TypesFieldId") = (int)OSG::GeometryBase::TypesFieldId;
        bp::scope().attr("LengthsFieldId") = (int)OSG::GeometryBase::LengthsFieldId;
        bp::scope().attr("PropertiesFieldId") = (int)OSG::GeometryBase::PropertiesFieldId;
        bp::scope().attr("PropIndicesFieldId") = (int)OSG::GeometryBase::PropIndicesFieldId;
        bp::scope().attr("PatchVerticesFieldId") = (int)OSG::GeometryBase::PatchVerticesFieldId;
        bp::scope().attr("DlistCacheFieldId") = (int)OSG::GeometryBase::DlistCacheFieldId;
        bp::scope().attr("UseVAOFieldId") = (int)OSG::GeometryBase::UseVAOFieldId;
        bp::scope().attr("UseAttribCallsFieldId") = (int)OSG::GeometryBase::UseAttribCallsFieldId;
        bp::scope().attr("ClassicGLIdFieldId") = (int)OSG::GeometryBase::ClassicGLIdFieldId;
        bp::scope().attr("AttGLIdFieldId") = (int)OSG::GeometryBase::AttGLIdFieldId;
        bp::scope().attr("VaoGLIdFieldId") = (int)OSG::GeometryBase::VaoGLIdFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::GeometryBase::NextFieldId;
        { //::OSG::GeometryBase::assignPropIndices
        
            typedef void ( ::OSG::GeometryBase::*assignPropIndices_function_type )( ::OSG::MFUnrecChildGeoIntegralPropertyPtr const & ) ;
            
            GeometryBase_exposer.def( 
                "assignPropIndices"
                , assignPropIndices_function_type( &::OSG::GeometryBase::assignPropIndices )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::GeometryBase::assignProperties
        
            typedef void ( ::OSG::GeometryBase::*assignProperties_function_type )( ::OSG::MFUnrecChildGeoVectorPropertyPtr const & ) ;
            
            GeometryBase_exposer.def( 
                "assignProperties"
                , assignProperties_function_type( &::OSG::GeometryBase::assignProperties )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::GeometryBase::clearPropIndices
        
            typedef void ( ::OSG::GeometryBase::*clearPropIndices_function_type )(  ) ;
            
            GeometryBase_exposer.def( 
                "clearPropIndices"
                , clearPropIndices_function_type( &::OSG::GeometryBase::clearPropIndices ) );
        
        }
        { //::OSG::GeometryBase::clearProperties
        
            typedef void ( ::OSG::GeometryBase::*clearProperties_function_type )(  ) ;
            
            GeometryBase_exposer.def( 
                "clearProperties"
                , clearProperties_function_type( &::OSG::GeometryBase::clearProperties ) );
        
        }
        { //::OSG::GeometryBase::copyFromBin
        
            typedef void ( ::OSG::GeometryBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            GeometryBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::GeometryBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::GeometryBase::copyToBin
        
            typedef void ( ::OSG::GeometryBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            GeometryBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::GeometryBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::GeometryBase::create
        
            typedef ::OSG::GeometryTransitPtr ( *create_function_type )(  );
            
            GeometryBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::GeometryBase::create ) );
        
        }
        { //::OSG::GeometryBase::createDependent
        
            typedef ::OSG::GeometryTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            GeometryBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::GeometryBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::GeometryBase::createLocal
        
            typedef ::OSG::GeometryTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            GeometryBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::GeometryBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::GeometryBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::GeometryBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            GeometryBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::GeometryBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::GeometryBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            GeometryBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::GeometryBase::getClassGroupId ) );
        
        }
        { //::OSG::GeometryBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            GeometryBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::GeometryBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::GeometryBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            GeometryBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::GeometryBase::getClassTypeId ) );
        
        }
        { //::OSG::GeometryBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::GeometryBase::*getContainerSize_function_type )(  ) const;
            
            GeometryBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::GeometryBase::getContainerSize ) );
        
        }
        { //::OSG::GeometryBase::getDlistCache
        
            typedef bool ( ::OSG::GeometryBase::*getDlistCache_function_type )(  ) const;
            
            GeometryBase_exposer.def( 
                "getDlistCache"
                , getDlistCache_function_type( &::OSG::GeometryBase::getDlistCache ) );
        
        }
        { //::OSG::GeometryBase::getLengths
        
            typedef ::OSG::GeoIntegralProperty * ( ::OSG::GeometryBase::*getLengths_function_type )(  ) const;
            
            GeometryBase_exposer.def( 
                "getLengths"
                , getLengths_function_type( &::OSG::GeometryBase::getLengths )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeometryBase::getPatchVertices
        
            typedef ::OSG::UInt32 ( ::OSG::GeometryBase::*getPatchVertices_function_type )(  ) const;
            
            GeometryBase_exposer.def( 
                "getPatchVertices"
                , getPatchVertices_function_type( &::OSG::GeometryBase::getPatchVertices ) );
        
        }
        { //::OSG::GeometryBase::getPropIndices
        
            typedef ::OSG::GeoIntegralProperty * ( ::OSG::GeometryBase::*getPropIndices_function_type )( ::OSG::UInt32 const ) const;
            
            GeometryBase_exposer.def( 
                "getPropIndices"
                , getPropIndices_function_type( &::OSG::GeometryBase::getPropIndices )
                , ( bp::arg("index") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeometryBase::getProperties
        
            typedef ::OSG::GeoVectorProperty * ( ::OSG::GeometryBase::*getProperties_function_type )( ::OSG::UInt32 const ) const;
            
            GeometryBase_exposer.def( 
                "getProperties"
                , getProperties_function_type( &::OSG::GeometryBase::getProperties )
                , ( bp::arg("index") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeometryBase::getSFDlistCache
        
            typedef ::OSG::SFBool const * ( ::OSG::GeometryBase::*getSFDlistCache_function_type )(  ) const;
            
            GeometryBase_exposer.def( 
                "getSFDlistCache"
                , getSFDlistCache_function_type( &::OSG::GeometryBase::getSFDlistCache )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeometryBase::getSFLengths
        
            typedef ::OSG::SFUnrecChildGeoIntegralPropertyPtr const * ( ::OSG::GeometryBase::*getSFLengths_function_type )(  ) const;
            
            GeometryBase_exposer.def( 
                "getSFLengths"
                , getSFLengths_function_type( &::OSG::GeometryBase::getSFLengths )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeometryBase::getSFPatchVertices
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::GeometryBase::*getSFPatchVertices_function_type )(  ) const;
            
            GeometryBase_exposer.def( 
                "getSFPatchVertices"
                , getSFPatchVertices_function_type( &::OSG::GeometryBase::getSFPatchVertices )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeometryBase::getSFTypes
        
            typedef ::OSG::SFUnrecChildGeoIntegralPropertyPtr const * ( ::OSG::GeometryBase::*getSFTypes_function_type )(  ) const;
            
            GeometryBase_exposer.def( 
                "getSFTypes"
                , getSFTypes_function_type( &::OSG::GeometryBase::getSFTypes )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeometryBase::getSFUseAttribCalls
        
            typedef ::OSG::SFBool const * ( ::OSG::GeometryBase::*getSFUseAttribCalls_function_type )(  ) const;
            
            GeometryBase_exposer.def( 
                "getSFUseAttribCalls"
                , getSFUseAttribCalls_function_type( &::OSG::GeometryBase::getSFUseAttribCalls )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeometryBase::getSFUseVAO
        
            typedef ::OSG::SFBool const * ( ::OSG::GeometryBase::*getSFUseVAO_function_type )(  ) const;
            
            GeometryBase_exposer.def( 
                "getSFUseVAO"
                , getSFUseVAO_function_type( &::OSG::GeometryBase::getSFUseVAO )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeometryBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::GeometryBase::*getType_function_type )(  ) ;
            
            GeometryBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::GeometryBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeometryBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::GeometryBase::*getType_function_type )(  ) const;
            
            GeometryBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::GeometryBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeometryBase::getTypes
        
            typedef ::OSG::GeoIntegralProperty * ( ::OSG::GeometryBase::*getTypes_function_type )(  ) const;
            
            GeometryBase_exposer.def( 
                "getTypes"
                , getTypes_function_type( &::OSG::GeometryBase::getTypes )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeometryBase::getUseAttribCalls
        
            typedef bool ( ::OSG::GeometryBase::*getUseAttribCalls_function_type )(  ) const;
            
            GeometryBase_exposer.def( 
                "getUseAttribCalls"
                , getUseAttribCalls_function_type( &::OSG::GeometryBase::getUseAttribCalls ) );
        
        }
        { //::OSG::GeometryBase::getUseVAO
        
            typedef bool ( ::OSG::GeometryBase::*getUseVAO_function_type )(  ) const;
            
            GeometryBase_exposer.def( 
                "getUseVAO"
                , getUseVAO_function_type( &::OSG::GeometryBase::getUseVAO ) );
        
        }
        { //::OSG::GeometryBase::pushToPropIndices
        
            typedef void ( ::OSG::GeometryBase::*pushToPropIndices_function_type )( ::OSG::GeoIntegralProperty * const ) ;
            
            GeometryBase_exposer.def( 
                "pushToPropIndices"
                , pushToPropIndices_function_type( &::OSG::GeometryBase::pushToPropIndices )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::GeometryBase::pushToProperties
        
            typedef void ( ::OSG::GeometryBase::*pushToProperties_function_type )( ::OSG::GeoVectorProperty * const ) ;
            
            GeometryBase_exposer.def( 
                "pushToProperties"
                , pushToProperties_function_type( &::OSG::GeometryBase::pushToProperties )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::GeometryBase::removeFromPropIndices
        
            typedef void ( ::OSG::GeometryBase::*removeFromPropIndices_function_type )( ::OSG::UInt32 ) ;
            
            GeometryBase_exposer.def( 
                "removeFromPropIndices"
                , removeFromPropIndices_function_type( &::OSG::GeometryBase::removeFromPropIndices )
                , ( bp::arg("uiIndex") ) );
        
        }
        { //::OSG::GeometryBase::removeFromProperties
        
            typedef void ( ::OSG::GeometryBase::*removeFromProperties_function_type )( ::OSG::UInt32 ) ;
            
            GeometryBase_exposer.def( 
                "removeFromProperties"
                , removeFromProperties_function_type( &::OSG::GeometryBase::removeFromProperties )
                , ( bp::arg("uiIndex") ) );
        
        }
        { //::OSG::GeometryBase::removeObjFromPropIndices
        
            typedef void ( ::OSG::GeometryBase::*removeObjFromPropIndices_function_type )( ::OSG::GeoIntegralProperty * const ) ;
            
            GeometryBase_exposer.def( 
                "removeObjFromPropIndices"
                , removeObjFromPropIndices_function_type( &::OSG::GeometryBase::removeObjFromPropIndices )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::GeometryBase::removeObjFromProperties
        
            typedef void ( ::OSG::GeometryBase::*removeObjFromProperties_function_type )( ::OSG::GeoVectorProperty * const ) ;
            
            GeometryBase_exposer.def( 
                "removeObjFromProperties"
                , removeObjFromProperties_function_type( &::OSG::GeometryBase::removeObjFromProperties )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::GeometryBase::setDlistCache
        
            typedef void ( ::OSG::GeometryBase::*setDlistCache_function_type )( bool const ) ;
            
            GeometryBase_exposer.def( 
                "setDlistCache"
                , setDlistCache_function_type( &::OSG::GeometryBase::setDlistCache )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::GeometryBase::setLengths
        
            typedef void ( ::OSG::GeometryBase::*setLengths_function_type )( ::OSG::GeoIntegralProperty * const ) ;
            
            GeometryBase_exposer.def( 
                "setLengths"
                , setLengths_function_type( &::OSG::GeometryBase::setLengths )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::GeometryBase::setPatchVertices
        
            typedef void ( ::OSG::GeometryBase::*setPatchVertices_function_type )( ::OSG::UInt32 const ) ;
            
            GeometryBase_exposer.def( 
                "setPatchVertices"
                , setPatchVertices_function_type( &::OSG::GeometryBase::setPatchVertices )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::GeometryBase::setTypes
        
            typedef void ( ::OSG::GeometryBase::*setTypes_function_type )( ::OSG::GeoIntegralProperty * const ) ;
            
            GeometryBase_exposer.def( 
                "setTypes"
                , setTypes_function_type( &::OSG::GeometryBase::setTypes )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::GeometryBase::setUseAttribCalls
        
            typedef void ( ::OSG::GeometryBase::*setUseAttribCalls_function_type )( bool const ) ;
            
            GeometryBase_exposer.def( 
                "setUseAttribCalls"
                , setUseAttribCalls_function_type( &::OSG::GeometryBase::setUseAttribCalls )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::GeometryBase::setUseVAO
        
            typedef void ( ::OSG::GeometryBase::*setUseVAO_function_type )( bool const ) ;
            
            GeometryBase_exposer.def( 
                "setUseVAO"
                , setUseVAO_function_type( &::OSG::GeometryBase::setUseVAO )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::Drawable::fill
        
            typedef void ( ::OSG::Drawable::*fill_function_type )( ::OSG::DrawableStatsAttachment * ) ;
            
            GeometryBase_exposer.def( 
                "fill"
                , bp::pure_virtual( fill_function_type(&::OSG::Drawable::fill) )
                , ( bp::arg("pStat") ) );
        
        }
        GeometryBase_exposer.staticmethod( "create" );
        GeometryBase_exposer.staticmethod( "createDependent" );
        GeometryBase_exposer.staticmethod( "createLocal" );
        GeometryBase_exposer.staticmethod( "getClassGroupId" );
        GeometryBase_exposer.staticmethod( "getClassType" );
        GeometryBase_exposer.staticmethod( "getClassTypeId" );
        GeometryBase_exposer.def("getMFProperties",GeometryBase_getMFProperties);
        GeometryBase_exposer.def("getMFPropIndices",GeometryBase_getMFPropIndices);
    }

}
