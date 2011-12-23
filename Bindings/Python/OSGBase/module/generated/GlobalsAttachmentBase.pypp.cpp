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

#include "boost/python.hpp"
#include "OSGBase_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "GlobalsAttachmentBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

boost::python::list GlobalsAttachmentBase_getMFElements(OSG::GlobalsAttachmentBase *self)
{
   boost::python::list result;
   OSG::MFUnrecFieldContainerPtr const * mf_data = self->getMFElements();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

void register_GlobalsAttachmentBase_class(){

    { //::OSG::GlobalsAttachmentBase
        typedef bp::class_< OSG::GlobalsAttachmentBase, bp::bases< OSG::Attachment >, boost::noncopyable > GlobalsAttachmentBase_exposer_t;
        GlobalsAttachmentBase_exposer_t GlobalsAttachmentBase_exposer = GlobalsAttachmentBase_exposer_t( "GlobalsAttachmentBase", bp::no_init );
        bp::scope GlobalsAttachmentBase_scope( GlobalsAttachmentBase_exposer );
        bp::scope().attr("ElementsFieldId") = (int)OSG::GlobalsAttachmentBase::ElementsFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::GlobalsAttachmentBase::NextFieldId;
        { //::OSG::GlobalsAttachmentBase::assignElements
        
            typedef void ( ::OSG::GlobalsAttachmentBase::*assignElements_function_type )( ::OSG::MFUnrecFieldContainerPtr const & ) ;
            
            GlobalsAttachmentBase_exposer.def( 
                "assignElements"
                , assignElements_function_type( &::OSG::GlobalsAttachmentBase::assignElements )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::GlobalsAttachmentBase::clearElements
        
            typedef void ( ::OSG::GlobalsAttachmentBase::*clearElements_function_type )(  ) ;
            
            GlobalsAttachmentBase_exposer.def( 
                "clearElements"
                , clearElements_function_type( &::OSG::GlobalsAttachmentBase::clearElements ) );
        
        }
        { //::OSG::GlobalsAttachmentBase::copyFromBin
        
            typedef void ( ::OSG::GlobalsAttachmentBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            GlobalsAttachmentBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::GlobalsAttachmentBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::GlobalsAttachmentBase::copyToBin
        
            typedef void ( ::OSG::GlobalsAttachmentBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            GlobalsAttachmentBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::GlobalsAttachmentBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::GlobalsAttachmentBase::create
        
            typedef ::OSG::GlobalsAttachmentTransitPtr ( *create_function_type )(  );
            
            GlobalsAttachmentBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::GlobalsAttachmentBase::create ) );
        
        }
        { //::OSG::GlobalsAttachmentBase::createDependent
        
            typedef ::OSG::GlobalsAttachmentTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            GlobalsAttachmentBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::GlobalsAttachmentBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::GlobalsAttachmentBase::createLocal
        
            typedef ::OSG::GlobalsAttachmentTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            GlobalsAttachmentBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::GlobalsAttachmentBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::GlobalsAttachmentBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::GlobalsAttachmentBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            GlobalsAttachmentBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::GlobalsAttachmentBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::GlobalsAttachmentBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            GlobalsAttachmentBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::GlobalsAttachmentBase::getClassGroupId ) );
        
        }
        { //::OSG::GlobalsAttachmentBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            GlobalsAttachmentBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::GlobalsAttachmentBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::GlobalsAttachmentBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            GlobalsAttachmentBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::GlobalsAttachmentBase::getClassTypeId ) );
        
        }
        { //::OSG::GlobalsAttachmentBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::GlobalsAttachmentBase::*getContainerSize_function_type )(  ) const;
            
            GlobalsAttachmentBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::GlobalsAttachmentBase::getContainerSize ) );
        
        }
        { //::OSG::GlobalsAttachmentBase::getElements
        
            typedef ::OSG::FieldContainer * ( ::OSG::GlobalsAttachmentBase::*getElements_function_type )( ::OSG::UInt32 const ) const;
            
            GlobalsAttachmentBase_exposer.def( 
                "getElements"
                , getElements_function_type( &::OSG::GlobalsAttachmentBase::getElements )
                , ( bp::arg("index") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GlobalsAttachmentBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::GlobalsAttachmentBase::*getType_function_type )(  ) ;
            
            GlobalsAttachmentBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::GlobalsAttachmentBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GlobalsAttachmentBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::GlobalsAttachmentBase::*getType_function_type )(  ) const;
            
            GlobalsAttachmentBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::GlobalsAttachmentBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GlobalsAttachmentBase::pushToElements
        
            typedef void ( ::OSG::GlobalsAttachmentBase::*pushToElements_function_type )( ::OSG::FieldContainer * const ) ;
            
            GlobalsAttachmentBase_exposer.def( 
                "pushToElements"
                , pushToElements_function_type( &::OSG::GlobalsAttachmentBase::pushToElements )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::GlobalsAttachmentBase::removeFromElements
        
            typedef void ( ::OSG::GlobalsAttachmentBase::*removeFromElements_function_type )( ::OSG::UInt32 ) ;
            
            GlobalsAttachmentBase_exposer.def( 
                "removeFromElements"
                , removeFromElements_function_type( &::OSG::GlobalsAttachmentBase::removeFromElements )
                , ( bp::arg("uiIndex") ) );
        
        }
        { //::OSG::GlobalsAttachmentBase::removeObjFromElements
        
            typedef void ( ::OSG::GlobalsAttachmentBase::*removeObjFromElements_function_type )( ::OSG::FieldContainer * const ) ;
            
            GlobalsAttachmentBase_exposer.def( 
                "removeObjFromElements"
                , removeObjFromElements_function_type( &::OSG::GlobalsAttachmentBase::removeObjFromElements )
                , ( bp::arg("value") ) );
        
        }
        GlobalsAttachmentBase_exposer.staticmethod( "create" );
        GlobalsAttachmentBase_exposer.staticmethod( "createDependent" );
        GlobalsAttachmentBase_exposer.staticmethod( "createLocal" );
        GlobalsAttachmentBase_exposer.staticmethod( "getClassGroupId" );
        GlobalsAttachmentBase_exposer.staticmethod( "getClassType" );
        GlobalsAttachmentBase_exposer.staticmethod( "getClassTypeId" );
        GlobalsAttachmentBase_exposer.def("getMFElements",GlobalsAttachmentBase_getMFElements);
    }

}
