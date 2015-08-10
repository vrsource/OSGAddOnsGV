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
#include "CubeMapGenerator.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_CubeMapGenerator_class(){

    { //::OSG::CubeMapGenerator
        typedef bp::class_< OSG::CubeMapGenerator, bp::bases< OSG::CubeMapGeneratorBase >, OSG::CubeMapGenerator::ObjRecPtr, boost::noncopyable > CubeMapGenerator_exposer_t;
        CubeMapGenerator_exposer_t CubeMapGenerator_exposer = CubeMapGenerator_exposer_t( "CubeMapGenerator", bp::no_init );
        bp::scope CubeMapGenerator_scope( CubeMapGenerator_exposer );
        bp::enum_< OSG::CubeMapGenerator::OriginMode>("OriginMode")
            .value("UseStoredValue", OSG::CubeMapGenerator::UseStoredValue)
            .value("UseBeacon", OSG::CubeMapGenerator::UseBeacon)
            .value("UseCurrentVolumeCenter", OSG::CubeMapGenerator::UseCurrentVolumeCenter)
            .value("UseParentsVolumeCenter", OSG::CubeMapGenerator::UseParentsVolumeCenter)
            .export_values()
            ;
        bp::enum_< OSG::CubeMapGenerator::SetupMode>("SetupMode")
            .value("NoSetup", OSG::CubeMapGenerator::NoSetup)
            .value("SetupTexture", OSG::CubeMapGenerator::SetupTexture)
            .value("SetupTexEnv", OSG::CubeMapGenerator::SetupTexEnv)
            .value("SetupTexGen", OSG::CubeMapGenerator::SetupTexGen)
            .value("OverrideTex", OSG::CubeMapGenerator::OverrideTex)
            .value("AutoTexture", OSG::CubeMapGenerator::AutoTexture)
            .value("SetupAll", OSG::CubeMapGenerator::SetupAll)
            .export_values()
            ;
        { //::OSG::CubeMapGenerator::changed
        
            typedef void ( ::OSG::CubeMapGenerator::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            CubeMapGenerator_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::CubeMapGenerator::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::CubeMapGenerator::dump
        
            typedef void ( ::OSG::CubeMapGenerator::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            CubeMapGenerator_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::CubeMapGenerator::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::CubeMapGenerator::getHeight
        
            typedef ::OSG::UInt16 ( ::OSG::CubeMapGenerator::*getHeight_function_type )(  ) ;
            
            CubeMapGenerator_exposer.def( 
                "getHeight"
                , getHeight_function_type( &::OSG::CubeMapGenerator::getHeight ) );
        
        }
        { //::OSG::CubeMapGenerator::getWidth
        
            typedef ::OSG::UInt16 ( ::OSG::CubeMapGenerator::*getWidth_function_type )(  ) ;
            
            CubeMapGenerator_exposer.def( 
                "getWidth"
                , getWidth_function_type( &::OSG::CubeMapGenerator::getWidth ) );
        
        }
        { //::OSG::CubeMapGenerator::initData
        
            typedef ::OSG::CubeMapGeneratorStageData * ( ::OSG::CubeMapGenerator::*initData_function_type )( ::OSG::RenderAction * ) ;
            
            CubeMapGenerator_exposer.def( 
                "initData"
                , initData_function_type( &::OSG::CubeMapGenerator::initData )
                , ( bp::arg("pAction") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CubeMapGenerator::setSize
        
            typedef void ( ::OSG::CubeMapGenerator::*setSize_function_type )( ::OSG::UInt16,::OSG::UInt16 ) ;
            
            CubeMapGenerator_exposer.def( 
                "setSize"
                , setSize_function_type( &::OSG::CubeMapGenerator::setSize )
                , ( bp::arg("uiWidth"), bp::arg("uiHeight") ) );
        
        }
        pyopensg::register_transit< OSG::CubeMapGenerator >::execute();
        bp::implicitly_convertible< OSG::CubeMapGenerator::ObjRecPtr, OSG::CubeMapGenerator* >();
        bp::implicitly_convertible< OSG::CubeMapGenerator::ObjRecPtr, OSG::CubeMapGenerator::ObjCPtr >();
        bp::implicitly_convertible< OSG::CubeMapGenerator::ObjRecPtr, OSG::DynamicStateGenerator* >();
        bp::implicitly_convertible< OSG::CubeMapGenerator::ObjRecPtr, OSG::DynamicStateGenerator::ObjRecPtr >();
        bp::implicitly_convertible<OSG::CubeMapGenerator::ObjRecPtr, OSG::DynamicStateGenerator::ObjCPtr>();
    }

}
