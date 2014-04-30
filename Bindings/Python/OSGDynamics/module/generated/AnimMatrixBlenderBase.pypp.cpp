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
#include "OSGDynamics_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "AnimMatrixBlenderBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct AnimMatrixBlenderBase_wrapper : OSG::AnimMatrixBlenderBase, bp::wrapper< OSG::AnimMatrixBlenderBase > {

    virtual void frame( ::OSG::Time oTime, ::OSG::UInt32 uiFrame ){
        bp::override func_frame = this->get_override( "frame" );
        func_frame( oTime, uiFrame );
    }

};

boost::python::list AnimMatrixBlenderBase_getMFChannels(OSG::AnimMatrixBlenderBase *self)
{
   boost::python::list result;
   OSG::MFUnrecAnimMatrixChannelPtr const * mf_data = self->getMFChannels();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append(OSG::AnimMatrixChannel::ObjRecPtr((*mf_data)[i]));
   }
   return result;
}

void register_AnimMatrixBlenderBase_class(){

    { //::OSG::AnimMatrixBlenderBase
        typedef bp::class_< AnimMatrixBlenderBase_wrapper, bp::bases< OSG::AnimBlender >, boost::noncopyable > AnimMatrixBlenderBase_exposer_t;
        AnimMatrixBlenderBase_exposer_t AnimMatrixBlenderBase_exposer = AnimMatrixBlenderBase_exposer_t( "AnimMatrixBlenderBase", bp::no_init );
        bp::scope AnimMatrixBlenderBase_scope( AnimMatrixBlenderBase_exposer );
        bp::scope().attr("ChannelsFieldId") = (int)OSG::AnimMatrixBlenderBase::ChannelsFieldId;
        bp::scope().attr("OutValueFieldId") = (int)OSG::AnimMatrixBlenderBase::OutValueFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::AnimMatrixBlenderBase::NextFieldId;
        { //::OSG::AnimMatrixBlenderBase::assignChannels
        
            typedef void ( ::OSG::AnimMatrixBlenderBase::*assignChannels_function_type )( ::OSG::MFUnrecAnimMatrixChannelPtr const & ) ;
            
            AnimMatrixBlenderBase_exposer.def( 
                "assignChannels"
                , assignChannels_function_type( &::OSG::AnimMatrixBlenderBase::assignChannels )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::AnimMatrixBlenderBase::clearChannels
        
            typedef void ( ::OSG::AnimMatrixBlenderBase::*clearChannels_function_type )(  ) ;
            
            AnimMatrixBlenderBase_exposer.def( 
                "clearChannels"
                , clearChannels_function_type( &::OSG::AnimMatrixBlenderBase::clearChannels ) );
        
        }
        { //::OSG::AnimMatrixBlenderBase::copyFromBin
        
            typedef void ( ::OSG::AnimMatrixBlenderBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            AnimMatrixBlenderBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::AnimMatrixBlenderBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::AnimMatrixBlenderBase::copyToBin
        
            typedef void ( ::OSG::AnimMatrixBlenderBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            AnimMatrixBlenderBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::AnimMatrixBlenderBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::AnimMatrixBlenderBase::create
        
            typedef ::OSG::AnimMatrixBlenderTransitPtr ( *create_function_type )(  );
            
            AnimMatrixBlenderBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::AnimMatrixBlenderBase::create ) );
        
        }
        { //::OSG::AnimMatrixBlenderBase::createDependent
        
            typedef ::OSG::AnimMatrixBlenderTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            AnimMatrixBlenderBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::AnimMatrixBlenderBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::AnimMatrixBlenderBase::createLocal
        
            typedef ::OSG::AnimMatrixBlenderTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            AnimMatrixBlenderBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::AnimMatrixBlenderBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::AnimMatrixBlenderBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::AnimMatrixBlenderBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            AnimMatrixBlenderBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::AnimMatrixBlenderBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::AnimMatrixBlenderBase::getChannels
        
            typedef ::OSG::AnimMatrixChannel * ( ::OSG::AnimMatrixBlenderBase::*getChannels_function_type )( ::OSG::UInt32 const ) const;
            
            AnimMatrixBlenderBase_exposer.def( 
                "getChannels"
                , getChannels_function_type( &::OSG::AnimMatrixBlenderBase::getChannels )
                , ( bp::arg("index") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::AnimMatrixBlenderBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            AnimMatrixBlenderBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::AnimMatrixBlenderBase::getClassGroupId ) );
        
        }
        { //::OSG::AnimMatrixBlenderBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            AnimMatrixBlenderBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::AnimMatrixBlenderBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::AnimMatrixBlenderBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            AnimMatrixBlenderBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::AnimMatrixBlenderBase::getClassTypeId ) );
        
        }
        { //::OSG::AnimMatrixBlenderBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::AnimMatrixBlenderBase::*getContainerSize_function_type )(  ) const;
            
            AnimMatrixBlenderBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::AnimMatrixBlenderBase::getContainerSize ) );
        
        }
        { //::OSG::AnimMatrixBlenderBase::getOutValue
        
            typedef ::OSG::Matrix const & ( ::OSG::AnimMatrixBlenderBase::*getOutValue_function_type )(  ) const;
            
            AnimMatrixBlenderBase_exposer.def( 
                "getOutValue"
                , getOutValue_function_type( &::OSG::AnimMatrixBlenderBase::getOutValue )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::AnimMatrixBlenderBase::getSFOutValue
        
            typedef ::OSG::SFMatrix const * ( ::OSG::AnimMatrixBlenderBase::*getSFOutValue_function_type )(  ) const;
            
            AnimMatrixBlenderBase_exposer.def( 
                "getSFOutValue"
                , getSFOutValue_function_type( &::OSG::AnimMatrixBlenderBase::getSFOutValue )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::AnimMatrixBlenderBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::AnimMatrixBlenderBase::*getType_function_type )(  ) ;
            
            AnimMatrixBlenderBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::AnimMatrixBlenderBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::AnimMatrixBlenderBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::AnimMatrixBlenderBase::*getType_function_type )(  ) const;
            
            AnimMatrixBlenderBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::AnimMatrixBlenderBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::AnimMatrixBlenderBase::pushToChannels
        
            typedef void ( ::OSG::AnimMatrixBlenderBase::*pushToChannels_function_type )( ::OSG::AnimMatrixChannel * const ) ;
            
            AnimMatrixBlenderBase_exposer.def( 
                "pushToChannels"
                , pushToChannels_function_type( &::OSG::AnimMatrixBlenderBase::pushToChannels )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::AnimMatrixBlenderBase::removeFromChannels
        
            typedef void ( ::OSG::AnimMatrixBlenderBase::*removeFromChannels_function_type )( ::OSG::UInt32 ) ;
            
            AnimMatrixBlenderBase_exposer.def( 
                "removeFromChannels"
                , removeFromChannels_function_type( &::OSG::AnimMatrixBlenderBase::removeFromChannels )
                , ( bp::arg("uiIndex") ) );
        
        }
        { //::OSG::AnimMatrixBlenderBase::removeObjFromChannels
        
            typedef void ( ::OSG::AnimMatrixBlenderBase::*removeObjFromChannels_function_type )( ::OSG::AnimMatrixChannel * const ) ;
            
            AnimMatrixBlenderBase_exposer.def( 
                "removeObjFromChannels"
                , removeObjFromChannels_function_type( &::OSG::AnimMatrixBlenderBase::removeObjFromChannels )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::AnimMatrixBlenderBase::setOutValue
        
            typedef void ( ::OSG::AnimMatrixBlenderBase::*setOutValue_function_type )( ::OSG::Matrix const & ) ;
            
            AnimMatrixBlenderBase_exposer.def( 
                "setOutValue"
                , setOutValue_function_type( &::OSG::AnimMatrixBlenderBase::setOutValue )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::AnimBlender::addChannel
        
            typedef void ( ::OSG::AnimBlender::*addChannel_function_type )( ::OSG::AnimChannel * ) ;
            
            AnimMatrixBlenderBase_exposer.def( 
                "addChannel"
                , addChannel_function_type( &::OSG::AnimBlender::addChannel )
                , ( bp::arg("channel") ) );
        
        }
        { //::OSG::AnimBlender::connectTo
        
            typedef void ( ::OSG::AnimBlender::*connectTo_function_type )( ::OSG::AttachmentContainer *,::std::string const & ) ;
            
            AnimMatrixBlenderBase_exposer.def( 
                "connectTo"
                , connectTo_function_type( &::OSG::AnimBlender::connectTo )
                , ( bp::arg("container"), bp::arg("fieldName") ) );
        
        }
        { //::OSG::FrameTaskInterface::frame
        
            typedef void ( ::OSG::FrameTaskInterface::*frame_function_type )( ::OSG::Time,::OSG::UInt32 ) ;
            
            AnimMatrixBlenderBase_exposer.def( 
                "frame"
                , bp::pure_virtual( frame_function_type(&::OSG::FrameTaskInterface::frame) )
                , ( bp::arg("oTime"), bp::arg("uiFrame") ) );
        
        }
        { //::OSG::AnimBlender::subChannel
        
            typedef void ( ::OSG::AnimBlender::*subChannel_function_type )( ::OSG::AnimChannel * ) ;
            
            AnimMatrixBlenderBase_exposer.def( 
                "subChannel"
                , subChannel_function_type( &::OSG::AnimBlender::subChannel )
                , ( bp::arg("channel") ) );
        
        }
        AnimMatrixBlenderBase_exposer.staticmethod( "create" );
        AnimMatrixBlenderBase_exposer.staticmethod( "createDependent" );
        AnimMatrixBlenderBase_exposer.staticmethod( "createLocal" );
        AnimMatrixBlenderBase_exposer.staticmethod( "getClassGroupId" );
        AnimMatrixBlenderBase_exposer.staticmethod( "getClassType" );
        AnimMatrixBlenderBase_exposer.staticmethod( "getClassTypeId" );
        AnimMatrixBlenderBase_exposer.def("getMFChannels",AnimMatrixBlenderBase_getMFChannels);
    }

}
