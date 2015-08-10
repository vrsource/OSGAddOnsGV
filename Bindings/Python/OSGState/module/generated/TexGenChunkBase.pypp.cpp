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
#include "OSGState_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "TexGenChunkBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_TexGenChunkBase_class(){

    { //::OSG::TexGenChunkBase
        typedef bp::class_< OSG::TexGenChunkBase, bp::bases< ::OSG::StateChunk >, boost::noncopyable > TexGenChunkBase_exposer_t;
        TexGenChunkBase_exposer_t TexGenChunkBase_exposer = TexGenChunkBase_exposer_t( "TexGenChunkBase", bp::no_init );
        bp::scope TexGenChunkBase_scope( TexGenChunkBase_exposer );
        bp::scope().attr("GenFuncSFieldId") = (int)OSG::TexGenChunkBase::GenFuncSFieldId;
        bp::scope().attr("GenFuncTFieldId") = (int)OSG::TexGenChunkBase::GenFuncTFieldId;
        bp::scope().attr("GenFuncRFieldId") = (int)OSG::TexGenChunkBase::GenFuncRFieldId;
        bp::scope().attr("GenFuncQFieldId") = (int)OSG::TexGenChunkBase::GenFuncQFieldId;
        bp::scope().attr("GenFuncSPlaneFieldId") = (int)OSG::TexGenChunkBase::GenFuncSPlaneFieldId;
        bp::scope().attr("GenFuncTPlaneFieldId") = (int)OSG::TexGenChunkBase::GenFuncTPlaneFieldId;
        bp::scope().attr("GenFuncRPlaneFieldId") = (int)OSG::TexGenChunkBase::GenFuncRPlaneFieldId;
        bp::scope().attr("GenFuncQPlaneFieldId") = (int)OSG::TexGenChunkBase::GenFuncQPlaneFieldId;
        bp::scope().attr("SBeaconFieldId") = (int)OSG::TexGenChunkBase::SBeaconFieldId;
        bp::scope().attr("TBeaconFieldId") = (int)OSG::TexGenChunkBase::TBeaconFieldId;
        bp::scope().attr("RBeaconFieldId") = (int)OSG::TexGenChunkBase::RBeaconFieldId;
        bp::scope().attr("QBeaconFieldId") = (int)OSG::TexGenChunkBase::QBeaconFieldId;
        bp::scope().attr("EyeModelViewMatrixFieldId") = (int)OSG::TexGenChunkBase::EyeModelViewMatrixFieldId;
        bp::scope().attr("EyeModelViewModeFieldId") = (int)OSG::TexGenChunkBase::EyeModelViewModeFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::TexGenChunkBase::NextFieldId;
        { //::OSG::TexGenChunkBase::copyFromBin
        
            typedef void ( ::OSG::TexGenChunkBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            TexGenChunkBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::TexGenChunkBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::TexGenChunkBase::copyToBin
        
            typedef void ( ::OSG::TexGenChunkBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            TexGenChunkBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::TexGenChunkBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::TexGenChunkBase::create
        
            typedef ::OSG::TexGenChunkTransitPtr ( *create_function_type )(  );
            
            TexGenChunkBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::TexGenChunkBase::create ) );
        
        }
        { //::OSG::TexGenChunkBase::createDependent
        
            typedef ::OSG::TexGenChunkTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            TexGenChunkBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::TexGenChunkBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::TexGenChunkBase::createLocal
        
            typedef ::OSG::TexGenChunkTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            TexGenChunkBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::TexGenChunkBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::TexGenChunkBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::TexGenChunkBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            TexGenChunkBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::TexGenChunkBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::TexGenChunkBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            TexGenChunkBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::TexGenChunkBase::getClassGroupId ) );
        
        }
        { //::OSG::TexGenChunkBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            TexGenChunkBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::TexGenChunkBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::TexGenChunkBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            TexGenChunkBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::TexGenChunkBase::getClassTypeId ) );
        
        }
        { //::OSG::TexGenChunkBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::TexGenChunkBase::*getContainerSize_function_type )(  ) const;
            
            TexGenChunkBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::TexGenChunkBase::getContainerSize ) );
        
        }
        { //::OSG::TexGenChunkBase::getEyeModelViewMatrix
        
            typedef ::OSG::Matrix const & ( ::OSG::TexGenChunkBase::*getEyeModelViewMatrix_function_type )(  ) const;
            
            TexGenChunkBase_exposer.def( 
                "getEyeModelViewMatrix"
                , getEyeModelViewMatrix_function_type( &::OSG::TexGenChunkBase::getEyeModelViewMatrix )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::TexGenChunkBase::getEyeModelViewMode
        
            typedef ::OSG::UInt32 ( ::OSG::TexGenChunkBase::*getEyeModelViewMode_function_type )(  ) const;
            
            TexGenChunkBase_exposer.def( 
                "getEyeModelViewMode"
                , getEyeModelViewMode_function_type( &::OSG::TexGenChunkBase::getEyeModelViewMode ) );
        
        }
        { //::OSG::TexGenChunkBase::getGenFuncQ
        
            typedef ::GLenum const & ( ::OSG::TexGenChunkBase::*getGenFuncQ_function_type )(  ) const;
            
            TexGenChunkBase_exposer.def( 
                "getGenFuncQ"
                , getGenFuncQ_function_type( &::OSG::TexGenChunkBase::getGenFuncQ )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::TexGenChunkBase::getGenFuncQPlane
        
            typedef ::OSG::Vec4f const & ( ::OSG::TexGenChunkBase::*getGenFuncQPlane_function_type )(  ) const;
            
            TexGenChunkBase_exposer.def( 
                "getGenFuncQPlane"
                , getGenFuncQPlane_function_type( &::OSG::TexGenChunkBase::getGenFuncQPlane )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::TexGenChunkBase::getGenFuncR
        
            typedef ::GLenum const & ( ::OSG::TexGenChunkBase::*getGenFuncR_function_type )(  ) const;
            
            TexGenChunkBase_exposer.def( 
                "getGenFuncR"
                , getGenFuncR_function_type( &::OSG::TexGenChunkBase::getGenFuncR )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::TexGenChunkBase::getGenFuncRPlane
        
            typedef ::OSG::Vec4f const & ( ::OSG::TexGenChunkBase::*getGenFuncRPlane_function_type )(  ) const;
            
            TexGenChunkBase_exposer.def( 
                "getGenFuncRPlane"
                , getGenFuncRPlane_function_type( &::OSG::TexGenChunkBase::getGenFuncRPlane )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::TexGenChunkBase::getGenFuncS
        
            typedef ::GLenum const & ( ::OSG::TexGenChunkBase::*getGenFuncS_function_type )(  ) const;
            
            TexGenChunkBase_exposer.def( 
                "getGenFuncS"
                , getGenFuncS_function_type( &::OSG::TexGenChunkBase::getGenFuncS )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::TexGenChunkBase::getGenFuncSPlane
        
            typedef ::OSG::Vec4f const & ( ::OSG::TexGenChunkBase::*getGenFuncSPlane_function_type )(  ) const;
            
            TexGenChunkBase_exposer.def( 
                "getGenFuncSPlane"
                , getGenFuncSPlane_function_type( &::OSG::TexGenChunkBase::getGenFuncSPlane )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::TexGenChunkBase::getGenFuncT
        
            typedef ::GLenum const & ( ::OSG::TexGenChunkBase::*getGenFuncT_function_type )(  ) const;
            
            TexGenChunkBase_exposer.def( 
                "getGenFuncT"
                , getGenFuncT_function_type( &::OSG::TexGenChunkBase::getGenFuncT )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::TexGenChunkBase::getGenFuncTPlane
        
            typedef ::OSG::Vec4f const & ( ::OSG::TexGenChunkBase::*getGenFuncTPlane_function_type )(  ) const;
            
            TexGenChunkBase_exposer.def( 
                "getGenFuncTPlane"
                , getGenFuncTPlane_function_type( &::OSG::TexGenChunkBase::getGenFuncTPlane )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::TexGenChunkBase::getQBeacon
        
            typedef ::OSG::Node * ( ::OSG::TexGenChunkBase::*getQBeacon_function_type )(  ) const;
            
            TexGenChunkBase_exposer.def( 
                "getQBeacon"
                , getQBeacon_function_type( &::OSG::TexGenChunkBase::getQBeacon )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TexGenChunkBase::getRBeacon
        
            typedef ::OSG::Node * ( ::OSG::TexGenChunkBase::*getRBeacon_function_type )(  ) const;
            
            TexGenChunkBase_exposer.def( 
                "getRBeacon"
                , getRBeacon_function_type( &::OSG::TexGenChunkBase::getRBeacon )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TexGenChunkBase::getSBeacon
        
            typedef ::OSG::Node * ( ::OSG::TexGenChunkBase::*getSBeacon_function_type )(  ) const;
            
            TexGenChunkBase_exposer.def( 
                "getSBeacon"
                , getSBeacon_function_type( &::OSG::TexGenChunkBase::getSBeacon )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TexGenChunkBase::getSFEyeModelViewMatrix
        
            typedef ::OSG::SFMatrix const * ( ::OSG::TexGenChunkBase::*getSFEyeModelViewMatrix_function_type )(  ) const;
            
            TexGenChunkBase_exposer.def( 
                "getSFEyeModelViewMatrix"
                , getSFEyeModelViewMatrix_function_type( &::OSG::TexGenChunkBase::getSFEyeModelViewMatrix )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TexGenChunkBase::getSFEyeModelViewMode
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::TexGenChunkBase::*getSFEyeModelViewMode_function_type )(  ) const;
            
            TexGenChunkBase_exposer.def( 
                "getSFEyeModelViewMode"
                , getSFEyeModelViewMode_function_type( &::OSG::TexGenChunkBase::getSFEyeModelViewMode )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TexGenChunkBase::getSFGenFuncQ
        
            typedef ::OSG::SFGLenum const * ( ::OSG::TexGenChunkBase::*getSFGenFuncQ_function_type )(  ) const;
            
            TexGenChunkBase_exposer.def( 
                "getSFGenFuncQ"
                , getSFGenFuncQ_function_type( &::OSG::TexGenChunkBase::getSFGenFuncQ )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TexGenChunkBase::getSFGenFuncQPlane
        
            typedef ::OSG::SFVec4f const * ( ::OSG::TexGenChunkBase::*getSFGenFuncQPlane_function_type )(  ) const;
            
            TexGenChunkBase_exposer.def( 
                "getSFGenFuncQPlane"
                , getSFGenFuncQPlane_function_type( &::OSG::TexGenChunkBase::getSFGenFuncQPlane )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TexGenChunkBase::getSFGenFuncR
        
            typedef ::OSG::SFGLenum const * ( ::OSG::TexGenChunkBase::*getSFGenFuncR_function_type )(  ) const;
            
            TexGenChunkBase_exposer.def( 
                "getSFGenFuncR"
                , getSFGenFuncR_function_type( &::OSG::TexGenChunkBase::getSFGenFuncR )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TexGenChunkBase::getSFGenFuncRPlane
        
            typedef ::OSG::SFVec4f const * ( ::OSG::TexGenChunkBase::*getSFGenFuncRPlane_function_type )(  ) const;
            
            TexGenChunkBase_exposer.def( 
                "getSFGenFuncRPlane"
                , getSFGenFuncRPlane_function_type( &::OSG::TexGenChunkBase::getSFGenFuncRPlane )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TexGenChunkBase::getSFGenFuncS
        
            typedef ::OSG::SFGLenum const * ( ::OSG::TexGenChunkBase::*getSFGenFuncS_function_type )(  ) const;
            
            TexGenChunkBase_exposer.def( 
                "getSFGenFuncS"
                , getSFGenFuncS_function_type( &::OSG::TexGenChunkBase::getSFGenFuncS )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TexGenChunkBase::getSFGenFuncSPlane
        
            typedef ::OSG::SFVec4f const * ( ::OSG::TexGenChunkBase::*getSFGenFuncSPlane_function_type )(  ) const;
            
            TexGenChunkBase_exposer.def( 
                "getSFGenFuncSPlane"
                , getSFGenFuncSPlane_function_type( &::OSG::TexGenChunkBase::getSFGenFuncSPlane )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TexGenChunkBase::getSFGenFuncT
        
            typedef ::OSG::SFGLenum const * ( ::OSG::TexGenChunkBase::*getSFGenFuncT_function_type )(  ) const;
            
            TexGenChunkBase_exposer.def( 
                "getSFGenFuncT"
                , getSFGenFuncT_function_type( &::OSG::TexGenChunkBase::getSFGenFuncT )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TexGenChunkBase::getSFGenFuncTPlane
        
            typedef ::OSG::SFVec4f const * ( ::OSG::TexGenChunkBase::*getSFGenFuncTPlane_function_type )(  ) const;
            
            TexGenChunkBase_exposer.def( 
                "getSFGenFuncTPlane"
                , getSFGenFuncTPlane_function_type( &::OSG::TexGenChunkBase::getSFGenFuncTPlane )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TexGenChunkBase::getSFQBeacon
        
            typedef ::OSG::SFWeakNodePtr const * ( ::OSG::TexGenChunkBase::*getSFQBeacon_function_type )(  ) const;
            
            TexGenChunkBase_exposer.def( 
                "getSFQBeacon"
                , getSFQBeacon_function_type( &::OSG::TexGenChunkBase::getSFQBeacon )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TexGenChunkBase::getSFRBeacon
        
            typedef ::OSG::SFWeakNodePtr const * ( ::OSG::TexGenChunkBase::*getSFRBeacon_function_type )(  ) const;
            
            TexGenChunkBase_exposer.def( 
                "getSFRBeacon"
                , getSFRBeacon_function_type( &::OSG::TexGenChunkBase::getSFRBeacon )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TexGenChunkBase::getSFSBeacon
        
            typedef ::OSG::SFWeakNodePtr const * ( ::OSG::TexGenChunkBase::*getSFSBeacon_function_type )(  ) const;
            
            TexGenChunkBase_exposer.def( 
                "getSFSBeacon"
                , getSFSBeacon_function_type( &::OSG::TexGenChunkBase::getSFSBeacon )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TexGenChunkBase::getSFTBeacon
        
            typedef ::OSG::SFWeakNodePtr const * ( ::OSG::TexGenChunkBase::*getSFTBeacon_function_type )(  ) const;
            
            TexGenChunkBase_exposer.def( 
                "getSFTBeacon"
                , getSFTBeacon_function_type( &::OSG::TexGenChunkBase::getSFTBeacon )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TexGenChunkBase::getTBeacon
        
            typedef ::OSG::Node * ( ::OSG::TexGenChunkBase::*getTBeacon_function_type )(  ) const;
            
            TexGenChunkBase_exposer.def( 
                "getTBeacon"
                , getTBeacon_function_type( &::OSG::TexGenChunkBase::getTBeacon )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TexGenChunkBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::TexGenChunkBase::*getType_function_type )(  ) ;
            
            TexGenChunkBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::TexGenChunkBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TexGenChunkBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::TexGenChunkBase::*getType_function_type )(  ) const;
            
            TexGenChunkBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::TexGenChunkBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TexGenChunkBase::setEyeModelViewMatrix
        
            typedef void ( ::OSG::TexGenChunkBase::*setEyeModelViewMatrix_function_type )( ::OSG::Matrix const & ) ;
            
            TexGenChunkBase_exposer.def( 
                "setEyeModelViewMatrix"
                , setEyeModelViewMatrix_function_type( &::OSG::TexGenChunkBase::setEyeModelViewMatrix )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::TexGenChunkBase::setEyeModelViewMode
        
            typedef void ( ::OSG::TexGenChunkBase::*setEyeModelViewMode_function_type )( ::OSG::UInt32 const ) ;
            
            TexGenChunkBase_exposer.def( 
                "setEyeModelViewMode"
                , setEyeModelViewMode_function_type( &::OSG::TexGenChunkBase::setEyeModelViewMode )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::TexGenChunkBase::setGenFuncQ
        
            typedef void ( ::OSG::TexGenChunkBase::*setGenFuncQ_function_type )( ::GLenum const & ) ;
            
            TexGenChunkBase_exposer.def( 
                "setGenFuncQ"
                , setGenFuncQ_function_type( &::OSG::TexGenChunkBase::setGenFuncQ )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::TexGenChunkBase::setGenFuncQPlane
        
            typedef void ( ::OSG::TexGenChunkBase::*setGenFuncQPlane_function_type )( ::OSG::Vec4f const & ) ;
            
            TexGenChunkBase_exposer.def( 
                "setGenFuncQPlane"
                , setGenFuncQPlane_function_type( &::OSG::TexGenChunkBase::setGenFuncQPlane )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::TexGenChunkBase::setGenFuncR
        
            typedef void ( ::OSG::TexGenChunkBase::*setGenFuncR_function_type )( ::GLenum const & ) ;
            
            TexGenChunkBase_exposer.def( 
                "setGenFuncR"
                , setGenFuncR_function_type( &::OSG::TexGenChunkBase::setGenFuncR )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::TexGenChunkBase::setGenFuncRPlane
        
            typedef void ( ::OSG::TexGenChunkBase::*setGenFuncRPlane_function_type )( ::OSG::Vec4f const & ) ;
            
            TexGenChunkBase_exposer.def( 
                "setGenFuncRPlane"
                , setGenFuncRPlane_function_type( &::OSG::TexGenChunkBase::setGenFuncRPlane )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::TexGenChunkBase::setGenFuncS
        
            typedef void ( ::OSG::TexGenChunkBase::*setGenFuncS_function_type )( ::GLenum const & ) ;
            
            TexGenChunkBase_exposer.def( 
                "setGenFuncS"
                , setGenFuncS_function_type( &::OSG::TexGenChunkBase::setGenFuncS )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::TexGenChunkBase::setGenFuncSPlane
        
            typedef void ( ::OSG::TexGenChunkBase::*setGenFuncSPlane_function_type )( ::OSG::Vec4f const & ) ;
            
            TexGenChunkBase_exposer.def( 
                "setGenFuncSPlane"
                , setGenFuncSPlane_function_type( &::OSG::TexGenChunkBase::setGenFuncSPlane )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::TexGenChunkBase::setGenFuncT
        
            typedef void ( ::OSG::TexGenChunkBase::*setGenFuncT_function_type )( ::GLenum const & ) ;
            
            TexGenChunkBase_exposer.def( 
                "setGenFuncT"
                , setGenFuncT_function_type( &::OSG::TexGenChunkBase::setGenFuncT )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::TexGenChunkBase::setGenFuncTPlane
        
            typedef void ( ::OSG::TexGenChunkBase::*setGenFuncTPlane_function_type )( ::OSG::Vec4f const & ) ;
            
            TexGenChunkBase_exposer.def( 
                "setGenFuncTPlane"
                , setGenFuncTPlane_function_type( &::OSG::TexGenChunkBase::setGenFuncTPlane )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::TexGenChunkBase::setQBeacon
        
            typedef void ( ::OSG::TexGenChunkBase::*setQBeacon_function_type )( ::OSG::Node * const ) ;
            
            TexGenChunkBase_exposer.def( 
                "setQBeacon"
                , setQBeacon_function_type( &::OSG::TexGenChunkBase::setQBeacon )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::TexGenChunkBase::setRBeacon
        
            typedef void ( ::OSG::TexGenChunkBase::*setRBeacon_function_type )( ::OSG::Node * const ) ;
            
            TexGenChunkBase_exposer.def( 
                "setRBeacon"
                , setRBeacon_function_type( &::OSG::TexGenChunkBase::setRBeacon )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::TexGenChunkBase::setSBeacon
        
            typedef void ( ::OSG::TexGenChunkBase::*setSBeacon_function_type )( ::OSG::Node * const ) ;
            
            TexGenChunkBase_exposer.def( 
                "setSBeacon"
                , setSBeacon_function_type( &::OSG::TexGenChunkBase::setSBeacon )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::TexGenChunkBase::setTBeacon
        
            typedef void ( ::OSG::TexGenChunkBase::*setTBeacon_function_type )( ::OSG::Node * const ) ;
            
            TexGenChunkBase_exposer.def( 
                "setTBeacon"
                , setTBeacon_function_type( &::OSG::TexGenChunkBase::setTBeacon )
                , ( bp::arg("value") ) );
        
        }
        TexGenChunkBase_exposer.staticmethod( "create" );
        TexGenChunkBase_exposer.staticmethod( "createDependent" );
        TexGenChunkBase_exposer.staticmethod( "createLocal" );
        TexGenChunkBase_exposer.staticmethod( "getClassGroupId" );
        TexGenChunkBase_exposer.staticmethod( "getClassType" );
        TexGenChunkBase_exposer.staticmethod( "getClassTypeId" );
    }

}
