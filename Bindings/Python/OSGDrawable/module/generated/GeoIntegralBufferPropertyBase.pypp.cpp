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
#include "GeoIntegralBufferPropertyBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct GeoIntegralBufferPropertyBase_wrapper : OSG::GeoIntegralBufferPropertyBase, bp::wrapper< OSG::GeoIntegralBufferPropertyBase > {

    virtual ::OSG::GeoPropertyTransitPtr clone(  ){
        bp::override func_clone = this->get_override( "clone" );
        return func_clone(  );
    }

    void getGenericValue( ::OSG::UInt64 & val, ::OSG::SizeT const index ) const {
        OSG::GeoIntegralProperty::getGenericValue( val, index );
    }

    void setGenericValue( ::OSG::UInt64 const & val, ::OSG::SizeT const index ){
        OSG::GeoIntegralProperty::setGenericValue( val, index );
    }

};

void register_GeoIntegralBufferPropertyBase_class(){

    { //::OSG::GeoIntegralBufferPropertyBase
        typedef bp::class_< GeoIntegralBufferPropertyBase_wrapper, bp::bases< OSG::GeoIntegralProperty >, boost::noncopyable > GeoIntegralBufferPropertyBase_exposer_t;
        GeoIntegralBufferPropertyBase_exposer_t GeoIntegralBufferPropertyBase_exposer = GeoIntegralBufferPropertyBase_exposer_t( "GeoIntegralBufferPropertyBase", bp::no_init );
        bp::scope GeoIntegralBufferPropertyBase_scope( GeoIntegralBufferPropertyBase_exposer );
        bp::scope().attr("StrideFieldId") = (int)OSG::GeoIntegralBufferPropertyBase::StrideFieldId;
        bp::scope().attr("FormatFieldId") = (int)OSG::GeoIntegralBufferPropertyBase::FormatFieldId;
        bp::scope().attr("FormatSizeFieldId") = (int)OSG::GeoIntegralBufferPropertyBase::FormatSizeFieldId;
        bp::scope().attr("DimensionFieldId") = (int)OSG::GeoIntegralBufferPropertyBase::DimensionFieldId;
        bp::scope().attr("SizeFieldId") = (int)OSG::GeoIntegralBufferPropertyBase::SizeFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::GeoIntegralBufferPropertyBase::NextFieldId;
        { //::OSG::GeoIntegralBufferPropertyBase::copyFromBin
        
            typedef void ( ::OSG::GeoIntegralBufferPropertyBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            GeoIntegralBufferPropertyBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::GeoIntegralBufferPropertyBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::GeoIntegralBufferPropertyBase::copyToBin
        
            typedef void ( ::OSG::GeoIntegralBufferPropertyBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            GeoIntegralBufferPropertyBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::GeoIntegralBufferPropertyBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::GeoIntegralBufferPropertyBase::create
        
            typedef ::OSG::GeoIntegralBufferPropertyTransitPtr ( *create_function_type )(  );
            
            GeoIntegralBufferPropertyBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::GeoIntegralBufferPropertyBase::create ) );
        
        }
        { //::OSG::GeoIntegralBufferPropertyBase::createDependent
        
            typedef ::OSG::GeoIntegralBufferPropertyTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            GeoIntegralBufferPropertyBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::GeoIntegralBufferPropertyBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::GeoIntegralBufferPropertyBase::createLocal
        
            typedef ::OSG::GeoIntegralBufferPropertyTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            GeoIntegralBufferPropertyBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::GeoIntegralBufferPropertyBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::GeoIntegralBufferPropertyBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::GeoIntegralBufferPropertyBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            GeoIntegralBufferPropertyBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::GeoIntegralBufferPropertyBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::GeoIntegralBufferPropertyBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            GeoIntegralBufferPropertyBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::GeoIntegralBufferPropertyBase::getClassGroupId ) );
        
        }
        { //::OSG::GeoIntegralBufferPropertyBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            GeoIntegralBufferPropertyBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::GeoIntegralBufferPropertyBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::GeoIntegralBufferPropertyBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            GeoIntegralBufferPropertyBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::GeoIntegralBufferPropertyBase::getClassTypeId ) );
        
        }
        { //::OSG::GeoIntegralBufferPropertyBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::GeoIntegralBufferPropertyBase::*getContainerSize_function_type )(  ) const;
            
            GeoIntegralBufferPropertyBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::GeoIntegralBufferPropertyBase::getContainerSize ) );
        
        }
        { //::OSG::GeoIntegralBufferPropertyBase::getDimension
        
            typedef ::OSG::UInt32 ( ::OSG::GeoIntegralBufferPropertyBase::*getDimension_function_type )(  ) const;
            
            GeoIntegralBufferPropertyBase_exposer.def( 
                "getDimension"
                , getDimension_function_type( &::OSG::GeoIntegralBufferPropertyBase::getDimension ) );
        
        }
        { //::OSG::GeoIntegralBufferPropertyBase::getFormat
        
            typedef ::OSG::UInt32 ( ::OSG::GeoIntegralBufferPropertyBase::*getFormat_function_type )(  ) const;
            
            GeoIntegralBufferPropertyBase_exposer.def( 
                "getFormat"
                , getFormat_function_type( &::OSG::GeoIntegralBufferPropertyBase::getFormat ) );
        
        }
        { //::OSG::GeoIntegralBufferPropertyBase::getFormatSize
        
            typedef ::OSG::UInt32 ( ::OSG::GeoIntegralBufferPropertyBase::*getFormatSize_function_type )(  ) const;
            
            GeoIntegralBufferPropertyBase_exposer.def( 
                "getFormatSize"
                , getFormatSize_function_type( &::OSG::GeoIntegralBufferPropertyBase::getFormatSize ) );
        
        }
        { //::OSG::GeoIntegralBufferPropertyBase::getSFDimension
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::GeoIntegralBufferPropertyBase::*getSFDimension_function_type )(  ) const;
            
            GeoIntegralBufferPropertyBase_exposer.def( 
                "getSFDimension"
                , getSFDimension_function_type( &::OSG::GeoIntegralBufferPropertyBase::getSFDimension )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeoIntegralBufferPropertyBase::getSFFormat
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::GeoIntegralBufferPropertyBase::*getSFFormat_function_type )(  ) const;
            
            GeoIntegralBufferPropertyBase_exposer.def( 
                "getSFFormat"
                , getSFFormat_function_type( &::OSG::GeoIntegralBufferPropertyBase::getSFFormat )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeoIntegralBufferPropertyBase::getSFFormatSize
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::GeoIntegralBufferPropertyBase::*getSFFormatSize_function_type )(  ) const;
            
            GeoIntegralBufferPropertyBase_exposer.def( 
                "getSFFormatSize"
                , getSFFormatSize_function_type( &::OSG::GeoIntegralBufferPropertyBase::getSFFormatSize )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeoIntegralBufferPropertyBase::getSFSize
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::GeoIntegralBufferPropertyBase::*getSFSize_function_type )(  ) const;
            
            GeoIntegralBufferPropertyBase_exposer.def( 
                "getSFSize"
                , getSFSize_function_type( &::OSG::GeoIntegralBufferPropertyBase::getSFSize )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeoIntegralBufferPropertyBase::getSFStride
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::GeoIntegralBufferPropertyBase::*getSFStride_function_type )(  ) const;
            
            GeoIntegralBufferPropertyBase_exposer.def( 
                "getSFStride"
                , getSFStride_function_type( &::OSG::GeoIntegralBufferPropertyBase::getSFStride )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeoIntegralBufferPropertyBase::getSize
        
            typedef ::OSG::UInt32 ( ::OSG::GeoIntegralBufferPropertyBase::*getSize_function_type )(  ) const;
            
            GeoIntegralBufferPropertyBase_exposer.def( 
                "getSize"
                , getSize_function_type( &::OSG::GeoIntegralBufferPropertyBase::getSize ) );
        
        }
        { //::OSG::GeoIntegralBufferPropertyBase::getStride
        
            typedef ::OSG::UInt32 ( ::OSG::GeoIntegralBufferPropertyBase::*getStride_function_type )(  ) const;
            
            GeoIntegralBufferPropertyBase_exposer.def( 
                "getStride"
                , getStride_function_type( &::OSG::GeoIntegralBufferPropertyBase::getStride ) );
        
        }
        { //::OSG::GeoIntegralBufferPropertyBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::GeoIntegralBufferPropertyBase::*getType_function_type )(  ) ;
            
            GeoIntegralBufferPropertyBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::GeoIntegralBufferPropertyBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeoIntegralBufferPropertyBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::GeoIntegralBufferPropertyBase::*getType_function_type )(  ) const;
            
            GeoIntegralBufferPropertyBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::GeoIntegralBufferPropertyBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeoIntegralBufferPropertyBase::setDimension
        
            typedef void ( ::OSG::GeoIntegralBufferPropertyBase::*setDimension_function_type )( ::OSG::UInt32 const ) ;
            
            GeoIntegralBufferPropertyBase_exposer.def( 
                "setDimension"
                , setDimension_function_type( &::OSG::GeoIntegralBufferPropertyBase::setDimension )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::GeoIntegralBufferPropertyBase::setFormat
        
            typedef void ( ::OSG::GeoIntegralBufferPropertyBase::*setFormat_function_type )( ::OSG::UInt32 const ) ;
            
            GeoIntegralBufferPropertyBase_exposer.def( 
                "setFormat"
                , setFormat_function_type( &::OSG::GeoIntegralBufferPropertyBase::setFormat )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::GeoIntegralBufferPropertyBase::setFormatSize
        
            typedef void ( ::OSG::GeoIntegralBufferPropertyBase::*setFormatSize_function_type )( ::OSG::UInt32 const ) ;
            
            GeoIntegralBufferPropertyBase_exposer.def( 
                "setFormatSize"
                , setFormatSize_function_type( &::OSG::GeoIntegralBufferPropertyBase::setFormatSize )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::GeoIntegralBufferPropertyBase::setSize
        
            typedef void ( ::OSG::GeoIntegralBufferPropertyBase::*setSize_function_type )( ::OSG::UInt32 const ) ;
            
            GeoIntegralBufferPropertyBase_exposer.def( 
                "setSize"
                , setSize_function_type( &::OSG::GeoIntegralBufferPropertyBase::setSize )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::GeoIntegralBufferPropertyBase::setStride
        
            typedef void ( ::OSG::GeoIntegralBufferPropertyBase::*setStride_function_type )( ::OSG::UInt32 const ) ;
            
            GeoIntegralBufferPropertyBase_exposer.def( 
                "setStride"
                , setStride_function_type( &::OSG::GeoIntegralBufferPropertyBase::setStride )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::GeoIntegralProperty::clear
        
            typedef void ( ::OSG::GeoIntegralProperty::*clear_function_type )(  ) ;
            
            GeoIntegralBufferPropertyBase_exposer.def( 
                "clear"
                , clear_function_type( &::OSG::GeoIntegralProperty::clear ) );
        
        }
        { //::OSG::GeoProperty::clone
        
            typedef ::OSG::GeoPropertyTransitPtr ( ::OSG::GeoProperty::*clone_function_type )(  ) ;
            
            GeoIntegralBufferPropertyBase_exposer.def( 
                "clone"
                , bp::pure_virtual( clone_function_type(&::OSG::GeoProperty::clone) ) );
        
        }
        { //::OSG::GeoIntegralProperty::getGenericValue
        
            typedef void ( GeoIntegralBufferPropertyBase_wrapper::*getGenericValue_function_type )( ::OSG::UInt64 &,::OSG::SizeT const ) const;
            
            GeoIntegralBufferPropertyBase_exposer.def( 
                "getGenericValue"
                , getGenericValue_function_type( &GeoIntegralBufferPropertyBase_wrapper::getGenericValue )
                , ( bp::arg("val"), bp::arg("index") ) );
        
        }
        { //::OSG::GeoIntegralProperty::resize
        
            typedef void ( ::OSG::GeoIntegralProperty::*resize_function_type )( ::OSG::SizeT ) ;
            
            GeoIntegralBufferPropertyBase_exposer.def( 
                "resize"
                , resize_function_type( &::OSG::GeoIntegralProperty::resize )
                , ( bp::arg("newsize") ) );
        
        }
        { //::OSG::GeoIntegralProperty::setGenericValue
        
            typedef void ( GeoIntegralBufferPropertyBase_wrapper::*setGenericValue_function_type )( ::OSG::UInt64 const &,::OSG::SizeT const ) ;
            
            GeoIntegralBufferPropertyBase_exposer.def( 
                "setGenericValue"
                , setGenericValue_function_type( &GeoIntegralBufferPropertyBase_wrapper::setGenericValue )
                , ( bp::arg("val"), bp::arg("index") ) );
        
        }
        { //::OSG::GeoIntegralProperty::size
        
            typedef ::OSG::SizeT ( ::OSG::GeoIntegralProperty::*size_function_type )(  ) const;
            
            GeoIntegralBufferPropertyBase_exposer.def( 
                "size"
                , size_function_type( &::OSG::GeoIntegralProperty::size ) );
        
        }
        { //::OSG::GeoIntegralProperty::size32
        
            typedef ::OSG::UInt32 ( ::OSG::GeoIntegralProperty::*size32_function_type )(  ) const;
            
            GeoIntegralBufferPropertyBase_exposer.def( 
                "size32"
                , size32_function_type( &::OSG::GeoIntegralProperty::size32 ) );
        
        }
        GeoIntegralBufferPropertyBase_exposer.staticmethod( "create" );
        GeoIntegralBufferPropertyBase_exposer.staticmethod( "createDependent" );
        GeoIntegralBufferPropertyBase_exposer.staticmethod( "createLocal" );
        GeoIntegralBufferPropertyBase_exposer.staticmethod( "getClassGroupId" );
        GeoIntegralBufferPropertyBase_exposer.staticmethod( "getClassType" );
        GeoIntegralBufferPropertyBase_exposer.staticmethod( "getClassTypeId" );
    }

}
