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
#include "GeoInstancerBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct GeoInstancerBase_wrapper : OSG::GeoInstancerBase, bp::wrapper< OSG::GeoInstancerBase > {

    virtual void fill( ::OSG::DrawableStatsAttachment * pStat ){
        bp::override func_fill = this->get_override( "fill" );
        func_fill( boost::python::ptr(pStat) );
    }

};

void register_GeoInstancerBase_class(){

    { //::OSG::GeoInstancerBase
        typedef bp::class_< GeoInstancerBase_wrapper, bp::bases< ::OSG::MaterialDrawable >, boost::noncopyable > GeoInstancerBase_exposer_t;
        GeoInstancerBase_exposer_t GeoInstancerBase_exposer = GeoInstancerBase_exposer_t( "GeoInstancerBase", bp::no_init );
        bp::scope GeoInstancerBase_scope( GeoInstancerBase_exposer );
        bp::scope().attr("NumInstancesFieldId") = (int)OSG::GeoInstancerBase::NumInstancesFieldId;
        bp::scope().attr("BaseGeometryFieldId") = (int)OSG::GeoInstancerBase::BaseGeometryFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::GeoInstancerBase::NextFieldId;
        { //::OSG::GeoInstancerBase::copyFromBin
        
            typedef void ( ::OSG::GeoInstancerBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            GeoInstancerBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::GeoInstancerBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::GeoInstancerBase::copyToBin
        
            typedef void ( ::OSG::GeoInstancerBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            GeoInstancerBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::GeoInstancerBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::GeoInstancerBase::create
        
            typedef ::OSG::GeoInstancerTransitPtr ( *create_function_type )(  );
            
            GeoInstancerBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::GeoInstancerBase::create ) );
        
        }
        { //::OSG::GeoInstancerBase::createDependent
        
            typedef ::OSG::GeoInstancerTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            GeoInstancerBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::GeoInstancerBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::GeoInstancerBase::createLocal
        
            typedef ::OSG::GeoInstancerTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            GeoInstancerBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::GeoInstancerBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::GeoInstancerBase::getBaseGeometry
        
            typedef ::OSG::Geometry * ( ::OSG::GeoInstancerBase::*getBaseGeometry_function_type )(  ) const;
            
            GeoInstancerBase_exposer.def( 
                "getBaseGeometry"
                , getBaseGeometry_function_type( &::OSG::GeoInstancerBase::getBaseGeometry )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeoInstancerBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::GeoInstancerBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            GeoInstancerBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::GeoInstancerBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::GeoInstancerBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            GeoInstancerBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::GeoInstancerBase::getClassGroupId ) );
        
        }
        { //::OSG::GeoInstancerBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            GeoInstancerBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::GeoInstancerBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::GeoInstancerBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            GeoInstancerBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::GeoInstancerBase::getClassTypeId ) );
        
        }
        { //::OSG::GeoInstancerBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::GeoInstancerBase::*getContainerSize_function_type )(  ) const;
            
            GeoInstancerBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::GeoInstancerBase::getContainerSize ) );
        
        }
        { //::OSG::GeoInstancerBase::getNumInstances
        
            typedef ::OSG::UInt32 ( ::OSG::GeoInstancerBase::*getNumInstances_function_type )(  ) const;
            
            GeoInstancerBase_exposer.def( 
                "getNumInstances"
                , getNumInstances_function_type( &::OSG::GeoInstancerBase::getNumInstances ) );
        
        }
        { //::OSG::GeoInstancerBase::getSFBaseGeometry
        
            typedef ::OSG::SFUnrecChildGeometryPtr const * ( ::OSG::GeoInstancerBase::*getSFBaseGeometry_function_type )(  ) const;
            
            GeoInstancerBase_exposer.def( 
                "getSFBaseGeometry"
                , getSFBaseGeometry_function_type( &::OSG::GeoInstancerBase::getSFBaseGeometry )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeoInstancerBase::getSFNumInstances
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::GeoInstancerBase::*getSFNumInstances_function_type )(  ) const;
            
            GeoInstancerBase_exposer.def( 
                "getSFNumInstances"
                , getSFNumInstances_function_type( &::OSG::GeoInstancerBase::getSFNumInstances )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeoInstancerBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::GeoInstancerBase::*getType_function_type )(  ) ;
            
            GeoInstancerBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::GeoInstancerBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeoInstancerBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::GeoInstancerBase::*getType_function_type )(  ) const;
            
            GeoInstancerBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::GeoInstancerBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeoInstancerBase::setBaseGeometry
        
            typedef void ( ::OSG::GeoInstancerBase::*setBaseGeometry_function_type )( ::OSG::Geometry * const ) ;
            
            GeoInstancerBase_exposer.def( 
                "setBaseGeometry"
                , setBaseGeometry_function_type( &::OSG::GeoInstancerBase::setBaseGeometry )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::GeoInstancerBase::setNumInstances
        
            typedef void ( ::OSG::GeoInstancerBase::*setNumInstances_function_type )( ::OSG::UInt32 const ) ;
            
            GeoInstancerBase_exposer.def( 
                "setNumInstances"
                , setNumInstances_function_type( &::OSG::GeoInstancerBase::setNumInstances )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::Drawable::fill
        
            typedef void ( ::OSG::Drawable::*fill_function_type )( ::OSG::DrawableStatsAttachment * ) ;
            
            GeoInstancerBase_exposer.def( 
                "fill"
                , bp::pure_virtual( fill_function_type(&::OSG::Drawable::fill) )
                , ( bp::arg("pStat") ) );
        
        }
        GeoInstancerBase_exposer.staticmethod( "create" );
        GeoInstancerBase_exposer.staticmethod( "createDependent" );
        GeoInstancerBase_exposer.staticmethod( "createLocal" );
        GeoInstancerBase_exposer.staticmethod( "getClassGroupId" );
        GeoInstancerBase_exposer.staticmethod( "getClassType" );
        GeoInstancerBase_exposer.staticmethod( "getClassTypeId" );
    }

}
