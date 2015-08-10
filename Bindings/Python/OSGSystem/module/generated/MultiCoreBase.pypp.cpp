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
#include "OSGSystem_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "MultiCoreBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_MultiCoreBase_class(){

    { //::OSG::MultiCoreBase
        typedef bp::class_< OSG::MultiCoreBase, bp::bases< OSG::Group >, boost::noncopyable > MultiCoreBase_exposer_t;
        MultiCoreBase_exposer_t MultiCoreBase_exposer = MultiCoreBase_exposer_t( "MultiCoreBase", bp::no_init );
        bp::scope MultiCoreBase_scope( MultiCoreBase_exposer );
        bp::scope().attr("CoresFieldId") = (int)OSG::MultiCoreBase::CoresFieldId;
        bp::scope().attr("ExitOnSkipFieldId") = (int)OSG::MultiCoreBase::ExitOnSkipFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::MultiCoreBase::NextFieldId;
        { //::OSG::MultiCoreBase::copyFromBin
        
            typedef void ( ::OSG::MultiCoreBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            MultiCoreBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::MultiCoreBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::MultiCoreBase::copyToBin
        
            typedef void ( ::OSG::MultiCoreBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            MultiCoreBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::MultiCoreBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::MultiCoreBase::create
        
            typedef ::OSG::MultiCoreTransitPtr ( *create_function_type )(  );
            
            MultiCoreBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::MultiCoreBase::create ) );
        
        }
        { //::OSG::MultiCoreBase::createDependent
        
            typedef ::OSG::MultiCoreTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            MultiCoreBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::MultiCoreBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::MultiCoreBase::createLocal
        
            typedef ::OSG::MultiCoreTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            MultiCoreBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::MultiCoreBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::MultiCoreBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::MultiCoreBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            MultiCoreBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::MultiCoreBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::MultiCoreBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            MultiCoreBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::MultiCoreBase::getClassGroupId ) );
        
        }
        { //::OSG::MultiCoreBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            MultiCoreBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::MultiCoreBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::MultiCoreBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            MultiCoreBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::MultiCoreBase::getClassTypeId ) );
        
        }
        { //::OSG::MultiCoreBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::MultiCoreBase::*getContainerSize_function_type )(  ) const;
            
            MultiCoreBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::MultiCoreBase::getContainerSize ) );
        
        }
        { //::OSG::MultiCoreBase::getExitOnSkip
        
            typedef bool ( ::OSG::MultiCoreBase::*getExitOnSkip_function_type )(  ) const;
            
            MultiCoreBase_exposer.def( 
                "getExitOnSkip"
                , getExitOnSkip_function_type( &::OSG::MultiCoreBase::getExitOnSkip ) );
        
        }
        { //::OSG::MultiCoreBase::getSFExitOnSkip
        
            typedef ::OSG::SFBool const * ( ::OSG::MultiCoreBase::*getSFExitOnSkip_function_type )(  ) const;
            
            MultiCoreBase_exposer.def( 
                "getSFExitOnSkip"
                , getSFExitOnSkip_function_type( &::OSG::MultiCoreBase::getSFExitOnSkip )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::MultiCoreBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::MultiCoreBase::*getType_function_type )(  ) ;
            
            MultiCoreBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::MultiCoreBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::MultiCoreBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::MultiCoreBase::*getType_function_type )(  ) const;
            
            MultiCoreBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::MultiCoreBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::MultiCoreBase::setExitOnSkip
        
            typedef void ( ::OSG::MultiCoreBase::*setExitOnSkip_function_type )( bool const ) ;
            
            MultiCoreBase_exposer.def( 
                "setExitOnSkip"
                , setExitOnSkip_function_type( &::OSG::MultiCoreBase::setExitOnSkip )
                , ( bp::arg("value") ) );
        
        }
        MultiCoreBase_exposer.staticmethod( "create" );
        MultiCoreBase_exposer.staticmethod( "createDependent" );
        MultiCoreBase_exposer.staticmethod( "createLocal" );
        MultiCoreBase_exposer.staticmethod( "getClassGroupId" );
        MultiCoreBase_exposer.staticmethod( "getClassType" );
        MultiCoreBase_exposer.staticmethod( "getClassTypeId" );
    }

}
