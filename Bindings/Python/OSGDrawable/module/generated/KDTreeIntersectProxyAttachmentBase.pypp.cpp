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
#include "OSGDrawable_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "KDTreeIntersectProxyAttachmentBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct KDTreeIntersectProxyAttachmentBase_wrapper : OSG::KDTreeIntersectProxyAttachmentBase, bp::wrapper< OSG::KDTreeIntersectProxyAttachmentBase > {

    virtual ::OSG::ActionBase::ResultE intersectEnter( ::OSG::Node * node, ::OSG::Action * action ){
        bp::override func_intersectEnter = this->get_override( "intersectEnter" );
        return func_intersectEnter( boost::python::ptr(node), boost::python::ptr(action) );
    }

};

void register_KDTreeIntersectProxyAttachmentBase_class(){

    { //::OSG::KDTreeIntersectProxyAttachmentBase
        typedef bp::class_< KDTreeIntersectProxyAttachmentBase_wrapper, bp::bases< ::OSG::IntersectProxyAttachment >, boost::noncopyable > KDTreeIntersectProxyAttachmentBase_exposer_t;
        KDTreeIntersectProxyAttachmentBase_exposer_t KDTreeIntersectProxyAttachmentBase_exposer = KDTreeIntersectProxyAttachmentBase_exposer_t( "KDTreeIntersectProxyAttachmentBase", bp::no_init );
        bp::scope KDTreeIntersectProxyAttachmentBase_scope( KDTreeIntersectProxyAttachmentBase_exposer );
        bp::scope().attr("GeometryFieldId") = (int)OSG::KDTreeIntersectProxyAttachmentBase::GeometryFieldId;
        bp::scope().attr("MaxDepthFieldId") = (int)OSG::KDTreeIntersectProxyAttachmentBase::MaxDepthFieldId;
        bp::scope().attr("TreeNodesFieldId") = (int)OSG::KDTreeIntersectProxyAttachmentBase::TreeNodesFieldId;
        bp::scope().attr("TriIndicesFieldId") = (int)OSG::KDTreeIntersectProxyAttachmentBase::TriIndicesFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::KDTreeIntersectProxyAttachmentBase::NextFieldId;
        { //::OSG::KDTreeIntersectProxyAttachmentBase::copyFromBin
        
            typedef void ( ::OSG::KDTreeIntersectProxyAttachmentBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            KDTreeIntersectProxyAttachmentBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::KDTreeIntersectProxyAttachmentBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::KDTreeIntersectProxyAttachmentBase::copyToBin
        
            typedef void ( ::OSG::KDTreeIntersectProxyAttachmentBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            KDTreeIntersectProxyAttachmentBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::KDTreeIntersectProxyAttachmentBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::KDTreeIntersectProxyAttachmentBase::create
        
            typedef ::OSG::KDTreeIntersectProxyAttachmentTransitPtr ( *create_function_type )(  );
            
            KDTreeIntersectProxyAttachmentBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::KDTreeIntersectProxyAttachmentBase::create ) );
        
        }
        { //::OSG::KDTreeIntersectProxyAttachmentBase::createDependent
        
            typedef ::OSG::KDTreeIntersectProxyAttachmentTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            KDTreeIntersectProxyAttachmentBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::KDTreeIntersectProxyAttachmentBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::KDTreeIntersectProxyAttachmentBase::createLocal
        
            typedef ::OSG::KDTreeIntersectProxyAttachmentTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            KDTreeIntersectProxyAttachmentBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::KDTreeIntersectProxyAttachmentBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::KDTreeIntersectProxyAttachmentBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::KDTreeIntersectProxyAttachmentBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            KDTreeIntersectProxyAttachmentBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::KDTreeIntersectProxyAttachmentBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::KDTreeIntersectProxyAttachmentBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            KDTreeIntersectProxyAttachmentBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::KDTreeIntersectProxyAttachmentBase::getClassGroupId ) );
        
        }
        { //::OSG::KDTreeIntersectProxyAttachmentBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            KDTreeIntersectProxyAttachmentBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::KDTreeIntersectProxyAttachmentBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::KDTreeIntersectProxyAttachmentBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            KDTreeIntersectProxyAttachmentBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::KDTreeIntersectProxyAttachmentBase::getClassTypeId ) );
        
        }
        { //::OSG::KDTreeIntersectProxyAttachmentBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::KDTreeIntersectProxyAttachmentBase::*getContainerSize_function_type )(  ) const;
            
            KDTreeIntersectProxyAttachmentBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::KDTreeIntersectProxyAttachmentBase::getContainerSize ) );
        
        }
        { //::OSG::KDTreeIntersectProxyAttachmentBase::getGeometry
        
            typedef ::OSG::Geometry * ( ::OSG::KDTreeIntersectProxyAttachmentBase::*getGeometry_function_type )(  ) const;
            
            KDTreeIntersectProxyAttachmentBase_exposer.def( 
                "getGeometry"
                , getGeometry_function_type( &::OSG::KDTreeIntersectProxyAttachmentBase::getGeometry )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::KDTreeIntersectProxyAttachmentBase::getMaxDepth
        
            typedef ::OSG::Int32 ( ::OSG::KDTreeIntersectProxyAttachmentBase::*getMaxDepth_function_type )(  ) const;
            
            KDTreeIntersectProxyAttachmentBase_exposer.def( 
                "getMaxDepth"
                , getMaxDepth_function_type( &::OSG::KDTreeIntersectProxyAttachmentBase::getMaxDepth ) );
        
        }
        { //::OSG::KDTreeIntersectProxyAttachmentBase::getSFGeometry
        
            typedef ::OSG::SFUnrecGeometryPtr const * ( ::OSG::KDTreeIntersectProxyAttachmentBase::*getSFGeometry_function_type )(  ) const;
            
            KDTreeIntersectProxyAttachmentBase_exposer.def( 
                "getSFGeometry"
                , getSFGeometry_function_type( &::OSG::KDTreeIntersectProxyAttachmentBase::getSFGeometry )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::KDTreeIntersectProxyAttachmentBase::getSFMaxDepth
        
            typedef ::OSG::SFInt32 const * ( ::OSG::KDTreeIntersectProxyAttachmentBase::*getSFMaxDepth_function_type )(  ) const;
            
            KDTreeIntersectProxyAttachmentBase_exposer.def( 
                "getSFMaxDepth"
                , getSFMaxDepth_function_type( &::OSG::KDTreeIntersectProxyAttachmentBase::getSFMaxDepth )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::KDTreeIntersectProxyAttachmentBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::KDTreeIntersectProxyAttachmentBase::*getType_function_type )(  ) ;
            
            KDTreeIntersectProxyAttachmentBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::KDTreeIntersectProxyAttachmentBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::KDTreeIntersectProxyAttachmentBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::KDTreeIntersectProxyAttachmentBase::*getType_function_type )(  ) const;
            
            KDTreeIntersectProxyAttachmentBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::KDTreeIntersectProxyAttachmentBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::KDTreeIntersectProxyAttachmentBase::setGeometry
        
            typedef void ( ::OSG::KDTreeIntersectProxyAttachmentBase::*setGeometry_function_type )( ::OSG::Geometry * const ) ;
            
            KDTreeIntersectProxyAttachmentBase_exposer.def( 
                "setGeometry"
                , setGeometry_function_type( &::OSG::KDTreeIntersectProxyAttachmentBase::setGeometry )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::KDTreeIntersectProxyAttachmentBase::setMaxDepth
        
            typedef void ( ::OSG::KDTreeIntersectProxyAttachmentBase::*setMaxDepth_function_type )( ::OSG::Int32 const ) ;
            
            KDTreeIntersectProxyAttachmentBase_exposer.def( 
                "setMaxDepth"
                , setMaxDepth_function_type( &::OSG::KDTreeIntersectProxyAttachmentBase::setMaxDepth )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::IntersectProxyAttachment::intersectEnter
        
            typedef ::OSG::ActionBase::ResultE ( ::OSG::IntersectProxyAttachment::*intersectEnter_function_type )( ::OSG::Node *,::OSG::Action * ) ;
            
            KDTreeIntersectProxyAttachmentBase_exposer.def( 
                "intersectEnter"
                , bp::pure_virtual( intersectEnter_function_type(&::OSG::IntersectProxyAttachment::intersectEnter) )
                , ( bp::arg("node"), bp::arg("action") ) );
        
        }
        KDTreeIntersectProxyAttachmentBase_exposer.staticmethod( "create" );
        KDTreeIntersectProxyAttachmentBase_exposer.staticmethod( "createDependent" );
        KDTreeIntersectProxyAttachmentBase_exposer.staticmethod( "createLocal" );
        KDTreeIntersectProxyAttachmentBase_exposer.staticmethod( "getClassGroupId" );
        KDTreeIntersectProxyAttachmentBase_exposer.staticmethod( "getClassType" );
        KDTreeIntersectProxyAttachmentBase_exposer.staticmethod( "getClassTypeId" );
    }

}
