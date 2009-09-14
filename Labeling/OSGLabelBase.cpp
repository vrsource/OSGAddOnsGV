/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class Label!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGTextureObjChunk.h> // TextureObject Class

#include "OSGLabelBase.h"
#include "OSGLabel.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::Label
    The Label class... FIXME: more documentation required
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Pnt3f           LabelBase::_sfPosition
    Location of label in local world coordinates with respect to center
    of the group's bounding box.
*/

/*! \var Vec2f           LabelBase::_sfPixelOffset
    Offset to projection point on viewport in pixel.
*/

/*! \var Real32          LabelBase::_sfOrientation
    Rotation angle of text in degree (anticlockwise). The
    default is 0.0 (i.e. no rotation).
*/

/*! \var UInt8           LabelBase::_sfHorizontalAlign
    Simple form of layout management, 1 defaults to center.
*/

/*! \var UInt8           LabelBase::_sfVerticalAlign
    Simple form of layout management, 1 defaults to center.
*/

/*! \var Vec2f           LabelBase::_sfMargin
    Margin in pixels.
*/

/*! \var Color4f         LabelBase::_sfColor
    Color of the text or blend color for icon image.
*/

/*! \var Color4f         LabelBase::_sfBgColor
    Color of the background.
*/

/*! \var Color4f         LabelBase::_sfShadowColor
    Color of the shadow.
*/

/*! \var Vec2f           LabelBase::_sfShadowOffset
    Offset of the shadow, in pixels.
*/

/*! \var Color4f         LabelBase::_sfBorderColor
    Color of the border.
*/

/*! \var Vec2f           LabelBase::_sfBorderOffset
    Offset of the border in pixels.
*/

/*! \var Real32          LabelBase::_sfImportance
    Only labels with an importance value equal/greater than the
    LabelForeground's importanceThreshold will be displayed.
    The default value for importance is 1, i.e. all labels are displayed.
    The range of the importance value is up to you. We suggest [0,1].
*/

/*! \var TextureObjChunk * LabelBase::_sfTextureObject
    Internal texture object representing the label.
*/


void LabelBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFPnt3f::Description(
        SFPnt3f::getClassType(),
        "position",
        "Location of label in local world coordinates with respect to center\n"
        "of the group's bounding box.\n",
        PositionFieldId, PositionFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Label::editHandlePosition),
        static_cast<FieldGetMethodSig >(&Label::getHandlePosition));

    oType.addInitialDesc(pDesc);

    pDesc = new SFVec2f::Description(
        SFVec2f::getClassType(),
        "pixelOffset",
        "Offset to projection point on viewport in pixel.\n",
        PixelOffsetFieldId, PixelOffsetFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Label::editHandlePixelOffset),
        static_cast<FieldGetMethodSig >(&Label::getHandlePixelOffset));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "orientation",
        "Rotation angle of text in degree (anticlockwise). The\n"
        "default is 0.0 (i.e. no rotation).\n",
        OrientationFieldId, OrientationFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Label::editHandleOrientation),
        static_cast<FieldGetMethodSig >(&Label::getHandleOrientation));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt8::Description(
        SFUInt8::getClassType(),
        "horizontalAlign",
        "Simple form of layout management, 1 defaults to center.\n",
        HorizontalAlignFieldId, HorizontalAlignFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Label::editHandleHorizontalAlign),
        static_cast<FieldGetMethodSig >(&Label::getHandleHorizontalAlign));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt8::Description(
        SFUInt8::getClassType(),
        "verticalAlign",
        "Simple form of layout management, 1 defaults to center.\n",
        VerticalAlignFieldId, VerticalAlignFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Label::editHandleVerticalAlign),
        static_cast<FieldGetMethodSig >(&Label::getHandleVerticalAlign));

    oType.addInitialDesc(pDesc);

    pDesc = new SFVec2f::Description(
        SFVec2f::getClassType(),
        "margin",
        "Margin in pixels.\n",
        MarginFieldId, MarginFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Label::editHandleMargin),
        static_cast<FieldGetMethodSig >(&Label::getHandleMargin));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "color",
        "Color of the text or blend color for icon image.\n",
        ColorFieldId, ColorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Label::editHandleColor),
        static_cast<FieldGetMethodSig >(&Label::getHandleColor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "bgColor",
        "Color of the background.\n",
        BgColorFieldId, BgColorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Label::editHandleBgColor),
        static_cast<FieldGetMethodSig >(&Label::getHandleBgColor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "shadowColor",
        "Color of the shadow.\n",
        ShadowColorFieldId, ShadowColorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Label::editHandleShadowColor),
        static_cast<FieldGetMethodSig >(&Label::getHandleShadowColor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFVec2f::Description(
        SFVec2f::getClassType(),
        "shadowOffset",
        "Offset of the shadow, in pixels.\n",
        ShadowOffsetFieldId, ShadowOffsetFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Label::editHandleShadowOffset),
        static_cast<FieldGetMethodSig >(&Label::getHandleShadowOffset));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "borderColor",
        "Color of the border.\n",
        BorderColorFieldId, BorderColorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Label::editHandleBorderColor),
        static_cast<FieldGetMethodSig >(&Label::getHandleBorderColor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFVec2f::Description(
        SFVec2f::getClassType(),
        "borderOffset",
        "Offset of the border in pixels.\n",
        BorderOffsetFieldId, BorderOffsetFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Label::editHandleBorderOffset),
        static_cast<FieldGetMethodSig >(&Label::getHandleBorderOffset));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "importance",
        "Only labels with an importance value equal/greater than the\n"
        "LabelForeground's importanceThreshold will be displayed.\n"
        "The default value for importance is 1, i.e. all labels are displayed.\n"
        "The range of the importance value is up to you. We suggest [0,1].\n",
        ImportanceFieldId, ImportanceFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Label::editHandleImportance),
        static_cast<FieldGetMethodSig >(&Label::getHandleImportance));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecTextureObjChunkPtr::Description(
        SFUnrecTextureObjChunkPtr::getClassType(),
        "textureObject",
        "Internal texture object representing the label.\n",
        TextureObjectFieldId, TextureObjectFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Label::editHandleTextureObject),
        static_cast<FieldGetMethodSig >(&Label::getHandleTextureObject));

    oType.addInitialDesc(pDesc);
}


