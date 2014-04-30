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
#include "OSGDrawable_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "SimpleTexturedMaterialBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_SimpleTexturedMaterialBase_class(){

    { //::OSG::SimpleTexturedMaterialBase
        typedef bp::class_< OSG::SimpleTexturedMaterialBase, bp::bases< ::OSG::SimpleMaterial >, boost::noncopyable > SimpleTexturedMaterialBase_exposer_t;
        SimpleTexturedMaterialBase_exposer_t SimpleTexturedMaterialBase_exposer = SimpleTexturedMaterialBase_exposer_t( "SimpleTexturedMaterialBase", bp::no_init );
        bp::scope SimpleTexturedMaterialBase_scope( SimpleTexturedMaterialBase_exposer );
        bp::scope().attr("ImageFieldId") = (int)OSG::SimpleTexturedMaterialBase::ImageFieldId;
        bp::scope().attr("MinFilterFieldId") = (int)OSG::SimpleTexturedMaterialBase::MinFilterFieldId;
        bp::scope().attr("MagFilterFieldId") = (int)OSG::SimpleTexturedMaterialBase::MagFilterFieldId;
        bp::scope().attr("EnvModeFieldId") = (int)OSG::SimpleTexturedMaterialBase::EnvModeFieldId;
        bp::scope().attr("EnvMapFieldId") = (int)OSG::SimpleTexturedMaterialBase::EnvMapFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::SimpleTexturedMaterialBase::NextFieldId;
        { //::OSG::SimpleTexturedMaterialBase::copyFromBin
        
            typedef void ( ::OSG::SimpleTexturedMaterialBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            SimpleTexturedMaterialBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::SimpleTexturedMaterialBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::SimpleTexturedMaterialBase::copyToBin
        
            typedef void ( ::OSG::SimpleTexturedMaterialBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            SimpleTexturedMaterialBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::SimpleTexturedMaterialBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::SimpleTexturedMaterialBase::create
        
            typedef ::OSG::SimpleTexturedMaterialTransitPtr ( *create_function_type )(  );
            
            SimpleTexturedMaterialBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::SimpleTexturedMaterialBase::create ) );
        
        }
        { //::OSG::SimpleTexturedMaterialBase::createDependent
        
            typedef ::OSG::SimpleTexturedMaterialTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            SimpleTexturedMaterialBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::SimpleTexturedMaterialBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::SimpleTexturedMaterialBase::createLocal
        
            typedef ::OSG::SimpleTexturedMaterialTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            SimpleTexturedMaterialBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::SimpleTexturedMaterialBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::SimpleTexturedMaterialBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::SimpleTexturedMaterialBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            SimpleTexturedMaterialBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::SimpleTexturedMaterialBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::SimpleTexturedMaterialBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            SimpleTexturedMaterialBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::SimpleTexturedMaterialBase::getClassGroupId ) );
        
        }
        { //::OSG::SimpleTexturedMaterialBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            SimpleTexturedMaterialBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::SimpleTexturedMaterialBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::SimpleTexturedMaterialBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            SimpleTexturedMaterialBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::SimpleTexturedMaterialBase::getClassTypeId ) );
        
        }
        { //::OSG::SimpleTexturedMaterialBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::SimpleTexturedMaterialBase::*getContainerSize_function_type )(  ) const;
            
            SimpleTexturedMaterialBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::SimpleTexturedMaterialBase::getContainerSize ) );
        
        }
        { //::OSG::SimpleTexturedMaterialBase::getEnvMap
        
            typedef bool ( ::OSG::SimpleTexturedMaterialBase::*getEnvMap_function_type )(  ) const;
            
            SimpleTexturedMaterialBase_exposer.def( 
                "getEnvMap"
                , getEnvMap_function_type( &::OSG::SimpleTexturedMaterialBase::getEnvMap ) );
        
        }
        { //::OSG::SimpleTexturedMaterialBase::getEnvMode
        
            typedef ::GLenum const & ( ::OSG::SimpleTexturedMaterialBase::*getEnvMode_function_type )(  ) const;
            
            SimpleTexturedMaterialBase_exposer.def( 
                "getEnvMode"
                , getEnvMode_function_type( &::OSG::SimpleTexturedMaterialBase::getEnvMode )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::SimpleTexturedMaterialBase::getImage
        
            typedef ::OSG::Image * ( ::OSG::SimpleTexturedMaterialBase::*getImage_function_type )(  ) const;
            
            SimpleTexturedMaterialBase_exposer.def( 
                "getImage"
                , getImage_function_type( &::OSG::SimpleTexturedMaterialBase::getImage )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleTexturedMaterialBase::getMagFilter
        
            typedef ::GLenum const & ( ::OSG::SimpleTexturedMaterialBase::*getMagFilter_function_type )(  ) const;
            
            SimpleTexturedMaterialBase_exposer.def( 
                "getMagFilter"
                , getMagFilter_function_type( &::OSG::SimpleTexturedMaterialBase::getMagFilter )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::SimpleTexturedMaterialBase::getMinFilter
        
            typedef ::GLenum const & ( ::OSG::SimpleTexturedMaterialBase::*getMinFilter_function_type )(  ) const;
            
            SimpleTexturedMaterialBase_exposer.def( 
                "getMinFilter"
                , getMinFilter_function_type( &::OSG::SimpleTexturedMaterialBase::getMinFilter )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::SimpleTexturedMaterialBase::getSFEnvMap
        
            typedef ::OSG::SFBool const * ( ::OSG::SimpleTexturedMaterialBase::*getSFEnvMap_function_type )(  ) const;
            
            SimpleTexturedMaterialBase_exposer.def( 
                "getSFEnvMap"
                , getSFEnvMap_function_type( &::OSG::SimpleTexturedMaterialBase::getSFEnvMap )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleTexturedMaterialBase::getSFEnvMode
        
            typedef ::OSG::SFGLenum const * ( ::OSG::SimpleTexturedMaterialBase::*getSFEnvMode_function_type )(  ) const;
            
            SimpleTexturedMaterialBase_exposer.def( 
                "getSFEnvMode"
                , getSFEnvMode_function_type( &::OSG::SimpleTexturedMaterialBase::getSFEnvMode )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleTexturedMaterialBase::getSFImage
        
            typedef ::OSG::SFUnrecImagePtr const * ( ::OSG::SimpleTexturedMaterialBase::*getSFImage_function_type )(  ) const;
            
            SimpleTexturedMaterialBase_exposer.def( 
                "getSFImage"
                , getSFImage_function_type( &::OSG::SimpleTexturedMaterialBase::getSFImage )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleTexturedMaterialBase::getSFMagFilter
        
            typedef ::OSG::SFGLenum const * ( ::OSG::SimpleTexturedMaterialBase::*getSFMagFilter_function_type )(  ) const;
            
            SimpleTexturedMaterialBase_exposer.def( 
                "getSFMagFilter"
                , getSFMagFilter_function_type( &::OSG::SimpleTexturedMaterialBase::getSFMagFilter )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleTexturedMaterialBase::getSFMinFilter
        
            typedef ::OSG::SFGLenum const * ( ::OSG::SimpleTexturedMaterialBase::*getSFMinFilter_function_type )(  ) const;
            
            SimpleTexturedMaterialBase_exposer.def( 
                "getSFMinFilter"
                , getSFMinFilter_function_type( &::OSG::SimpleTexturedMaterialBase::getSFMinFilter )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleTexturedMaterialBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::SimpleTexturedMaterialBase::*getType_function_type )(  ) ;
            
            SimpleTexturedMaterialBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::SimpleTexturedMaterialBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleTexturedMaterialBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::SimpleTexturedMaterialBase::*getType_function_type )(  ) const;
            
            SimpleTexturedMaterialBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::SimpleTexturedMaterialBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleTexturedMaterialBase::setEnvMap
        
            typedef void ( ::OSG::SimpleTexturedMaterialBase::*setEnvMap_function_type )( bool const ) ;
            
            SimpleTexturedMaterialBase_exposer.def( 
                "setEnvMap"
                , setEnvMap_function_type( &::OSG::SimpleTexturedMaterialBase::setEnvMap )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SimpleTexturedMaterialBase::setEnvMode
        
            typedef void ( ::OSG::SimpleTexturedMaterialBase::*setEnvMode_function_type )( ::GLenum const & ) ;
            
            SimpleTexturedMaterialBase_exposer.def( 
                "setEnvMode"
                , setEnvMode_function_type( &::OSG::SimpleTexturedMaterialBase::setEnvMode )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SimpleTexturedMaterialBase::setImage
        
            typedef void ( ::OSG::SimpleTexturedMaterialBase::*setImage_function_type )( ::OSG::Image * const ) ;
            
            SimpleTexturedMaterialBase_exposer.def( 
                "setImage"
                , setImage_function_type( &::OSG::SimpleTexturedMaterialBase::setImage )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SimpleTexturedMaterialBase::setMagFilter
        
            typedef void ( ::OSG::SimpleTexturedMaterialBase::*setMagFilter_function_type )( ::GLenum const & ) ;
            
            SimpleTexturedMaterialBase_exposer.def( 
                "setMagFilter"
                , setMagFilter_function_type( &::OSG::SimpleTexturedMaterialBase::setMagFilter )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SimpleTexturedMaterialBase::setMinFilter
        
            typedef void ( ::OSG::SimpleTexturedMaterialBase::*setMinFilter_function_type )( ::GLenum const & ) ;
            
            SimpleTexturedMaterialBase_exposer.def( 
                "setMinFilter"
                , setMinFilter_function_type( &::OSG::SimpleTexturedMaterialBase::setMinFilter )
                , ( bp::arg("value") ) );
        
        }
        SimpleTexturedMaterialBase_exposer.staticmethod( "create" );
        SimpleTexturedMaterialBase_exposer.staticmethod( "createDependent" );
        SimpleTexturedMaterialBase_exposer.staticmethod( "createLocal" );
        SimpleTexturedMaterialBase_exposer.staticmethod( "getClassGroupId" );
        SimpleTexturedMaterialBase_exposer.staticmethod( "getClassType" );
        SimpleTexturedMaterialBase_exposer.staticmethod( "getClassTypeId" );
    }

}
