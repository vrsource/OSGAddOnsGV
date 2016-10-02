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
#include "DisplayFilterStageBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

boost::python::list DisplayFilterStageBase_getMFFilterGroups(OSG::DisplayFilterStageBase *self)
{
   boost::python::list result;
   OSG::MFUnrecDisplayFilterGroupPtr const * mf_data = self->getMFFilterGroups();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append(OSG::DisplayFilterGroup::ObjRecPtr((*mf_data)[i]));
   }
   return result;
}

boost::python::list DisplayFilterStageBase_getMFForegrounds(OSG::DisplayFilterStageBase *self)
{
   boost::python::list result;
   OSG::MFUnrecForegroundPtr const * mf_data = self->getMFForegrounds();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append(OSG::Foreground::ObjRecPtr((*mf_data)[i]));
   }
   return result;
}

void register_DisplayFilterStageBase_class(){

    { //::OSG::DisplayFilterStageBase
        typedef bp::class_< OSG::DisplayFilterStageBase, bp::bases< ::OSG::Stage >, boost::noncopyable > DisplayFilterStageBase_exposer_t;
        DisplayFilterStageBase_exposer_t DisplayFilterStageBase_exposer = DisplayFilterStageBase_exposer_t( "DisplayFilterStageBase", bp::no_init );
        bp::scope DisplayFilterStageBase_scope( DisplayFilterStageBase_exposer );
        bp::scope().attr("CalibrationPatternFilterFieldId") = (int)OSG::DisplayFilterStageBase::CalibrationPatternFilterFieldId;
        bp::scope().attr("ResolutionFilterFieldId") = (int)OSG::DisplayFilterStageBase::ResolutionFilterFieldId;
        bp::scope().attr("ColorFilterFieldId") = (int)OSG::DisplayFilterStageBase::ColorFilterFieldId;
        bp::scope().attr("DistortionFilterFieldId") = (int)OSG::DisplayFilterStageBase::DistortionFilterFieldId;
        bp::scope().attr("FilterGroupsFieldId") = (int)OSG::DisplayFilterStageBase::FilterGroupsFieldId;
        bp::scope().attr("ActiveGroupFieldId") = (int)OSG::DisplayFilterStageBase::ActiveGroupFieldId;
        bp::scope().attr("EnableMultiSampleFieldId") = (int)OSG::DisplayFilterStageBase::EnableMultiSampleFieldId;
        bp::scope().attr("ColorSamplesFieldId") = (int)OSG::DisplayFilterStageBase::ColorSamplesFieldId;
        bp::scope().attr("CoverageSamplesFieldId") = (int)OSG::DisplayFilterStageBase::CoverageSamplesFieldId;
        bp::scope().attr("FixedSampleLocationFieldId") = (int)OSG::DisplayFilterStageBase::FixedSampleLocationFieldId;
        bp::scope().attr("ForegroundsFieldId") = (int)OSG::DisplayFilterStageBase::ForegroundsFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::DisplayFilterStageBase::NextFieldId;
        { //::OSG::DisplayFilterStageBase::addForeground
        
            typedef void ( ::OSG::DisplayFilterStageBase::*addForeground_function_type )( ::OSG::Foreground * const ) ;
            
            DisplayFilterStageBase_exposer.def( 
                "addForeground"
                , addForeground_function_type( &::OSG::DisplayFilterStageBase::addForeground )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::DisplayFilterStageBase::assignFilterGroups
        
            typedef void ( ::OSG::DisplayFilterStageBase::*assignFilterGroups_function_type )( ::OSG::MFUnrecDisplayFilterGroupPtr const & ) ;
            
            DisplayFilterStageBase_exposer.def( 
                "assignFilterGroups"
                , assignFilterGroups_function_type( &::OSG::DisplayFilterStageBase::assignFilterGroups )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::DisplayFilterStageBase::assignForegrounds
        
            typedef void ( ::OSG::DisplayFilterStageBase::*assignForegrounds_function_type )( ::OSG::MFUnrecForegroundPtr const & ) ;
            
            DisplayFilterStageBase_exposer.def( 
                "assignForegrounds"
                , assignForegrounds_function_type( &::OSG::DisplayFilterStageBase::assignForegrounds )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::DisplayFilterStageBase::clearFilterGroups
        
            typedef void ( ::OSG::DisplayFilterStageBase::*clearFilterGroups_function_type )(  ) ;
            
            DisplayFilterStageBase_exposer.def( 
                "clearFilterGroups"
                , clearFilterGroups_function_type( &::OSG::DisplayFilterStageBase::clearFilterGroups ) );
        
        }
        { //::OSG::DisplayFilterStageBase::clearForegrounds
        
            typedef void ( ::OSG::DisplayFilterStageBase::*clearForegrounds_function_type )(  ) ;
            
            DisplayFilterStageBase_exposer.def( 
                "clearForegrounds"
                , clearForegrounds_function_type( &::OSG::DisplayFilterStageBase::clearForegrounds ) );
        
        }
        { //::OSG::DisplayFilterStageBase::copyFromBin
        
            typedef void ( ::OSG::DisplayFilterStageBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            DisplayFilterStageBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::DisplayFilterStageBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::DisplayFilterStageBase::copyToBin
        
            typedef void ( ::OSG::DisplayFilterStageBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            DisplayFilterStageBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::DisplayFilterStageBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::DisplayFilterStageBase::create
        
            typedef ::OSG::DisplayFilterStageTransitPtr ( *create_function_type )(  );
            
            DisplayFilterStageBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::DisplayFilterStageBase::create ) );
        
        }
        { //::OSG::DisplayFilterStageBase::createDependent
        
            typedef ::OSG::DisplayFilterStageTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            DisplayFilterStageBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::DisplayFilterStageBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::DisplayFilterStageBase::createLocal
        
            typedef ::OSG::DisplayFilterStageTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            DisplayFilterStageBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::DisplayFilterStageBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::DisplayFilterStageBase::getActiveGroup
        
            typedef ::OSG::Int32 ( ::OSG::DisplayFilterStageBase::*getActiveGroup_function_type )(  ) const;
            
            DisplayFilterStageBase_exposer.def( 
                "getActiveGroup"
                , getActiveGroup_function_type( &::OSG::DisplayFilterStageBase::getActiveGroup ) );
        
        }
        { //::OSG::DisplayFilterStageBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::DisplayFilterStageBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            DisplayFilterStageBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::DisplayFilterStageBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::DisplayFilterStageBase::getCalibrationPatternFilter
        
            typedef ::OSG::CalibrationPatternFilter * ( ::OSG::DisplayFilterStageBase::*getCalibrationPatternFilter_function_type )(  ) const;
            
            DisplayFilterStageBase_exposer.def( 
                "getCalibrationPatternFilter"
                , getCalibrationPatternFilter_function_type( &::OSG::DisplayFilterStageBase::getCalibrationPatternFilter )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DisplayFilterStageBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            DisplayFilterStageBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::DisplayFilterStageBase::getClassGroupId ) );
        
        }
        { //::OSG::DisplayFilterStageBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            DisplayFilterStageBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::DisplayFilterStageBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::DisplayFilterStageBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            DisplayFilterStageBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::DisplayFilterStageBase::getClassTypeId ) );
        
        }
        { //::OSG::DisplayFilterStageBase::getColorFilter
        
            typedef ::OSG::ColorDisplayFilter * ( ::OSG::DisplayFilterStageBase::*getColorFilter_function_type )(  ) const;
            
            DisplayFilterStageBase_exposer.def( 
                "getColorFilter"
                , getColorFilter_function_type( &::OSG::DisplayFilterStageBase::getColorFilter )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DisplayFilterStageBase::getColorSamples
        
            typedef ::OSG::UInt32 ( ::OSG::DisplayFilterStageBase::*getColorSamples_function_type )(  ) const;
            
            DisplayFilterStageBase_exposer.def( 
                "getColorSamples"
                , getColorSamples_function_type( &::OSG::DisplayFilterStageBase::getColorSamples ) );
        
        }
        { //::OSG::DisplayFilterStageBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::DisplayFilterStageBase::*getContainerSize_function_type )(  ) const;
            
            DisplayFilterStageBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::DisplayFilterStageBase::getContainerSize ) );
        
        }
        { //::OSG::DisplayFilterStageBase::getCoverageSamples
        
            typedef ::OSG::UInt32 ( ::OSG::DisplayFilterStageBase::*getCoverageSamples_function_type )(  ) const;
            
            DisplayFilterStageBase_exposer.def( 
                "getCoverageSamples"
                , getCoverageSamples_function_type( &::OSG::DisplayFilterStageBase::getCoverageSamples ) );
        
        }
        { //::OSG::DisplayFilterStageBase::getDistortionFilter
        
            typedef ::OSG::DistortionDisplayFilter * ( ::OSG::DisplayFilterStageBase::*getDistortionFilter_function_type )(  ) const;
            
            DisplayFilterStageBase_exposer.def( 
                "getDistortionFilter"
                , getDistortionFilter_function_type( &::OSG::DisplayFilterStageBase::getDistortionFilter )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DisplayFilterStageBase::getEnableMultiSample
        
            typedef bool ( ::OSG::DisplayFilterStageBase::*getEnableMultiSample_function_type )(  ) const;
            
            DisplayFilterStageBase_exposer.def( 
                "getEnableMultiSample"
                , getEnableMultiSample_function_type( &::OSG::DisplayFilterStageBase::getEnableMultiSample ) );
        
        }
        { //::OSG::DisplayFilterStageBase::getFilterGroups
        
            typedef ::OSG::DisplayFilterGroup * ( ::OSG::DisplayFilterStageBase::*getFilterGroups_function_type )( ::OSG::UInt32 const ) const;
            
            DisplayFilterStageBase_exposer.def( 
                "getFilterGroups"
                , getFilterGroups_function_type( &::OSG::DisplayFilterStageBase::getFilterGroups )
                , ( bp::arg("index") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DisplayFilterStageBase::getFixedSampleLocation
        
            typedef bool ( ::OSG::DisplayFilterStageBase::*getFixedSampleLocation_function_type )(  ) const;
            
            DisplayFilterStageBase_exposer.def( 
                "getFixedSampleLocation"
                , getFixedSampleLocation_function_type( &::OSG::DisplayFilterStageBase::getFixedSampleLocation ) );
        
        }
        { //::OSG::DisplayFilterStageBase::getForegrounds
        
            typedef ::OSG::Foreground * ( ::OSG::DisplayFilterStageBase::*getForegrounds_function_type )( ::OSG::UInt32 const ) const;
            
            DisplayFilterStageBase_exposer.def( 
                "getForegrounds"
                , getForegrounds_function_type( &::OSG::DisplayFilterStageBase::getForegrounds )
                , ( bp::arg("index") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DisplayFilterStageBase::getResolutionFilter
        
            typedef ::OSG::ResolutionDisplayFilter * ( ::OSG::DisplayFilterStageBase::*getResolutionFilter_function_type )(  ) const;
            
            DisplayFilterStageBase_exposer.def( 
                "getResolutionFilter"
                , getResolutionFilter_function_type( &::OSG::DisplayFilterStageBase::getResolutionFilter )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DisplayFilterStageBase::getSFActiveGroup
        
            typedef ::OSG::SFInt32 const * ( ::OSG::DisplayFilterStageBase::*getSFActiveGroup_function_type )(  ) const;
            
            DisplayFilterStageBase_exposer.def( 
                "getSFActiveGroup"
                , getSFActiveGroup_function_type( &::OSG::DisplayFilterStageBase::getSFActiveGroup )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DisplayFilterStageBase::getSFCalibrationPatternFilter
        
            typedef ::OSG::SFUnrecCalibrationPatternFilterPtr const * ( ::OSG::DisplayFilterStageBase::*getSFCalibrationPatternFilter_function_type )(  ) const;
            
            DisplayFilterStageBase_exposer.def( 
                "getSFCalibrationPatternFilter"
                , getSFCalibrationPatternFilter_function_type( &::OSG::DisplayFilterStageBase::getSFCalibrationPatternFilter )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DisplayFilterStageBase::getSFColorFilter
        
            typedef ::OSG::SFUnrecColorDisplayFilterPtr const * ( ::OSG::DisplayFilterStageBase::*getSFColorFilter_function_type )(  ) const;
            
            DisplayFilterStageBase_exposer.def( 
                "getSFColorFilter"
                , getSFColorFilter_function_type( &::OSG::DisplayFilterStageBase::getSFColorFilter )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DisplayFilterStageBase::getSFColorSamples
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::DisplayFilterStageBase::*getSFColorSamples_function_type )(  ) const;
            
            DisplayFilterStageBase_exposer.def( 
                "getSFColorSamples"
                , getSFColorSamples_function_type( &::OSG::DisplayFilterStageBase::getSFColorSamples )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DisplayFilterStageBase::getSFCoverageSamples
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::DisplayFilterStageBase::*getSFCoverageSamples_function_type )(  ) const;
            
            DisplayFilterStageBase_exposer.def( 
                "getSFCoverageSamples"
                , getSFCoverageSamples_function_type( &::OSG::DisplayFilterStageBase::getSFCoverageSamples )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DisplayFilterStageBase::getSFDistortionFilter
        
            typedef ::OSG::SFUnrecDistortionDisplayFilterPtr const * ( ::OSG::DisplayFilterStageBase::*getSFDistortionFilter_function_type )(  ) const;
            
            DisplayFilterStageBase_exposer.def( 
                "getSFDistortionFilter"
                , getSFDistortionFilter_function_type( &::OSG::DisplayFilterStageBase::getSFDistortionFilter )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DisplayFilterStageBase::getSFEnableMultiSample
        
            typedef ::OSG::SFBool const * ( ::OSG::DisplayFilterStageBase::*getSFEnableMultiSample_function_type )(  ) const;
            
            DisplayFilterStageBase_exposer.def( 
                "getSFEnableMultiSample"
                , getSFEnableMultiSample_function_type( &::OSG::DisplayFilterStageBase::getSFEnableMultiSample )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DisplayFilterStageBase::getSFFixedSampleLocation
        
            typedef ::OSG::SFBool const * ( ::OSG::DisplayFilterStageBase::*getSFFixedSampleLocation_function_type )(  ) const;
            
            DisplayFilterStageBase_exposer.def( 
                "getSFFixedSampleLocation"
                , getSFFixedSampleLocation_function_type( &::OSG::DisplayFilterStageBase::getSFFixedSampleLocation )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DisplayFilterStageBase::getSFResolutionFilter
        
            typedef ::OSG::SFUnrecResolutionDisplayFilterPtr const * ( ::OSG::DisplayFilterStageBase::*getSFResolutionFilter_function_type )(  ) const;
            
            DisplayFilterStageBase_exposer.def( 
                "getSFResolutionFilter"
                , getSFResolutionFilter_function_type( &::OSG::DisplayFilterStageBase::getSFResolutionFilter )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DisplayFilterStageBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::DisplayFilterStageBase::*getType_function_type )(  ) ;
            
            DisplayFilterStageBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::DisplayFilterStageBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DisplayFilterStageBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::DisplayFilterStageBase::*getType_function_type )(  ) const;
            
            DisplayFilterStageBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::DisplayFilterStageBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DisplayFilterStageBase::pushToFilterGroups
        
            typedef void ( ::OSG::DisplayFilterStageBase::*pushToFilterGroups_function_type )( ::OSG::DisplayFilterGroup * const ) ;
            
            DisplayFilterStageBase_exposer.def( 
                "pushToFilterGroups"
                , pushToFilterGroups_function_type( &::OSG::DisplayFilterStageBase::pushToFilterGroups )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::DisplayFilterStageBase::removeFromFilterGroups
        
            typedef void ( ::OSG::DisplayFilterStageBase::*removeFromFilterGroups_function_type )( ::OSG::UInt32 ) ;
            
            DisplayFilterStageBase_exposer.def( 
                "removeFromFilterGroups"
                , removeFromFilterGroups_function_type( &::OSG::DisplayFilterStageBase::removeFromFilterGroups )
                , ( bp::arg("uiIndex") ) );
        
        }
        { //::OSG::DisplayFilterStageBase::removeFromForegrounds
        
            typedef void ( ::OSG::DisplayFilterStageBase::*removeFromForegrounds_function_type )( ::OSG::UInt32 ) ;
            
            DisplayFilterStageBase_exposer.def( 
                "removeFromForegrounds"
                , removeFromForegrounds_function_type( &::OSG::DisplayFilterStageBase::removeFromForegrounds )
                , ( bp::arg("uiIndex") ) );
        
        }
        { //::OSG::DisplayFilterStageBase::removeObjFromFilterGroups
        
            typedef void ( ::OSG::DisplayFilterStageBase::*removeObjFromFilterGroups_function_type )( ::OSG::DisplayFilterGroup * const ) ;
            
            DisplayFilterStageBase_exposer.def( 
                "removeObjFromFilterGroups"
                , removeObjFromFilterGroups_function_type( &::OSG::DisplayFilterStageBase::removeObjFromFilterGroups )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::DisplayFilterStageBase::removeObjFromForegrounds
        
            typedef void ( ::OSG::DisplayFilterStageBase::*removeObjFromForegrounds_function_type )( ::OSG::Foreground * const ) ;
            
            DisplayFilterStageBase_exposer.def( 
                "removeObjFromForegrounds"
                , removeObjFromForegrounds_function_type( &::OSG::DisplayFilterStageBase::removeObjFromForegrounds )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::DisplayFilterStageBase::setActiveGroup
        
            typedef void ( ::OSG::DisplayFilterStageBase::*setActiveGroup_function_type )( ::OSG::Int32 const ) ;
            
            DisplayFilterStageBase_exposer.def( 
                "setActiveGroup"
                , setActiveGroup_function_type( &::OSG::DisplayFilterStageBase::setActiveGroup )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::DisplayFilterStageBase::setCalibrationPatternFilter
        
            typedef void ( ::OSG::DisplayFilterStageBase::*setCalibrationPatternFilter_function_type )( ::OSG::CalibrationPatternFilter * const ) ;
            
            DisplayFilterStageBase_exposer.def( 
                "setCalibrationPatternFilter"
                , setCalibrationPatternFilter_function_type( &::OSG::DisplayFilterStageBase::setCalibrationPatternFilter )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::DisplayFilterStageBase::setColorFilter
        
            typedef void ( ::OSG::DisplayFilterStageBase::*setColorFilter_function_type )( ::OSG::ColorDisplayFilter * const ) ;
            
            DisplayFilterStageBase_exposer.def( 
                "setColorFilter"
                , setColorFilter_function_type( &::OSG::DisplayFilterStageBase::setColorFilter )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::DisplayFilterStageBase::setColorSamples
        
            typedef void ( ::OSG::DisplayFilterStageBase::*setColorSamples_function_type )( ::OSG::UInt32 const ) ;
            
            DisplayFilterStageBase_exposer.def( 
                "setColorSamples"
                , setColorSamples_function_type( &::OSG::DisplayFilterStageBase::setColorSamples )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::DisplayFilterStageBase::setCoverageSamples
        
            typedef void ( ::OSG::DisplayFilterStageBase::*setCoverageSamples_function_type )( ::OSG::UInt32 const ) ;
            
            DisplayFilterStageBase_exposer.def( 
                "setCoverageSamples"
                , setCoverageSamples_function_type( &::OSG::DisplayFilterStageBase::setCoverageSamples )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::DisplayFilterStageBase::setDistortionFilter
        
            typedef void ( ::OSG::DisplayFilterStageBase::*setDistortionFilter_function_type )( ::OSG::DistortionDisplayFilter * const ) ;
            
            DisplayFilterStageBase_exposer.def( 
                "setDistortionFilter"
                , setDistortionFilter_function_type( &::OSG::DisplayFilterStageBase::setDistortionFilter )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::DisplayFilterStageBase::setEnableMultiSample
        
            typedef void ( ::OSG::DisplayFilterStageBase::*setEnableMultiSample_function_type )( bool const ) ;
            
            DisplayFilterStageBase_exposer.def( 
                "setEnableMultiSample"
                , setEnableMultiSample_function_type( &::OSG::DisplayFilterStageBase::setEnableMultiSample )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::DisplayFilterStageBase::setFixedSampleLocation
        
            typedef void ( ::OSG::DisplayFilterStageBase::*setFixedSampleLocation_function_type )( bool const ) ;
            
            DisplayFilterStageBase_exposer.def( 
                "setFixedSampleLocation"
                , setFixedSampleLocation_function_type( &::OSG::DisplayFilterStageBase::setFixedSampleLocation )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::DisplayFilterStageBase::setResolutionFilter
        
            typedef void ( ::OSG::DisplayFilterStageBase::*setResolutionFilter_function_type )( ::OSG::ResolutionDisplayFilter * const ) ;
            
            DisplayFilterStageBase_exposer.def( 
                "setResolutionFilter"
                , setResolutionFilter_function_type( &::OSG::DisplayFilterStageBase::setResolutionFilter )
                , ( bp::arg("value") ) );
        
        }
        DisplayFilterStageBase_exposer.staticmethod( "create" );
        DisplayFilterStageBase_exposer.staticmethod( "createDependent" );
        DisplayFilterStageBase_exposer.staticmethod( "createLocal" );
        DisplayFilterStageBase_exposer.staticmethod( "getClassGroupId" );
        DisplayFilterStageBase_exposer.staticmethod( "getClassType" );
        DisplayFilterStageBase_exposer.staticmethod( "getClassTypeId" );
        DisplayFilterStageBase_exposer.def("getMFFilterGroups",DisplayFilterStageBase_getMFFilterGroups);
        DisplayFilterStageBase_exposer.def("getMFForegrounds",DisplayFilterStageBase_getMFForegrounds);
    }

}