LabelBase::TypeObject LabelBase::_type(
    LabelBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    Label::initMethod,
    Label::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&LabelBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"Label\"\n"
    "\tparent=\"Group\"\n"
    "\tlibrary=\"ContribLabeling\"\n"
    "\tstructure=\"abstract\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "        decoratable=\"false\"\n"
    "        useLocalIncludes=\"false\"\n"
    ">\n"
    "The Label class... FIXME: more documentation required\n"
    "\n"
    "\t<Field\n"
    "\t\tname=\"position\"\n"
    "\t\ttype=\"Pnt3f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "                defaultValue=\"0,0,0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tLocation of label in local world coordinates with respect to center\n"
    "\tof the group's bounding box.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"pixelOffset\"\n"
    "\t\ttype=\"Vec2f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "                defaultValue=\"0,0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tOffset to projection point on viewport in pixel.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"orientation\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tRotation angle of text in degree (anticlockwise). The\n"
    "        default is 0.0 (i.e. no rotation).\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"horizontalAlign\"\n"
    "\t\ttype=\"UInt8\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tSimple form of layout management, 1 defaults to center.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"verticalAlign\"\n"
    "\t\ttype=\"UInt8\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tSimple form of layout management, 1 defaults to center.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"margin\"\n"
    "\t\ttype=\"Vec2f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0,0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tMargin in pixels.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"color\"\n"
    "\t\ttype=\"Color4f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1,1,1,1\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tColor of the text or blend color for icon image.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"bgColor\"\n"
    "\t\ttype=\"Color4f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0,0,0,0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tColor of the background.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"shadowColor\"\n"
    "\t\ttype=\"Color4f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0,0,0,1\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tColor of the shadow.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"shadowOffset\"\n"
    "\t\ttype=\"Vec2f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1,-1\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tOffset of the shadow, in pixels.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"borderColor\"\n"
    "\t\ttype=\"Color4f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0,0,0,0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tColor of the border.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"borderOffset\"\n"
    "\t\ttype=\"Vec2f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"4,4\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tOffset of the border in pixels.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"importance\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tOnly labels with an importance value equal/greater than the\n"
    "        LabelForeground's importanceThreshold will be displayed.\n"
    "        The default value for importance is 1, i.e. all labels are displayed.\n"
    "        The range of the importance value is up to you. We suggest [0,1].\n"
    "\t</Field>\n"
    "\n"
    "\n"
    "\n"
    "  <!-- protected fields -->\n"
    "\t<Field\n"
    "\t\tname=\"textureObject\"\n"
    "\t\ttype=\"TextureObjChunk\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    "                category=\"pointer\"\n"
    "\t>\n"
    "        Internal texture object representing the label.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "The Label class... FIXME: more documentation required\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &LabelBase::getType(void)
{
    return _type;
}

const FieldContainerType &LabelBase::getType(void) const
{
    return _type;
}

UInt32 LabelBase::getContainerSize(void) const
{
    return sizeof(Label);
}

/*------------------------- decorator get ------------------------------*/


SFPnt3f *LabelBase::editSFPosition(void)
{
    editSField(PositionFieldMask);

    return &_sfPosition;
}

const SFPnt3f *LabelBase::getSFPosition(void) const
{
    return &_sfPosition;
}


SFVec2f *LabelBase::editSFPixelOffset(void)
{
    editSField(PixelOffsetFieldMask);

    return &_sfPixelOffset;
}

const SFVec2f *LabelBase::getSFPixelOffset(void) const
{
    return &_sfPixelOffset;
}


SFReal32 *LabelBase::editSFOrientation(void)
{
    editSField(OrientationFieldMask);

    return &_sfOrientation;
}

const SFReal32 *LabelBase::getSFOrientation(void) const
{
    return &_sfOrientation;
}


SFUInt8 *LabelBase::editSFHorizontalAlign(void)
{
    editSField(HorizontalAlignFieldMask);

    return &_sfHorizontalAlign;
}

const SFUInt8 *LabelBase::getSFHorizontalAlign(void) const
{
    return &_sfHorizontalAlign;
}


SFUInt8 *LabelBase::editSFVerticalAlign(void)
{
    editSField(VerticalAlignFieldMask);

    return &_sfVerticalAlign;
}

const SFUInt8 *LabelBase::getSFVerticalAlign(void) const
{
    return &_sfVerticalAlign;
}


SFVec2f *LabelBase::editSFMargin(void)
{
    editSField(MarginFieldMask);

    return &_sfMargin;
}

const SFVec2f *LabelBase::getSFMargin(void) const
{
    return &_sfMargin;
}


SFColor4f *LabelBase::editSFColor(void)
{
    editSField(ColorFieldMask);

    return &_sfColor;
}

const SFColor4f *LabelBase::getSFColor(void) const
{
    return &_sfColor;
}


SFColor4f *LabelBase::editSFBgColor(void)
{
    editSField(BgColorFieldMask);

    return &_sfBgColor;
}

const SFColor4f *LabelBase::getSFBgColor(void) const
{
    return &_sfBgColor;
}


SFColor4f *LabelBase::editSFShadowColor(void)
{
    editSField(ShadowColorFieldMask);

    return &_sfShadowColor;
}

const SFColor4f *LabelBase::getSFShadowColor(void) const
{
    return &_sfShadowColor;
}


SFVec2f *LabelBase::editSFShadowOffset(void)
{
    editSField(ShadowOffsetFieldMask);

    return &_sfShadowOffset;
}

const SFVec2f *LabelBase::getSFShadowOffset(void) const
{
    return &_sfShadowOffset;
}


SFColor4f *LabelBase::editSFBorderColor(void)
{
    editSField(BorderColorFieldMask);

    return &_sfBorderColor;
}

const SFColor4f *LabelBase::getSFBorderColor(void) const
{
    return &_sfBorderColor;
}


SFVec2f *LabelBase::editSFBorderOffset(void)
{
    editSField(BorderOffsetFieldMask);

    return &_sfBorderOffset;
}

const SFVec2f *LabelBase::getSFBorderOffset(void) const
{
    return &_sfBorderOffset;
}


SFReal32 *LabelBase::editSFImportance(void)
{
    editSField(ImportanceFieldMask);

    return &_sfImportance;
}

const SFReal32 *LabelBase::getSFImportance(void) const
{
    return &_sfImportance;
}


//! Get the Label::_sfTextureObject field.
const SFUnrecTextureObjChunkPtr *LabelBase::getSFTextureObject(void) const
{
    return &_sfTextureObject;
}

SFUnrecTextureObjChunkPtr *LabelBase::editSFTextureObject  (void)
{
    editSField(TextureObjectFieldMask);

    return &_sfTextureObject;
}





/*------------------------------ access -----------------------------------*/

UInt32 LabelBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
    {
        returnValue += _sfPosition.getBinSize();
    }
    if(FieldBits::NoField != (PixelOffsetFieldMask & whichField))
    {
        returnValue += _sfPixelOffset.getBinSize();
    }
    if(FieldBits::NoField != (OrientationFieldMask & whichField))
    {
        returnValue += _sfOrientation.getBinSize();
    }
    if(FieldBits::NoField != (HorizontalAlignFieldMask & whichField))
    {
        returnValue += _sfHorizontalAlign.getBinSize();
    }
    if(FieldBits::NoField != (VerticalAlignFieldMask & whichField))
    {
        returnValue += _sfVerticalAlign.getBinSize();
    }
    if(FieldBits::NoField != (MarginFieldMask & whichField))
    {
        returnValue += _sfMargin.getBinSize();
    }
    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        returnValue += _sfColor.getBinSize();
    }
    if(FieldBits::NoField != (BgColorFieldMask & whichField))
    {
        returnValue += _sfBgColor.getBinSize();
    }
    if(FieldBits::NoField != (ShadowColorFieldMask & whichField))
    {
        returnValue += _sfShadowColor.getBinSize();
    }
    if(FieldBits::NoField != (ShadowOffsetFieldMask & whichField))
    {
        returnValue += _sfShadowOffset.getBinSize();
    }
    if(FieldBits::NoField != (BorderColorFieldMask & whichField))
    {
        returnValue += _sfBorderColor.getBinSize();
    }
    if(FieldBits::NoField != (BorderOffsetFieldMask & whichField))
    {
        returnValue += _sfBorderOffset.getBinSize();
    }
    if(FieldBits::NoField != (ImportanceFieldMask & whichField))
    {
        returnValue += _sfImportance.getBinSize();
    }
    if(FieldBits::NoField != (TextureObjectFieldMask & whichField))
    {
        returnValue += _sfTextureObject.getBinSize();
    }

    return returnValue;
}

void LabelBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
    {
        _sfPosition.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PixelOffsetFieldMask & whichField))
    {
        _sfPixelOffset.copyToBin(pMem);
    }
    if(FieldBits::NoField != (OrientationFieldMask & whichField))
    {
        _sfOrientation.copyToBin(pMem);
    }
    if(FieldBits::NoField != (HorizontalAlignFieldMask & whichField))
    {
        _sfHorizontalAlign.copyToBin(pMem);
    }
    if(FieldBits::NoField != (VerticalAlignFieldMask & whichField))
    {
        _sfVerticalAlign.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MarginFieldMask & whichField))
    {
        _sfMargin.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        _sfColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BgColorFieldMask & whichField))
    {
        _sfBgColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ShadowColorFieldMask & whichField))
    {
        _sfShadowColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ShadowOffsetFieldMask & whichField))
    {
        _sfShadowOffset.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BorderColorFieldMask & whichField))
    {
        _sfBorderColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BorderOffsetFieldMask & whichField))
    {
        _sfBorderOffset.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ImportanceFieldMask & whichField))
    {
        _sfImportance.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TextureObjectFieldMask & whichField))
    {
        _sfTextureObject.copyToBin(pMem);
    }
}

void LabelBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
    {
        _sfPosition.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PixelOffsetFieldMask & whichField))
    {
        _sfPixelOffset.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (OrientationFieldMask & whichField))
    {
        _sfOrientation.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (HorizontalAlignFieldMask & whichField))
    {
        _sfHorizontalAlign.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (VerticalAlignFieldMask & whichField))
    {
        _sfVerticalAlign.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MarginFieldMask & whichField))
    {
        _sfMargin.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        _sfColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BgColorFieldMask & whichField))
    {
        _sfBgColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ShadowColorFieldMask & whichField))
    {
        _sfShadowColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ShadowOffsetFieldMask & whichField))
    {
        _sfShadowOffset.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BorderColorFieldMask & whichField))
    {
        _sfBorderColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BorderOffsetFieldMask & whichField))
    {
        _sfBorderOffset.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ImportanceFieldMask & whichField))
    {
        _sfImportance.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TextureObjectFieldMask & whichField))
    {
        _sfTextureObject.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

LabelBase::LabelBase(void) :
    Inherited(),
    _sfPosition               (Pnt3f(0,0,0)),
    _sfPixelOffset            (Vec2f(0,0)),
    _sfOrientation            (Real32(0.0)),
    _sfHorizontalAlign        (UInt8(1)),
    _sfVerticalAlign          (UInt8(1)),
    _sfMargin                 (Vec2f(0,0)),
    _sfColor                  (Color4f(1,1,1,1)),
    _sfBgColor                (Color4f(0,0,0,0)),
    _sfShadowColor            (Color4f(0,0,0,1)),
    _sfShadowOffset           (Vec2f(1,-1)),
    _sfBorderColor            (Color4f(0,0,0,0)),
    _sfBorderOffset           (Vec2f(4,4)),
    _sfImportance             (Real32(1)),
    _sfTextureObject          (NULL)
{
}

LabelBase::LabelBase(const LabelBase &source) :
    Inherited(source),
    _sfPosition               (source._sfPosition               ),
    _sfPixelOffset            (source._sfPixelOffset            ),
    _sfOrientation            (source._sfOrientation            ),
    _sfHorizontalAlign        (source._sfHorizontalAlign        ),
    _sfVerticalAlign          (source._sfVerticalAlign          ),
    _sfMargin                 (source._sfMargin                 ),
    _sfColor                  (source._sfColor                  ),
    _sfBgColor                (source._sfBgColor                ),
    _sfShadowColor            (source._sfShadowColor            ),
    _sfShadowOffset           (source._sfShadowOffset           ),
    _sfBorderColor            (source._sfBorderColor            ),
    _sfBorderOffset           (source._sfBorderOffset           ),
    _sfImportance             (source._sfImportance             ),
    _sfTextureObject          (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

LabelBase::~LabelBase(void)
{
}

void LabelBase::onCreate(const Label *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        Label *pThis = static_cast<Label *>(this);

        pThis->setTextureObject(source->getTextureObject());
    }
}

GetFieldHandlePtr LabelBase::getHandlePosition        (void) const
{
    SFPnt3f::GetHandlePtr returnValue(
        new  SFPnt3f::GetHandle(
             &_sfPosition,
             this->getType().getFieldDesc(PositionFieldId)));

    return returnValue;
}

EditFieldHandlePtr LabelBase::editHandlePosition       (void)
{
    SFPnt3f::EditHandlePtr returnValue(
        new  SFPnt3f::EditHandle(
             &_sfPosition,
             this->getType().getFieldDesc(PositionFieldId)));


    editSField(PositionFieldMask);

    return returnValue;
}

GetFieldHandlePtr LabelBase::getHandlePixelOffset     (void) const
{
    SFVec2f::GetHandlePtr returnValue(
        new  SFVec2f::GetHandle(
             &_sfPixelOffset,
             this->getType().getFieldDesc(PixelOffsetFieldId)));

    return returnValue;
}

EditFieldHandlePtr LabelBase::editHandlePixelOffset    (void)
{
    SFVec2f::EditHandlePtr returnValue(
        new  SFVec2f::EditHandle(
             &_sfPixelOffset,
             this->getType().getFieldDesc(PixelOffsetFieldId)));


    editSField(PixelOffsetFieldMask);

    return returnValue;
}

GetFieldHandlePtr LabelBase::getHandleOrientation     (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfOrientation,
             this->getType().getFieldDesc(OrientationFieldId)));

    return returnValue;
}

