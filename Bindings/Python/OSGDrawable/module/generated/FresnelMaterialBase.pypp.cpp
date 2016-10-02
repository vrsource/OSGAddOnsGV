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
#include "OSGDrawable_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "FresnelMaterialBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_FresnelMaterialBase_class(){

    { //::OSG::FresnelMaterialBase
        typedef bp::class_< OSG::FresnelMaterialBase, bp::bases< ::OSG::ChunkMaterial >, boost::noncopyable > FresnelMaterialBase_exposer_t;
        FresnelMaterialBase_exposer_t FresnelMaterialBase_exposer = FresnelMaterialBase_exposer_t( "FresnelMaterialBase", bp::no_init );
        bp::scope FresnelMaterialBase_scope( FresnelMaterialBase_exposer );
        bp::scope().attr("AmbientFieldId") = (int)OSG::FresnelMaterialBase::AmbientFieldId;
        bp::scope().attr("DiffuseFieldId") = (int)OSG::FresnelMaterialBase::DiffuseFieldId;
        bp::scope().attr("SpecularFieldId") = (int)OSG::FresnelMaterialBase::SpecularFieldId;
        bp::scope().attr("ShininessFieldId") = (int)OSG::FresnelMaterialBase::ShininessFieldId;
        bp::scope().attr("EmissionFieldId") = (int)OSG::FresnelMaterialBase::EmissionFieldId;
        bp::scope().attr("TransparencyFieldId") = (int)OSG::FresnelMaterialBase::TransparencyFieldId;
        bp::scope().attr("LitFieldId") = (int)OSG::FresnelMaterialBase::LitFieldId;
        bp::scope().attr("ColorMaterialFieldId") = (int)OSG::FresnelMaterialBase::ColorMaterialFieldId;
        bp::scope().attr("IndexFieldId") = (int)OSG::FresnelMaterialBase::IndexFieldId;
        bp::scope().attr("ScaleFieldId") = (int)OSG::FresnelMaterialBase::ScaleFieldId;
        bp::scope().attr("BiasFieldId") = (int)OSG::FresnelMaterialBase::BiasFieldId;
        bp::scope().attr("ImageFieldId") = (int)OSG::FresnelMaterialBase::ImageFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::FresnelMaterialBase::NextFieldId;
        { //::OSG::FresnelMaterialBase::copyFromBin
        
            typedef void ( ::OSG::FresnelMaterialBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            FresnelMaterialBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::FresnelMaterialBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::FresnelMaterialBase::copyToBin
        
            typedef void ( ::OSG::FresnelMaterialBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            FresnelMaterialBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::FresnelMaterialBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::FresnelMaterialBase::create
        
            typedef ::OSG::FresnelMaterialTransitPtr ( *create_function_type )(  );
            
            FresnelMaterialBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::FresnelMaterialBase::create ) );
        
        }
        { //::OSG::FresnelMaterialBase::createDependent
        
            typedef ::OSG::FresnelMaterialTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            FresnelMaterialBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::FresnelMaterialBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::FresnelMaterialBase::createLocal
        
            typedef ::OSG::FresnelMaterialTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            FresnelMaterialBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::FresnelMaterialBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::FresnelMaterialBase::getAmbient
        
            typedef ::OSG::Color3f const & ( ::OSG::FresnelMaterialBase::*getAmbient_function_type )(  ) const;
            
            FresnelMaterialBase_exposer.def( 
                "getAmbient"
                , getAmbient_function_type( &::OSG::FresnelMaterialBase::getAmbient )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::FresnelMaterialBase::getBias
        
            typedef ::OSG::Real32 ( ::OSG::FresnelMaterialBase::*getBias_function_type )(  ) const;
            
            FresnelMaterialBase_exposer.def( 
                "getBias"
                , getBias_function_type( &::OSG::FresnelMaterialBase::getBias ) );
        
        }
        { //::OSG::FresnelMaterialBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::FresnelMaterialBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            FresnelMaterialBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::FresnelMaterialBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::FresnelMaterialBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            FresnelMaterialBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::FresnelMaterialBase::getClassGroupId ) );
        
        }
        { //::OSG::FresnelMaterialBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            FresnelMaterialBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::FresnelMaterialBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::FresnelMaterialBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            FresnelMaterialBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::FresnelMaterialBase::getClassTypeId ) );
        
        }
        { //::OSG::FresnelMaterialBase::getColorMaterial
        
            typedef ::GLenum const & ( ::OSG::FresnelMaterialBase::*getColorMaterial_function_type )(  ) const;
            
            FresnelMaterialBase_exposer.def( 
                "getColorMaterial"
                , getColorMaterial_function_type( &::OSG::FresnelMaterialBase::getColorMaterial )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::FresnelMaterialBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::FresnelMaterialBase::*getContainerSize_function_type )(  ) const;
            
            FresnelMaterialBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::FresnelMaterialBase::getContainerSize ) );
        
        }
        { //::OSG::FresnelMaterialBase::getDiffuse
        
            typedef ::OSG::Color3f const & ( ::OSG::FresnelMaterialBase::*getDiffuse_function_type )(  ) const;
            
            FresnelMaterialBase_exposer.def( 
                "getDiffuse"
                , getDiffuse_function_type( &::OSG::FresnelMaterialBase::getDiffuse )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::FresnelMaterialBase::getEmission
        
            typedef ::OSG::Color3f const & ( ::OSG::FresnelMaterialBase::*getEmission_function_type )(  ) const;
            
            FresnelMaterialBase_exposer.def( 
                "getEmission"
                , getEmission_function_type( &::OSG::FresnelMaterialBase::getEmission )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::FresnelMaterialBase::getImage
        
            typedef ::OSG::Image * ( ::OSG::FresnelMaterialBase::*getImage_function_type )(  ) const;
            
            FresnelMaterialBase_exposer.def( 
                "getImage"
                , getImage_function_type( &::OSG::FresnelMaterialBase::getImage )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FresnelMaterialBase::getIndex
        
            typedef ::OSG::Real32 ( ::OSG::FresnelMaterialBase::*getIndex_function_type )(  ) const;
            
            FresnelMaterialBase_exposer.def( 
                "getIndex"
                , getIndex_function_type( &::OSG::FresnelMaterialBase::getIndex ) );
        
        }
        { //::OSG::FresnelMaterialBase::getLit
        
            typedef bool ( ::OSG::FresnelMaterialBase::*getLit_function_type )(  ) const;
            
            FresnelMaterialBase_exposer.def( 
                "getLit"
                , getLit_function_type( &::OSG::FresnelMaterialBase::getLit ) );
        
        }
        { //::OSG::FresnelMaterialBase::getSFAmbient
        
            typedef ::OSG::SFColor3f const * ( ::OSG::FresnelMaterialBase::*getSFAmbient_function_type )(  ) const;
            
            FresnelMaterialBase_exposer.def( 
                "getSFAmbient"
                , getSFAmbient_function_type( &::OSG::FresnelMaterialBase::getSFAmbient )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FresnelMaterialBase::getSFBias
        
            typedef ::OSG::SFReal32 const * ( ::OSG::FresnelMaterialBase::*getSFBias_function_type )(  ) const;
            
            FresnelMaterialBase_exposer.def( 
                "getSFBias"
                , getSFBias_function_type( &::OSG::FresnelMaterialBase::getSFBias )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FresnelMaterialBase::getSFColorMaterial
        
            typedef ::OSG::SFGLenum const * ( ::OSG::FresnelMaterialBase::*getSFColorMaterial_function_type )(  ) const;
            
            FresnelMaterialBase_exposer.def( 
                "getSFColorMaterial"
                , getSFColorMaterial_function_type( &::OSG::FresnelMaterialBase::getSFColorMaterial )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FresnelMaterialBase::getSFDiffuse
        
            typedef ::OSG::SFColor3f const * ( ::OSG::FresnelMaterialBase::*getSFDiffuse_function_type )(  ) const;
            
            FresnelMaterialBase_exposer.def( 
                "getSFDiffuse"
                , getSFDiffuse_function_type( &::OSG::FresnelMaterialBase::getSFDiffuse )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FresnelMaterialBase::getSFEmission
        
            typedef ::OSG::SFColor3f const * ( ::OSG::FresnelMaterialBase::*getSFEmission_function_type )(  ) const;
            
            FresnelMaterialBase_exposer.def( 
                "getSFEmission"
                , getSFEmission_function_type( &::OSG::FresnelMaterialBase::getSFEmission )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FresnelMaterialBase::getSFImage
        
            typedef ::OSG::SFUnrecImagePtr const * ( ::OSG::FresnelMaterialBase::*getSFImage_function_type )(  ) const;
            
            FresnelMaterialBase_exposer.def( 
                "getSFImage"
                , getSFImage_function_type( &::OSG::FresnelMaterialBase::getSFImage )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FresnelMaterialBase::getSFIndex
        
            typedef ::OSG::SFReal32 const * ( ::OSG::FresnelMaterialBase::*getSFIndex_function_type )(  ) const;
            
            FresnelMaterialBase_exposer.def( 
                "getSFIndex"
                , getSFIndex_function_type( &::OSG::FresnelMaterialBase::getSFIndex )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FresnelMaterialBase::getSFLit
        
            typedef ::OSG::SFBool const * ( ::OSG::FresnelMaterialBase::*getSFLit_function_type )(  ) const;
            
            FresnelMaterialBase_exposer.def( 
                "getSFLit"
                , getSFLit_function_type( &::OSG::FresnelMaterialBase::getSFLit )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FresnelMaterialBase::getSFScale
        
            typedef ::OSG::SFReal32 const * ( ::OSG::FresnelMaterialBase::*getSFScale_function_type )(  ) const;
            
            FresnelMaterialBase_exposer.def( 
                "getSFScale"
                , getSFScale_function_type( &::OSG::FresnelMaterialBase::getSFScale )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FresnelMaterialBase::getSFShininess
        
            typedef ::OSG::SFReal32 const * ( ::OSG::FresnelMaterialBase::*getSFShininess_function_type )(  ) const;
            
            FresnelMaterialBase_exposer.def( 
                "getSFShininess"
                , getSFShininess_function_type( &::OSG::FresnelMaterialBase::getSFShininess )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FresnelMaterialBase::getSFSpecular
        
            typedef ::OSG::SFColor3f const * ( ::OSG::FresnelMaterialBase::*getSFSpecular_function_type )(  ) const;
            
            FresnelMaterialBase_exposer.def( 
                "getSFSpecular"
                , getSFSpecular_function_type( &::OSG::FresnelMaterialBase::getSFSpecular )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FresnelMaterialBase::getSFTransparency
        
            typedef ::OSG::SFReal32 const * ( ::OSG::FresnelMaterialBase::*getSFTransparency_function_type )(  ) const;
            
            FresnelMaterialBase_exposer.def( 
                "getSFTransparency"
                , getSFTransparency_function_type( &::OSG::FresnelMaterialBase::getSFTransparency )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FresnelMaterialBase::getScale
        
            typedef ::OSG::Real32 ( ::OSG::FresnelMaterialBase::*getScale_function_type )(  ) const;
            
            FresnelMaterialBase_exposer.def( 
                "getScale"
                , getScale_function_type( &::OSG::FresnelMaterialBase::getScale ) );
        
        }
        { //::OSG::FresnelMaterialBase::getShininess
        
            typedef ::OSG::Real32 ( ::OSG::FresnelMaterialBase::*getShininess_function_type )(  ) const;
            
            FresnelMaterialBase_exposer.def( 
                "getShininess"
                , getShininess_function_type( &::OSG::FresnelMaterialBase::getShininess ) );
        
        }
        { //::OSG::FresnelMaterialBase::getSpecular
        
            typedef ::OSG::Color3f const & ( ::OSG::FresnelMaterialBase::*getSpecular_function_type )(  ) const;
            
            FresnelMaterialBase_exposer.def( 
                "getSpecular"
                , getSpecular_function_type( &::OSG::FresnelMaterialBase::getSpecular )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::FresnelMaterialBase::getTransparency
        
            typedef ::OSG::Real32 ( ::OSG::FresnelMaterialBase::*getTransparency_function_type )(  ) const;
            
            FresnelMaterialBase_exposer.def( 
                "getTransparency"
                , getTransparency_function_type( &::OSG::FresnelMaterialBase::getTransparency ) );
        
        }
        { //::OSG::FresnelMaterialBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::FresnelMaterialBase::*getType_function_type )(  ) ;
            
            FresnelMaterialBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::FresnelMaterialBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FresnelMaterialBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::FresnelMaterialBase::*getType_function_type )(  ) const;
            
            FresnelMaterialBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::FresnelMaterialBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FresnelMaterialBase::setAmbient
        
            typedef void ( ::OSG::FresnelMaterialBase::*setAmbient_function_type )( ::OSG::Color3f const & ) ;
            
            FresnelMaterialBase_exposer.def( 
                "setAmbient"
                , setAmbient_function_type( &::OSG::FresnelMaterialBase::setAmbient )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::FresnelMaterialBase::setBias
        
            typedef void ( ::OSG::FresnelMaterialBase::*setBias_function_type )( ::OSG::Real32 const ) ;
            
            FresnelMaterialBase_exposer.def( 
                "setBias"
                , setBias_function_type( &::OSG::FresnelMaterialBase::setBias )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::FresnelMaterialBase::setColorMaterial
        
            typedef void ( ::OSG::FresnelMaterialBase::*setColorMaterial_function_type )( ::GLenum const & ) ;
            
            FresnelMaterialBase_exposer.def( 
                "setColorMaterial"
                , setColorMaterial_function_type( &::OSG::FresnelMaterialBase::setColorMaterial )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::FresnelMaterialBase::setDiffuse
        
            typedef void ( ::OSG::FresnelMaterialBase::*setDiffuse_function_type )( ::OSG::Color3f const & ) ;
            
            FresnelMaterialBase_exposer.def( 
                "setDiffuse"
                , setDiffuse_function_type( &::OSG::FresnelMaterialBase::setDiffuse )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::FresnelMaterialBase::setEmission
        
            typedef void ( ::OSG::FresnelMaterialBase::*setEmission_function_type )( ::OSG::Color3f const & ) ;
            
            FresnelMaterialBase_exposer.def( 
                "setEmission"
                , setEmission_function_type( &::OSG::FresnelMaterialBase::setEmission )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::FresnelMaterialBase::setImage
        
            typedef void ( ::OSG::FresnelMaterialBase::*setImage_function_type )( ::OSG::Image * const ) ;
            
            FresnelMaterialBase_exposer.def( 
                "setImage"
                , setImage_function_type( &::OSG::FresnelMaterialBase::setImage )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::FresnelMaterialBase::setIndex
        
            typedef void ( ::OSG::FresnelMaterialBase::*setIndex_function_type )( ::OSG::Real32 const ) ;
            
            FresnelMaterialBase_exposer.def( 
                "setIndex"
                , setIndex_function_type( &::OSG::FresnelMaterialBase::setIndex )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::FresnelMaterialBase::setLit
        
            typedef void ( ::OSG::FresnelMaterialBase::*setLit_function_type )( bool const ) ;
            
            FresnelMaterialBase_exposer.def( 
                "setLit"
                , setLit_function_type( &::OSG::FresnelMaterialBase::setLit )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::FresnelMaterialBase::setScale
        
            typedef void ( ::OSG::FresnelMaterialBase::*setScale_function_type )( ::OSG::Real32 const ) ;
            
            FresnelMaterialBase_exposer.def( 
                "setScale"
                , setScale_function_type( &::OSG::FresnelMaterialBase::setScale )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::FresnelMaterialBase::setShininess
        
            typedef void ( ::OSG::FresnelMaterialBase::*setShininess_function_type )( ::OSG::Real32 const ) ;
            
            FresnelMaterialBase_exposer.def( 
                "setShininess"
                , setShininess_function_type( &::OSG::FresnelMaterialBase::setShininess )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::FresnelMaterialBase::setSpecular
        
            typedef void ( ::OSG::FresnelMaterialBase::*setSpecular_function_type )( ::OSG::Color3f const & ) ;
            
            FresnelMaterialBase_exposer.def( 
                "setSpecular"
                , setSpecular_function_type( &::OSG::FresnelMaterialBase::setSpecular )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::FresnelMaterialBase::setTransparency
        
            typedef void ( ::OSG::FresnelMaterialBase::*setTransparency_function_type )( ::OSG::Real32 const ) ;
            
            FresnelMaterialBase_exposer.def( 
                "setTransparency"
                , setTransparency_function_type( &::OSG::FresnelMaterialBase::setTransparency )
                , ( bp::arg("value") ) );
        
        }
        FresnelMaterialBase_exposer.staticmethod( "create" );
        FresnelMaterialBase_exposer.staticmethod( "createDependent" );
        FresnelMaterialBase_exposer.staticmethod( "createLocal" );
        FresnelMaterialBase_exposer.staticmethod( "getClassGroupId" );
        FresnelMaterialBase_exposer.staticmethod( "getClassType" );
        FresnelMaterialBase_exposer.staticmethod( "getClassTypeId" );
    }

}
