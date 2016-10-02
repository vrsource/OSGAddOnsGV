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
#include "OSGWindow_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "ProjectionCameraDecoratorBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

boost::python::list ProjectionCameraDecoratorBase_getMFSurface(OSG::ProjectionCameraDecoratorBase *self)
{
   boost::python::list result;
   OSG::MFPnt3f const * mf_data = self->getMFSurface();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

void register_ProjectionCameraDecoratorBase_class(){

    { //::OSG::ProjectionCameraDecoratorBase
        typedef bp::class_< OSG::ProjectionCameraDecoratorBase, bp::bases< ::OSG::StereoCameraDecorator >, boost::noncopyable > ProjectionCameraDecoratorBase_exposer_t;
        ProjectionCameraDecoratorBase_exposer_t ProjectionCameraDecoratorBase_exposer = ProjectionCameraDecoratorBase_exposer_t( "ProjectionCameraDecoratorBase", bp::no_init );
        bp::scope ProjectionCameraDecoratorBase_scope( ProjectionCameraDecoratorBase_exposer );
        bp::scope().attr("UserFieldId") = (int)OSG::ProjectionCameraDecoratorBase::UserFieldId;
        bp::scope().attr("SurfaceFieldId") = (int)OSG::ProjectionCameraDecoratorBase::SurfaceFieldId;
        bp::scope().attr("LeftFieldId") = (int)OSG::ProjectionCameraDecoratorBase::LeftFieldId;
        bp::scope().attr("BottomFieldId") = (int)OSG::ProjectionCameraDecoratorBase::BottomFieldId;
        bp::scope().attr("NormalFieldId") = (int)OSG::ProjectionCameraDecoratorBase::NormalFieldId;
        bp::scope().attr("WidthFieldId") = (int)OSG::ProjectionCameraDecoratorBase::WidthFieldId;
        bp::scope().attr("HeightFieldId") = (int)OSG::ProjectionCameraDecoratorBase::HeightFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::ProjectionCameraDecoratorBase::NextFieldId;
        { //::OSG::ProjectionCameraDecoratorBase::copyFromBin
        
            typedef void ( ::OSG::ProjectionCameraDecoratorBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ProjectionCameraDecoratorBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::ProjectionCameraDecoratorBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ProjectionCameraDecoratorBase::copyToBin
        
            typedef void ( ::OSG::ProjectionCameraDecoratorBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ProjectionCameraDecoratorBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::ProjectionCameraDecoratorBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ProjectionCameraDecoratorBase::create
        
            typedef ::OSG::ProjectionCameraDecoratorTransitPtr ( *create_function_type )(  );
            
            ProjectionCameraDecoratorBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::ProjectionCameraDecoratorBase::create ) );
        
        }
        { //::OSG::ProjectionCameraDecoratorBase::createDependent
        
            typedef ::OSG::ProjectionCameraDecoratorTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            ProjectionCameraDecoratorBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::ProjectionCameraDecoratorBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::ProjectionCameraDecoratorBase::createLocal
        
            typedef ::OSG::ProjectionCameraDecoratorTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            ProjectionCameraDecoratorBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::ProjectionCameraDecoratorBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::ProjectionCameraDecoratorBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::ProjectionCameraDecoratorBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            ProjectionCameraDecoratorBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::ProjectionCameraDecoratorBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::ProjectionCameraDecoratorBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            ProjectionCameraDecoratorBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::ProjectionCameraDecoratorBase::getClassGroupId ) );
        
        }
        { //::OSG::ProjectionCameraDecoratorBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            ProjectionCameraDecoratorBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::ProjectionCameraDecoratorBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::ProjectionCameraDecoratorBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            ProjectionCameraDecoratorBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::ProjectionCameraDecoratorBase::getClassTypeId ) );
        
        }
        { //::OSG::ProjectionCameraDecoratorBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::ProjectionCameraDecoratorBase::*getContainerSize_function_type )(  ) const;
            
            ProjectionCameraDecoratorBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::ProjectionCameraDecoratorBase::getContainerSize ) );
        
        }
        { //::OSG::ProjectionCameraDecoratorBase::getHeight
        
            typedef ::OSG::Real32 ( ::OSG::ProjectionCameraDecoratorBase::*getHeight_function_type )(  ) const;
            
            ProjectionCameraDecoratorBase_exposer.def( 
                "getHeight"
                , getHeight_function_type( &::OSG::ProjectionCameraDecoratorBase::getHeight ) );
        
        }
        { //::OSG::ProjectionCameraDecoratorBase::getSFHeight
        
            typedef ::OSG::SFReal32 const * ( ::OSG::ProjectionCameraDecoratorBase::*getSFHeight_function_type )(  ) const;
            
            ProjectionCameraDecoratorBase_exposer.def( 
                "getSFHeight"
                , getSFHeight_function_type( &::OSG::ProjectionCameraDecoratorBase::getSFHeight )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ProjectionCameraDecoratorBase::getSFUser
        
            typedef ::OSG::SFUnrecNodePtr const * ( ::OSG::ProjectionCameraDecoratorBase::*getSFUser_function_type )(  ) const;
            
            ProjectionCameraDecoratorBase_exposer.def( 
                "getSFUser"
                , getSFUser_function_type( &::OSG::ProjectionCameraDecoratorBase::getSFUser )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ProjectionCameraDecoratorBase::getSFWidth
        
            typedef ::OSG::SFReal32 const * ( ::OSG::ProjectionCameraDecoratorBase::*getSFWidth_function_type )(  ) const;
            
            ProjectionCameraDecoratorBase_exposer.def( 
                "getSFWidth"
                , getSFWidth_function_type( &::OSG::ProjectionCameraDecoratorBase::getSFWidth )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ProjectionCameraDecoratorBase::getSurface
        
            typedef ::OSG::Pnt3f const & ( ::OSG::ProjectionCameraDecoratorBase::*getSurface_function_type )( ::OSG::UInt32 const ) const;
            
            ProjectionCameraDecoratorBase_exposer.def( 
                "getSurface"
                , getSurface_function_type( &::OSG::ProjectionCameraDecoratorBase::getSurface )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::ProjectionCameraDecoratorBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::ProjectionCameraDecoratorBase::*getType_function_type )(  ) ;
            
            ProjectionCameraDecoratorBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ProjectionCameraDecoratorBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ProjectionCameraDecoratorBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::ProjectionCameraDecoratorBase::*getType_function_type )(  ) const;
            
            ProjectionCameraDecoratorBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ProjectionCameraDecoratorBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ProjectionCameraDecoratorBase::getUser
        
            typedef ::OSG::Node * ( ::OSG::ProjectionCameraDecoratorBase::*getUser_function_type )(  ) const;
            
            ProjectionCameraDecoratorBase_exposer.def( 
                "getUser"
                , getUser_function_type( &::OSG::ProjectionCameraDecoratorBase::getUser )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ProjectionCameraDecoratorBase::getWidth
        
            typedef ::OSG::Real32 ( ::OSG::ProjectionCameraDecoratorBase::*getWidth_function_type )(  ) const;
            
            ProjectionCameraDecoratorBase_exposer.def( 
                "getWidth"
                , getWidth_function_type( &::OSG::ProjectionCameraDecoratorBase::getWidth ) );
        
        }
        { //::OSG::ProjectionCameraDecoratorBase::setHeight
        
            typedef void ( ::OSG::ProjectionCameraDecoratorBase::*setHeight_function_type )( ::OSG::Real32 const ) ;
            
            ProjectionCameraDecoratorBase_exposer.def( 
                "setHeight"
                , setHeight_function_type( &::OSG::ProjectionCameraDecoratorBase::setHeight )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ProjectionCameraDecoratorBase::setUser
        
            typedef void ( ::OSG::ProjectionCameraDecoratorBase::*setUser_function_type )( ::OSG::Node * const ) ;
            
            ProjectionCameraDecoratorBase_exposer.def( 
                "setUser"
                , setUser_function_type( &::OSG::ProjectionCameraDecoratorBase::setUser )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ProjectionCameraDecoratorBase::setWidth
        
            typedef void ( ::OSG::ProjectionCameraDecoratorBase::*setWidth_function_type )( ::OSG::Real32 const ) ;
            
            ProjectionCameraDecoratorBase_exposer.def( 
                "setWidth"
                , setWidth_function_type( &::OSG::ProjectionCameraDecoratorBase::setWidth )
                , ( bp::arg("value") ) );
        
        }
        ProjectionCameraDecoratorBase_exposer.staticmethod( "create" );
        ProjectionCameraDecoratorBase_exposer.staticmethod( "createDependent" );
        ProjectionCameraDecoratorBase_exposer.staticmethod( "createLocal" );
        ProjectionCameraDecoratorBase_exposer.staticmethod( "getClassGroupId" );
        ProjectionCameraDecoratorBase_exposer.staticmethod( "getClassType" );
        ProjectionCameraDecoratorBase_exposer.staticmethod( "getClassTypeId" );
        ProjectionCameraDecoratorBase_exposer.def("getMFSurface",ProjectionCameraDecoratorBase_getMFSurface);
    }

}
