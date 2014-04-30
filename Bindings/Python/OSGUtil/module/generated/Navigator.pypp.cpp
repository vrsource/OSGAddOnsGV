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
#include "OSGUtil_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "Navigator.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct Navigator_wrapper : OSG::Navigator, bp::wrapper< OSG::Navigator > {

    Navigator_wrapper(OSG::Navigator const & arg )
    : OSG::Navigator( arg )
      , bp::wrapper< OSG::Navigator >(){
        // copy constructor
        
    }

    Navigator_wrapper( )
    : OSG::Navigator( )
      , bp::wrapper< OSG::Navigator >(){
        // null constructor
    
    }

    virtual void buttonPress( ::OSG::Int16 button, ::OSG::Int16 x, ::OSG::Int16 y ) {
        if( bp::override func_buttonPress = this->get_override( "buttonPress" ) )
            func_buttonPress( button, x, y );
        else{
            this->OSG::Navigator::buttonPress( button, x, y );
        }
    }
    
    void default_buttonPress( ::OSG::Int16 button, ::OSG::Int16 x, ::OSG::Int16 y ) {
        OSG::Navigator::buttonPress( button, x, y );
    }

    virtual void buttonPress( ::OSG::Int16 button, ::OSG::Int16 x, ::OSG::Int16 y, ::OSG::Int16 width, ::OSG::Int16 height ) {
        if( bp::override func_buttonPress = this->get_override( "buttonPress" ) )
            func_buttonPress( button, x, y, width, height );
        else{
            this->OSG::Navigator::buttonPress( button, x, y, width, height );
        }
    }
    
    void default_buttonPress( ::OSG::Int16 button, ::OSG::Int16 x, ::OSG::Int16 y, ::OSG::Int16 width, ::OSG::Int16 height ) {
        OSG::Navigator::buttonPress( button, x, y, width, height );
    }

    virtual void buttonRelease( ::OSG::Int16 button, ::OSG::Int16 x, ::OSG::Int16 y ) {
        if( bp::override func_buttonRelease = this->get_override( "buttonRelease" ) )
            func_buttonRelease( button, x, y );
        else{
            this->OSG::Navigator::buttonRelease( button, x, y );
        }
    }
    
    void default_buttonRelease( ::OSG::Int16 button, ::OSG::Int16 x, ::OSG::Int16 y ) {
        OSG::Navigator::buttonRelease( button, x, y );
    }

    virtual void buttonRelease( ::OSG::Int16 button, ::OSG::Int16 x, ::OSG::Int16 y, ::OSG::Int16 width, ::OSG::Int16 height ) {
        if( bp::override func_buttonRelease = this->get_override( "buttonRelease" ) )
            func_buttonRelease( button, x, y, width, height );
        else{
            this->OSG::Navigator::buttonRelease( button, x, y, width, height );
        }
    }
    
    void default_buttonRelease( ::OSG::Int16 button, ::OSG::Int16 x, ::OSG::Int16 y, ::OSG::Int16 width, ::OSG::Int16 height ) {
        OSG::Navigator::buttonRelease( button, x, y, width, height );
    }

    virtual void idle( ::OSG::Int16 buttons, ::OSG::Int16 x, ::OSG::Int16 y ) {
        if( bp::override func_idle = this->get_override( "idle" ) )
            func_idle( buttons, x, y );
        else{
            this->OSG::Navigator::idle( buttons, x, y );
        }
    }
    
    void default_idle( ::OSG::Int16 buttons, ::OSG::Int16 x, ::OSG::Int16 y ) {
        OSG::Navigator::idle( buttons, x, y );
    }

    virtual void idle( ::OSG::Int16 buttons, ::OSG::Int16 x, ::OSG::Int16 y, ::OSG::Int16 width, ::OSG::Int16 height ) {
        if( bp::override func_idle = this->get_override( "idle" ) )
            func_idle( buttons, x, y, width, height );
        else{
            this->OSG::Navigator::idle( buttons, x, y, width, height );
        }
    }
    
    void default_idle( ::OSG::Int16 buttons, ::OSG::Int16 x, ::OSG::Int16 y, ::OSG::Int16 width, ::OSG::Int16 height ) {
        OSG::Navigator::idle( buttons, x, y, width, height );
    }

    virtual void keyPress( ::OSG::Int16 key, ::OSG::Int16 x, ::OSG::Int16 y ) {
        if( bp::override func_keyPress = this->get_override( "keyPress" ) )
            func_keyPress( key, x, y );
        else{
            this->OSG::Navigator::keyPress( key, x, y );
        }
    }
    
    void default_keyPress( ::OSG::Int16 key, ::OSG::Int16 x, ::OSG::Int16 y ) {
        OSG::Navigator::keyPress( key, x, y );
    }

    virtual void keyPress( ::OSG::Int16 key, ::OSG::Int16 x, ::OSG::Int16 y, ::OSG::Int16 width, ::OSG::Int16 height ) {
        if( bp::override func_keyPress = this->get_override( "keyPress" ) )
            func_keyPress( key, x, y, width, height );
        else{
            this->OSG::Navigator::keyPress( key, x, y, width, height );
        }
    }
    
    void default_keyPress( ::OSG::Int16 key, ::OSG::Int16 x, ::OSG::Int16 y, ::OSG::Int16 width, ::OSG::Int16 height ) {
        OSG::Navigator::keyPress( key, x, y, width, height );
    }

    virtual void moveTo( ::OSG::Int16 x, ::OSG::Int16 y ) {
        if( bp::override func_moveTo = this->get_override( "moveTo" ) )
            func_moveTo( x, y );
        else{
            this->OSG::Navigator::moveTo( x, y );
        }
    }
    
    void default_moveTo( ::OSG::Int16 x, ::OSG::Int16 y ) {
        OSG::Navigator::moveTo( x, y );
    }

    virtual void moveTo( ::OSG::Int16 x, ::OSG::Int16 y, ::OSG::Int16 width, ::OSG::Int16 height ) {
        if( bp::override func_moveTo = this->get_override( "moveTo" ) )
            func_moveTo( x, y, width, height );
        else{
            this->OSG::Navigator::moveTo( x, y, width, height );
        }
    }
    
    void default_moveTo( ::OSG::Int16 x, ::OSG::Int16 y, ::OSG::Int16 width, ::OSG::Int16 height ) {
        OSG::Navigator::moveTo( x, y, width, height );
    }

};

