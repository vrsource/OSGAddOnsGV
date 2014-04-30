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
#include "GeoVectorBufferPropertyBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct GeoVectorBufferPropertyBase_wrapper : OSG::GeoVectorBufferPropertyBase, bp::wrapper< OSG::GeoVectorBufferPropertyBase > {

    virtual void clear(  ){
        bp::override func_clear = this->get_override( "clear" );
        func_clear(  );
    }

    virtual ::OSG::GeoPropertyTransitPtr clone(  ){
        bp::override func_clone = this->get_override( "clone" );
        return func_clone(  );
    }

    virtual void getGenericValue( ::OSG::Vec4d & val, ::OSG::SizeT const index ) const {
        bp::override func_getGenericValue = this->get_override( "getGenericValue" );
        func_getGenericValue( boost::ref(val), index );
    }

    virtual bool getNormalize(  ) const {
        bp::override func_getNormalize = this->get_override( "getNormalize" );
        return func_getNormalize(  );
    }

    virtual void resize( ::OSG::SizeT newsize ){
        bp::override func_resize = this->get_override( "resize" );
        func_resize( newsize );
    }

    virtual void setGenericValue( ::OSG::Vec4d const & val, ::OSG::SizeT const index ){
        bp::override func_setGenericValue = this->get_override( "setGenericValue" );
        func_setGenericValue( boost::ref(val), index );
    }

    virtual ::OSG::SizeT size(  ) const {
        bp::override func_size = this->get_override( "size" );
        return func_size(  );
    }

    virtual ::OSG::UInt32 size32(  ) const {
        bp::override func_size32 = this->get_override( "size32" );
        return func_size32(  );
    }

};

