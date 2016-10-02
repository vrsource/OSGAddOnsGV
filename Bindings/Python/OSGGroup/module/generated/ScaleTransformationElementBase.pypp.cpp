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
#include "OSGGroup_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "ScaleTransformationElementBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_ScaleTransformationElementBase_class(){

    { //::OSG::ScaleTransformationElementBase
        typedef bp::class_< OSG::ScaleTransformationElementBase, bp::bases< OSG::TransformationElement >, boost::noncopyable > ScaleTransformationElementBase_exposer_t;
        ScaleTransformationElementBase_exposer_t ScaleTransformationElementBase_exposer = ScaleTransformationElementBase_exposer_t( "ScaleTransformationElementBase", bp::no_init );
        bp::scope ScaleTransformationElementBase_scope( ScaleTransformationElementBase_exposer );
        bp::scope().attr("ScaleFieldId") = (int)OSG::ScaleTransformationElementBase::ScaleFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::ScaleTransformationElementBase::NextFieldId;
        { //::OSG::ScaleTransformationElementBase::copyFromBin
        
            typedef void ( ::OSG::ScaleTransformationElementBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ScaleTransformationElementBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::ScaleTransformationElementBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ScaleTransformationElementBase::copyToBin
        
            typedef void ( ::OSG::ScaleTransformationElementBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ScaleTransformationElementBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::ScaleTransformationElementBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ScaleTransformationElementBase::create
        
            typedef ::OSG::ScaleTransformationElementTransitPtr ( *create_function_type )(  );
            
            ScaleTransformationElementBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::ScaleTransformationElementBase::create ) );
        
        }
        { //::OSG::ScaleTransformationElementBase::createDependent
        
            typedef ::OSG::ScaleTransformationElementTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            ScaleTransformationElementBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::ScaleTransformationElementBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::ScaleTransformationElementBase::createLocal
        
            typedef ::OSG::ScaleTransformationElementTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            ScaleTransformationElementBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::ScaleTransformationElementBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::ScaleTransformationElementBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::ScaleTransformationElementBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            ScaleTransformationElementBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::ScaleTransformationElementBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::ScaleTransformationElementBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            ScaleTransformationElementBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::ScaleTransformationElementBase::getClassGroupId ) );
        
        }
        { //::OSG::ScaleTransformationElementBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            ScaleTransformationElementBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::ScaleTransformationElementBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::ScaleTransformationElementBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            ScaleTransformationElementBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::ScaleTransformationElementBase::getClassTypeId ) );
        
        }
        { //::OSG::ScaleTransformationElementBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::ScaleTransformationElementBase::*getContainerSize_function_type )(  ) const;
            
            ScaleTransformationElementBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::ScaleTransformationElementBase::getContainerSize ) );
        
        }
        { //::OSG::ScaleTransformationElementBase::getSFScale
        
            typedef ::OSG::SFVec3f const * ( ::OSG::ScaleTransformationElementBase::*getSFScale_function_type )(  ) const;
            
            ScaleTransformationElementBase_exposer.def( 
                "getSFScale"
                , getSFScale_function_type( &::OSG::ScaleTransformationElementBase::getSFScale )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ScaleTransformationElementBase::getScale
        
            typedef ::OSG::Vec3f const & ( ::OSG::ScaleTransformationElementBase::*getScale_function_type )(  ) const;
            
            ScaleTransformationElementBase_exposer.def( 
                "getScale"
                , getScale_function_type( &::OSG::ScaleTransformationElementBase::getScale )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::ScaleTransformationElementBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::ScaleTransformationElementBase::*getType_function_type )(  ) ;
            
            ScaleTransformationElementBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ScaleTransformationElementBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ScaleTransformationElementBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::ScaleTransformationElementBase::*getType_function_type )(  ) const;
            
            ScaleTransformationElementBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ScaleTransformationElementBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ScaleTransformationElementBase::setScale
        
            typedef void ( ::OSG::ScaleTransformationElementBase::*setScale_function_type )( ::OSG::Vec3f const & ) ;
            
            ScaleTransformationElementBase_exposer.def( 
                "setScale"
                , setScale_function_type( &::OSG::ScaleTransformationElementBase::setScale )
                , ( bp::arg("value") ) );
        
        }
        ScaleTransformationElementBase_exposer.staticmethod( "create" );
        ScaleTransformationElementBase_exposer.staticmethod( "createDependent" );
        ScaleTransformationElementBase_exposer.staticmethod( "createLocal" );
        ScaleTransformationElementBase_exposer.staticmethod( "getClassGroupId" );
        ScaleTransformationElementBase_exposer.staticmethod( "getClassType" );
        ScaleTransformationElementBase_exposer.staticmethod( "getClassTypeId" );
    }

}