void register_Navigator_class(){

    { //::OSG::Navigator
        typedef bp::class_< Navigator_wrapper > Navigator_exposer_t;
        Navigator_exposer_t Navigator_exposer = Navigator_exposer_t( "Navigator", bp::init< >() );
        bp::scope Navigator_scope( Navigator_exposer );
        { //::OSG::Navigator::buttonPress
        
            typedef void ( ::OSG::Navigator::*buttonPress_function_type )( ::OSG::Int16,::OSG::Int16,::OSG::Int16 ) ;
            typedef void ( Navigator_wrapper::*default_buttonPress_function_type )( ::OSG::Int16,::OSG::Int16,::OSG::Int16 ) ;
            
            Navigator_exposer.def( 
                "buttonPress"
                , buttonPress_function_type(&::OSG::Navigator::buttonPress)
                , default_buttonPress_function_type(&Navigator_wrapper::default_buttonPress)
                , ( bp::arg("button"), bp::arg("x"), bp::arg("y") ) );
        
        }
        { //::OSG::Navigator::buttonPress
        
            typedef void ( ::OSG::Navigator::*buttonPress_function_type )( ::OSG::Int16,::OSG::Int16,::OSG::Int16,::OSG::Int16,::OSG::Int16 ) ;
            typedef void ( Navigator_wrapper::*default_buttonPress_function_type )( ::OSG::Int16,::OSG::Int16,::OSG::Int16,::OSG::Int16,::OSG::Int16 ) ;
            
            Navigator_exposer.def( 
                "buttonPress"
                , buttonPress_function_type(&::OSG::Navigator::buttonPress)
                , default_buttonPress_function_type(&Navigator_wrapper::default_buttonPress)
                , ( bp::arg("button"), bp::arg("x"), bp::arg("y"), bp::arg("width"), bp::arg("height") ) );
        
        }
        { //::OSG::Navigator::buttonRelease
        
            typedef void ( ::OSG::Navigator::*buttonRelease_function_type )( ::OSG::Int16,::OSG::Int16,::OSG::Int16 ) ;
            typedef void ( Navigator_wrapper::*default_buttonRelease_function_type )( ::OSG::Int16,::OSG::Int16,::OSG::Int16 ) ;
            
            Navigator_exposer.def( 
                "buttonRelease"
                , buttonRelease_function_type(&::OSG::Navigator::buttonRelease)
                , default_buttonRelease_function_type(&Navigator_wrapper::default_buttonRelease)
                , ( bp::arg("button"), bp::arg("x"), bp::arg("y") ) );
        
        }
        { //::OSG::Navigator::buttonRelease
        
            typedef void ( ::OSG::Navigator::*buttonRelease_function_type )( ::OSG::Int16,::OSG::Int16,::OSG::Int16,::OSG::Int16,::OSG::Int16 ) ;
            typedef void ( Navigator_wrapper::*default_buttonRelease_function_type )( ::OSG::Int16,::OSG::Int16,::OSG::Int16,::OSG::Int16,::OSG::Int16 ) ;
            
            Navigator_exposer.def( 
                "buttonRelease"
                , buttonRelease_function_type(&::OSG::Navigator::buttonRelease)
                , default_buttonRelease_function_type(&Navigator_wrapper::default_buttonRelease)
                , ( bp::arg("button"), bp::arg("x"), bp::arg("y"), bp::arg("width"), bp::arg("height") ) );
        
        }
        { //::OSG::Navigator::calcFromTo
        
            typedef bool ( ::OSG::Navigator::*calcFromTo_function_type )( ::OSG::Int16,::OSG::Int16,::OSG::Real32 &,::OSG::Real32 &,::OSG::Real32 &,::OSG::Real32 & ) ;
            
            Navigator_exposer.def( 
                "calcFromTo"
                , calcFromTo_function_type( &::OSG::Navigator::calcFromTo )
                , ( bp::arg("x"), bp::arg("y"), bp::arg("fromX"), bp::arg("fromY"), bp::arg("toX"), bp::arg("toY") ) );
        
        }
        { //::OSG::Navigator::calcFromTo
        
            typedef bool ( ::OSG::Navigator::*calcFromTo_function_type )( ::OSG::Int16,::OSG::Int16,::OSG::Real32,::OSG::Real32,::OSG::Real32 &,::OSG::Real32 &,::OSG::Real32 &,::OSG::Real32 & ) ;
            
            Navigator_exposer.def( 
                "calcFromTo"
                , calcFromTo_function_type( &::OSG::Navigator::calcFromTo )
                , ( bp::arg("x"), bp::arg("y"), bp::arg("width"), bp::arg("height"), bp::arg("fromX"), bp::arg("fromY"), bp::arg("toX"), bp::arg("toY") ) );
        
        }
        { //::OSG::Navigator::getAbsolute
        
            typedef bool ( ::OSG::Navigator::*getAbsolute_function_type )(  ) ;
            
            Navigator_exposer.def( 
                "getAbsolute"
                , getAbsolute_function_type( &::OSG::Navigator::getAbsolute ) );
        
        }
        { //::OSG::Navigator::getAt
        
            typedef ::OSG::Pnt3f const & ( ::OSG::Navigator::*getAt_function_type )(  ) ;
            
            Navigator_exposer.def( 
                "getAt"
                , getAt_function_type( &::OSG::Navigator::getAt )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::Navigator::getClickCenter
        
            typedef bool ( ::OSG::Navigator::*getClickCenter_function_type )(  ) ;
            
            Navigator_exposer.def( 
                "getClickCenter"
                , getClickCenter_function_type( &::OSG::Navigator::getClickCenter ) );
        
        }
        { //::OSG::Navigator::getClickNoIntersect
        
            typedef bool ( ::OSG::Navigator::*getClickNoIntersect_function_type )(  ) ;
            
            Navigator_exposer.def( 
                "getClickNoIntersect"
                , getClickNoIntersect_function_type( &::OSG::Navigator::getClickNoIntersect ) );
        
        }
        { //::OSG::Navigator::getDistance
        
            typedef ::OSG::Real32 ( ::OSG::Navigator::*getDistance_function_type )(  ) ;
            
            Navigator_exposer.def( 
                "getDistance"
                , getDistance_function_type( &::OSG::Navigator::getDistance ) );
        
        }
        { //::OSG::Navigator::getFlyEngine
        
            typedef ::OSG::FlyEngine & ( ::OSG::Navigator::*getFlyEngine_function_type )(  ) ;
            
            Navigator_exposer.def( 
                "getFlyEngine"
                , getFlyEngine_function_type( &::OSG::Navigator::getFlyEngine )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::Navigator::getFrom
        
            typedef ::OSG::Pnt3f const & ( ::OSG::Navigator::*getFrom_function_type )(  ) ;
            
            Navigator_exposer.def( 
                "getFrom"
                , getFrom_function_type( &::OSG::Navigator::getFrom )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::Navigator::getLastX
        
            typedef ::OSG::Int16 ( ::OSG::Navigator::*getLastX_function_type )(  ) ;
            
            Navigator_exposer.def( 
                "getLastX"
                , getLastX_function_type( &::OSG::Navigator::getLastX ) );
        
        }
        { //::OSG::Navigator::getLastY
        
            typedef ::OSG::Int16 ( ::OSG::Navigator::*getLastY_function_type )(  ) ;
            
            Navigator_exposer.def( 
                "getLastY"
                , getLastY_function_type( &::OSG::Navigator::getLastY ) );
        
        }
        { //::OSG::Navigator::getMatrix
        
            typedef ::OSG::Matrix const & ( ::OSG::Navigator::*getMatrix_function_type )(  ) ;
            
            Navigator_exposer.def( 
                "getMatrix"
                , getMatrix_function_type( &::OSG::Navigator::getMatrix )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::Navigator::getMode
        
            typedef ::OSG::NavigatorBase::Mode ( ::OSG::Navigator::*getMode_function_type )(  ) ;
            
            Navigator_exposer.def( 
                "getMode"
                , getMode_function_type( &::OSG::Navigator::getMode ) );
        
        }
        { //::OSG::Navigator::getMotionFactor
        
            typedef ::OSG::Real32 ( ::OSG::Navigator::*getMotionFactor_function_type )(  ) ;
            
            Navigator_exposer.def( 
                "getMotionFactor"
                , getMotionFactor_function_type( &::OSG::Navigator::getMotionFactor ) );
        
        }
        { //::OSG::Navigator::getMoved
        
            typedef bool ( ::OSG::Navigator::*getMoved_function_type )(  ) ;
            
            Navigator_exposer.def( 
                "getMoved"
                , getMoved_function_type( &::OSG::Navigator::getMoved ) );
        
        }
        { //::OSG::Navigator::getNavballEngine
        
            typedef ::OSG::NavballEngine & ( ::OSG::Navigator::*getNavballEngine_function_type )(  ) ;
            
            Navigator_exposer.def( 
                "getNavballEngine"
                , getNavballEngine_function_type( &::OSG::Navigator::getNavballEngine )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::Navigator::getNoneEngine
        
            typedef ::OSG::NoneEngine & ( ::OSG::Navigator::*getNoneEngine_function_type )(  ) ;
            
            Navigator_exposer.def( 
                "getNoneEngine"
                , getNoneEngine_function_type( &::OSG::Navigator::getNoneEngine )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::Navigator::getRotationAngle
        
            typedef ::OSG::Real32 ( ::OSG::Navigator::*getRotationAngle_function_type )(  ) ;
            
            Navigator_exposer.def( 
                "getRotationAngle"
                , getRotationAngle_function_type( &::OSG::Navigator::getRotationAngle ) );
        
        }
        { //::OSG::Navigator::getState
        
            typedef ::OSG::NavigatorBase::State ( ::OSG::Navigator::*getState_function_type )(  ) ;
            
            Navigator_exposer.def( 
                "getState"
                , getState_function_type( &::OSG::Navigator::getState ) );
        
        }
        { //::OSG::Navigator::getTrackballEngine
        
            typedef ::OSG::TrackballEngine & ( ::OSG::Navigator::*getTrackballEngine_function_type )(  ) ;
            
            Navigator_exposer.def( 
                "getTrackballEngine"
                , getTrackballEngine_function_type( &::OSG::Navigator::getTrackballEngine )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::Navigator::getUp
        
            typedef ::OSG::Vec3f const & ( ::OSG::Navigator::*getUp_function_type )(  ) ;
            
            Navigator_exposer.def( 
                "getUp"
                , getUp_function_type( &::OSG::Navigator::getUp )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::Navigator::getUserEngine
        
            typedef ::OSG::NavigatorEngine & ( ::OSG::Navigator::*getUserEngine_function_type )(  ) ;
            
            Navigator_exposer.def( 
                "getUserEngine"
                , getUserEngine_function_type( &::OSG::Navigator::getUserEngine )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::Navigator::getViewport
        
            typedef ::OSG::Viewport * ( ::OSG::Navigator::*getViewport_function_type )(  ) ;
            
            Navigator_exposer.def( 
                "getViewport"
                , getViewport_function_type( &::OSG::Navigator::getViewport )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::Navigator::getWalkEngine
        
            typedef ::OSG::WalkEngine & ( ::OSG::Navigator::*getWalkEngine_function_type )(  ) ;
            
            Navigator_exposer.def( 
                "getWalkEngine"
                , getWalkEngine_function_type( &::OSG::Navigator::getWalkEngine )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::Navigator::idle
        
            typedef void ( ::OSG::Navigator::*idle_function_type )( ::OSG::Int16,::OSG::Int16,::OSG::Int16 ) ;
            typedef void ( Navigator_wrapper::*default_idle_function_type )( ::OSG::Int16,::OSG::Int16,::OSG::Int16 ) ;
            
            Navigator_exposer.def( 
                "idle"
                , idle_function_type(&::OSG::Navigator::idle)
                , default_idle_function_type(&Navigator_wrapper::default_idle)
                , ( bp::arg("buttons"), bp::arg("x"), bp::arg("y") ) );
        
        }
        { //::OSG::Navigator::idle
        
            typedef void ( ::OSG::Navigator::*idle_function_type )( ::OSG::Int16,::OSG::Int16,::OSG::Int16,::OSG::Int16,::OSG::Int16 ) ;
            typedef void ( Navigator_wrapper::*default_idle_function_type )( ::OSG::Int16,::OSG::Int16,::OSG::Int16,::OSG::Int16,::OSG::Int16 ) ;
            
            Navigator_exposer.def( 
                "idle"
                , idle_function_type(&::OSG::Navigator::idle)
                , default_idle_function_type(&Navigator_wrapper::default_idle)
                , ( bp::arg("buttons"), bp::arg("x"), bp::arg("y"), bp::arg("width"), bp::arg("height") ) );
        
        }
        { //::OSG::Navigator::keyPress
        
            typedef void ( ::OSG::Navigator::*keyPress_function_type )( ::OSG::Int16,::OSG::Int16,::OSG::Int16 ) ;
            typedef void ( Navigator_wrapper::*default_keyPress_function_type )( ::OSG::Int16,::OSG::Int16,::OSG::Int16 ) ;
            
            Navigator_exposer.def( 
                "keyPress"
                , keyPress_function_type(&::OSG::Navigator::keyPress)
                , default_keyPress_function_type(&Navigator_wrapper::default_keyPress)
                , ( bp::arg("key"), bp::arg("x"), bp::arg("y") ) );
        
        }
        { //::OSG::Navigator::keyPress
        
            typedef void ( ::OSG::Navigator::*keyPress_function_type )( ::OSG::Int16,::OSG::Int16,::OSG::Int16,::OSG::Int16,::OSG::Int16 ) ;
            typedef void ( Navigator_wrapper::*default_keyPress_function_type )( ::OSG::Int16,::OSG::Int16,::OSG::Int16,::OSG::Int16,::OSG::Int16 ) ;
            
            Navigator_exposer.def( 
                "keyPress"
                , keyPress_function_type(&::OSG::Navigator::keyPress)
                , default_keyPress_function_type(&Navigator_wrapper::default_keyPress)
                , ( bp::arg("key"), bp::arg("x"), bp::arg("y"), bp::arg("width"), bp::arg("height") ) );
        
        }
        { //::OSG::Navigator::moveTo
        
            typedef void ( ::OSG::Navigator::*moveTo_function_type )( ::OSG::Int16,::OSG::Int16 ) ;
            typedef void ( Navigator_wrapper::*default_moveTo_function_type )( ::OSG::Int16,::OSG::Int16 ) ;
            
            Navigator_exposer.def( 
                "moveTo"
                , moveTo_function_type(&::OSG::Navigator::moveTo)
                , default_moveTo_function_type(&Navigator_wrapper::default_moveTo)
                , ( bp::arg("x"), bp::arg("y") ) );
        
        }
        { //::OSG::Navigator::moveTo
        
            typedef void ( ::OSG::Navigator::*moveTo_function_type )( ::OSG::Int16,::OSG::Int16,::OSG::Int16,::OSG::Int16 ) ;
            typedef void ( Navigator_wrapper::*default_moveTo_function_type )( ::OSG::Int16,::OSG::Int16,::OSG::Int16,::OSG::Int16 ) ;
            
            Navigator_exposer.def( 
                "moveTo"
                , moveTo_function_type(&::OSG::Navigator::moveTo)
                , default_moveTo_function_type(&Navigator_wrapper::default_moveTo)
                , ( bp::arg("x"), bp::arg("y"), bp::arg("width"), bp::arg("height") ) );
        
        }
        { //::OSG::Navigator::set
        
            typedef void ( ::OSG::Navigator::*set_function_type )( ::OSG::Pnt3f,::OSG::Pnt3f,::OSG::Vec3f ) ;
            
            Navigator_exposer.def( 
                "set"
                , set_function_type( &::OSG::Navigator::set )
                , ( bp::arg("new_from"), bp::arg("new_at"), bp::arg("new_up") ) );
        
        }
        { //::OSG::Navigator::set
        
            typedef void ( ::OSG::Navigator::*set_function_type )( ::OSG::Matrix const & ) ;
            
            Navigator_exposer.def( 
                "set"
                , set_function_type( &::OSG::Navigator::set )
                , ( bp::arg("new_matrix") ) );
        
        }
        { //::OSG::Navigator::setAbsolute
        
            typedef bool ( ::OSG::Navigator::*setAbsolute_function_type )( bool ) ;
            
            Navigator_exposer.def( 
                "setAbsolute"
                , setAbsolute_function_type( &::OSG::Navigator::setAbsolute )
                , ( bp::arg("state") ) );
        
        }
        { //::OSG::Navigator::setAt
        
            typedef void ( ::OSG::Navigator::*setAt_function_type )( ::OSG::Pnt3f ) ;
            
            Navigator_exposer.def( 
                "setAt"
                , setAt_function_type( &::OSG::Navigator::setAt )
                , ( bp::arg("new_at") ) );
        
        }
        { //::OSG::Navigator::setCameraTransformation
        
            typedef void ( ::OSG::Navigator::*setCameraTransformation_function_type )( ::OSG::Node * const ) ;
            
            Navigator_exposer.def( 
                "setCameraTransformation"
                , setCameraTransformation_function_type( &::OSG::Navigator::setCameraTransformation )
                , ( bp::arg("new_cartn") ) );
        
        }
        { //::OSG::Navigator::setClickCenter
        
            typedef bool ( ::OSG::Navigator::*setClickCenter_function_type )( bool ) ;
            
            Navigator_exposer.def( 
                "setClickCenter"
                , setClickCenter_function_type( &::OSG::Navigator::setClickCenter )
                , ( bp::arg("state") ) );
        
        }
        { //::OSG::Navigator::setClickNoIntersect
        
            typedef bool ( ::OSG::Navigator::*setClickNoIntersect_function_type )( bool ) ;
            
            Navigator_exposer.def( 
                "setClickNoIntersect"
                , setClickNoIntersect_function_type( &::OSG::Navigator::setClickNoIntersect )
                , ( bp::arg("state") ) );
        
        }
        { //::OSG::Navigator::setDistance
        
            typedef void ( ::OSG::Navigator::*setDistance_function_type )( ::OSG::Real32 ) ;
            
            Navigator_exposer.def( 
                "setDistance"
                , setDistance_function_type( &::OSG::Navigator::setDistance )
                , ( bp::arg("new_distance") ) );
        
        }
        { //::OSG::Navigator::setFrom
        
            typedef void ( ::OSG::Navigator::*setFrom_function_type )( ::OSG::Pnt3f ) ;
            
            Navigator_exposer.def( 
                "setFrom"
                , setFrom_function_type( &::OSG::Navigator::setFrom )
                , ( bp::arg("new_from") ) );
        
        }
        { //::OSG::Navigator::setMode
        
            typedef void ( ::OSG::Navigator::*setMode_function_type )( ::OSG::NavigatorBase::Mode,bool ) ;
            
            Navigator_exposer.def( 
                "setMode"
                , setMode_function_type( &::OSG::Navigator::setMode )
                , ( bp::arg("new_mode"), bp::arg("copyViewParams")=(bool)(false) ) );
        
        }
        { //::OSG::Navigator::setMotionFactor
        
            typedef void ( ::OSG::Navigator::*setMotionFactor_function_type )( ::OSG::Real32 ) ;
            
            Navigator_exposer.def( 
                "setMotionFactor"
                , setMotionFactor_function_type( &::OSG::Navigator::setMotionFactor )
                , ( bp::arg("new_factor") ) );
        
        }
        { //::OSG::Navigator::setRotationAngle
        
            typedef void ( ::OSG::Navigator::*setRotationAngle_function_type )( ::OSG::Real32 ) ;
            
            Navigator_exposer.def( 
                "setRotationAngle"
                , setRotationAngle_function_type( &::OSG::Navigator::setRotationAngle )
                , ( bp::arg("new_angle") ) );
        
        }
        { //::OSG::Navigator::setUp
        
            typedef void ( ::OSG::Navigator::*setUp_function_type )( ::OSG::Vec3f ) ;
            
            Navigator_exposer.def( 
                "setUp"
                , setUp_function_type( &::OSG::Navigator::setUp )
                , ( bp::arg("new_up") ) );
        
        }
        { //::OSG::Navigator::setUserEngine
        
            typedef void ( ::OSG::Navigator::*setUserEngine_function_type )( ::OSG::NavigatorEngine * ) ;
            
            Navigator_exposer.def( 
                "setUserEngine"
                , setUserEngine_function_type( &::OSG::Navigator::setUserEngine )
                , ( bp::arg("userEngine") ) );
        
        }
        { //::OSG::Navigator::setViewport
        
            typedef void ( ::OSG::Navigator::*setViewport_function_type )( ::OSG::Viewport * ) ;
            
            Navigator_exposer.def( 
                "setViewport"
                , setViewport_function_type( &::OSG::Navigator::setViewport )
                , ( bp::arg("new_viewport") ) );
        
        }
        { //::OSG::Navigator::updateCameraTransformation
        
            typedef void ( ::OSG::Navigator::*updateCameraTransformation_function_type )(  ) ;
            
            Navigator_exposer.def( 
                "updateCameraTransformation"
                , updateCameraTransformation_function_type( &::OSG::Navigator::updateCameraTransformation ) );
        
        }
    }

}
