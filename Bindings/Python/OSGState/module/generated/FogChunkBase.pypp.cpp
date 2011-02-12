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
#include "OSGState_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "FogChunkBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_FogChunkBase_class(){

    { //::OSG::FogChunkBase
        typedef bp::class_< OSG::FogChunkBase, bp::bases< ::OSG::StateChunk >, boost::noncopyable > FogChunkBase_exposer_t;
        FogChunkBase_exposer_t FogChunkBase_exposer = FogChunkBase_exposer_t( "FogChunkBase", bp::no_init );
        bp::scope FogChunkBase_scope( FogChunkBase_exposer );
        bp::scope().attr("ModeFieldId") = (int)OSG::FogChunkBase::ModeFieldId;
        bp::scope().attr("ColorFieldId") = (int)OSG::FogChunkBase::ColorFieldId;
        bp::scope().attr("StartFieldId") = (int)OSG::FogChunkBase::StartFieldId;
        bp::scope().attr("EndFieldId") = (int)OSG::FogChunkBase::EndFieldId;
        bp::scope().attr("DensityFieldId") = (int)OSG::FogChunkBase::DensityFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::FogChunkBase::NextFieldId;
        { //::OSG::FogChunkBase::copyFromBin
        
            typedef void ( ::OSG::FogChunkBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            FogChunkBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::FogChunkBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::FogChunkBase::copyToBin
        
            typedef void ( ::OSG::FogChunkBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            FogChunkBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::FogChunkBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::FogChunkBase::create
        
            typedef ::OSG::FogChunkTransitPtr ( *create_function_type )(  );
            
            FogChunkBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::FogChunkBase::create ) );
        
        }
        { //::OSG::FogChunkBase::createDependent
        
            typedef ::OSG::FogChunkTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            FogChunkBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::FogChunkBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::FogChunkBase::createLocal
        
            typedef ::OSG::FogChunkTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            FogChunkBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::FogChunkBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::FogChunkBase::getBinSize
        
            typedef ::OSG::UInt32 ( ::OSG::FogChunkBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            FogChunkBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::FogChunkBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::FogChunkBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            FogChunkBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::FogChunkBase::getClassGroupId ) );
        
        }
        { //::OSG::FogChunkBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            FogChunkBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::FogChunkBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::FogChunkBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            FogChunkBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::FogChunkBase::getClassTypeId ) );
        
        }
        { //::OSG::FogChunkBase::getColor
        
            typedef ::OSG::Color4f const & ( ::OSG::FogChunkBase::*getColor_function_type )(  ) const;
            
            FogChunkBase_exposer.def( 
                "getColor"
                , getColor_function_type( &::OSG::FogChunkBase::getColor )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::FogChunkBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::FogChunkBase::*getContainerSize_function_type )(  ) const;
            
            FogChunkBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::FogChunkBase::getContainerSize ) );
        
        }
        { //::OSG::FogChunkBase::getDensity
        
            typedef ::OSG::Real32 ( ::OSG::FogChunkBase::*getDensity_function_type )(  ) const;
            
            FogChunkBase_exposer.def( 
                "getDensity"
                , getDensity_function_type( &::OSG::FogChunkBase::getDensity ) );
        
        }
        { //::OSG::FogChunkBase::getEnd
        
            typedef ::OSG::Real32 ( ::OSG::FogChunkBase::*getEnd_function_type )(  ) const;
            
            FogChunkBase_exposer.def( 
                "getEnd"
                , getEnd_function_type( &::OSG::FogChunkBase::getEnd ) );
        
        }
        { //::OSG::FogChunkBase::getMode
        
            typedef ::GLenum const & ( ::OSG::FogChunkBase::*getMode_function_type )(  ) const;
            
            FogChunkBase_exposer.def( 
                "getMode"
                , getMode_function_type( &::OSG::FogChunkBase::getMode )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::FogChunkBase::getSFColor
        
            typedef ::OSG::SFColor4f const * ( ::OSG::FogChunkBase::*getSFColor_function_type )(  ) const;
            
            FogChunkBase_exposer.def( 
                "getSFColor"
                , getSFColor_function_type( &::OSG::FogChunkBase::getSFColor )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FogChunkBase::getSFDensity
        
            typedef ::OSG::SFReal32 const * ( ::OSG::FogChunkBase::*getSFDensity_function_type )(  ) const;
            
            FogChunkBase_exposer.def( 
                "getSFDensity"
                , getSFDensity_function_type( &::OSG::FogChunkBase::getSFDensity )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FogChunkBase::getSFEnd
        
            typedef ::OSG::SFReal32 const * ( ::OSG::FogChunkBase::*getSFEnd_function_type )(  ) const;
            
            FogChunkBase_exposer.def( 
                "getSFEnd"
                , getSFEnd_function_type( &::OSG::FogChunkBase::getSFEnd )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FogChunkBase::getSFMode
        
            typedef ::OSG::SFGLenum const * ( ::OSG::FogChunkBase::*getSFMode_function_type )(  ) const;
            
            FogChunkBase_exposer.def( 
                "getSFMode"
                , getSFMode_function_type( &::OSG::FogChunkBase::getSFMode )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FogChunkBase::getSFStart
        
            typedef ::OSG::SFReal32 const * ( ::OSG::FogChunkBase::*getSFStart_function_type )(  ) const;
            
            FogChunkBase_exposer.def( 
                "getSFStart"
                , getSFStart_function_type( &::OSG::FogChunkBase::getSFStart )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FogChunkBase::getStart
        
            typedef ::OSG::Real32 ( ::OSG::FogChunkBase::*getStart_function_type )(  ) const;
            
            FogChunkBase_exposer.def( 
                "getStart"
                , getStart_function_type( &::OSG::FogChunkBase::getStart ) );
        
        }
        { //::OSG::FogChunkBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::FogChunkBase::*getType_function_type )(  ) ;
            
            FogChunkBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::FogChunkBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FogChunkBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::FogChunkBase::*getType_function_type )(  ) const;
            
            FogChunkBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::FogChunkBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FogChunkBase::setColor
        
            typedef void ( ::OSG::FogChunkBase::*setColor_function_type )( ::OSG::Color4f const & ) ;
            
            FogChunkBase_exposer.def( 
                "setColor"
                , setColor_function_type( &::OSG::FogChunkBase::setColor )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::FogChunkBase::setDensity
        
            typedef void ( ::OSG::FogChunkBase::*setDensity_function_type )( ::OSG::Real32 const ) ;
            
            FogChunkBase_exposer.def( 
                "setDensity"
                , setDensity_function_type( &::OSG::FogChunkBase::setDensity )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::FogChunkBase::setEnd
        
            typedef void ( ::OSG::FogChunkBase::*setEnd_function_type )( ::OSG::Real32 const ) ;
            
            FogChunkBase_exposer.def( 
                "setEnd"
                , setEnd_function_type( &::OSG::FogChunkBase::setEnd )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::FogChunkBase::setMode
        
            typedef void ( ::OSG::FogChunkBase::*setMode_function_type )( ::GLenum const & ) ;
            
            FogChunkBase_exposer.def( 
                "setMode"
                , setMode_function_type( &::OSG::FogChunkBase::setMode )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::FogChunkBase::setStart
        
            typedef void ( ::OSG::FogChunkBase::*setStart_function_type )( ::OSG::Real32 const ) ;
            
            FogChunkBase_exposer.def( 
                "setStart"
                , setStart_function_type( &::OSG::FogChunkBase::setStart )
                , ( bp::arg("value") ) );
        
        }
        FogChunkBase_exposer.staticmethod( "create" );
        FogChunkBase_exposer.staticmethod( "createDependent" );
        FogChunkBase_exposer.staticmethod( "createLocal" );
        FogChunkBase_exposer.staticmethod( "getClassGroupId" );
        FogChunkBase_exposer.staticmethod( "getClassType" );
        FogChunkBase_exposer.staticmethod( "getClassTypeId" );
    }

}