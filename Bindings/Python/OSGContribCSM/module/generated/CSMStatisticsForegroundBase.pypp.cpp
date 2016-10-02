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
#include "OSGContribCSM_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "CSMStatisticsForegroundBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct CSMStatisticsForegroundBase_wrapper : OSG::CSMStatisticsForegroundBase, bp::wrapper< OSG::CSMStatisticsForegroundBase > {



};

boost::python::list CSMStatisticsForegroundBase_getMFElements(OSG::CSMStatisticsForegroundBase *self)
{
   boost::python::list result;
   OSG::MFString const * mf_data = self->getMFElements();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

void register_CSMStatisticsForegroundBase_class(){

    { //::OSG::CSMStatisticsForegroundBase
        typedef bp::class_< CSMStatisticsForegroundBase_wrapper, bp::bases< ::OSG::Foreground >, boost::noncopyable > CSMStatisticsForegroundBase_exposer_t;
        CSMStatisticsForegroundBase_exposer_t CSMStatisticsForegroundBase_exposer = CSMStatisticsForegroundBase_exposer_t( "CSMStatisticsForegroundBase", bp::no_init );
        bp::scope CSMStatisticsForegroundBase_scope( CSMStatisticsForegroundBase_exposer );
        bp::scope().attr("SizeFieldId") = (int)OSG::CSMStatisticsForegroundBase::SizeFieldId;
        bp::scope().attr("ColorFieldId") = (int)OSG::CSMStatisticsForegroundBase::ColorFieldId;
        bp::scope().attr("BgColorFieldId") = (int)OSG::CSMStatisticsForegroundBase::BgColorFieldId;
        bp::scope().attr("ElementsFieldId") = (int)OSG::CSMStatisticsForegroundBase::ElementsFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::CSMStatisticsForegroundBase::NextFieldId;
        { //::OSG::CSMStatisticsForegroundBase::copyFromBin
        
            typedef void ( ::OSG::CSMStatisticsForegroundBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            CSMStatisticsForegroundBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::CSMStatisticsForegroundBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::CSMStatisticsForegroundBase::copyToBin
        
            typedef void ( ::OSG::CSMStatisticsForegroundBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            CSMStatisticsForegroundBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::CSMStatisticsForegroundBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::CSMStatisticsForegroundBase::create
        
            typedef ::OSG::CSMStatisticsForegroundTransitPtr ( *create_function_type )(  );
            
            CSMStatisticsForegroundBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::CSMStatisticsForegroundBase::create ) );
        
        }
        { //::OSG::CSMStatisticsForegroundBase::createDependent
        
            typedef ::OSG::CSMStatisticsForegroundTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            CSMStatisticsForegroundBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::CSMStatisticsForegroundBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::CSMStatisticsForegroundBase::createLocal
        
            typedef ::OSG::CSMStatisticsForegroundTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            CSMStatisticsForegroundBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::CSMStatisticsForegroundBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::CSMStatisticsForegroundBase::getBgColor
        
            typedef ::OSG::Color4f const & ( ::OSG::CSMStatisticsForegroundBase::*getBgColor_function_type )(  ) const;
            
            CSMStatisticsForegroundBase_exposer.def( 
                "getBgColor"
                , getBgColor_function_type( &::OSG::CSMStatisticsForegroundBase::getBgColor )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::CSMStatisticsForegroundBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::CSMStatisticsForegroundBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            CSMStatisticsForegroundBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::CSMStatisticsForegroundBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::CSMStatisticsForegroundBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            CSMStatisticsForegroundBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::CSMStatisticsForegroundBase::getClassGroupId ) );
        
        }
        { //::OSG::CSMStatisticsForegroundBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            CSMStatisticsForegroundBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::CSMStatisticsForegroundBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::CSMStatisticsForegroundBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            CSMStatisticsForegroundBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::CSMStatisticsForegroundBase::getClassTypeId ) );
        
        }
        { //::OSG::CSMStatisticsForegroundBase::getColor
        
            typedef ::OSG::Color4f const & ( ::OSG::CSMStatisticsForegroundBase::*getColor_function_type )(  ) const;
            
            CSMStatisticsForegroundBase_exposer.def( 
                "getColor"
                , getColor_function_type( &::OSG::CSMStatisticsForegroundBase::getColor )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::CSMStatisticsForegroundBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::CSMStatisticsForegroundBase::*getContainerSize_function_type )(  ) const;
            
            CSMStatisticsForegroundBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::CSMStatisticsForegroundBase::getContainerSize ) );
        
        }
        { //::OSG::CSMStatisticsForegroundBase::getElements
        
            typedef ::std::string const & ( ::OSG::CSMStatisticsForegroundBase::*getElements_function_type )( ::OSG::UInt32 const ) const;
            
            CSMStatisticsForegroundBase_exposer.def( 
                "getElements"
                , getElements_function_type( &::OSG::CSMStatisticsForegroundBase::getElements )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::CSMStatisticsForegroundBase::getSFBgColor
        
            typedef ::OSG::SFColor4f const * ( ::OSG::CSMStatisticsForegroundBase::*getSFBgColor_function_type )(  ) const;
            
            CSMStatisticsForegroundBase_exposer.def( 
                "getSFBgColor"
                , getSFBgColor_function_type( &::OSG::CSMStatisticsForegroundBase::getSFBgColor )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMStatisticsForegroundBase::getSFColor
        
            typedef ::OSG::SFColor4f const * ( ::OSG::CSMStatisticsForegroundBase::*getSFColor_function_type )(  ) const;
            
            CSMStatisticsForegroundBase_exposer.def( 
                "getSFColor"
                , getSFColor_function_type( &::OSG::CSMStatisticsForegroundBase::getSFColor )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMStatisticsForegroundBase::getSFSize
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::CSMStatisticsForegroundBase::*getSFSize_function_type )(  ) const;
            
            CSMStatisticsForegroundBase_exposer.def( 
                "getSFSize"
                , getSFSize_function_type( &::OSG::CSMStatisticsForegroundBase::getSFSize )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMStatisticsForegroundBase::getSize
        
            typedef ::OSG::UInt32 ( ::OSG::CSMStatisticsForegroundBase::*getSize_function_type )(  ) const;
            
            CSMStatisticsForegroundBase_exposer.def( 
                "getSize"
                , getSize_function_type( &::OSG::CSMStatisticsForegroundBase::getSize ) );
        
        }
        { //::OSG::CSMStatisticsForegroundBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::CSMStatisticsForegroundBase::*getType_function_type )(  ) ;
            
            CSMStatisticsForegroundBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::CSMStatisticsForegroundBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMStatisticsForegroundBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::CSMStatisticsForegroundBase::*getType_function_type )(  ) const;
            
            CSMStatisticsForegroundBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::CSMStatisticsForegroundBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMStatisticsForegroundBase::setBgColor
        
            typedef void ( ::OSG::CSMStatisticsForegroundBase::*setBgColor_function_type )( ::OSG::Color4f const & ) ;
            
            CSMStatisticsForegroundBase_exposer.def( 
                "setBgColor"
                , setBgColor_function_type( &::OSG::CSMStatisticsForegroundBase::setBgColor )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::CSMStatisticsForegroundBase::setColor
        
            typedef void ( ::OSG::CSMStatisticsForegroundBase::*setColor_function_type )( ::OSG::Color4f const & ) ;
            
            CSMStatisticsForegroundBase_exposer.def( 
                "setColor"
                , setColor_function_type( &::OSG::CSMStatisticsForegroundBase::setColor )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::CSMStatisticsForegroundBase::setSize
        
            typedef void ( ::OSG::CSMStatisticsForegroundBase::*setSize_function_type )( ::OSG::UInt32 const ) ;
            
            CSMStatisticsForegroundBase_exposer.def( 
                "setSize"
                , setSize_function_type( &::OSG::CSMStatisticsForegroundBase::setSize )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::Foreground::draw
        
            typedef void ( ::OSG::Foreground::*draw_function_type )( ::OSG::DrawEnv * ) ;
            
            CSMStatisticsForegroundBase_exposer.def( 
                "draw"
                , draw_function_type( &::OSG::Foreground::draw )
                , ( bp::arg("pEnv") ) );
        
        }
        CSMStatisticsForegroundBase_exposer.staticmethod( "create" );
        CSMStatisticsForegroundBase_exposer.staticmethod( "createDependent" );
        CSMStatisticsForegroundBase_exposer.staticmethod( "createLocal" );
        CSMStatisticsForegroundBase_exposer.staticmethod( "getClassGroupId" );
        CSMStatisticsForegroundBase_exposer.staticmethod( "getClassType" );
        CSMStatisticsForegroundBase_exposer.staticmethod( "getClassTypeId" );
        CSMStatisticsForegroundBase_exposer.def("getMFElements",CSMStatisticsForegroundBase_getMFElements);
    }

}
