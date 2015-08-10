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
#include "OSGSystem_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "BlendChunkBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_BlendChunkBase_class(){

    { //::OSG::BlendChunkBase
        typedef bp::class_< OSG::BlendChunkBase, bp::bases< OSG::StateChunk >, boost::noncopyable > BlendChunkBase_exposer_t;
        BlendChunkBase_exposer_t BlendChunkBase_exposer = BlendChunkBase_exposer_t( "BlendChunkBase", bp::no_init );
        bp::scope BlendChunkBase_scope( BlendChunkBase_exposer );
        bp::scope().attr("SrcFactorFieldId") = (int)OSG::BlendChunkBase::SrcFactorFieldId;
        bp::scope().attr("DestFactorFieldId") = (int)OSG::BlendChunkBase::DestFactorFieldId;
        bp::scope().attr("EquationFieldId") = (int)OSG::BlendChunkBase::EquationFieldId;
        bp::scope().attr("ColorFieldId") = (int)OSG::BlendChunkBase::ColorFieldId;
        bp::scope().attr("AlphaFuncFieldId") = (int)OSG::BlendChunkBase::AlphaFuncFieldId;
        bp::scope().attr("AlphaValueFieldId") = (int)OSG::BlendChunkBase::AlphaValueFieldId;
        bp::scope().attr("AlphaSrcFactorFieldId") = (int)OSG::BlendChunkBase::AlphaSrcFactorFieldId;
        bp::scope().attr("AlphaDestFactorFieldId") = (int)OSG::BlendChunkBase::AlphaDestFactorFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::BlendChunkBase::NextFieldId;
        { //::OSG::BlendChunkBase::copyFromBin
        
            typedef void ( ::OSG::BlendChunkBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            BlendChunkBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::BlendChunkBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::BlendChunkBase::copyToBin
        
            typedef void ( ::OSG::BlendChunkBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            BlendChunkBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::BlendChunkBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::BlendChunkBase::create
        
            typedef ::OSG::BlendChunkTransitPtr ( *create_function_type )(  );
            
            BlendChunkBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::BlendChunkBase::create ) );
        
        }
        { //::OSG::BlendChunkBase::createDependent
        
            typedef ::OSG::BlendChunkTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            BlendChunkBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::BlendChunkBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::BlendChunkBase::createLocal
        
            typedef ::OSG::BlendChunkTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            BlendChunkBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::BlendChunkBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::BlendChunkBase::getAlphaDestFactor
        
            typedef ::GLenum const & ( ::OSG::BlendChunkBase::*getAlphaDestFactor_function_type )(  ) const;
            
            BlendChunkBase_exposer.def( 
                "getAlphaDestFactor"
                , getAlphaDestFactor_function_type( &::OSG::BlendChunkBase::getAlphaDestFactor )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::BlendChunkBase::getAlphaFunc
        
            typedef ::GLenum const & ( ::OSG::BlendChunkBase::*getAlphaFunc_function_type )(  ) const;
            
            BlendChunkBase_exposer.def( 
                "getAlphaFunc"
                , getAlphaFunc_function_type( &::OSG::BlendChunkBase::getAlphaFunc )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::BlendChunkBase::getAlphaSrcFactor
        
            typedef ::GLenum const & ( ::OSG::BlendChunkBase::*getAlphaSrcFactor_function_type )(  ) const;
            
            BlendChunkBase_exposer.def( 
                "getAlphaSrcFactor"
                , getAlphaSrcFactor_function_type( &::OSG::BlendChunkBase::getAlphaSrcFactor )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::BlendChunkBase::getAlphaValue
        
            typedef ::OSG::Real32 ( ::OSG::BlendChunkBase::*getAlphaValue_function_type )(  ) const;
            
            BlendChunkBase_exposer.def( 
                "getAlphaValue"
                , getAlphaValue_function_type( &::OSG::BlendChunkBase::getAlphaValue ) );
        
        }
        { //::OSG::BlendChunkBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::BlendChunkBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            BlendChunkBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::BlendChunkBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::BlendChunkBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            BlendChunkBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::BlendChunkBase::getClassGroupId ) );
        
        }
        { //::OSG::BlendChunkBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            BlendChunkBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::BlendChunkBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::BlendChunkBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            BlendChunkBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::BlendChunkBase::getClassTypeId ) );
        
        }
        { //::OSG::BlendChunkBase::getColor
        
            typedef ::OSG::Color4f const & ( ::OSG::BlendChunkBase::*getColor_function_type )(  ) const;
            
            BlendChunkBase_exposer.def( 
                "getColor"
                , getColor_function_type( &::OSG::BlendChunkBase::getColor )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::BlendChunkBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::BlendChunkBase::*getContainerSize_function_type )(  ) const;
            
            BlendChunkBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::BlendChunkBase::getContainerSize ) );
        
        }
        { //::OSG::BlendChunkBase::getDestFactor
        
            typedef ::GLenum const & ( ::OSG::BlendChunkBase::*getDestFactor_function_type )(  ) const;
            
            BlendChunkBase_exposer.def( 
                "getDestFactor"
                , getDestFactor_function_type( &::OSG::BlendChunkBase::getDestFactor )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::BlendChunkBase::getEquation
        
            typedef ::GLenum const & ( ::OSG::BlendChunkBase::*getEquation_function_type )(  ) const;
            
            BlendChunkBase_exposer.def( 
                "getEquation"
                , getEquation_function_type( &::OSG::BlendChunkBase::getEquation )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::BlendChunkBase::getSFAlphaDestFactor
        
            typedef ::OSG::SFGLenum const * ( ::OSG::BlendChunkBase::*getSFAlphaDestFactor_function_type )(  ) const;
            
            BlendChunkBase_exposer.def( 
                "getSFAlphaDestFactor"
                , getSFAlphaDestFactor_function_type( &::OSG::BlendChunkBase::getSFAlphaDestFactor )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::BlendChunkBase::getSFAlphaFunc
        
            typedef ::OSG::SFGLenum const * ( ::OSG::BlendChunkBase::*getSFAlphaFunc_function_type )(  ) const;
            
            BlendChunkBase_exposer.def( 
                "getSFAlphaFunc"
                , getSFAlphaFunc_function_type( &::OSG::BlendChunkBase::getSFAlphaFunc )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::BlendChunkBase::getSFAlphaSrcFactor
        
            typedef ::OSG::SFGLenum const * ( ::OSG::BlendChunkBase::*getSFAlphaSrcFactor_function_type )(  ) const;
            
            BlendChunkBase_exposer.def( 
                "getSFAlphaSrcFactor"
                , getSFAlphaSrcFactor_function_type( &::OSG::BlendChunkBase::getSFAlphaSrcFactor )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::BlendChunkBase::getSFAlphaValue
        
            typedef ::OSG::SFReal32 const * ( ::OSG::BlendChunkBase::*getSFAlphaValue_function_type )(  ) const;
            
            BlendChunkBase_exposer.def( 
                "getSFAlphaValue"
                , getSFAlphaValue_function_type( &::OSG::BlendChunkBase::getSFAlphaValue )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::BlendChunkBase::getSFColor
        
            typedef ::OSG::SFColor4f const * ( ::OSG::BlendChunkBase::*getSFColor_function_type )(  ) const;
            
            BlendChunkBase_exposer.def( 
                "getSFColor"
                , getSFColor_function_type( &::OSG::BlendChunkBase::getSFColor )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::BlendChunkBase::getSFDestFactor
        
            typedef ::OSG::SFGLenum const * ( ::OSG::BlendChunkBase::*getSFDestFactor_function_type )(  ) const;
            
            BlendChunkBase_exposer.def( 
                "getSFDestFactor"
                , getSFDestFactor_function_type( &::OSG::BlendChunkBase::getSFDestFactor )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::BlendChunkBase::getSFEquation
        
            typedef ::OSG::SFGLenum const * ( ::OSG::BlendChunkBase::*getSFEquation_function_type )(  ) const;
            
            BlendChunkBase_exposer.def( 
                "getSFEquation"
                , getSFEquation_function_type( &::OSG::BlendChunkBase::getSFEquation )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::BlendChunkBase::getSFSrcFactor
        
            typedef ::OSG::SFGLenum const * ( ::OSG::BlendChunkBase::*getSFSrcFactor_function_type )(  ) const;
            
            BlendChunkBase_exposer.def( 
                "getSFSrcFactor"
                , getSFSrcFactor_function_type( &::OSG::BlendChunkBase::getSFSrcFactor )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::BlendChunkBase::getSrcFactor
        
            typedef ::GLenum const & ( ::OSG::BlendChunkBase::*getSrcFactor_function_type )(  ) const;
            
            BlendChunkBase_exposer.def( 
                "getSrcFactor"
                , getSrcFactor_function_type( &::OSG::BlendChunkBase::getSrcFactor )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::BlendChunkBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::BlendChunkBase::*getType_function_type )(  ) ;
            
            BlendChunkBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::BlendChunkBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::BlendChunkBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::BlendChunkBase::*getType_function_type )(  ) const;
            
            BlendChunkBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::BlendChunkBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::BlendChunkBase::setAlphaDestFactor
        
            typedef void ( ::OSG::BlendChunkBase::*setAlphaDestFactor_function_type )( ::GLenum const & ) ;
            
            BlendChunkBase_exposer.def( 
                "setAlphaDestFactor"
                , setAlphaDestFactor_function_type( &::OSG::BlendChunkBase::setAlphaDestFactor )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::BlendChunkBase::setAlphaFunc
        
            typedef void ( ::OSG::BlendChunkBase::*setAlphaFunc_function_type )( ::GLenum const & ) ;
            
            BlendChunkBase_exposer.def( 
                "setAlphaFunc"
                , setAlphaFunc_function_type( &::OSG::BlendChunkBase::setAlphaFunc )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::BlendChunkBase::setAlphaSrcFactor
        
            typedef void ( ::OSG::BlendChunkBase::*setAlphaSrcFactor_function_type )( ::GLenum const & ) ;
            
            BlendChunkBase_exposer.def( 
                "setAlphaSrcFactor"
                , setAlphaSrcFactor_function_type( &::OSG::BlendChunkBase::setAlphaSrcFactor )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::BlendChunkBase::setAlphaValue
        
            typedef void ( ::OSG::BlendChunkBase::*setAlphaValue_function_type )( ::OSG::Real32 const ) ;
            
            BlendChunkBase_exposer.def( 
                "setAlphaValue"
                , setAlphaValue_function_type( &::OSG::BlendChunkBase::setAlphaValue )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::BlendChunkBase::setColor
        
            typedef void ( ::OSG::BlendChunkBase::*setColor_function_type )( ::OSG::Color4f const & ) ;
            
            BlendChunkBase_exposer.def( 
                "setColor"
                , setColor_function_type( &::OSG::BlendChunkBase::setColor )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::BlendChunkBase::setDestFactor
        
            typedef void ( ::OSG::BlendChunkBase::*setDestFactor_function_type )( ::GLenum const & ) ;
            
            BlendChunkBase_exposer.def( 
                "setDestFactor"
                , setDestFactor_function_type( &::OSG::BlendChunkBase::setDestFactor )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::BlendChunkBase::setEquation
        
            typedef void ( ::OSG::BlendChunkBase::*setEquation_function_type )( ::GLenum const & ) ;
            
            BlendChunkBase_exposer.def( 
                "setEquation"
                , setEquation_function_type( &::OSG::BlendChunkBase::setEquation )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::BlendChunkBase::setSrcFactor
        
            typedef void ( ::OSG::BlendChunkBase::*setSrcFactor_function_type )( ::GLenum const & ) ;
            
            BlendChunkBase_exposer.def( 
                "setSrcFactor"
                , setSrcFactor_function_type( &::OSG::BlendChunkBase::setSrcFactor )
                , ( bp::arg("value") ) );
        
        }
        BlendChunkBase_exposer.staticmethod( "create" );
        BlendChunkBase_exposer.staticmethod( "createDependent" );
        BlendChunkBase_exposer.staticmethod( "createLocal" );
        BlendChunkBase_exposer.staticmethod( "getClassGroupId" );
        BlendChunkBase_exposer.staticmethod( "getClassType" );
        BlendChunkBase_exposer.staticmethod( "getClassTypeId" );
    }

}