EditFieldHandlePtr LabelBase::editHandleOrientation    (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfOrientation,
             this->getType().getFieldDesc(OrientationFieldId)));


    editSField(OrientationFieldMask);

    return returnValue;
}

GetFieldHandlePtr LabelBase::getHandleHorizontalAlign (void) const
{
    SFUInt8::GetHandlePtr returnValue(
        new  SFUInt8::GetHandle(
             &_sfHorizontalAlign,
             this->getType().getFieldDesc(HorizontalAlignFieldId)));

    return returnValue;
}

EditFieldHandlePtr LabelBase::editHandleHorizontalAlign(void)
{
    SFUInt8::EditHandlePtr returnValue(
        new  SFUInt8::EditHandle(
             &_sfHorizontalAlign,
             this->getType().getFieldDesc(HorizontalAlignFieldId)));


    editSField(HorizontalAlignFieldMask);

    return returnValue;
}

GetFieldHandlePtr LabelBase::getHandleVerticalAlign   (void) const
{
    SFUInt8::GetHandlePtr returnValue(
        new  SFUInt8::GetHandle(
             &_sfVerticalAlign,
             this->getType().getFieldDesc(VerticalAlignFieldId)));

    return returnValue;
}

EditFieldHandlePtr LabelBase::editHandleVerticalAlign  (void)
{
    SFUInt8::EditHandlePtr returnValue(
        new  SFUInt8::EditHandle(
             &_sfVerticalAlign,
             this->getType().getFieldDesc(VerticalAlignFieldId)));


    editSField(VerticalAlignFieldMask);

    return returnValue;
}

