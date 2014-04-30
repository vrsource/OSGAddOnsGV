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
#include "OSGEffectGroups_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "DisplayFilterStageData.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_DisplayFilterStageData_class(){

    { //::OSG::DisplayFilterStageData
        typedef bp::class_< OSG::DisplayFilterStageData, bp::bases< OSG::DisplayFilterStageDataBase >, OSG::DisplayFilterStageData::ObjRecPtr, boost::noncopyable > DisplayFilterStageData_exposer_t;
        DisplayFilterStageData_exposer_t DisplayFilterStageData_exposer = DisplayFilterStageData_exposer_t( "DisplayFilterStageData", bp::no_init );
        bp::scope DisplayFilterStageData_scope( DisplayFilterStageData_exposer );
        { //::OSG::DisplayFilterStageData::changed
        
            typedef void ( ::OSG::DisplayFilterStageData::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            DisplayFilterStageData_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::DisplayFilterStageData::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::DisplayFilterStageData::dump
        
            typedef void ( ::OSG::DisplayFilterStageData::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            DisplayFilterStageData_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::DisplayFilterStageData::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::DisplayFilterStageData::getCalibFilter
        
            typedef ::OSG::CalibrationPatternFilter * ( ::OSG::DisplayFilterStageData::*getCalibFilter_function_type )(  ) ;
            
            DisplayFilterStageData_exposer.def( 
                "getCalibFilter"
                , getCalibFilter_function_type( &::OSG::DisplayFilterStageData::getCalibFilter )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DisplayFilterStageData::getColFilter
        
            typedef ::OSG::ColorDisplayFilter * ( ::OSG::DisplayFilterStageData::*getColFilter_function_type )(  ) ;
            
            DisplayFilterStageData_exposer.def( 
                "getColFilter"
                , getColFilter_function_type( &::OSG::DisplayFilterStageData::getColFilter )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DisplayFilterStageData::getDistFilter
        
            typedef ::OSG::DistortionDisplayFilter * ( ::OSG::DisplayFilterStageData::*getDistFilter_function_type )(  ) ;
            
            DisplayFilterStageData_exposer.def( 
                "getDistFilter"
                , getDistFilter_function_type( &::OSG::DisplayFilterStageData::getDistFilter )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DisplayFilterStageData::getInitColTableFrom
        
            typedef ::OSG::ColorDisplayFilter * ( ::OSG::DisplayFilterStageData::*getInitColTableFrom_function_type )(  ) ;
            
            DisplayFilterStageData_exposer.def( 
                "getInitColTableFrom"
                , getInitColTableFrom_function_type( &::OSG::DisplayFilterStageData::getInitColTableFrom )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DisplayFilterStageData::setCalibFilter
        
            typedef void ( ::OSG::DisplayFilterStageData::*setCalibFilter_function_type )( ::OSG::CalibrationPatternFilter * ) ;
            
            DisplayFilterStageData_exposer.def( 
                "setCalibFilter"
                , setCalibFilter_function_type( &::OSG::DisplayFilterStageData::setCalibFilter )
                , ( bp::arg("pFilt") ) );
        
        }
        { //::OSG::DisplayFilterStageData::setColFilter
        
            typedef void ( ::OSG::DisplayFilterStageData::*setColFilter_function_type )( ::OSG::ColorDisplayFilter * ) ;
            
            DisplayFilterStageData_exposer.def( 
                "setColFilter"
                , setColFilter_function_type( &::OSG::DisplayFilterStageData::setColFilter )
                , ( bp::arg("pFilt") ) );
        
        }
        { //::OSG::DisplayFilterStageData::setDistFilter
        
            typedef void ( ::OSG::DisplayFilterStageData::*setDistFilter_function_type )( ::OSG::DistortionDisplayFilter * ) ;
            
            DisplayFilterStageData_exposer.def( 
                "setDistFilter"
                , setDistFilter_function_type( &::OSG::DisplayFilterStageData::setDistFilter )
                , ( bp::arg("pFilt") ) );
        
        }
        { //::OSG::DisplayFilterStageData::setInitColTableFrom
        
            typedef void ( ::OSG::DisplayFilterStageData::*setInitColTableFrom_function_type )( ::OSG::ColorDisplayFilter * ) ;
            
            DisplayFilterStageData_exposer.def( 
                "setInitColTableFrom"
                , setInitColTableFrom_function_type( &::OSG::DisplayFilterStageData::setInitColTableFrom )
                , ( bp::arg("pFilter") ) );
        
        }
        pyopensg::register_transit< OSG::DisplayFilterStageData >::execute();
        bp::implicitly_convertible< OSG::DisplayFilterStageData::ObjRecPtr, OSG::DisplayFilterStageData* >();
        bp::implicitly_convertible< OSG::DisplayFilterStageData::ObjRecPtr, OSG::DisplayFilterStageData::ObjCPtr >();
        bp::implicitly_convertible< OSG::DisplayFilterStageData::ObjRecPtr, OSG::StageData* >();
        bp::implicitly_convertible< OSG::DisplayFilterStageData::ObjRecPtr, OSG::StageData::ObjRecPtr >();
        bp::implicitly_convertible<OSG::DisplayFilterStageData::ObjRecPtr, OSG::StageData::ObjCPtr>();
    }

}
