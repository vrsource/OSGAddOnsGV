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
#include "OSGWindow_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "SkyBackgroundBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct SkyBackgroundBase_wrapper : OSG::SkyBackgroundBase, bp::wrapper< OSG::SkyBackgroundBase > {

    virtual void clear( ::OSG::DrawEnv * pEnv ){
        bp::override func_clear = this->get_override( "clear" );
        func_clear( boost::python::ptr(pEnv) );
    }

};

boost::python::list SkyBackgroundBase_getMFSkyColor(OSG::SkyBackgroundBase *self)
{
   boost::python::list result;
   OSG::MFColor4f const * mf_data = self->getMFSkyColor();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

boost::python::list SkyBackgroundBase_getMFSkyAngle(OSG::SkyBackgroundBase *self)
{
   boost::python::list result;
   OSG::MFReal32 const * mf_data = self->getMFSkyAngle();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

boost::python::list SkyBackgroundBase_getMFGroundColor(OSG::SkyBackgroundBase *self)
{
   boost::python::list result;
   OSG::MFColor4f const * mf_data = self->getMFGroundColor();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

boost::python::list SkyBackgroundBase_getMFGroundAngle(OSG::SkyBackgroundBase *self)
{
   boost::python::list result;
   OSG::MFReal32 const * mf_data = self->getMFGroundAngle();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

boost::python::list SkyBackgroundBase_getMFTopTexCoord(OSG::SkyBackgroundBase *self)
{
   boost::python::list result;
   OSG::MFVec3f const * mf_data = self->getMFTopTexCoord();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

boost::python::list SkyBackgroundBase_getMFBottomTexCoord(OSG::SkyBackgroundBase *self)
{
   boost::python::list result;
   OSG::MFVec3f const * mf_data = self->getMFBottomTexCoord();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

boost::python::list SkyBackgroundBase_getMFRightTexCoord(OSG::SkyBackgroundBase *self)
{
   boost::python::list result;
   OSG::MFVec3f const * mf_data = self->getMFRightTexCoord();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

boost::python::list SkyBackgroundBase_getMFLeftTexCoord(OSG::SkyBackgroundBase *self)
{
   boost::python::list result;
   OSG::MFVec3f const * mf_data = self->getMFLeftTexCoord();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

boost::python::list SkyBackgroundBase_getMFFrontTexCoord(OSG::SkyBackgroundBase *self)
{
   boost::python::list result;
   OSG::MFVec3f const * mf_data = self->getMFFrontTexCoord();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

boost::python::list SkyBackgroundBase_getMFBackTexCoord(OSG::SkyBackgroundBase *self)
{
   boost::python::list result;
   OSG::MFVec3f const * mf_data = self->getMFBackTexCoord();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

void register_SkyBackgroundBase_class(){

    { //::OSG::SkyBackgroundBase
        typedef bp::class_< SkyBackgroundBase_wrapper, bp::bases< ::OSG::Background >, boost::noncopyable > SkyBackgroundBase_exposer_t;
        SkyBackgroundBase_exposer_t SkyBackgroundBase_exposer = SkyBackgroundBase_exposer_t( "SkyBackgroundBase", bp::no_init );
        bp::scope SkyBackgroundBase_scope( SkyBackgroundBase_exposer );
        bp::scope().attr("SkyColorFieldId") = (int)OSG::SkyBackgroundBase::SkyColorFieldId;
        bp::scope().attr("SkyAngleFieldId") = (int)OSG::SkyBackgroundBase::SkyAngleFieldId;
        bp::scope().attr("GroundColorFieldId") = (int)OSG::SkyBackgroundBase::GroundColorFieldId;
        bp::scope().attr("GroundAngleFieldId") = (int)OSG::SkyBackgroundBase::GroundAngleFieldId;
        bp::scope().attr("SphereResFieldId") = (int)OSG::SkyBackgroundBase::SphereResFieldId;
        bp::scope().attr("BackTextureFieldId") = (int)OSG::SkyBackgroundBase::BackTextureFieldId;
        bp::scope().attr("BottomTextureFieldId") = (int)OSG::SkyBackgroundBase::BottomTextureFieldId;
        bp::scope().attr("FrontTextureFieldId") = (int)OSG::SkyBackgroundBase::FrontTextureFieldId;
        bp::scope().attr("LeftTextureFieldId") = (int)OSG::SkyBackgroundBase::LeftTextureFieldId;
        bp::scope().attr("RightTextureFieldId") = (int)OSG::SkyBackgroundBase::RightTextureFieldId;
        bp::scope().attr("TopTextureFieldId") = (int)OSG::SkyBackgroundBase::TopTextureFieldId;
        bp::scope().attr("BoxInsideFieldId") = (int)OSG::SkyBackgroundBase::BoxInsideFieldId;
        bp::scope().attr("TopTexCoordFieldId") = (int)OSG::SkyBackgroundBase::TopTexCoordFieldId;
        bp::scope().attr("BottomTexCoordFieldId") = (int)OSG::SkyBackgroundBase::BottomTexCoordFieldId;
        bp::scope().attr("RightTexCoordFieldId") = (int)OSG::SkyBackgroundBase::RightTexCoordFieldId;
        bp::scope().attr("LeftTexCoordFieldId") = (int)OSG::SkyBackgroundBase::LeftTexCoordFieldId;
        bp::scope().attr("FrontTexCoordFieldId") = (int)OSG::SkyBackgroundBase::FrontTexCoordFieldId;
        bp::scope().attr("BackTexCoordFieldId") = (int)OSG::SkyBackgroundBase::BackTexCoordFieldId;
        bp::scope().attr("BeaconFieldId") = (int)OSG::SkyBackgroundBase::BeaconFieldId;
        bp::scope().attr("UseVRMLCubeTextureSemanticsFieldId") = (int)OSG::SkyBackgroundBase::UseVRMLCubeTextureSemanticsFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::SkyBackgroundBase::NextFieldId;
        { //::OSG::SkyBackgroundBase::copyFromBin
        
            typedef void ( ::OSG::SkyBackgroundBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            SkyBackgroundBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::SkyBackgroundBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::SkyBackgroundBase::copyToBin
        
            typedef void ( ::OSG::SkyBackgroundBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            SkyBackgroundBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::SkyBackgroundBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::SkyBackgroundBase::create
        
            typedef ::OSG::SkyBackgroundTransitPtr ( *create_function_type )(  );
            
            SkyBackgroundBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::SkyBackgroundBase::create ) );
        
        }
        { //::OSG::SkyBackgroundBase::createDependent
        
            typedef ::OSG::SkyBackgroundTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            SkyBackgroundBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::SkyBackgroundBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::SkyBackgroundBase::createLocal
        
            typedef ::OSG::SkyBackgroundTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            SkyBackgroundBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::SkyBackgroundBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::SkyBackgroundBase::getBackTexCoord
        
            typedef ::OSG::Vec3f const & ( ::OSG::SkyBackgroundBase::*getBackTexCoord_function_type )( ::OSG::UInt32 const ) const;
            
            SkyBackgroundBase_exposer.def( 
                "getBackTexCoord"
                , getBackTexCoord_function_type( &::OSG::SkyBackgroundBase::getBackTexCoord )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::SkyBackgroundBase::getBackTexture
        
            typedef ::OSG::TextureBaseChunk * ( ::OSG::SkyBackgroundBase::*getBackTexture_function_type )(  ) const;
            
            SkyBackgroundBase_exposer.def( 
                "getBackTexture"
                , getBackTexture_function_type( &::OSG::SkyBackgroundBase::getBackTexture )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SkyBackgroundBase::getBeacon
        
            typedef ::OSG::Node * ( ::OSG::SkyBackgroundBase::*getBeacon_function_type )(  ) const;
            
            SkyBackgroundBase_exposer.def( 
                "getBeacon"
                , getBeacon_function_type( &::OSG::SkyBackgroundBase::getBeacon )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SkyBackgroundBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::SkyBackgroundBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            SkyBackgroundBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::SkyBackgroundBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::SkyBackgroundBase::getBottomTexCoord
        
            typedef ::OSG::Vec3f const & ( ::OSG::SkyBackgroundBase::*getBottomTexCoord_function_type )( ::OSG::UInt32 const ) const;
            
            SkyBackgroundBase_exposer.def( 
                "getBottomTexCoord"
                , getBottomTexCoord_function_type( &::OSG::SkyBackgroundBase::getBottomTexCoord )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::SkyBackgroundBase::getBottomTexture
        
            typedef ::OSG::TextureBaseChunk * ( ::OSG::SkyBackgroundBase::*getBottomTexture_function_type )(  ) const;
            
            SkyBackgroundBase_exposer.def( 
                "getBottomTexture"
                , getBottomTexture_function_type( &::OSG::SkyBackgroundBase::getBottomTexture )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SkyBackgroundBase::getBoxInside
        
            typedef bool ( ::OSG::SkyBackgroundBase::*getBoxInside_function_type )(  ) const;
            
            SkyBackgroundBase_exposer.def( 
                "getBoxInside"
                , getBoxInside_function_type( &::OSG::SkyBackgroundBase::getBoxInside ) );
        
        }
        { //::OSG::SkyBackgroundBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            SkyBackgroundBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::SkyBackgroundBase::getClassGroupId ) );
        
        }
        { //::OSG::SkyBackgroundBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            SkyBackgroundBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::SkyBackgroundBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::SkyBackgroundBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            SkyBackgroundBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::SkyBackgroundBase::getClassTypeId ) );
        
        }
        { //::OSG::SkyBackgroundBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::SkyBackgroundBase::*getContainerSize_function_type )(  ) const;
            
            SkyBackgroundBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::SkyBackgroundBase::getContainerSize ) );
        
        }
        { //::OSG::SkyBackgroundBase::getFrontTexCoord
        
            typedef ::OSG::Vec3f const & ( ::OSG::SkyBackgroundBase::*getFrontTexCoord_function_type )( ::OSG::UInt32 const ) const;
            
            SkyBackgroundBase_exposer.def( 
                "getFrontTexCoord"
                , getFrontTexCoord_function_type( &::OSG::SkyBackgroundBase::getFrontTexCoord )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::SkyBackgroundBase::getFrontTexture
        
            typedef ::OSG::TextureBaseChunk * ( ::OSG::SkyBackgroundBase::*getFrontTexture_function_type )(  ) const;
            
            SkyBackgroundBase_exposer.def( 
                "getFrontTexture"
                , getFrontTexture_function_type( &::OSG::SkyBackgroundBase::getFrontTexture )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SkyBackgroundBase::getGroundAngle
        
            typedef ::OSG::Real32 ( ::OSG::SkyBackgroundBase::*getGroundAngle_function_type )( ::OSG::UInt32 const ) const;
            
            SkyBackgroundBase_exposer.def( 
                "getGroundAngle"
                , getGroundAngle_function_type( &::OSG::SkyBackgroundBase::getGroundAngle )
                , ( bp::arg("index") ) );
        
        }
        { //::OSG::SkyBackgroundBase::getGroundColor
        
            typedef ::OSG::Color4f const & ( ::OSG::SkyBackgroundBase::*getGroundColor_function_type )( ::OSG::UInt32 const ) const;
            
            SkyBackgroundBase_exposer.def( 
                "getGroundColor"
                , getGroundColor_function_type( &::OSG::SkyBackgroundBase::getGroundColor )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::SkyBackgroundBase::getLeftTexCoord
        
            typedef ::OSG::Vec3f const & ( ::OSG::SkyBackgroundBase::*getLeftTexCoord_function_type )( ::OSG::UInt32 const ) const;
            
            SkyBackgroundBase_exposer.def( 
                "getLeftTexCoord"
                , getLeftTexCoord_function_type( &::OSG::SkyBackgroundBase::getLeftTexCoord )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::SkyBackgroundBase::getLeftTexture
        
            typedef ::OSG::TextureBaseChunk * ( ::OSG::SkyBackgroundBase::*getLeftTexture_function_type )(  ) const;
            
            SkyBackgroundBase_exposer.def( 
                "getLeftTexture"
                , getLeftTexture_function_type( &::OSG::SkyBackgroundBase::getLeftTexture )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SkyBackgroundBase::getRightTexCoord
        
            typedef ::OSG::Vec3f const & ( ::OSG::SkyBackgroundBase::*getRightTexCoord_function_type )( ::OSG::UInt32 const ) const;
            
            SkyBackgroundBase_exposer.def( 
                "getRightTexCoord"
                , getRightTexCoord_function_type( &::OSG::SkyBackgroundBase::getRightTexCoord )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::SkyBackgroundBase::getRightTexture
        
            typedef ::OSG::TextureBaseChunk * ( ::OSG::SkyBackgroundBase::*getRightTexture_function_type )(  ) const;
            
            SkyBackgroundBase_exposer.def( 
                "getRightTexture"
                , getRightTexture_function_type( &::OSG::SkyBackgroundBase::getRightTexture )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SkyBackgroundBase::getSFBackTexture
        
            typedef ::OSG::SFUnrecTextureBaseChunkPtr const * ( ::OSG::SkyBackgroundBase::*getSFBackTexture_function_type )(  ) const;
            
            SkyBackgroundBase_exposer.def( 
                "getSFBackTexture"
                , getSFBackTexture_function_type( &::OSG::SkyBackgroundBase::getSFBackTexture )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SkyBackgroundBase::getSFBeacon
        
            typedef ::OSG::SFWeakNodePtr const * ( ::OSG::SkyBackgroundBase::*getSFBeacon_function_type )(  ) const;
            
            SkyBackgroundBase_exposer.def( 
                "getSFBeacon"
                , getSFBeacon_function_type( &::OSG::SkyBackgroundBase::getSFBeacon )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SkyBackgroundBase::getSFBottomTexture
        
            typedef ::OSG::SFUnrecTextureBaseChunkPtr const * ( ::OSG::SkyBackgroundBase::*getSFBottomTexture_function_type )(  ) const;
            
            SkyBackgroundBase_exposer.def( 
                "getSFBottomTexture"
                , getSFBottomTexture_function_type( &::OSG::SkyBackgroundBase::getSFBottomTexture )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SkyBackgroundBase::getSFBoxInside
        
            typedef ::OSG::SFBool const * ( ::OSG::SkyBackgroundBase::*getSFBoxInside_function_type )(  ) const;
            
            SkyBackgroundBase_exposer.def( 
                "getSFBoxInside"
                , getSFBoxInside_function_type( &::OSG::SkyBackgroundBase::getSFBoxInside )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SkyBackgroundBase::getSFFrontTexture
        
            typedef ::OSG::SFUnrecTextureBaseChunkPtr const * ( ::OSG::SkyBackgroundBase::*getSFFrontTexture_function_type )(  ) const;
            
            SkyBackgroundBase_exposer.def( 
                "getSFFrontTexture"
                , getSFFrontTexture_function_type( &::OSG::SkyBackgroundBase::getSFFrontTexture )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SkyBackgroundBase::getSFLeftTexture
        
            typedef ::OSG::SFUnrecTextureBaseChunkPtr const * ( ::OSG::SkyBackgroundBase::*getSFLeftTexture_function_type )(  ) const;
            
            SkyBackgroundBase_exposer.def( 
                "getSFLeftTexture"
                , getSFLeftTexture_function_type( &::OSG::SkyBackgroundBase::getSFLeftTexture )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SkyBackgroundBase::getSFRightTexture
        
            typedef ::OSG::SFUnrecTextureBaseChunkPtr const * ( ::OSG::SkyBackgroundBase::*getSFRightTexture_function_type )(  ) const;
            
            SkyBackgroundBase_exposer.def( 
                "getSFRightTexture"
                , getSFRightTexture_function_type( &::OSG::SkyBackgroundBase::getSFRightTexture )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SkyBackgroundBase::getSFSphereRes
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::SkyBackgroundBase::*getSFSphereRes_function_type )(  ) const;
            
            SkyBackgroundBase_exposer.def( 
                "getSFSphereRes"
                , getSFSphereRes_function_type( &::OSG::SkyBackgroundBase::getSFSphereRes )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SkyBackgroundBase::getSFTopTexture
        
            typedef ::OSG::SFUnrecTextureBaseChunkPtr const * ( ::OSG::SkyBackgroundBase::*getSFTopTexture_function_type )(  ) const;
            
            SkyBackgroundBase_exposer.def( 
                "getSFTopTexture"
                , getSFTopTexture_function_type( &::OSG::SkyBackgroundBase::getSFTopTexture )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SkyBackgroundBase::getSFUseVRMLCubeTextureSemantics
        
            typedef ::OSG::SFBool const * ( ::OSG::SkyBackgroundBase::*getSFUseVRMLCubeTextureSemantics_function_type )(  ) const;
            
            SkyBackgroundBase_exposer.def( 
                "getSFUseVRMLCubeTextureSemantics"
                , getSFUseVRMLCubeTextureSemantics_function_type( &::OSG::SkyBackgroundBase::getSFUseVRMLCubeTextureSemantics )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SkyBackgroundBase::getSkyAngle
        
            typedef ::OSG::Real32 ( ::OSG::SkyBackgroundBase::*getSkyAngle_function_type )( ::OSG::UInt32 const ) const;
            
            SkyBackgroundBase_exposer.def( 
                "getSkyAngle"
                , getSkyAngle_function_type( &::OSG::SkyBackgroundBase::getSkyAngle )
                , ( bp::arg("index") ) );
        
        }
        { //::OSG::SkyBackgroundBase::getSkyColor
        
            typedef ::OSG::Color4f const & ( ::OSG::SkyBackgroundBase::*getSkyColor_function_type )( ::OSG::UInt32 const ) const;
            
            SkyBackgroundBase_exposer.def( 
                "getSkyColor"
                , getSkyColor_function_type( &::OSG::SkyBackgroundBase::getSkyColor )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::SkyBackgroundBase::getSphereRes
        
            typedef ::OSG::UInt32 ( ::OSG::SkyBackgroundBase::*getSphereRes_function_type )(  ) const;
            
            SkyBackgroundBase_exposer.def( 
                "getSphereRes"
                , getSphereRes_function_type( &::OSG::SkyBackgroundBase::getSphereRes ) );
        
        }
        { //::OSG::SkyBackgroundBase::getTopTexCoord
        
            typedef ::OSG::Vec3f const & ( ::OSG::SkyBackgroundBase::*getTopTexCoord_function_type )( ::OSG::UInt32 const ) const;
            
            SkyBackgroundBase_exposer.def( 
                "getTopTexCoord"
                , getTopTexCoord_function_type( &::OSG::SkyBackgroundBase::getTopTexCoord )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::SkyBackgroundBase::getTopTexture
        
            typedef ::OSG::TextureBaseChunk * ( ::OSG::SkyBackgroundBase::*getTopTexture_function_type )(  ) const;
            
            SkyBackgroundBase_exposer.def( 
                "getTopTexture"
                , getTopTexture_function_type( &::OSG::SkyBackgroundBase::getTopTexture )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SkyBackgroundBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::SkyBackgroundBase::*getType_function_type )(  ) ;
            
            SkyBackgroundBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::SkyBackgroundBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SkyBackgroundBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::SkyBackgroundBase::*getType_function_type )(  ) const;
            
            SkyBackgroundBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::SkyBackgroundBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SkyBackgroundBase::getUseVRMLCubeTextureSemantics
        
            typedef bool ( ::OSG::SkyBackgroundBase::*getUseVRMLCubeTextureSemantics_function_type )(  ) const;
            
            SkyBackgroundBase_exposer.def( 
                "getUseVRMLCubeTextureSemantics"
                , getUseVRMLCubeTextureSemantics_function_type( &::OSG::SkyBackgroundBase::getUseVRMLCubeTextureSemantics ) );
        
        }
        { //::OSG::SkyBackgroundBase::setBackTexture
        
            typedef void ( ::OSG::SkyBackgroundBase::*setBackTexture_function_type )( ::OSG::TextureBaseChunk * const ) ;
            
            SkyBackgroundBase_exposer.def( 
                "setBackTexture"
                , setBackTexture_function_type( &::OSG::SkyBackgroundBase::setBackTexture )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SkyBackgroundBase::setBeacon
        
            typedef void ( ::OSG::SkyBackgroundBase::*setBeacon_function_type )( ::OSG::Node * const ) ;
            
            SkyBackgroundBase_exposer.def( 
                "setBeacon"
                , setBeacon_function_type( &::OSG::SkyBackgroundBase::setBeacon )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SkyBackgroundBase::setBottomTexture
        
            typedef void ( ::OSG::SkyBackgroundBase::*setBottomTexture_function_type )( ::OSG::TextureBaseChunk * const ) ;
            
            SkyBackgroundBase_exposer.def( 
                "setBottomTexture"
                , setBottomTexture_function_type( &::OSG::SkyBackgroundBase::setBottomTexture )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SkyBackgroundBase::setBoxInside
        
            typedef void ( ::OSG::SkyBackgroundBase::*setBoxInside_function_type )( bool const ) ;
            
            SkyBackgroundBase_exposer.def( 
                "setBoxInside"
                , setBoxInside_function_type( &::OSG::SkyBackgroundBase::setBoxInside )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SkyBackgroundBase::setFrontTexture
        
            typedef void ( ::OSG::SkyBackgroundBase::*setFrontTexture_function_type )( ::OSG::TextureBaseChunk * const ) ;
            
            SkyBackgroundBase_exposer.def( 
                "setFrontTexture"
                , setFrontTexture_function_type( &::OSG::SkyBackgroundBase::setFrontTexture )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SkyBackgroundBase::setLeftTexture
        
            typedef void ( ::OSG::SkyBackgroundBase::*setLeftTexture_function_type )( ::OSG::TextureBaseChunk * const ) ;
            
            SkyBackgroundBase_exposer.def( 
                "setLeftTexture"
                , setLeftTexture_function_type( &::OSG::SkyBackgroundBase::setLeftTexture )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SkyBackgroundBase::setRightTexture
        
            typedef void ( ::OSG::SkyBackgroundBase::*setRightTexture_function_type )( ::OSG::TextureBaseChunk * const ) ;
            
            SkyBackgroundBase_exposer.def( 
                "setRightTexture"
                , setRightTexture_function_type( &::OSG::SkyBackgroundBase::setRightTexture )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SkyBackgroundBase::setSphereRes
        
            typedef void ( ::OSG::SkyBackgroundBase::*setSphereRes_function_type )( ::OSG::UInt32 const ) ;
            
            SkyBackgroundBase_exposer.def( 
                "setSphereRes"
                , setSphereRes_function_type( &::OSG::SkyBackgroundBase::setSphereRes )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SkyBackgroundBase::setTopTexture
        
            typedef void ( ::OSG::SkyBackgroundBase::*setTopTexture_function_type )( ::OSG::TextureBaseChunk * const ) ;
            
            SkyBackgroundBase_exposer.def( 
                "setTopTexture"
                , setTopTexture_function_type( &::OSG::SkyBackgroundBase::setTopTexture )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SkyBackgroundBase::setUseVRMLCubeTextureSemantics
        
            typedef void ( ::OSG::SkyBackgroundBase::*setUseVRMLCubeTextureSemantics_function_type )( bool const ) ;
            
            SkyBackgroundBase_exposer.def( 
                "setUseVRMLCubeTextureSemantics"
                , setUseVRMLCubeTextureSemantics_function_type( &::OSG::SkyBackgroundBase::setUseVRMLCubeTextureSemantics )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::Background::clear
        
            typedef void ( ::OSG::Background::*clear_function_type )( ::OSG::DrawEnv * ) ;
            
            SkyBackgroundBase_exposer.def( 
                "clear"
                , bp::pure_virtual( clear_function_type(&::OSG::Background::clear) )
                , ( bp::arg("pEnv") ) );
        
        }
        SkyBackgroundBase_exposer.staticmethod( "create" );
        SkyBackgroundBase_exposer.staticmethod( "createDependent" );
        SkyBackgroundBase_exposer.staticmethod( "createLocal" );
        SkyBackgroundBase_exposer.staticmethod( "getClassGroupId" );
        SkyBackgroundBase_exposer.staticmethod( "getClassType" );
        SkyBackgroundBase_exposer.staticmethod( "getClassTypeId" );
        SkyBackgroundBase_exposer.def("getMFSkyColor",SkyBackgroundBase_getMFSkyColor);
        SkyBackgroundBase_exposer.def("getMFSkyAngle",SkyBackgroundBase_getMFSkyAngle);
        SkyBackgroundBase_exposer.def("getMFGroundColor",SkyBackgroundBase_getMFGroundColor);
        SkyBackgroundBase_exposer.def("getMFGroundAngle",SkyBackgroundBase_getMFGroundAngle);
        SkyBackgroundBase_exposer.def("getMFTopTexCoord",SkyBackgroundBase_getMFTopTexCoord);
        SkyBackgroundBase_exposer.def("getMFBottomTexCoord",SkyBackgroundBase_getMFBottomTexCoord);
        SkyBackgroundBase_exposer.def("getMFRightTexCoord",SkyBackgroundBase_getMFRightTexCoord);
        SkyBackgroundBase_exposer.def("getMFLeftTexCoord",SkyBackgroundBase_getMFLeftTexCoord);
        SkyBackgroundBase_exposer.def("getMFFrontTexCoord",SkyBackgroundBase_getMFFrontTexCoord);
        SkyBackgroundBase_exposer.def("getMFBackTexCoord",SkyBackgroundBase_getMFBackTexCoord);
    }

}
