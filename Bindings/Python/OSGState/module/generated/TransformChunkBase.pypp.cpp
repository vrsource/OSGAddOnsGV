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
#include "OSGState_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "TransformChunkBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_TransformChunkBase_class(){

    { //::OSG::TransformChunkBase
        typedef bp::class_< OSG::TransformChunkBase, bp::bases< ::OSG::StateChunk >, boost::noncopyable > TransformChunkBase_exposer_t;
        TransformChunkBase_exposer_t TransformChunkBase_exposer = TransformChunkBase_exposer_t( "TransformChunkBase", bp::no_init );
        bp::scope TransformChunkBase_scope( TransformChunkBase_exposer );
        bp::scope().attr("MatrixFieldId") = (int)OSG::TransformChunkBase::MatrixFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::TransformChunkBase::NextFieldId;
        { //::OSG::TransformChunkBase::copyFromBin
        
            typedef void ( ::OSG::TransformChunkBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            TransformChunkBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::TransformChunkBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::TransformChunkBase::copyToBin
        
            typedef void ( ::OSG::TransformChunkBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            TransformChunkBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::TransformChunkBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::TransformChunkBase::create
        
            typedef ::OSG::TransformChunkTransitPtr ( *create_function_type )(  );
            
            TransformChunkBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::TransformChunkBase::create ) );
        
        }
        { //::OSG::TransformChunkBase::createDependent
        
            typedef ::OSG::TransformChunkTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            TransformChunkBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::TransformChunkBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::TransformChunkBase::createLocal
        
            typedef ::OSG::TransformChunkTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            TransformChunkBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::TransformChunkBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::TransformChunkBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::TransformChunkBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            TransformChunkBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::TransformChunkBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::TransformChunkBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            TransformChunkBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::TransformChunkBase::getClassGroupId ) );
        
        }
        { //::OSG::TransformChunkBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            TransformChunkBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::TransformChunkBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::TransformChunkBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            TransformChunkBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::TransformChunkBase::getClassTypeId ) );
        
        }
        { //::OSG::TransformChunkBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::TransformChunkBase::*getContainerSize_function_type )(  ) const;
            
            TransformChunkBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::TransformChunkBase::getContainerSize ) );
        
        }
        { //::OSG::TransformChunkBase::getMatrix
        
            typedef ::OSG::Matrix const & ( ::OSG::TransformChunkBase::*getMatrix_function_type )(  ) const;
            
            TransformChunkBase_exposer.def( 
                "getMatrix"
                , getMatrix_function_type( &::OSG::TransformChunkBase::getMatrix )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::TransformChunkBase::getSFMatrix
        
            typedef ::OSG::SFMatrix const * ( ::OSG::TransformChunkBase::*getSFMatrix_function_type )(  ) const;
            
            TransformChunkBase_exposer.def( 
                "getSFMatrix"
                , getSFMatrix_function_type( &::OSG::TransformChunkBase::getSFMatrix )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TransformChunkBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::TransformChunkBase::*getType_function_type )(  ) ;
            
            TransformChunkBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::TransformChunkBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TransformChunkBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::TransformChunkBase::*getType_function_type )(  ) const;
            
            TransformChunkBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::TransformChunkBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TransformChunkBase::setMatrix
        
            typedef void ( ::OSG::TransformChunkBase::*setMatrix_function_type )( ::OSG::Matrix const & ) ;
            
            TransformChunkBase_exposer.def( 
                "setMatrix"
                , setMatrix_function_type( &::OSG::TransformChunkBase::setMatrix )
                , ( bp::arg("value") ) );
        
        }
        TransformChunkBase_exposer.staticmethod( "create" );
        TransformChunkBase_exposer.staticmethod( "createDependent" );
        TransformChunkBase_exposer.staticmethod( "createLocal" );
        TransformChunkBase_exposer.staticmethod( "getClassGroupId" );
        TransformChunkBase_exposer.staticmethod( "getClassType" );
        TransformChunkBase_exposer.staticmethod( "getClassTypeId" );
    }

}