void register_GeoVectorBufferPropertyBase_class(){

    { //::OSG::GeoVectorBufferPropertyBase
        typedef bp::class_< GeoVectorBufferPropertyBase_wrapper, bp::bases< ::OSG::GeoVectorProperty >, boost::noncopyable > GeoVectorBufferPropertyBase_exposer_t;
        GeoVectorBufferPropertyBase_exposer_t GeoVectorBufferPropertyBase_exposer = GeoVectorBufferPropertyBase_exposer_t( "GeoVectorBufferPropertyBase", bp::no_init );
        bp::scope GeoVectorBufferPropertyBase_scope( GeoVectorBufferPropertyBase_exposer );
        bp::scope().attr("StrideFieldId") = (int)OSG::GeoVectorBufferPropertyBase::StrideFieldId;
        bp::scope().attr("FormatFieldId") = (int)OSG::GeoVectorBufferPropertyBase::FormatFieldId;
        bp::scope().attr("FormatSizeFieldId") = (int)OSG::GeoVectorBufferPropertyBase::FormatSizeFieldId;
        bp::scope().attr("DimensionFieldId") = (int)OSG::GeoVectorBufferPropertyBase::DimensionFieldId;
        bp::scope().attr("VectorTypeFieldId") = (int)OSG::GeoVectorBufferPropertyBase::VectorTypeFieldId;
        bp::scope().attr("SizeFieldId") = (int)OSG::GeoVectorBufferPropertyBase::SizeFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::GeoVectorBufferPropertyBase::NextFieldId;
        { //::OSG::GeoVectorBufferPropertyBase::copyFromBin
        
            typedef void ( ::OSG::GeoVectorBufferPropertyBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            GeoVectorBufferPropertyBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::GeoVectorBufferPropertyBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::GeoVectorBufferPropertyBase::copyToBin
        
            typedef void ( ::OSG::GeoVectorBufferPropertyBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            GeoVectorBufferPropertyBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::GeoVectorBufferPropertyBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::GeoVectorBufferPropertyBase::create
        
            typedef ::OSG::GeoVectorBufferPropertyTransitPtr ( *create_function_type )(  );
            
            GeoVectorBufferPropertyBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::GeoVectorBufferPropertyBase::create ) );
        
        }
        { //::OSG::GeoVectorBufferPropertyBase::createDependent
        
            typedef ::OSG::GeoVectorBufferPropertyTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            GeoVectorBufferPropertyBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::GeoVectorBufferPropertyBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::GeoVectorBufferPropertyBase::createLocal
        
            typedef ::OSG::GeoVectorBufferPropertyTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            GeoVectorBufferPropertyBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::GeoVectorBufferPropertyBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::GeoVectorBufferPropertyBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::GeoVectorBufferPropertyBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            GeoVectorBufferPropertyBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::GeoVectorBufferPropertyBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::GeoVectorBufferPropertyBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            GeoVectorBufferPropertyBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::GeoVectorBufferPropertyBase::getClassGroupId ) );
        
        }
        { //::OSG::GeoVectorBufferPropertyBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            GeoVectorBufferPropertyBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::GeoVectorBufferPropertyBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::GeoVectorBufferPropertyBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            GeoVectorBufferPropertyBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::GeoVectorBufferPropertyBase::getClassTypeId ) );
        
        }
        { //::OSG::GeoVectorBufferPropertyBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::GeoVectorBufferPropertyBase::*getContainerSize_function_type )(  ) const;
            
            GeoVectorBufferPropertyBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::GeoVectorBufferPropertyBase::getContainerSize ) );
        
        }
        { //::OSG::GeoVectorBufferPropertyBase::getDimension
        
            typedef ::OSG::UInt32 ( ::OSG::GeoVectorBufferPropertyBase::*getDimension_function_type )(  ) const;
            
            GeoVectorBufferPropertyBase_exposer.def( 
                "getDimension"
                , getDimension_function_type( &::OSG::GeoVectorBufferPropertyBase::getDimension ) );
        
        }
        { //::OSG::GeoVectorBufferPropertyBase::getFormat
        
            typedef ::OSG::UInt32 ( ::OSG::GeoVectorBufferPropertyBase::*getFormat_function_type )(  ) const;
            
            GeoVectorBufferPropertyBase_exposer.def( 
                "getFormat"
                , getFormat_function_type( &::OSG::GeoVectorBufferPropertyBase::getFormat ) );
        
        }
        { //::OSG::GeoVectorBufferPropertyBase::getFormatSize
        
            typedef ::OSG::UInt32 ( ::OSG::GeoVectorBufferPropertyBase::*getFormatSize_function_type )(  ) const;
            
            GeoVectorBufferPropertyBase_exposer.def( 
                "getFormatSize"
                , getFormatSize_function_type( &::OSG::GeoVectorBufferPropertyBase::getFormatSize ) );
        
        }
        { //::OSG::GeoVectorBufferPropertyBase::getSFDimension
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::GeoVectorBufferPropertyBase::*getSFDimension_function_type )(  ) const;
            
            GeoVectorBufferPropertyBase_exposer.def( 
                "getSFDimension"
                , getSFDimension_function_type( &::OSG::GeoVectorBufferPropertyBase::getSFDimension )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeoVectorBufferPropertyBase::getSFFormat
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::GeoVectorBufferPropertyBase::*getSFFormat_function_type )(  ) const;
            
            GeoVectorBufferPropertyBase_exposer.def( 
                "getSFFormat"
                , getSFFormat_function_type( &::OSG::GeoVectorBufferPropertyBase::getSFFormat )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeoVectorBufferPropertyBase::getSFFormatSize
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::GeoVectorBufferPropertyBase::*getSFFormatSize_function_type )(  ) const;
            
            GeoVectorBufferPropertyBase_exposer.def( 
                "getSFFormatSize"
                , getSFFormatSize_function_type( &::OSG::GeoVectorBufferPropertyBase::getSFFormatSize )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeoVectorBufferPropertyBase::getSFSize
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::GeoVectorBufferPropertyBase::*getSFSize_function_type )(  ) const;
            
            GeoVectorBufferPropertyBase_exposer.def( 
                "getSFSize"
                , getSFSize_function_type( &::OSG::GeoVectorBufferPropertyBase::getSFSize )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeoVectorBufferPropertyBase::getSFStride
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::GeoVectorBufferPropertyBase::*getSFStride_function_type )(  ) const;
            
            GeoVectorBufferPropertyBase_exposer.def( 
                "getSFStride"
                , getSFStride_function_type( &::OSG::GeoVectorBufferPropertyBase::getSFStride )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeoVectorBufferPropertyBase::getSFVectorType
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::GeoVectorBufferPropertyBase::*getSFVectorType_function_type )(  ) const;
            
            GeoVectorBufferPropertyBase_exposer.def( 
                "getSFVectorType"
                , getSFVectorType_function_type( &::OSG::GeoVectorBufferPropertyBase::getSFVectorType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeoVectorBufferPropertyBase::getSize
        
            typedef ::OSG::UInt32 ( ::OSG::GeoVectorBufferPropertyBase::*getSize_function_type )(  ) const;
            
            GeoVectorBufferPropertyBase_exposer.def( 
                "getSize"
                , getSize_function_type( &::OSG::GeoVectorBufferPropertyBase::getSize ) );
        
        }
        { //::OSG::GeoVectorBufferPropertyBase::getStride
        
            typedef ::OSG::UInt32 ( ::OSG::GeoVectorBufferPropertyBase::*getStride_function_type )(  ) const;
            
            GeoVectorBufferPropertyBase_exposer.def( 
                "getStride"
                , getStride_function_type( &::OSG::GeoVectorBufferPropertyBase::getStride ) );
        
        }
        { //::OSG::GeoVectorBufferPropertyBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::GeoVectorBufferPropertyBase::*getType_function_type )(  ) ;
            
            GeoVectorBufferPropertyBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::GeoVectorBufferPropertyBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeoVectorBufferPropertyBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::GeoVectorBufferPropertyBase::*getType_function_type )(  ) const;
            
            GeoVectorBufferPropertyBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::GeoVectorBufferPropertyBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeoVectorBufferPropertyBase::getVectorType
        
            typedef ::OSG::UInt32 ( ::OSG::GeoVectorBufferPropertyBase::*getVectorType_function_type )(  ) const;
            
            GeoVectorBufferPropertyBase_exposer.def( 
                "getVectorType"
                , getVectorType_function_type( &::OSG::GeoVectorBufferPropertyBase::getVectorType ) );
        
        }
        { //::OSG::GeoVectorBufferPropertyBase::setDimension
        
            typedef void ( ::OSG::GeoVectorBufferPropertyBase::*setDimension_function_type )( ::OSG::UInt32 const ) ;
            
            GeoVectorBufferPropertyBase_exposer.def( 
                "setDimension"
                , setDimension_function_type( &::OSG::GeoVectorBufferPropertyBase::setDimension )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::GeoVectorBufferPropertyBase::setFormat
        
            typedef void ( ::OSG::GeoVectorBufferPropertyBase::*setFormat_function_type )( ::OSG::UInt32 const ) ;
            
            GeoVectorBufferPropertyBase_exposer.def( 
                "setFormat"
                , setFormat_function_type( &::OSG::GeoVectorBufferPropertyBase::setFormat )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::GeoVectorBufferPropertyBase::setFormatSize
        
            typedef void ( ::OSG::GeoVectorBufferPropertyBase::*setFormatSize_function_type )( ::OSG::UInt32 const ) ;
            
            GeoVectorBufferPropertyBase_exposer.def( 
                "setFormatSize"
                , setFormatSize_function_type( &::OSG::GeoVectorBufferPropertyBase::setFormatSize )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::GeoVectorBufferPropertyBase::setSize
        
            typedef void ( ::OSG::GeoVectorBufferPropertyBase::*setSize_function_type )( ::OSG::UInt32 const ) ;
            
            GeoVectorBufferPropertyBase_exposer.def( 
                "setSize"
                , setSize_function_type( &::OSG::GeoVectorBufferPropertyBase::setSize )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::GeoVectorBufferPropertyBase::setStride
        
            typedef void ( ::OSG::GeoVectorBufferPropertyBase::*setStride_function_type )( ::OSG::UInt32 const ) ;
            
            GeoVectorBufferPropertyBase_exposer.def( 
                "setStride"
                , setStride_function_type( &::OSG::GeoVectorBufferPropertyBase::setStride )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::GeoVectorBufferPropertyBase::setVectorType
        
            typedef void ( ::OSG::GeoVectorBufferPropertyBase::*setVectorType_function_type )( ::OSG::UInt32 const ) ;
            
            GeoVectorBufferPropertyBase_exposer.def( 
                "setVectorType"
                , setVectorType_function_type( &::OSG::GeoVectorBufferPropertyBase::setVectorType )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::GeoVectorProperty::clear
        
            typedef void ( ::OSG::GeoVectorProperty::*clear_function_type )(  ) ;
            
            GeoVectorBufferPropertyBase_exposer.def( 
                "clear"
                , bp::pure_virtual( clear_function_type(&::OSG::GeoVectorProperty::clear) ) );
        
        }
        { //::OSG::GeoProperty::clone
        
            typedef ::OSG::GeoPropertyTransitPtr ( ::OSG::GeoProperty::*clone_function_type )(  ) ;
            
            GeoVectorBufferPropertyBase_exposer.def( 
                "clone"
                , bp::pure_virtual( clone_function_type(&::OSG::GeoProperty::clone) ) );
        
        }
        { //::OSG::GeoVectorProperty::getGenericValue
        
            typedef void ( GeoVectorBufferPropertyBase_wrapper::*getGenericValue_function_type )( ::OSG::Vec4d &,::OSG::SizeT const ) const;
            
            GeoVectorBufferPropertyBase_exposer.def( 
                "getGenericValue"
                , getGenericValue_function_type( &GeoVectorBufferPropertyBase_wrapper::getGenericValue )
                , ( bp::arg("val"), bp::arg("index") ) );
        
        }
        { //::OSG::GeoVectorProperty::getNormalize
        
            typedef bool ( ::OSG::GeoVectorProperty::*getNormalize_function_type )(  ) const;
            
            GeoVectorBufferPropertyBase_exposer.def( 
                "getNormalize"
                , bp::pure_virtual( getNormalize_function_type(&::OSG::GeoVectorProperty::getNormalize) ) );
        
        }
        { //::OSG::GeoVectorProperty::resize
        
            typedef void ( ::OSG::GeoVectorProperty::*resize_function_type )( ::OSG::SizeT ) ;
            
            GeoVectorBufferPropertyBase_exposer.def( 
                "resize"
                , bp::pure_virtual( resize_function_type(&::OSG::GeoVectorProperty::resize) )
                , ( bp::arg("newsize") ) );
        
        }
        { //::OSG::GeoVectorProperty::setGenericValue
        
            typedef void ( GeoVectorBufferPropertyBase_wrapper::*setGenericValue_function_type )( ::OSG::Vec4d const &,::OSG::SizeT const ) ;
            
            GeoVectorBufferPropertyBase_exposer.def( 
                "setGenericValue"
                , setGenericValue_function_type( &GeoVectorBufferPropertyBase_wrapper::setGenericValue )
                , ( bp::arg("val"), bp::arg("index") ) );
        
        }
        { //::OSG::GeoVectorProperty::size
        
            typedef ::OSG::SizeT ( ::OSG::GeoVectorProperty::*size_function_type )(  ) const;
            
            GeoVectorBufferPropertyBase_exposer.def( 
                "size"
                , bp::pure_virtual( size_function_type(&::OSG::GeoVectorProperty::size) ) );
        
        }
        { //::OSG::GeoVectorProperty::size32
        
            typedef ::OSG::UInt32 ( ::OSG::GeoVectorProperty::*size32_function_type )(  ) const;
            
            GeoVectorBufferPropertyBase_exposer.def( 
                "size32"
                , bp::pure_virtual( size32_function_type(&::OSG::GeoVectorProperty::size32) ) );
        
        }
        GeoVectorBufferPropertyBase_exposer.staticmethod( "create" );
        GeoVectorBufferPropertyBase_exposer.staticmethod( "createDependent" );
        GeoVectorBufferPropertyBase_exposer.staticmethod( "createLocal" );
        GeoVectorBufferPropertyBase_exposer.staticmethod( "getClassGroupId" );
        GeoVectorBufferPropertyBase_exposer.staticmethod( "getClassType" );
        GeoVectorBufferPropertyBase_exposer.staticmethod( "getClassTypeId" );
    }

}