GetFieldHandlePtr LabelBase::getHandleMargin          (void) const
{
    SFVec2f::GetHandlePtr returnValue(
        new  SFVec2f::GetHandle(
             &_sfMargin,
             this->getType().getFieldDesc(MarginFieldId)));

    return returnValue;
}

EditFieldHandlePtr LabelBase::editHandleMargin         (void)
{
    SFVec2f::EditHandlePtr returnValue(
        new  SFVec2f::EditHandle(
             &_sfMargin,
             this->getType().getFieldDesc(MarginFieldId)));


    editSField(MarginFieldMask);

    return returnValue;
}

GetFieldHandlePtr LabelBase::getHandleColor           (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfColor,
             this->getType().getFieldDesc(ColorFieldId)));

    return returnValue;
}

EditFieldHandlePtr LabelBase::editHandleColor          (void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfColor,
             this->getType().getFieldDesc(ColorFieldId)));


    editSField(ColorFieldMask);

    return returnValue;
}

GetFieldHandlePtr LabelBase::getHandleBgColor         (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfBgColor,
             this->getType().getFieldDesc(BgColorFieldId)));

    return returnValue;
}

EditFieldHandlePtr LabelBase::editHandleBgColor        (void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfBgColor,
             this->getType().getFieldDesc(BgColorFieldId)));


    editSField(BgColorFieldMask);

    return returnValue;
}

