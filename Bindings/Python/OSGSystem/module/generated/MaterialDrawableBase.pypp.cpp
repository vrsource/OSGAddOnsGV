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
#include "OSGSystem_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "MaterialDrawableBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct MaterialDrawableBase_wrapper : OSG::MaterialDrawableBase, bp::wrapper< OSG::MaterialDrawableBase > {



};

void register_MaterialDrawableBase_class(){

    { //::OSG::MaterialDrawableBase
        typedef bp::class_< MaterialDrawableBase_wrapper, bp::bases< OSG::Drawable >, boost::noncopyable > MaterialDrawableBase_exposer_t;
        MaterialDrawableBase_exposer_t MaterialDrawableBase_exposer = MaterialDrawableBase_exposer_t( "MaterialDrawableBase", bp::no_init );
        bp::scope MaterialDrawableBase_scope( MaterialDrawableBase_exposer );
        bp::scope().attr("MaterialFieldId") = (int)OSG::MaterialDrawableBase::MaterialFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::MaterialDrawableBase::NextFieldId;
        { //::OSG::MaterialDrawableBase::copyFromBin
        
            typedef void ( ::OSG::MaterialDrawableBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            MaterialDrawableBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::MaterialDrawableBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::MaterialDrawableBase::copyToBin
        
            typedef void ( ::OSG::MaterialDrawableBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            MaterialDrawableBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::MaterialDrawableBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::MaterialDrawableBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::MaterialDrawableBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            MaterialDrawableBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::MaterialDrawableBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::MaterialDrawableBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            MaterialDrawableBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::MaterialDrawableBase::getClassGroupId ) );
        
        }
        { //::OSG::MaterialDrawableBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            MaterialDrawableBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::MaterialDrawableBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::MaterialDrawableBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            MaterialDrawableBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::MaterialDrawableBase::getClassTypeId ) );
        
        }
        { //::OSG::MaterialDrawableBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::MaterialDrawableBase::*getContainerSize_function_type )(  ) const;
            
            MaterialDrawableBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::MaterialDrawableBase::getContainerSize ) );
        
        }
        { //::OSG::MaterialDrawableBase::getMaterial
        
            typedef ::OSG::Material * ( ::OSG::MaterialDrawableBase::*getMaterial_function_type )(  ) const;
            
            MaterialDrawableBase_exposer.def( 
                "getMaterial"
                , getMaterial_function_type( &::OSG::MaterialDrawableBase::getMaterial )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::MaterialDrawableBase::getSFMaterial
        
            typedef ::OSG::SFUnrecMaterialPtr const * ( ::OSG::MaterialDrawableBase::*getSFMaterial_function_type )(  ) const;
            
            MaterialDrawableBase_exposer.def( 
                "getSFMaterial"
                , getSFMaterial_function_type( &::OSG::MaterialDrawableBase::getSFMaterial )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::MaterialDrawableBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::MaterialDrawableBase::*getType_function_type )(  ) ;
            
            MaterialDrawableBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::MaterialDrawableBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::MaterialDrawableBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::MaterialDrawableBase::*getType_function_type )(  ) const;
            
            MaterialDrawableBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::MaterialDrawableBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::MaterialDrawableBase::setMaterial
        
            typedef void ( ::OSG::MaterialDrawableBase::*setMaterial_function_type )( ::OSG::Material * const ) ;
            
            MaterialDrawableBase_exposer.def( 
                "setMaterial"
                , setMaterial_function_type( &::OSG::MaterialDrawableBase::setMaterial )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::Drawable::fill
        
            typedef void ( ::OSG::Drawable::*fill_function_type )( ::OSG::DrawableStatsAttachment * ) ;
            
            MaterialDrawableBase_exposer.def( 
                "fill"
                , fill_function_type( &::OSG::Drawable::fill )
                , ( bp::arg("pStat") ) );
        
        }
        MaterialDrawableBase_exposer.staticmethod( "getClassGroupId" );
        MaterialDrawableBase_exposer.staticmethod( "getClassType" );
        MaterialDrawableBase_exposer.staticmethod( "getClassTypeId" );
    }

}
