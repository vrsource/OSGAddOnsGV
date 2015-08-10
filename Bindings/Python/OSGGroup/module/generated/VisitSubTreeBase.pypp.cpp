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
#include "OSGGroup_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "VisitSubTreeBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_VisitSubTreeBase_class(){

    { //::OSG::VisitSubTreeBase
        typedef bp::class_< OSG::VisitSubTreeBase, bp::bases< ::OSG::Group >, boost::noncopyable > VisitSubTreeBase_exposer_t;
        VisitSubTreeBase_exposer_t VisitSubTreeBase_exposer = VisitSubTreeBase_exposer_t( "VisitSubTreeBase", bp::no_init );
        bp::scope VisitSubTreeBase_scope( VisitSubTreeBase_exposer );
        bp::scope().attr("SubTreeRootFieldId") = (int)OSG::VisitSubTreeBase::SubTreeRootFieldId;
        bp::scope().attr("SubTreeTravMaskFieldId") = (int)OSG::VisitSubTreeBase::SubTreeTravMaskFieldId;
        bp::scope().attr("TravMaskModeFieldId") = (int)OSG::VisitSubTreeBase::TravMaskModeFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::VisitSubTreeBase::NextFieldId;
        { //::OSG::VisitSubTreeBase::copyFromBin
        
            typedef void ( ::OSG::VisitSubTreeBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            VisitSubTreeBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::VisitSubTreeBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::VisitSubTreeBase::copyToBin
        
            typedef void ( ::OSG::VisitSubTreeBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            VisitSubTreeBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::VisitSubTreeBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::VisitSubTreeBase::create
        
            typedef ::OSG::VisitSubTreeTransitPtr ( *create_function_type )(  );
            
            VisitSubTreeBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::VisitSubTreeBase::create ) );
        
        }
        { //::OSG::VisitSubTreeBase::createDependent
        
            typedef ::OSG::VisitSubTreeTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            VisitSubTreeBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::VisitSubTreeBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::VisitSubTreeBase::createLocal
        
            typedef ::OSG::VisitSubTreeTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            VisitSubTreeBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::VisitSubTreeBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::VisitSubTreeBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::VisitSubTreeBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            VisitSubTreeBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::VisitSubTreeBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::VisitSubTreeBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            VisitSubTreeBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::VisitSubTreeBase::getClassGroupId ) );
        
        }
        { //::OSG::VisitSubTreeBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            VisitSubTreeBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::VisitSubTreeBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::VisitSubTreeBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            VisitSubTreeBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::VisitSubTreeBase::getClassTypeId ) );
        
        }
        { //::OSG::VisitSubTreeBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::VisitSubTreeBase::*getContainerSize_function_type )(  ) const;
            
            VisitSubTreeBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::VisitSubTreeBase::getContainerSize ) );
        
        }
        { //::OSG::VisitSubTreeBase::getSFSubTreeTravMask
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::VisitSubTreeBase::*getSFSubTreeTravMask_function_type )(  ) const;
            
            VisitSubTreeBase_exposer.def( 
                "getSFSubTreeTravMask"
                , getSFSubTreeTravMask_function_type( &::OSG::VisitSubTreeBase::getSFSubTreeTravMask )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::VisitSubTreeBase::getSFTravMaskMode
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::VisitSubTreeBase::*getSFTravMaskMode_function_type )(  ) const;
            
            VisitSubTreeBase_exposer.def( 
                "getSFTravMaskMode"
                , getSFTravMaskMode_function_type( &::OSG::VisitSubTreeBase::getSFTravMaskMode )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::VisitSubTreeBase::getSubTreeTravMask
        
            typedef ::OSG::UInt32 ( ::OSG::VisitSubTreeBase::*getSubTreeTravMask_function_type )(  ) const;
            
            VisitSubTreeBase_exposer.def( 
                "getSubTreeTravMask"
                , getSubTreeTravMask_function_type( &::OSG::VisitSubTreeBase::getSubTreeTravMask ) );
        
        }
        { //::OSG::VisitSubTreeBase::getTravMaskMode
        
            typedef ::OSG::UInt32 ( ::OSG::VisitSubTreeBase::*getTravMaskMode_function_type )(  ) const;
            
            VisitSubTreeBase_exposer.def( 
                "getTravMaskMode"
                , getTravMaskMode_function_type( &::OSG::VisitSubTreeBase::getTravMaskMode ) );
        
        }
        { //::OSG::VisitSubTreeBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::VisitSubTreeBase::*getType_function_type )(  ) ;
            
            VisitSubTreeBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::VisitSubTreeBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::VisitSubTreeBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::VisitSubTreeBase::*getType_function_type )(  ) const;
            
            VisitSubTreeBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::VisitSubTreeBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::VisitSubTreeBase::setSubTreeTravMask
        
            typedef void ( ::OSG::VisitSubTreeBase::*setSubTreeTravMask_function_type )( ::OSG::UInt32 const ) ;
            
            VisitSubTreeBase_exposer.def( 
                "setSubTreeTravMask"
                , setSubTreeTravMask_function_type( &::OSG::VisitSubTreeBase::setSubTreeTravMask )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::VisitSubTreeBase::setTravMaskMode
        
            typedef void ( ::OSG::VisitSubTreeBase::*setTravMaskMode_function_type )( ::OSG::UInt32 const ) ;
            
            VisitSubTreeBase_exposer.def( 
                "setTravMaskMode"
                , setTravMaskMode_function_type( &::OSG::VisitSubTreeBase::setTravMaskMode )
                , ( bp::arg("value") ) );
        
        }
        VisitSubTreeBase_exposer.staticmethod( "create" );
        VisitSubTreeBase_exposer.staticmethod( "createDependent" );
        VisitSubTreeBase_exposer.staticmethod( "createLocal" );
        VisitSubTreeBase_exposer.staticmethod( "getClassGroupId" );
        VisitSubTreeBase_exposer.staticmethod( "getClassType" );
        VisitSubTreeBase_exposer.staticmethod( "getClassTypeId" );
    }

}