GetFieldHandlePtr LabelBase::getHandleShadowColor     (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfShadowColor,
             this->getType().getFieldDesc(ShadowColorFieldId)));

    return returnValue;
}

EditFieldHandlePtr LabelBase::editHandleShadowColor    (void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfShadowColor,
             this->getType().getFieldDesc(ShadowColorFieldId)));


    editSField(ShadowColorFieldMask);

    return returnValue;
}

GetFieldHandlePtr LabelBase::getHandleShadowOffset    (void) const
{
    SFVec2f::GetHandlePtr returnValue(
        new  SFVec2f::GetHandle(
             &_sfShadowOffset,
             this->getType().getFieldDesc(ShadowOffsetFieldId)));

    return returnValue;
}

EditFieldHandlePtr LabelBase::editHandleShadowOffset   (void)
{
    SFVec2f::EditHandlePtr returnValue(
        new  SFVec2f::EditHandle(
             &_sfShadowOffset,
             this->getType().getFieldDesc(ShadowOffsetFieldId)));


    editSField(ShadowOffsetFieldMask);

    return returnValue;
}

GetFieldHandlePtr LabelBase::getHandleBorderColor     (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfBorderColor,
             this->getType().getFieldDesc(BorderColorFieldId)));

    return returnValue;
}

EditFieldHandlePtr LabelBase::editHandleBorderColor    (void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfBorderColor,
             this->getType().getFieldDesc(BorderColorFieldId)));


    editSField(BorderColorFieldMask);

    return returnValue;
}

GetFieldHandlePtr LabelBase::getHandleBorderOffset    (void) const
{
    SFVec2f::GetHandlePtr returnValue(
        new  SFVec2f::GetHandle(
             &_sfBorderOffset,
             this->getType().getFieldDesc(BorderOffsetFieldId)));

    return returnValue;
}

EditFieldHandlePtr LabelBase::editHandleBorderOffset   (void)
{
    SFVec2f::EditHandlePtr returnValue(
        new  SFVec2f::EditHandle(
             &_sfBorderOffset,
             this->getType().getFieldDesc(BorderOffsetFieldId)));


    editSField(BorderOffsetFieldMask);

    return returnValue;
}

GetFieldHandlePtr LabelBase::getHandleImportance      (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfImportance,
             this->getType().getFieldDesc(ImportanceFieldId)));

    return returnValue;
}

EditFieldHandlePtr LabelBase::editHandleImportance     (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfImportance,
             this->getType().getFieldDesc(ImportanceFieldId)));


    editSField(ImportanceFieldMask);

    return returnValue;
}

GetFieldHandlePtr LabelBase::getHandleTextureObject   (void) const
{
    SFUnrecTextureObjChunkPtr::GetHandlePtr returnValue(
        new  SFUnrecTextureObjChunkPtr::GetHandle(
             &_sfTextureObject,
             this->getType().getFieldDesc(TextureObjectFieldId)));

    return returnValue;
}

EditFieldHandlePtr LabelBase::editHandleTextureObject  (void)
{
    SFUnrecTextureObjChunkPtr::EditHandlePtr returnValue(
        new  SFUnrecTextureObjChunkPtr::EditHandle(
             &_sfTextureObject,
             this->getType().getFieldDesc(TextureObjectFieldId)));

    returnValue->setSetMethod(
        boost::bind(&Label::setTextureObject,
                    static_cast<Label *>(this), _1));

    editSField(TextureObjectFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void LabelBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Label *pThis = static_cast<Label *>(this);

    pThis->execSync(static_cast<Label *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void LabelBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<Label *>(this)->setTextureObject(NULL);


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<Label *>::_type("LabelPtr", "GroupPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(Label *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           Label *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           Label *,
                           0);

OSG_END_NAMESPACE