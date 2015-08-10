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
#include "OSGEffectGroups_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "FishEyeProjectorBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

boost::python::list FishEyeProjectorBase_getMFGeometries(OSG::FishEyeProjectorBase *self)
{
   boost::python::list result;
   OSG::MFUnrecGeometryPtr const * mf_data = self->getMFGeometries();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append(OSG::Geometry::ObjRecPtr((*mf_data)[i]));
   }
   return result;
}

void register_FishEyeProjectorBase_class(){

    { //::OSG::FishEyeProjectorBase
        typedef bp::class_< OSG::FishEyeProjectorBase, bp::bases< ::OSG::Stage >, boost::noncopyable > FishEyeProjectorBase_exposer_t;
        FishEyeProjectorBase_exposer_t FishEyeProjectorBase_exposer = FishEyeProjectorBase_exposer_t( "FishEyeProjectorBase", bp::no_init );
        bp::scope FishEyeProjectorBase_scope( FishEyeProjectorBase_exposer );
        bp::scope().attr("ModeFieldId") = (int)OSG::FishEyeProjectorBase::ModeFieldId;
        bp::scope().attr("GeometriesFieldId") = (int)OSG::FishEyeProjectorBase::GeometriesFieldId;
        bp::scope().attr("ShowDomeIntensityFieldId") = (int)OSG::FishEyeProjectorBase::ShowDomeIntensityFieldId;
        bp::scope().attr("ResolutionFieldId") = (int)OSG::FishEyeProjectorBase::ResolutionFieldId;
        bp::scope().attr("MeshRefinementLevelFieldId") = (int)OSG::FishEyeProjectorBase::MeshRefinementLevelFieldId;
        bp::scope().attr("BufferFormatFieldId") = (int)OSG::FishEyeProjectorBase::BufferFormatFieldId;
        bp::scope().attr("DomeRadiusFieldId") = (int)OSG::FishEyeProjectorBase::DomeRadiusFieldId;
        bp::scope().attr("MirrorRadiusFieldId") = (int)OSG::FishEyeProjectorBase::MirrorRadiusFieldId;
        bp::scope().attr("MirrorPosFieldId") = (int)OSG::FishEyeProjectorBase::MirrorPosFieldId;
        bp::scope().attr("ProjectorPosFieldId") = (int)OSG::FishEyeProjectorBase::ProjectorPosFieldId;
        bp::scope().attr("AspectRatioFieldId") = (int)OSG::FishEyeProjectorBase::AspectRatioFieldId;
        bp::scope().attr("ThrowDistFieldId") = (int)OSG::FishEyeProjectorBase::ThrowDistFieldId;
        bp::scope().attr("ShowMeshFieldId") = (int)OSG::FishEyeProjectorBase::ShowMeshFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::FishEyeProjectorBase::NextFieldId;
        { //::OSG::FishEyeProjectorBase::assignGeometries
        
            typedef void ( ::OSG::FishEyeProjectorBase::*assignGeometries_function_type )( ::OSG::MFUnrecGeometryPtr const & ) ;
            
            FishEyeProjectorBase_exposer.def( 
                "assignGeometries"
                , assignGeometries_function_type( &::OSG::FishEyeProjectorBase::assignGeometries )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::FishEyeProjectorBase::clearGeometries
        
            typedef void ( ::OSG::FishEyeProjectorBase::*clearGeometries_function_type )(  ) ;
            
            FishEyeProjectorBase_exposer.def( 
                "clearGeometries"
                , clearGeometries_function_type( &::OSG::FishEyeProjectorBase::clearGeometries ) );
        
        }
        { //::OSG::FishEyeProjectorBase::copyFromBin
        
            typedef void ( ::OSG::FishEyeProjectorBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            FishEyeProjectorBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::FishEyeProjectorBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::FishEyeProjectorBase::copyToBin
        
            typedef void ( ::OSG::FishEyeProjectorBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            FishEyeProjectorBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::FishEyeProjectorBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::FishEyeProjectorBase::create
        
            typedef ::OSG::FishEyeProjectorTransitPtr ( *create_function_type )(  );
            
            FishEyeProjectorBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::FishEyeProjectorBase::create ) );
        
        }
        { //::OSG::FishEyeProjectorBase::createDependent
        
            typedef ::OSG::FishEyeProjectorTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            FishEyeProjectorBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::FishEyeProjectorBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::FishEyeProjectorBase::createLocal
        
            typedef ::OSG::FishEyeProjectorTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            FishEyeProjectorBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::FishEyeProjectorBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::FishEyeProjectorBase::getAspectRatio
        
            typedef ::OSG::Real64 ( ::OSG::FishEyeProjectorBase::*getAspectRatio_function_type )(  ) const;
            
            FishEyeProjectorBase_exposer.def( 
                "getAspectRatio"
                , getAspectRatio_function_type( &::OSG::FishEyeProjectorBase::getAspectRatio ) );
        
        }
        { //::OSG::FishEyeProjectorBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::FishEyeProjectorBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            FishEyeProjectorBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::FishEyeProjectorBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::FishEyeProjectorBase::getBufferFormat
        
            typedef ::GLenum const & ( ::OSG::FishEyeProjectorBase::*getBufferFormat_function_type )(  ) const;
            
            FishEyeProjectorBase_exposer.def( 
                "getBufferFormat"
                , getBufferFormat_function_type( &::OSG::FishEyeProjectorBase::getBufferFormat )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::FishEyeProjectorBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            FishEyeProjectorBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::FishEyeProjectorBase::getClassGroupId ) );
        
        }
        { //::OSG::FishEyeProjectorBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            FishEyeProjectorBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::FishEyeProjectorBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::FishEyeProjectorBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            FishEyeProjectorBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::FishEyeProjectorBase::getClassTypeId ) );
        
        }
        { //::OSG::FishEyeProjectorBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::FishEyeProjectorBase::*getContainerSize_function_type )(  ) const;
            
            FishEyeProjectorBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::FishEyeProjectorBase::getContainerSize ) );
        
        }
        { //::OSG::FishEyeProjectorBase::getDomeRadius
        
            typedef ::OSG::Real64 ( ::OSG::FishEyeProjectorBase::*getDomeRadius_function_type )(  ) const;
            
            FishEyeProjectorBase_exposer.def( 
                "getDomeRadius"
                , getDomeRadius_function_type( &::OSG::FishEyeProjectorBase::getDomeRadius ) );
        
        }
        { //::OSG::FishEyeProjectorBase::getGeometries
        
            typedef ::OSG::Geometry * ( ::OSG::FishEyeProjectorBase::*getGeometries_function_type )( ::OSG::UInt32 const ) const;
            
            FishEyeProjectorBase_exposer.def( 
                "getGeometries"
                , getGeometries_function_type( &::OSG::FishEyeProjectorBase::getGeometries )
                , ( bp::arg("index") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FishEyeProjectorBase::getMeshRefinementLevel
        
            typedef ::OSG::UInt32 ( ::OSG::FishEyeProjectorBase::*getMeshRefinementLevel_function_type )(  ) const;
            
            FishEyeProjectorBase_exposer.def( 
                "getMeshRefinementLevel"
                , getMeshRefinementLevel_function_type( &::OSG::FishEyeProjectorBase::getMeshRefinementLevel ) );
        
        }
        { //::OSG::FishEyeProjectorBase::getMirrorPos
        
            typedef ::OSG::Vec3d const & ( ::OSG::FishEyeProjectorBase::*getMirrorPos_function_type )(  ) const;
            
            FishEyeProjectorBase_exposer.def( 
                "getMirrorPos"
                , getMirrorPos_function_type( &::OSG::FishEyeProjectorBase::getMirrorPos )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::FishEyeProjectorBase::getMirrorRadius
        
            typedef ::OSG::Real64 ( ::OSG::FishEyeProjectorBase::*getMirrorRadius_function_type )(  ) const;
            
            FishEyeProjectorBase_exposer.def( 
                "getMirrorRadius"
                , getMirrorRadius_function_type( &::OSG::FishEyeProjectorBase::getMirrorRadius ) );
        
        }
        { //::OSG::FishEyeProjectorBase::getMode
        
            typedef ::OSG::UInt32 ( ::OSG::FishEyeProjectorBase::*getMode_function_type )(  ) const;
            
            FishEyeProjectorBase_exposer.def( 
                "getMode"
                , getMode_function_type( &::OSG::FishEyeProjectorBase::getMode ) );
        
        }
        { //::OSG::FishEyeProjectorBase::getProjectorPos
        
            typedef ::OSG::Vec3d const & ( ::OSG::FishEyeProjectorBase::*getProjectorPos_function_type )(  ) const;
            
            FishEyeProjectorBase_exposer.def( 
                "getProjectorPos"
                , getProjectorPos_function_type( &::OSG::FishEyeProjectorBase::getProjectorPos )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::FishEyeProjectorBase::getResolution
        
            typedef ::OSG::UInt32 ( ::OSG::FishEyeProjectorBase::*getResolution_function_type )(  ) const;
            
            FishEyeProjectorBase_exposer.def( 
                "getResolution"
                , getResolution_function_type( &::OSG::FishEyeProjectorBase::getResolution ) );
        
        }
        { //::OSG::FishEyeProjectorBase::getSFAspectRatio
        
            typedef ::OSG::SFReal64 const * ( ::OSG::FishEyeProjectorBase::*getSFAspectRatio_function_type )(  ) const;
            
            FishEyeProjectorBase_exposer.def( 
                "getSFAspectRatio"
                , getSFAspectRatio_function_type( &::OSG::FishEyeProjectorBase::getSFAspectRatio )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FishEyeProjectorBase::getSFBufferFormat
        
            typedef ::OSG::SFGLenum const * ( ::OSG::FishEyeProjectorBase::*getSFBufferFormat_function_type )(  ) const;
            
            FishEyeProjectorBase_exposer.def( 
                "getSFBufferFormat"
                , getSFBufferFormat_function_type( &::OSG::FishEyeProjectorBase::getSFBufferFormat )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FishEyeProjectorBase::getSFDomeRadius
        
            typedef ::OSG::SFReal64 const * ( ::OSG::FishEyeProjectorBase::*getSFDomeRadius_function_type )(  ) const;
            
            FishEyeProjectorBase_exposer.def( 
                "getSFDomeRadius"
                , getSFDomeRadius_function_type( &::OSG::FishEyeProjectorBase::getSFDomeRadius )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FishEyeProjectorBase::getSFMeshRefinementLevel
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::FishEyeProjectorBase::*getSFMeshRefinementLevel_function_type )(  ) const;
            
            FishEyeProjectorBase_exposer.def( 
                "getSFMeshRefinementLevel"
                , getSFMeshRefinementLevel_function_type( &::OSG::FishEyeProjectorBase::getSFMeshRefinementLevel )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FishEyeProjectorBase::getSFMirrorPos
        
            typedef ::OSG::SFVec3d const * ( ::OSG::FishEyeProjectorBase::*getSFMirrorPos_function_type )(  ) const;
            
            FishEyeProjectorBase_exposer.def( 
                "getSFMirrorPos"
                , getSFMirrorPos_function_type( &::OSG::FishEyeProjectorBase::getSFMirrorPos )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FishEyeProjectorBase::getSFMirrorRadius
        
            typedef ::OSG::SFReal64 const * ( ::OSG::FishEyeProjectorBase::*getSFMirrorRadius_function_type )(  ) const;
            
            FishEyeProjectorBase_exposer.def( 
                "getSFMirrorRadius"
                , getSFMirrorRadius_function_type( &::OSG::FishEyeProjectorBase::getSFMirrorRadius )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FishEyeProjectorBase::getSFMode
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::FishEyeProjectorBase::*getSFMode_function_type )(  ) const;
            
            FishEyeProjectorBase_exposer.def( 
                "getSFMode"
                , getSFMode_function_type( &::OSG::FishEyeProjectorBase::getSFMode )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FishEyeProjectorBase::getSFProjectorPos
        
            typedef ::OSG::SFVec3d const * ( ::OSG::FishEyeProjectorBase::*getSFProjectorPos_function_type )(  ) const;
            
            FishEyeProjectorBase_exposer.def( 
                "getSFProjectorPos"
                , getSFProjectorPos_function_type( &::OSG::FishEyeProjectorBase::getSFProjectorPos )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FishEyeProjectorBase::getSFResolution
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::FishEyeProjectorBase::*getSFResolution_function_type )(  ) const;
            
            FishEyeProjectorBase_exposer.def( 
                "getSFResolution"
                , getSFResolution_function_type( &::OSG::FishEyeProjectorBase::getSFResolution )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FishEyeProjectorBase::getSFShowDomeIntensity
        
            typedef ::OSG::SFBool const * ( ::OSG::FishEyeProjectorBase::*getSFShowDomeIntensity_function_type )(  ) const;
            
            FishEyeProjectorBase_exposer.def( 
                "getSFShowDomeIntensity"
                , getSFShowDomeIntensity_function_type( &::OSG::FishEyeProjectorBase::getSFShowDomeIntensity )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FishEyeProjectorBase::getSFShowMesh
        
            typedef ::OSG::SFBool const * ( ::OSG::FishEyeProjectorBase::*getSFShowMesh_function_type )(  ) const;
            
            FishEyeProjectorBase_exposer.def( 
                "getSFShowMesh"
                , getSFShowMesh_function_type( &::OSG::FishEyeProjectorBase::getSFShowMesh )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FishEyeProjectorBase::getSFThrowDist
        
            typedef ::OSG::SFReal64 const * ( ::OSG::FishEyeProjectorBase::*getSFThrowDist_function_type )(  ) const;
            
            FishEyeProjectorBase_exposer.def( 
                "getSFThrowDist"
                , getSFThrowDist_function_type( &::OSG::FishEyeProjectorBase::getSFThrowDist )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FishEyeProjectorBase::getShowDomeIntensity
        
            typedef bool ( ::OSG::FishEyeProjectorBase::*getShowDomeIntensity_function_type )(  ) const;
            
            FishEyeProjectorBase_exposer.def( 
                "getShowDomeIntensity"
                , getShowDomeIntensity_function_type( &::OSG::FishEyeProjectorBase::getShowDomeIntensity ) );
        
        }
        { //::OSG::FishEyeProjectorBase::getShowMesh
        
            typedef bool ( ::OSG::FishEyeProjectorBase::*getShowMesh_function_type )(  ) const;
            
            FishEyeProjectorBase_exposer.def( 
                "getShowMesh"
                , getShowMesh_function_type( &::OSG::FishEyeProjectorBase::getShowMesh ) );
        
        }
        { //::OSG::FishEyeProjectorBase::getThrowDist
        
            typedef ::OSG::Real64 ( ::OSG::FishEyeProjectorBase::*getThrowDist_function_type )(  ) const;
            
            FishEyeProjectorBase_exposer.def( 
                "getThrowDist"
                , getThrowDist_function_type( &::OSG::FishEyeProjectorBase::getThrowDist ) );
        
        }
        { //::OSG::FishEyeProjectorBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::FishEyeProjectorBase::*getType_function_type )(  ) ;
            
            FishEyeProjectorBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::FishEyeProjectorBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FishEyeProjectorBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::FishEyeProjectorBase::*getType_function_type )(  ) const;
            
            FishEyeProjectorBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::FishEyeProjectorBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FishEyeProjectorBase::pushToGeometries
        
            typedef void ( ::OSG::FishEyeProjectorBase::*pushToGeometries_function_type )( ::OSG::Geometry * const ) ;
            
            FishEyeProjectorBase_exposer.def( 
                "pushToGeometries"
                , pushToGeometries_function_type( &::OSG::FishEyeProjectorBase::pushToGeometries )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::FishEyeProjectorBase::removeFromGeometries
        
            typedef void ( ::OSG::FishEyeProjectorBase::*removeFromGeometries_function_type )( ::OSG::UInt32 ) ;
            
            FishEyeProjectorBase_exposer.def( 
                "removeFromGeometries"
                , removeFromGeometries_function_type( &::OSG::FishEyeProjectorBase::removeFromGeometries )
                , ( bp::arg("uiIndex") ) );
        
        }
        { //::OSG::FishEyeProjectorBase::removeObjFromGeometries
        
            typedef void ( ::OSG::FishEyeProjectorBase::*removeObjFromGeometries_function_type )( ::OSG::Geometry * const ) ;
            
            FishEyeProjectorBase_exposer.def( 
                "removeObjFromGeometries"
                , removeObjFromGeometries_function_type( &::OSG::FishEyeProjectorBase::removeObjFromGeometries )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::FishEyeProjectorBase::setAspectRatio
        
            typedef void ( ::OSG::FishEyeProjectorBase::*setAspectRatio_function_type )( ::OSG::Real64 const ) ;
            
            FishEyeProjectorBase_exposer.def( 
                "setAspectRatio"
                , setAspectRatio_function_type( &::OSG::FishEyeProjectorBase::setAspectRatio )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::FishEyeProjectorBase::setBufferFormat
        
            typedef void ( ::OSG::FishEyeProjectorBase::*setBufferFormat_function_type )( ::GLenum const & ) ;
            
            FishEyeProjectorBase_exposer.def( 
                "setBufferFormat"
                , setBufferFormat_function_type( &::OSG::FishEyeProjectorBase::setBufferFormat )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::FishEyeProjectorBase::setDomeRadius
        
            typedef void ( ::OSG::FishEyeProjectorBase::*setDomeRadius_function_type )( ::OSG::Real64 const ) ;
            
            FishEyeProjectorBase_exposer.def( 
                "setDomeRadius"
                , setDomeRadius_function_type( &::OSG::FishEyeProjectorBase::setDomeRadius )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::FishEyeProjectorBase::setMeshRefinementLevel
        
            typedef void ( ::OSG::FishEyeProjectorBase::*setMeshRefinementLevel_function_type )( ::OSG::UInt32 const ) ;
            
            FishEyeProjectorBase_exposer.def( 
                "setMeshRefinementLevel"
                , setMeshRefinementLevel_function_type( &::OSG::FishEyeProjectorBase::setMeshRefinementLevel )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::FishEyeProjectorBase::setMirrorPos
        
            typedef void ( ::OSG::FishEyeProjectorBase::*setMirrorPos_function_type )( ::OSG::Vec3d const & ) ;
            
            FishEyeProjectorBase_exposer.def( 
                "setMirrorPos"
                , setMirrorPos_function_type( &::OSG::FishEyeProjectorBase::setMirrorPos )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::FishEyeProjectorBase::setMirrorRadius
        
            typedef void ( ::OSG::FishEyeProjectorBase::*setMirrorRadius_function_type )( ::OSG::Real64 const ) ;
            
            FishEyeProjectorBase_exposer.def( 
                "setMirrorRadius"
                , setMirrorRadius_function_type( &::OSG::FishEyeProjectorBase::setMirrorRadius )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::FishEyeProjectorBase::setMode
        
            typedef void ( ::OSG::FishEyeProjectorBase::*setMode_function_type )( ::OSG::UInt32 const ) ;
            
            FishEyeProjectorBase_exposer.def( 
                "setMode"
                , setMode_function_type( &::OSG::FishEyeProjectorBase::setMode )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::FishEyeProjectorBase::setProjectorPos
        
            typedef void ( ::OSG::FishEyeProjectorBase::*setProjectorPos_function_type )( ::OSG::Vec3d const & ) ;
            
            FishEyeProjectorBase_exposer.def( 
                "setProjectorPos"
                , setProjectorPos_function_type( &::OSG::FishEyeProjectorBase::setProjectorPos )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::FishEyeProjectorBase::setResolution
        
            typedef void ( ::OSG::FishEyeProjectorBase::*setResolution_function_type )( ::OSG::UInt32 const ) ;
            
            FishEyeProjectorBase_exposer.def( 
                "setResolution"
                , setResolution_function_type( &::OSG::FishEyeProjectorBase::setResolution )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::FishEyeProjectorBase::setShowDomeIntensity
        
            typedef void ( ::OSG::FishEyeProjectorBase::*setShowDomeIntensity_function_type )( bool const ) ;
            
            FishEyeProjectorBase_exposer.def( 
                "setShowDomeIntensity"
                , setShowDomeIntensity_function_type( &::OSG::FishEyeProjectorBase::setShowDomeIntensity )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::FishEyeProjectorBase::setShowMesh
        
            typedef void ( ::OSG::FishEyeProjectorBase::*setShowMesh_function_type )( bool const ) ;
            
            FishEyeProjectorBase_exposer.def( 
                "setShowMesh"
                , setShowMesh_function_type( &::OSG::FishEyeProjectorBase::setShowMesh )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::FishEyeProjectorBase::setThrowDist
        
            typedef void ( ::OSG::FishEyeProjectorBase::*setThrowDist_function_type )( ::OSG::Real64 const ) ;
            
            FishEyeProjectorBase_exposer.def( 
                "setThrowDist"
                , setThrowDist_function_type( &::OSG::FishEyeProjectorBase::setThrowDist )
                , ( bp::arg("value") ) );
        
        }
        FishEyeProjectorBase_exposer.staticmethod( "create" );
        FishEyeProjectorBase_exposer.staticmethod( "createDependent" );
        FishEyeProjectorBase_exposer.staticmethod( "createLocal" );
        FishEyeProjectorBase_exposer.staticmethod( "getClassGroupId" );
        FishEyeProjectorBase_exposer.staticmethod( "getClassType" );
        FishEyeProjectorBase_exposer.staticmethod( "getClassTypeId" );
        FishEyeProjectorBase_exposer.def("getMFGeometries",FishEyeProjectorBase_getMFGeometries);
    }

}
