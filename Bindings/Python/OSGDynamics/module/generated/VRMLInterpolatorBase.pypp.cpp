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
#include "OSGDynamics_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "VRMLInterpolatorBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

boost::python::list VRMLInterpolatorBase_getMFKey(OSG::VRMLInterpolatorBase *self)
{
   boost::python::list result;
   OSG::MFReal32 const * mf_data = self->getMFKey();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

boost::python::list VRMLInterpolatorBase_getMFResortIndex(OSG::VRMLInterpolatorBase *self)
{
   boost::python::list result;
   OSG::MFUInt32 const * mf_data = self->getMFResortIndex();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

void register_VRMLInterpolatorBase_class(){

    { //::OSG::VRMLInterpolatorBase
        typedef bp::class_< OSG::VRMLInterpolatorBase, bp::bases< ::OSG::NodeCore >, boost::noncopyable > VRMLInterpolatorBase_exposer_t;
        VRMLInterpolatorBase_exposer_t VRMLInterpolatorBase_exposer = VRMLInterpolatorBase_exposer_t( "VRMLInterpolatorBase", bp::no_init );
        bp::scope VRMLInterpolatorBase_scope( VRMLInterpolatorBase_exposer );
        bp::scope().attr("InValueFieldId") = (int)OSG::VRMLInterpolatorBase::InValueFieldId;
        bp::scope().attr("KeyFieldId") = (int)OSG::VRMLInterpolatorBase::KeyFieldId;
        bp::scope().attr("ResortIndexFieldId") = (int)OSG::VRMLInterpolatorBase::ResortIndexFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::VRMLInterpolatorBase::NextFieldId;
        { //::OSG::VRMLInterpolatorBase::copyFromBin
        
            typedef void ( ::OSG::VRMLInterpolatorBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            VRMLInterpolatorBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::VRMLInterpolatorBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::VRMLInterpolatorBase::copyToBin
        
            typedef void ( ::OSG::VRMLInterpolatorBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            VRMLInterpolatorBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::VRMLInterpolatorBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::VRMLInterpolatorBase::create
        
            typedef ::OSG::VRMLInterpolatorTransitPtr ( *create_function_type )(  );
            
            VRMLInterpolatorBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::VRMLInterpolatorBase::create ) );
        
        }
        { //::OSG::VRMLInterpolatorBase::createDependent
        
            typedef ::OSG::VRMLInterpolatorTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            VRMLInterpolatorBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::VRMLInterpolatorBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::VRMLInterpolatorBase::createLocal
        
            typedef ::OSG::VRMLInterpolatorTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            VRMLInterpolatorBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::VRMLInterpolatorBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::VRMLInterpolatorBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::VRMLInterpolatorBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            VRMLInterpolatorBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::VRMLInterpolatorBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::VRMLInterpolatorBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            VRMLInterpolatorBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::VRMLInterpolatorBase::getClassGroupId ) );
        
        }
        { //::OSG::VRMLInterpolatorBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            VRMLInterpolatorBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::VRMLInterpolatorBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::VRMLInterpolatorBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            VRMLInterpolatorBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::VRMLInterpolatorBase::getClassTypeId ) );
        
        }
        { //::OSG::VRMLInterpolatorBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::VRMLInterpolatorBase::*getContainerSize_function_type )(  ) const;
            
            VRMLInterpolatorBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::VRMLInterpolatorBase::getContainerSize ) );
        
        }
        { //::OSG::VRMLInterpolatorBase::getInValue
        
            typedef ::OSG::Real32 ( ::OSG::VRMLInterpolatorBase::*getInValue_function_type )(  ) const;
            
            VRMLInterpolatorBase_exposer.def( 
                "getInValue"
                , getInValue_function_type( &::OSG::VRMLInterpolatorBase::getInValue ) );
        
        }
        { //::OSG::VRMLInterpolatorBase::getKey
        
            typedef ::OSG::Real32 ( ::OSG::VRMLInterpolatorBase::*getKey_function_type )( ::OSG::UInt32 const ) const;
            
            VRMLInterpolatorBase_exposer.def( 
                "getKey"
                , getKey_function_type( &::OSG::VRMLInterpolatorBase::getKey )
                , ( bp::arg("index") ) );
        
        }
        { //::OSG::VRMLInterpolatorBase::getResortIndex
        
            typedef ::OSG::UInt32 ( ::OSG::VRMLInterpolatorBase::*getResortIndex_function_type )( ::OSG::UInt32 const ) const;
            
            VRMLInterpolatorBase_exposer.def( 
                "getResortIndex"
                , getResortIndex_function_type( &::OSG::VRMLInterpolatorBase::getResortIndex )
                , ( bp::arg("index") ) );
        
        }
        { //::OSG::VRMLInterpolatorBase::getSFInValue
        
            typedef ::OSG::SFReal32 const * ( ::OSG::VRMLInterpolatorBase::*getSFInValue_function_type )(  ) const;
            
            VRMLInterpolatorBase_exposer.def( 
                "getSFInValue"
                , getSFInValue_function_type( &::OSG::VRMLInterpolatorBase::getSFInValue )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::VRMLInterpolatorBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::VRMLInterpolatorBase::*getType_function_type )(  ) ;
            
            VRMLInterpolatorBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::VRMLInterpolatorBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::VRMLInterpolatorBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::VRMLInterpolatorBase::*getType_function_type )(  ) const;
            
            VRMLInterpolatorBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::VRMLInterpolatorBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::VRMLInterpolatorBase::setInValue
        
            typedef void ( ::OSG::VRMLInterpolatorBase::*setInValue_function_type )( ::OSG::Real32 const ) ;
            
            VRMLInterpolatorBase_exposer.def( 
                "setInValue"
                , setInValue_function_type( &::OSG::VRMLInterpolatorBase::setInValue )
                , ( bp::arg("value") ) );
        
        }
        VRMLInterpolatorBase_exposer.staticmethod( "create" );
        VRMLInterpolatorBase_exposer.staticmethod( "createDependent" );
        VRMLInterpolatorBase_exposer.staticmethod( "createLocal" );
        VRMLInterpolatorBase_exposer.staticmethod( "getClassGroupId" );
        VRMLInterpolatorBase_exposer.staticmethod( "getClassType" );
        VRMLInterpolatorBase_exposer.staticmethod( "getClassTypeId" );
        VRMLInterpolatorBase_exposer.def("getMFKey",VRMLInterpolatorBase_getMFKey);
        VRMLInterpolatorBase_exposer.def("getMFResortIndex",VRMLInterpolatorBase_getMFResortIndex);
    }

}
