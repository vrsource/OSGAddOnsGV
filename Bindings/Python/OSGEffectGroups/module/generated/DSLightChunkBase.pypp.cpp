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
#include "OSGEffectGroups_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "DSLightChunkBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_DSLightChunkBase_class(){

    { //::OSG::DSLightChunkBase
        typedef bp::class_< OSG::DSLightChunkBase, bp::bases< ::OSG::LightChunk >, boost::noncopyable > DSLightChunkBase_exposer_t;
        DSLightChunkBase_exposer_t DSLightChunkBase_exposer = DSLightChunkBase_exposer_t( "DSLightChunkBase", bp::no_init );
        bp::scope DSLightChunkBase_scope( DSLightChunkBase_exposer );
        bp::scope().attr("EffectiveRangeFieldId") = (int)OSG::DSLightChunkBase::EffectiveRangeFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::DSLightChunkBase::NextFieldId;
        { //::OSG::DSLightChunkBase::copyFromBin
        
            typedef void ( ::OSG::DSLightChunkBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            DSLightChunkBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::DSLightChunkBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::DSLightChunkBase::copyToBin
        
            typedef void ( ::OSG::DSLightChunkBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            DSLightChunkBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::DSLightChunkBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::DSLightChunkBase::create
        
            typedef ::OSG::DSLightChunkTransitPtr ( *create_function_type )(  );
            
            DSLightChunkBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::DSLightChunkBase::create ) );
        
        }
        { //::OSG::DSLightChunkBase::createDependent
        
            typedef ::OSG::DSLightChunkTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            DSLightChunkBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::DSLightChunkBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::DSLightChunkBase::createLocal
        
            typedef ::OSG::DSLightChunkTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            DSLightChunkBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::DSLightChunkBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::DSLightChunkBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::DSLightChunkBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            DSLightChunkBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::DSLightChunkBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::DSLightChunkBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            DSLightChunkBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::DSLightChunkBase::getClassGroupId ) );
        
        }
        { //::OSG::DSLightChunkBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            DSLightChunkBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::DSLightChunkBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::DSLightChunkBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            DSLightChunkBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::DSLightChunkBase::getClassTypeId ) );
        
        }
        { //::OSG::DSLightChunkBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::DSLightChunkBase::*getContainerSize_function_type )(  ) const;
            
            DSLightChunkBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::DSLightChunkBase::getContainerSize ) );
        
        }
        { //::OSG::DSLightChunkBase::getEffectiveRange
        
            typedef ::OSG::Real32 ( ::OSG::DSLightChunkBase::*getEffectiveRange_function_type )(  ) const;
            
            DSLightChunkBase_exposer.def( 
                "getEffectiveRange"
                , getEffectiveRange_function_type( &::OSG::DSLightChunkBase::getEffectiveRange ) );
        
        }
        { //::OSG::DSLightChunkBase::getSFEffectiveRange
        
            typedef ::OSG::SFReal32 const * ( ::OSG::DSLightChunkBase::*getSFEffectiveRange_function_type )(  ) const;
            
            DSLightChunkBase_exposer.def( 
                "getSFEffectiveRange"
                , getSFEffectiveRange_function_type( &::OSG::DSLightChunkBase::getSFEffectiveRange )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DSLightChunkBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::DSLightChunkBase::*getType_function_type )(  ) ;
            
            DSLightChunkBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::DSLightChunkBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DSLightChunkBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::DSLightChunkBase::*getType_function_type )(  ) const;
            
            DSLightChunkBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::DSLightChunkBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DSLightChunkBase::setEffectiveRange
        
            typedef void ( ::OSG::DSLightChunkBase::*setEffectiveRange_function_type )( ::OSG::Real32 const ) ;
            
            DSLightChunkBase_exposer.def( 
                "setEffectiveRange"
                , setEffectiveRange_function_type( &::OSG::DSLightChunkBase::setEffectiveRange )
                , ( bp::arg("value") ) );
        
        }
        DSLightChunkBase_exposer.staticmethod( "create" );
        DSLightChunkBase_exposer.staticmethod( "createDependent" );
        DSLightChunkBase_exposer.staticmethod( "createLocal" );
        DSLightChunkBase_exposer.staticmethod( "getClassGroupId" );
        DSLightChunkBase_exposer.staticmethod( "getClassType" );
        DSLightChunkBase_exposer.staticmethod( "getClassTypeId" );
    }

}
