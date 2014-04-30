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
#include "GeoPnt4dProperty.pypp.hpp"

using namespace std;
namespace bp = boost::python;

boost::python::list TypedGeoVectorProperty_OSG__GeoPnt4dPropertyDesc__getFieldPtr(OSG::TypedGeoVectorProperty<OSG::GeoPnt4dPropertyDesc> *self)
{
   boost::python::list result;
   OSG::MFPnt4d const * mf_data = self->getFieldPtr();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

boost::python::list TypedGeoVectorProperty_OSG__GeoPnt4dPropertyDesc__getField(OSG::TypedGeoVectorProperty<OSG::GeoPnt4dPropertyDesc> *self)
{
   boost::python::list result;
   OSG::MFPnt4d const & mf_data = self->getField();
   const OSG::UInt32 size(mf_data.size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append(mf_data[i]);
   }
   return result;
}

void register_GeoPnt4dProperty_class(){

    { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >
        typedef bp::class_< OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >, bp::bases< ::OSG::GeoVectorProperty >, OSG::TypedGeoVectorProperty<OSG::GeoPnt4dPropertyDesc>::ObjRecPtr, boost::noncopyable > GeoPnt4dProperty_exposer_t;
        GeoPnt4dProperty_exposer_t GeoPnt4dProperty_exposer = GeoPnt4dProperty_exposer_t( "GeoPnt4dProperty", bp::no_init );
        bp::scope GeoPnt4dProperty_scope( GeoPnt4dProperty_exposer );
        bp::scope().attr("GeoPropDataFieldId") = (int)OSG::TypedGeoVectorProperty<OSG::GeoPnt4dPropertyDesc>::GeoPropDataFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::TypedGeoVectorProperty<OSG::GeoPnt4dPropertyDesc>::NextFieldId;
        { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >::clone
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc > exported_class_t;
            typedef ::OSG::TransitPtr< OSG::GeoProperty > ( exported_class_t::*clone_function_type )(  ) ;
            
            GeoPnt4dProperty_exposer.def( 
                "clone"
                , clone_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >::clone ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >::create
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc > exported_class_t;
            typedef ::OSG::TransitPtr< OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc > > ( *create_function_type )(  );
            
            GeoPnt4dProperty_exposer.def( 
                "create"
                , create_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >::create ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >::createDependent
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc > exported_class_t;
            typedef ::OSG::TransitPtr< OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc > > ( *createDependent_function_type )( ::OSG::BitVector );
            
            GeoPnt4dProperty_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >::createLocal
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc > exported_class_t;
            typedef ::OSG::TransitPtr< OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc > > ( *createLocal_function_type )( ::OSG::BitVector );
            
            GeoPnt4dProperty_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >::dump
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc > exported_class_t;
            typedef void ( exported_class_t::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            GeoPnt4dProperty_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >::getClassGroupId
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc > exported_class_t;
            typedef ::OSG::UInt32 ( *getClassGroupId_function_type )(  );
            
            GeoPnt4dProperty_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >::getClassGroupId ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >::getClassType
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc > exported_class_t;
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            GeoPnt4dProperty_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >::getClassTypeId
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc > exported_class_t;
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            GeoPnt4dProperty_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >::getClassTypeId ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >::getContainerSize
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc > exported_class_t;
            typedef ::OSG::UInt32 ( exported_class_t::*getContainerSize_function_type )(  ) const;
            
            GeoPnt4dProperty_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >::getContainerSize ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >::getFormat
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc > exported_class_t;
            typedef ::OSG::UInt32 ( exported_class_t::*getFormat_function_type )(  ) const;
            
            GeoPnt4dProperty_exposer.def( 
                "getFormat"
                , getFormat_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >::getFormat ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >::getFormatSize
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc > exported_class_t;
            typedef ::OSG::UInt32 ( exported_class_t::*getFormatSize_function_type )(  ) const;
            
            GeoPnt4dProperty_exposer.def( 
                "getFormatSize"
                , getFormatSize_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >::getFormatSize ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >::getStride
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc > exported_class_t;
            typedef ::OSG::UInt32 ( exported_class_t::*getStride_function_type )(  ) const;
            
            GeoPnt4dProperty_exposer.def( 
                "getStride"
                , getStride_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >::getStride ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >::getType
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc > exported_class_t;
            typedef ::OSG::FieldContainerType & ( exported_class_t::*getType_function_type )(  ) ;
            
            GeoPnt4dProperty_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >::getType
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc > exported_class_t;
            typedef ::OSG::FieldContainerType const & ( exported_class_t::*getType_function_type )(  ) const;
            
            GeoPnt4dProperty_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >::getValue
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc > exported_class_t;
            typedef ::OSG::Pnt4d ( exported_class_t::*getValue_function_type )( ::OSG::SizeT const ) const;
            
            GeoPnt4dProperty_exposer.def( 
                "getValue"
                , getValue_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >::getValue )
                , ( bp::arg("index") ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >::getValue
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc > exported_class_t;
            typedef void ( exported_class_t::*getValue_function_type )( ::OSG::Pnt4d &,::OSG::SizeT const ) const;
            
            GeoPnt4dProperty_exposer.def( 
                "getValue"
                , getValue_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >::getValue )
                , ( bp::arg("val"), bp::arg("index") ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >::getVectorType
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc > exported_class_t;
            typedef ::OSG::UInt32 ( exported_class_t::*getVectorType_function_type )(  ) const;
            
            GeoPnt4dProperty_exposer.def( 
                "getVectorType"
                , getVectorType_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >::getVectorType ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >::operator[]
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc > exported_class_t;
            typedef ::OSG::Point< double, 4u > const & ( exported_class_t::*__getitem___function_type )( ::OSG::SizeT ) const;
            
            GeoPnt4dProperty_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >::operator[] )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >::operator[]
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc > exported_class_t;
            typedef ::OSG::Point< double, 4u > & ( exported_class_t::*__getitem___function_type )( ::OSG::SizeT ) ;
            
            GeoPnt4dProperty_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >::operator[] )
                , ( bp::arg("index") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >::size32
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc > exported_class_t;
            typedef ::OSG::UInt32 ( exported_class_t::*size32_function_type )(  ) const;
            
            GeoPnt4dProperty_exposer.def( 
                "size32"
                , size32_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoPnt4dPropertyDesc >::size32 ) );
        
        }
        GeoPnt4dProperty_exposer.staticmethod( "create" );
        GeoPnt4dProperty_exposer.staticmethod( "createDependent" );
        GeoPnt4dProperty_exposer.staticmethod( "createLocal" );
        GeoPnt4dProperty_exposer.staticmethod( "getClassGroupId" );
        GeoPnt4dProperty_exposer.staticmethod( "getClassType" );
        GeoPnt4dProperty_exposer.staticmethod( "getClassTypeId" );
        GeoPnt4dProperty_exposer.def("getFieldPtr",TypedGeoVectorProperty_OSG__GeoPnt4dPropertyDesc__getFieldPtr);
        GeoPnt4dProperty_exposer.def("getField",TypedGeoVectorProperty_OSG__GeoPnt4dPropertyDesc__getField);
        pyopensg::register_transit< OSG::TypedGeoVectorProperty<OSG::GeoPnt4dPropertyDesc> >::execute();
        bp::implicitly_convertible< OSG::TypedGeoVectorProperty<OSG::GeoPnt4dPropertyDesc>::ObjRecPtr, OSG::TypedGeoVectorProperty<OSG::GeoPnt4dPropertyDesc>* >();
        bp::implicitly_convertible< OSG::TypedGeoVectorProperty<OSG::GeoPnt4dPropertyDesc>::ObjRecPtr, OSG::TypedGeoVectorProperty<OSG::GeoPnt4dPropertyDesc>::ObjCPtr >();
        bp::implicitly_convertible< OSG::TypedGeoVectorProperty<OSG::GeoPnt4dPropertyDesc>::ObjRecPtr, OSG::GeoVectorProperty* >();
        bp::implicitly_convertible< OSG::TypedGeoVectorProperty<OSG::GeoPnt4dPropertyDesc>::ObjRecPtr, OSG::GeoVectorProperty::ObjRecPtr >();
        bp::implicitly_convertible<OSG::TypedGeoVectorProperty<OSG::GeoPnt4dPropertyDesc>::ObjRecPtr, OSG::GeoVectorProperty::ObjCPtr>();
    }

}
