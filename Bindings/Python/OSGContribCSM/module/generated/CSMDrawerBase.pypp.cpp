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
#include "OSGContribCSM_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "CSMDrawerBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

boost::python::list CSMDrawerBase_getMFWindows(OSG::CSMDrawerBase *self)
{
   boost::python::list result;
   OSG::MFUnrecChildCSMWindowPtr const * mf_data = self->getMFWindows();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append(OSG::CSMWindow::ObjRecPtr((*mf_data)[i]));
   }
   return result;
}

void register_CSMDrawerBase_class(){

    { //::OSG::CSMDrawerBase
        typedef bp::class_< OSG::CSMDrawerBase, bp::bases< ::OSG::AttachmentContainer >, boost::noncopyable > CSMDrawerBase_exposer_t;
        CSMDrawerBase_exposer_t CSMDrawerBase_exposer = CSMDrawerBase_exposer_t( "CSMDrawerBase", bp::no_init );
        bp::scope CSMDrawerBase_scope( CSMDrawerBase_exposer );
        bp::scope().attr("WindowsFieldId") = (int)OSG::CSMDrawerBase::WindowsFieldId;
        bp::scope().attr("DisplayStringFieldId") = (int)OSG::CSMDrawerBase::DisplayStringFieldId;
        bp::scope().attr("AspectFieldId") = (int)OSG::CSMDrawerBase::AspectFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::CSMDrawerBase::NextFieldId;
        { //::OSG::CSMDrawerBase::assignWindows
        
            typedef void ( ::OSG::CSMDrawerBase::*assignWindows_function_type )( ::OSG::MFUnrecChildCSMWindowPtr const & ) ;
            
            CSMDrawerBase_exposer.def( 
                "assignWindows"
                , assignWindows_function_type( &::OSG::CSMDrawerBase::assignWindows )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::CSMDrawerBase::clearWindows
        
            typedef void ( ::OSG::CSMDrawerBase::*clearWindows_function_type )(  ) ;
            
            CSMDrawerBase_exposer.def( 
                "clearWindows"
                , clearWindows_function_type( &::OSG::CSMDrawerBase::clearWindows ) );
        
        }
        { //::OSG::CSMDrawerBase::copyFromBin
        
            typedef void ( ::OSG::CSMDrawerBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            CSMDrawerBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::CSMDrawerBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::CSMDrawerBase::copyToBin
        
            typedef void ( ::OSG::CSMDrawerBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            CSMDrawerBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::CSMDrawerBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::CSMDrawerBase::create
        
            typedef ::OSG::CSMDrawerTransitPtr ( *create_function_type )(  );
            
            CSMDrawerBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::CSMDrawerBase::create ) );
        
        }
        { //::OSG::CSMDrawerBase::createDependent
        
            typedef ::OSG::CSMDrawerTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            CSMDrawerBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::CSMDrawerBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::CSMDrawerBase::createLocal
        
            typedef ::OSG::CSMDrawerTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            CSMDrawerBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::CSMDrawerBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::CSMDrawerBase::getAspect
        
            typedef ::OSG::AspectId const & ( ::OSG::CSMDrawerBase::*getAspect_function_type )(  ) const;
            
            CSMDrawerBase_exposer.def( 
                "getAspect"
                , getAspect_function_type( &::OSG::CSMDrawerBase::getAspect )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::CSMDrawerBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::CSMDrawerBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            CSMDrawerBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::CSMDrawerBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::CSMDrawerBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            CSMDrawerBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::CSMDrawerBase::getClassGroupId ) );
        
        }
        { //::OSG::CSMDrawerBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            CSMDrawerBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::CSMDrawerBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::CSMDrawerBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            CSMDrawerBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::CSMDrawerBase::getClassTypeId ) );
        
        }
        { //::OSG::CSMDrawerBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::CSMDrawerBase::*getContainerSize_function_type )(  ) const;
            
            CSMDrawerBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::CSMDrawerBase::getContainerSize ) );
        
        }
        { //::OSG::CSMDrawerBase::getDisplayString
        
            typedef ::std::string const & ( ::OSG::CSMDrawerBase::*getDisplayString_function_type )(  ) const;
            
            CSMDrawerBase_exposer.def( 
                "getDisplayString"
                , getDisplayString_function_type( &::OSG::CSMDrawerBase::getDisplayString )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::CSMDrawerBase::getSFAspect
        
            typedef ::OSG::SFAspectId const * ( ::OSG::CSMDrawerBase::*getSFAspect_function_type )(  ) const;
            
            CSMDrawerBase_exposer.def( 
                "getSFAspect"
                , getSFAspect_function_type( &::OSG::CSMDrawerBase::getSFAspect )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMDrawerBase::getSFDisplayString
        
            typedef ::OSG::SFString const * ( ::OSG::CSMDrawerBase::*getSFDisplayString_function_type )(  ) const;
            
            CSMDrawerBase_exposer.def( 
                "getSFDisplayString"
                , getSFDisplayString_function_type( &::OSG::CSMDrawerBase::getSFDisplayString )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMDrawerBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::CSMDrawerBase::*getType_function_type )(  ) ;
            
            CSMDrawerBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::CSMDrawerBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMDrawerBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::CSMDrawerBase::*getType_function_type )(  ) const;
            
            CSMDrawerBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::CSMDrawerBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMDrawerBase::getWindows
        
            typedef ::OSG::CSMWindow * ( ::OSG::CSMDrawerBase::*getWindows_function_type )( ::OSG::UInt32 const ) const;
            
            CSMDrawerBase_exposer.def( 
                "getWindows"
                , getWindows_function_type( &::OSG::CSMDrawerBase::getWindows )
                , ( bp::arg("index") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMDrawerBase::pushToWindows
        
            typedef void ( ::OSG::CSMDrawerBase::*pushToWindows_function_type )( ::OSG::CSMWindow * const ) ;
            
            CSMDrawerBase_exposer.def( 
                "pushToWindows"
                , pushToWindows_function_type( &::OSG::CSMDrawerBase::pushToWindows )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::CSMDrawerBase::removeFromWindows
        
            typedef void ( ::OSG::CSMDrawerBase::*removeFromWindows_function_type )( ::OSG::UInt32 ) ;
            
            CSMDrawerBase_exposer.def( 
                "removeFromWindows"
                , removeFromWindows_function_type( &::OSG::CSMDrawerBase::removeFromWindows )
                , ( bp::arg("uiIndex") ) );
        
        }
        { //::OSG::CSMDrawerBase::removeObjFromWindows
        
            typedef void ( ::OSG::CSMDrawerBase::*removeObjFromWindows_function_type )( ::OSG::CSMWindow * const ) ;
            
            CSMDrawerBase_exposer.def( 
                "removeObjFromWindows"
                , removeObjFromWindows_function_type( &::OSG::CSMDrawerBase::removeObjFromWindows )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::CSMDrawerBase::setAspect
        
            typedef void ( ::OSG::CSMDrawerBase::*setAspect_function_type )( ::OSG::AspectId const & ) ;
            
            CSMDrawerBase_exposer.def( 
                "setAspect"
                , setAspect_function_type( &::OSG::CSMDrawerBase::setAspect )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::CSMDrawerBase::setDisplayString
        
            typedef void ( ::OSG::CSMDrawerBase::*setDisplayString_function_type )( ::std::string const & ) ;
            
            CSMDrawerBase_exposer.def( 
                "setDisplayString"
                , setDisplayString_function_type( &::OSG::CSMDrawerBase::setDisplayString )
                , ( bp::arg("value") ) );
        
        }
        CSMDrawerBase_exposer.staticmethod( "create" );
        CSMDrawerBase_exposer.staticmethod( "createDependent" );
        CSMDrawerBase_exposer.staticmethod( "createLocal" );
        CSMDrawerBase_exposer.staticmethod( "getClassGroupId" );
        CSMDrawerBase_exposer.staticmethod( "getClassType" );
        CSMDrawerBase_exposer.staticmethod( "getClassTypeId" );
        CSMDrawerBase_exposer.def("getMFWindows",CSMDrawerBase_getMFWindows);
    }

}
