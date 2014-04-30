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
#include "OSGWindow_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "PolygonForegroundBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct PolygonForegroundBase_wrapper : OSG::PolygonForegroundBase, bp::wrapper< OSG::PolygonForegroundBase > {



};

boost::python::list PolygonForegroundBase_getMFPositions(OSG::PolygonForegroundBase *self)
{
   boost::python::list result;
   OSG::MFPnt2f const * mf_data = self->getMFPositions();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

boost::python::list PolygonForegroundBase_getMFTexCoords(OSG::PolygonForegroundBase *self)
{
   boost::python::list result;
   OSG::MFVec3f const * mf_data = self->getMFTexCoords();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

void register_PolygonForegroundBase_class(){

    { //::OSG::PolygonForegroundBase
        typedef bp::class_< PolygonForegroundBase_wrapper, bp::bases< ::OSG::Foreground >, boost::noncopyable > PolygonForegroundBase_exposer_t;
        PolygonForegroundBase_exposer_t PolygonForegroundBase_exposer = PolygonForegroundBase_exposer_t( "PolygonForegroundBase", bp::no_init );
        bp::scope PolygonForegroundBase_scope( PolygonForegroundBase_exposer );
        bp::scope().attr("MaterialFieldId") = (int)OSG::PolygonForegroundBase::MaterialFieldId;
        bp::scope().attr("PositionsFieldId") = (int)OSG::PolygonForegroundBase::PositionsFieldId;
        bp::scope().attr("TexCoordsFieldId") = (int)OSG::PolygonForegroundBase::TexCoordsFieldId;
        bp::scope().attr("NormalizedXFieldId") = (int)OSG::PolygonForegroundBase::NormalizedXFieldId;
        bp::scope().attr("NormalizedYFieldId") = (int)OSG::PolygonForegroundBase::NormalizedYFieldId;
        bp::scope().attr("AspectHeightFieldId") = (int)OSG::PolygonForegroundBase::AspectHeightFieldId;
        bp::scope().attr("AspectWidthFieldId") = (int)OSG::PolygonForegroundBase::AspectWidthFieldId;
        bp::scope().attr("ScaleFieldId") = (int)OSG::PolygonForegroundBase::ScaleFieldId;
        bp::scope().attr("TileFieldId") = (int)OSG::PolygonForegroundBase::TileFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::PolygonForegroundBase::NextFieldId;
        { //::OSG::PolygonForegroundBase::copyFromBin
        
            typedef void ( ::OSG::PolygonForegroundBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            PolygonForegroundBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::PolygonForegroundBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::PolygonForegroundBase::copyToBin
        
            typedef void ( ::OSG::PolygonForegroundBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            PolygonForegroundBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::PolygonForegroundBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::PolygonForegroundBase::create
        
            typedef ::OSG::PolygonForegroundTransitPtr ( *create_function_type )(  );
            
            PolygonForegroundBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::PolygonForegroundBase::create ) );
        
        }
        { //::OSG::PolygonForegroundBase::createDependent
        
            typedef ::OSG::PolygonForegroundTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            PolygonForegroundBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::PolygonForegroundBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::PolygonForegroundBase::createLocal
        
            typedef ::OSG::PolygonForegroundTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            PolygonForegroundBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::PolygonForegroundBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::PolygonForegroundBase::getAspectHeight
        
            typedef ::OSG::UInt16 ( ::OSG::PolygonForegroundBase::*getAspectHeight_function_type )(  ) const;
            
            PolygonForegroundBase_exposer.def( 
                "getAspectHeight"
                , getAspectHeight_function_type( &::OSG::PolygonForegroundBase::getAspectHeight ) );
        
        }
        { //::OSG::PolygonForegroundBase::getAspectWidth
        
            typedef ::OSG::UInt16 ( ::OSG::PolygonForegroundBase::*getAspectWidth_function_type )(  ) const;
            
            PolygonForegroundBase_exposer.def( 
                "getAspectWidth"
                , getAspectWidth_function_type( &::OSG::PolygonForegroundBase::getAspectWidth ) );
        
        }
        { //::OSG::PolygonForegroundBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::PolygonForegroundBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            PolygonForegroundBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::PolygonForegroundBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::PolygonForegroundBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            PolygonForegroundBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::PolygonForegroundBase::getClassGroupId ) );
        
        }
        { //::OSG::PolygonForegroundBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            PolygonForegroundBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::PolygonForegroundBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::PolygonForegroundBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            PolygonForegroundBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::PolygonForegroundBase::getClassTypeId ) );
        
        }
        { //::OSG::PolygonForegroundBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::PolygonForegroundBase::*getContainerSize_function_type )(  ) const;
            
            PolygonForegroundBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::PolygonForegroundBase::getContainerSize ) );
        
        }
        { //::OSG::PolygonForegroundBase::getMaterial
        
            typedef ::OSG::PrimeMaterial * ( ::OSG::PolygonForegroundBase::*getMaterial_function_type )(  ) const;
            
            PolygonForegroundBase_exposer.def( 
                "getMaterial"
                , getMaterial_function_type( &::OSG::PolygonForegroundBase::getMaterial )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PolygonForegroundBase::getNormalizedX
        
            typedef bool ( ::OSG::PolygonForegroundBase::*getNormalizedX_function_type )(  ) const;
            
            PolygonForegroundBase_exposer.def( 
                "getNormalizedX"
                , getNormalizedX_function_type( &::OSG::PolygonForegroundBase::getNormalizedX ) );
        
        }
        { //::OSG::PolygonForegroundBase::getNormalizedY
        
            typedef bool ( ::OSG::PolygonForegroundBase::*getNormalizedY_function_type )(  ) const;
            
            PolygonForegroundBase_exposer.def( 
                "getNormalizedY"
                , getNormalizedY_function_type( &::OSG::PolygonForegroundBase::getNormalizedY ) );
        
        }
        { //::OSG::PolygonForegroundBase::getPositions
        
            typedef ::OSG::Pnt2f const & ( ::OSG::PolygonForegroundBase::*getPositions_function_type )( ::OSG::UInt32 const ) const;
            
            PolygonForegroundBase_exposer.def( 
                "getPositions"
                , getPositions_function_type( &::OSG::PolygonForegroundBase::getPositions )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::PolygonForegroundBase::getSFAspectHeight
        
            typedef ::OSG::SFUInt16 const * ( ::OSG::PolygonForegroundBase::*getSFAspectHeight_function_type )(  ) const;
            
            PolygonForegroundBase_exposer.def( 
                "getSFAspectHeight"
                , getSFAspectHeight_function_type( &::OSG::PolygonForegroundBase::getSFAspectHeight )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PolygonForegroundBase::getSFAspectWidth
        
            typedef ::OSG::SFUInt16 const * ( ::OSG::PolygonForegroundBase::*getSFAspectWidth_function_type )(  ) const;
            
            PolygonForegroundBase_exposer.def( 
                "getSFAspectWidth"
                , getSFAspectWidth_function_type( &::OSG::PolygonForegroundBase::getSFAspectWidth )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PolygonForegroundBase::getSFMaterial
        
            typedef ::OSG::SFUnrecPrimeMaterialPtr const * ( ::OSG::PolygonForegroundBase::*getSFMaterial_function_type )(  ) const;
            
            PolygonForegroundBase_exposer.def( 
                "getSFMaterial"
                , getSFMaterial_function_type( &::OSG::PolygonForegroundBase::getSFMaterial )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PolygonForegroundBase::getSFNormalizedX
        
            typedef ::OSG::SFBool const * ( ::OSG::PolygonForegroundBase::*getSFNormalizedX_function_type )(  ) const;
            
            PolygonForegroundBase_exposer.def( 
                "getSFNormalizedX"
                , getSFNormalizedX_function_type( &::OSG::PolygonForegroundBase::getSFNormalizedX )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PolygonForegroundBase::getSFNormalizedY
        
            typedef ::OSG::SFBool const * ( ::OSG::PolygonForegroundBase::*getSFNormalizedY_function_type )(  ) const;
            
            PolygonForegroundBase_exposer.def( 
                "getSFNormalizedY"
                , getSFNormalizedY_function_type( &::OSG::PolygonForegroundBase::getSFNormalizedY )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PolygonForegroundBase::getSFScale
        
            typedef ::OSG::SFReal32 const * ( ::OSG::PolygonForegroundBase::*getSFScale_function_type )(  ) const;
            
            PolygonForegroundBase_exposer.def( 
                "getSFScale"
                , getSFScale_function_type( &::OSG::PolygonForegroundBase::getSFScale )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PolygonForegroundBase::getSFTile
        
            typedef ::OSG::SFBool const * ( ::OSG::PolygonForegroundBase::*getSFTile_function_type )(  ) const;
            
            PolygonForegroundBase_exposer.def( 
                "getSFTile"
                , getSFTile_function_type( &::OSG::PolygonForegroundBase::getSFTile )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PolygonForegroundBase::getScale
        
            typedef ::OSG::Real32 ( ::OSG::PolygonForegroundBase::*getScale_function_type )(  ) const;
            
            PolygonForegroundBase_exposer.def( 
                "getScale"
                , getScale_function_type( &::OSG::PolygonForegroundBase::getScale ) );
        
        }
        { //::OSG::PolygonForegroundBase::getTexCoords
        
            typedef ::OSG::Vec3f const & ( ::OSG::PolygonForegroundBase::*getTexCoords_function_type )( ::OSG::UInt32 const ) const;
            
            PolygonForegroundBase_exposer.def( 
                "getTexCoords"
                , getTexCoords_function_type( &::OSG::PolygonForegroundBase::getTexCoords )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::PolygonForegroundBase::getTile
        
            typedef bool ( ::OSG::PolygonForegroundBase::*getTile_function_type )(  ) const;
            
            PolygonForegroundBase_exposer.def( 
                "getTile"
                , getTile_function_type( &::OSG::PolygonForegroundBase::getTile ) );
        
        }
        { //::OSG::PolygonForegroundBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::PolygonForegroundBase::*getType_function_type )(  ) ;
            
            PolygonForegroundBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::PolygonForegroundBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PolygonForegroundBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::PolygonForegroundBase::*getType_function_type )(  ) const;
            
            PolygonForegroundBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::PolygonForegroundBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PolygonForegroundBase::setAspectHeight
        
            typedef void ( ::OSG::PolygonForegroundBase::*setAspectHeight_function_type )( ::OSG::UInt16 const ) ;
            
            PolygonForegroundBase_exposer.def( 
                "setAspectHeight"
                , setAspectHeight_function_type( &::OSG::PolygonForegroundBase::setAspectHeight )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::PolygonForegroundBase::setAspectWidth
        
            typedef void ( ::OSG::PolygonForegroundBase::*setAspectWidth_function_type )( ::OSG::UInt16 const ) ;
            
            PolygonForegroundBase_exposer.def( 
                "setAspectWidth"
                , setAspectWidth_function_type( &::OSG::PolygonForegroundBase::setAspectWidth )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::PolygonForegroundBase::setMaterial
        
            typedef void ( ::OSG::PolygonForegroundBase::*setMaterial_function_type )( ::OSG::PrimeMaterial * const ) ;
            
            PolygonForegroundBase_exposer.def( 
                "setMaterial"
                , setMaterial_function_type( &::OSG::PolygonForegroundBase::setMaterial )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::PolygonForegroundBase::setNormalizedX
        
            typedef void ( ::OSG::PolygonForegroundBase::*setNormalizedX_function_type )( bool const ) ;
            
            PolygonForegroundBase_exposer.def( 
                "setNormalizedX"
                , setNormalizedX_function_type( &::OSG::PolygonForegroundBase::setNormalizedX )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::PolygonForegroundBase::setNormalizedY
        
            typedef void ( ::OSG::PolygonForegroundBase::*setNormalizedY_function_type )( bool const ) ;
            
            PolygonForegroundBase_exposer.def( 
                "setNormalizedY"
                , setNormalizedY_function_type( &::OSG::PolygonForegroundBase::setNormalizedY )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::PolygonForegroundBase::setScale
        
            typedef void ( ::OSG::PolygonForegroundBase::*setScale_function_type )( ::OSG::Real32 const ) ;
            
            PolygonForegroundBase_exposer.def( 
                "setScale"
                , setScale_function_type( &::OSG::PolygonForegroundBase::setScale )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::PolygonForegroundBase::setTile
        
            typedef void ( ::OSG::PolygonForegroundBase::*setTile_function_type )( bool const ) ;
            
            PolygonForegroundBase_exposer.def( 
                "setTile"
                , setTile_function_type( &::OSG::PolygonForegroundBase::setTile )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::Foreground::draw
        
            typedef void ( ::OSG::Foreground::*draw_function_type )( ::OSG::DrawEnv * ) ;
            
            PolygonForegroundBase_exposer.def( 
                "draw"
                , draw_function_type( &::OSG::Foreground::draw )
                , ( bp::arg("pEnv") ) );
        
        }
        PolygonForegroundBase_exposer.staticmethod( "create" );
        PolygonForegroundBase_exposer.staticmethod( "createDependent" );
        PolygonForegroundBase_exposer.staticmethod( "createLocal" );
        PolygonForegroundBase_exposer.staticmethod( "getClassGroupId" );
        PolygonForegroundBase_exposer.staticmethod( "getClassType" );
        PolygonForegroundBase_exposer.staticmethod( "getClassTypeId" );
        PolygonForegroundBase_exposer.def("getMFPositions",PolygonForegroundBase_getMFPositions);
        PolygonForegroundBase_exposer.def("getMFTexCoords",PolygonForegroundBase_getMFTexCoords);
    }

}
