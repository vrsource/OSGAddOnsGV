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
 **     class Label
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGLABELBASE_H_
#define _OSGLABELBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribLabelingDef.h"

//#include "OSGBaseTypes.h"

#include "OSGGroup.h" // Parent

#include "OSGVecFields.h"               // Position type
#include "OSGSysFields.h"               // Orientation type
#include "OSGBaseFields.h"              // Color type
#include "OSGTextureObjChunkFields.h"   // TextureObject type

#include "OSGLabelFields.h"

OSG_BEGIN_NAMESPACE


class Label;

//! \brief Label Base Class.

class OSG_CONTRIBLABELING_DLLMAPPING LabelBase : public Group
{
  public:

    typedef Group Inherited;
    typedef Group ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(Label);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        PositionFieldId = Inherited::NextFieldId,
        PixelOffsetFieldId = PositionFieldId + 1,
        OrientationFieldId = PixelOffsetFieldId + 1,
        HorizontalAlignFieldId = OrientationFieldId + 1,
        VerticalAlignFieldId = HorizontalAlignFieldId + 1,
        MarginFieldId = VerticalAlignFieldId + 1,
        ColorFieldId = MarginFieldId + 1,
        BgColorFieldId = ColorFieldId + 1,
        ShadowColorFieldId = BgColorFieldId + 1,
        ShadowOffsetFieldId = ShadowColorFieldId + 1,
        BorderColorFieldId = ShadowOffsetFieldId + 1,
        BorderOffsetFieldId = BorderColorFieldId + 1,
        ImportanceFieldId = BorderOffsetFieldId + 1,
        TextureObjectFieldId = ImportanceFieldId + 1,
        NextFieldId = TextureObjectFieldId + 1
    };

    static const OSG::BitVector PositionFieldMask =
        (TypeTraits<BitVector>::One << PositionFieldId);
    static const OSG::BitVector PixelOffsetFieldMask =
        (TypeTraits<BitVector>::One << PixelOffsetFieldId);
    static const OSG::BitVector OrientationFieldMask =
        (TypeTraits<BitVector>::One << OrientationFieldId);
    static const OSG::BitVector HorizontalAlignFieldMask =
        (TypeTraits<BitVector>::One << HorizontalAlignFieldId);
    static const OSG::BitVector VerticalAlignFieldMask =
        (TypeTraits<BitVector>::One << VerticalAlignFieldId);
    static const OSG::BitVector MarginFieldMask =
        (TypeTraits<BitVector>::One << MarginFieldId);
    static const OSG::BitVector ColorFieldMask =
        (TypeTraits<BitVector>::One << ColorFieldId);
    static const OSG::BitVector BgColorFieldMask =
        (TypeTraits<BitVector>::One << BgColorFieldId);
    static const OSG::BitVector ShadowColorFieldMask =
        (TypeTraits<BitVector>::One << ShadowColorFieldId);
    static const OSG::BitVector ShadowOffsetFieldMask =
        (TypeTraits<BitVector>::One << ShadowOffsetFieldId);
    static const OSG::BitVector BorderColorFieldMask =
        (TypeTraits<BitVector>::One << BorderColorFieldId);
    static const OSG::BitVector BorderOffsetFieldMask =
        (TypeTraits<BitVector>::One << BorderOffsetFieldId);
    static const OSG::BitVector ImportanceFieldMask =
        (TypeTraits<BitVector>::One << ImportanceFieldId);
    static const OSG::BitVector TextureObjectFieldMask =
        (TypeTraits<BitVector>::One << TextureObjectFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFPnt3f           SFPositionType;
    typedef SFVec2f           SFPixelOffsetType;
    typedef SFReal32          SFOrientationType;
    typedef SFUInt8           SFHorizontalAlignType;
    typedef SFUInt8           SFVerticalAlignType;
    typedef SFVec2f           SFMarginType;
    typedef SFColor4f         SFColorType;
    typedef SFColor4f         SFBgColorType;
    typedef SFColor4f         SFShadowColorType;
    typedef SFVec2f           SFShadowOffsetType;
    typedef SFColor4f         SFBorderColorType;
    typedef SFVec2f           SFBorderOffsetType;
    typedef SFReal32          SFImportanceType;
    typedef SFUnrecTextureObjChunkPtr SFTextureObjectType;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void);
    virtual const FieldContainerType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFPnt3f             *editSFPosition       (void);
            const SFPnt3f             *getSFPosition        (void) const;

                  SFVec2f             *editSFPixelOffset    (void);
            const SFVec2f             *getSFPixelOffset     (void) const;

                  SFReal32            *editSFOrientation    (void);
            const SFReal32            *getSFOrientation     (void) const;

                  SFUInt8             *editSFHorizontalAlign(void);
            const SFUInt8             *getSFHorizontalAlign (void) const;

                  SFUInt8             *editSFVerticalAlign  (void);
            const SFUInt8             *getSFVerticalAlign   (void) const;

                  SFVec2f             *editSFMargin         (void);
            const SFVec2f             *getSFMargin          (void) const;

                  SFColor4f           *editSFColor          (void);
            const SFColor4f           *getSFColor           (void) const;

                  SFColor4f           *editSFBgColor        (void);
            const SFColor4f           *getSFBgColor         (void) const;

                  SFColor4f           *editSFShadowColor    (void);
            const SFColor4f           *getSFShadowColor     (void) const;

                  SFVec2f             *editSFShadowOffset   (void);
            const SFVec2f             *getSFShadowOffset    (void) const;

                  SFColor4f           *editSFBorderColor    (void);
            const SFColor4f           *getSFBorderColor     (void) const;

                  SFVec2f             *editSFBorderOffset   (void);
            const SFVec2f             *getSFBorderOffset    (void) const;

                  SFReal32            *editSFImportance     (void);
            const SFReal32            *getSFImportance      (void) const;


                  Pnt3f               &editPosition       (void);
            const Pnt3f               &getPosition        (void) const;

                  Vec2f               &editPixelOffset    (void);
            const Vec2f               &getPixelOffset     (void) const;

                  Real32              &editOrientation    (void);
                  Real32               getOrientation     (void) const;

                  UInt8               &editHorizontalAlign(void);
                  UInt8                getHorizontalAlign (void) const;

                  UInt8               &editVerticalAlign  (void);
                  UInt8                getVerticalAlign   (void) const;

                  Vec2f               &editMargin         (void);
            const Vec2f               &getMargin          (void) const;

                  Color4f             &editColor          (void);
            const Color4f             &getColor           (void) const;

                  Color4f             &editBgColor        (void);
            const Color4f             &getBgColor         (void) const;

                  Color4f             &editShadowColor    (void);
            const Color4f             &getShadowColor     (void) const;

                  Vec2f               &editShadowOffset   (void);
            const Vec2f               &getShadowOffset    (void) const;

                  Color4f             &editBorderColor    (void);
            const Color4f             &getBorderColor     (void) const;

                  Vec2f               &editBorderOffset   (void);
            const Vec2f               &getBorderOffset    (void) const;

                  Real32              &editImportance     (void);
                  Real32               getImportance      (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setPosition       (const Pnt3f &value);
            void setPixelOffset    (const Vec2f &value);
            void setOrientation    (const Real32 value);
            void setHorizontalAlign(const UInt8 value);
            void setVerticalAlign  (const UInt8 value);
            void setMargin         (const Vec2f &value);
            void setColor          (const Color4f &value);
            void setBgColor        (const Color4f &value);
            void setShadowColor    (const Color4f &value);
            void setShadowOffset   (const Vec2f &value);
            void setBorderColor    (const Color4f &value);
            void setBorderOffset   (const Vec2f &value);
            void setImportance     (const Real32 value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual SizeT  getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFPnt3f           _sfPosition;
    SFVec2f           _sfPixelOffset;
    SFReal32          _sfOrientation;
    SFUInt8           _sfHorizontalAlign;
    SFUInt8           _sfVerticalAlign;
    SFVec2f           _sfMargin;
    SFColor4f         _sfColor;
    SFColor4f         _sfBgColor;
    SFColor4f         _sfShadowColor;
    SFVec2f           _sfShadowOffset;
    SFColor4f         _sfBorderColor;
    SFVec2f           _sfBorderOffset;
    SFReal32          _sfImportance;
    SFUnrecTextureObjChunkPtr _sfTextureObject;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    LabelBase(void);
    LabelBase(const LabelBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~LabelBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const Label *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandlePosition        (void) const;
    EditFieldHandlePtr editHandlePosition       (void);
    GetFieldHandlePtr  getHandlePixelOffset     (void) const;
    EditFieldHandlePtr editHandlePixelOffset    (void);
    GetFieldHandlePtr  getHandleOrientation     (void) const;
    EditFieldHandlePtr editHandleOrientation    (void);
    GetFieldHandlePtr  getHandleHorizontalAlign (void) const;
    EditFieldHandlePtr editHandleHorizontalAlign(void);
    GetFieldHandlePtr  getHandleVerticalAlign   (void) const;
    EditFieldHandlePtr editHandleVerticalAlign  (void);
    GetFieldHandlePtr  getHandleMargin          (void) const;
    EditFieldHandlePtr editHandleMargin         (void);
    GetFieldHandlePtr  getHandleColor           (void) const;
    EditFieldHandlePtr editHandleColor          (void);
    GetFieldHandlePtr  getHandleBgColor         (void) const;
    EditFieldHandlePtr editHandleBgColor        (void);
    GetFieldHandlePtr  getHandleShadowColor     (void) const;
    EditFieldHandlePtr editHandleShadowColor    (void);
    GetFieldHandlePtr  getHandleShadowOffset    (void) const;
    EditFieldHandlePtr editHandleShadowOffset   (void);
    GetFieldHandlePtr  getHandleBorderColor     (void) const;
    EditFieldHandlePtr editHandleBorderColor    (void);
    GetFieldHandlePtr  getHandleBorderOffset    (void) const;
    EditFieldHandlePtr editHandleBorderOffset   (void);
    GetFieldHandlePtr  getHandleImportance      (void) const;
    EditFieldHandlePtr editHandleImportance     (void);
    GetFieldHandlePtr  getHandleTextureObject   (void) const;
    EditFieldHandlePtr editHandleTextureObject  (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

            const SFUnrecTextureObjChunkPtr *getSFTextureObject   (void) const;
                  SFUnrecTextureObjChunkPtr *editSFTextureObject  (void);


                  TextureObjChunk * getTextureObject  (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setTextureObject  (TextureObjChunk * const value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      LabelBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    /*---------------------------------------------------------------------*/

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const LabelBase &source);
};

typedef LabelBase *LabelBaseP;

OSG_END_NAMESPACE

#endif /* _OSGLABELBASE_H_ */
