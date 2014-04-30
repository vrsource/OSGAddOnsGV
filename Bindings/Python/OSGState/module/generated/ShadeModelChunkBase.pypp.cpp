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
#include "OSGState_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "ShadeModelChunkBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_ShadeModelChunkBase_class(){

    { //::OSG::ShadeModelChunkBase
        typedef bp::class_< OSG::ShadeModelChunkBase, bp::bases< ::OSG::StateChunk >, boost::noncopyable > ShadeModelChunkBase_exposer_t;
        ShadeModelChunkBase_exposer_t ShadeModelChunkBase_exposer = ShadeModelChunkBase_exposer_t( "ShadeModelChunkBase", bp::no_init );
        bp::scope ShadeModelChunkBase_scope( ShadeModelChunkBase_exposer );
        bp::scope().attr("ShadeModelFieldId") = (int)OSG::ShadeModelChunkBase::ShadeModelFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::ShadeModelChunkBase::NextFieldId;
        { //::OSG::ShadeModelChunkBase::copyFromBin
        
            typedef void ( ::OSG::ShadeModelChunkBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ShadeModelChunkBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::ShadeModelChunkBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ShadeModelChunkBase::copyToBin
        
            typedef void ( ::OSG::ShadeModelChunkBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ShadeModelChunkBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::ShadeModelChunkBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ShadeModelChunkBase::create
        
            typedef ::OSG::ShadeModelChunkTransitPtr ( *create_function_type )(  );
            
            ShadeModelChunkBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::ShadeModelChunkBase::create ) );
        
        }
        { //::OSG::ShadeModelChunkBase::createDependent
        
            typedef ::OSG::ShadeModelChunkTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            ShadeModelChunkBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::ShadeModelChunkBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::ShadeModelChunkBase::createLocal
        
            typedef ::OSG::ShadeModelChunkTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            ShadeModelChunkBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::ShadeModelChunkBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::ShadeModelChunkBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::ShadeModelChunkBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            ShadeModelChunkBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::ShadeModelChunkBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::ShadeModelChunkBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            ShadeModelChunkBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::ShadeModelChunkBase::getClassGroupId ) );
        
        }
        { //::OSG::ShadeModelChunkBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            ShadeModelChunkBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::ShadeModelChunkBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::ShadeModelChunkBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            ShadeModelChunkBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::ShadeModelChunkBase::getClassTypeId ) );
        
        }
        { //::OSG::ShadeModelChunkBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::ShadeModelChunkBase::*getContainerSize_function_type )(  ) const;
            
            ShadeModelChunkBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::ShadeModelChunkBase::getContainerSize ) );
        
        }
        { //::OSG::ShadeModelChunkBase::getSFShadeModel
        
            typedef ::OSG::SFGLenum const * ( ::OSG::ShadeModelChunkBase::*getSFShadeModel_function_type )(  ) const;
            
            ShadeModelChunkBase_exposer.def( 
                "getSFShadeModel"
                , getSFShadeModel_function_type( &::OSG::ShadeModelChunkBase::getSFShadeModel )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShadeModelChunkBase::getShadeModel
        
            typedef ::GLenum const & ( ::OSG::ShadeModelChunkBase::*getShadeModel_function_type )(  ) const;
            
            ShadeModelChunkBase_exposer.def( 
                "getShadeModel"
                , getShadeModel_function_type( &::OSG::ShadeModelChunkBase::getShadeModel )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::ShadeModelChunkBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::ShadeModelChunkBase::*getType_function_type )(  ) ;
            
            ShadeModelChunkBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ShadeModelChunkBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShadeModelChunkBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::ShadeModelChunkBase::*getType_function_type )(  ) const;
            
            ShadeModelChunkBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ShadeModelChunkBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShadeModelChunkBase::setShadeModel
        
            typedef void ( ::OSG::ShadeModelChunkBase::*setShadeModel_function_type )( ::GLenum const & ) ;
            
            ShadeModelChunkBase_exposer.def( 
                "setShadeModel"
                , setShadeModel_function_type( &::OSG::ShadeModelChunkBase::setShadeModel )
                , ( bp::arg("value") ) );
        
        }
        ShadeModelChunkBase_exposer.staticmethod( "create" );
        ShadeModelChunkBase_exposer.staticmethod( "createDependent" );
        ShadeModelChunkBase_exposer.staticmethod( "createLocal" );
        ShadeModelChunkBase_exposer.staticmethod( "getClassGroupId" );
        ShadeModelChunkBase_exposer.staticmethod( "getClassType" );
        ShadeModelChunkBase_exposer.staticmethod( "getClassTypeId" );
    }

}
