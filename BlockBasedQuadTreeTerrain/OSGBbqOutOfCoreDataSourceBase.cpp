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
 **     class BbqOutOfCoreDataSource!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEBBQOUTOFCOREDATASOURCEINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGBbqOutOfCoreDataSourceBase.h"
#include "OSGBbqOutOfCoreDataSource.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::BbqOutOfCoreDataSource
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var std::string     BbqOutOfCoreDataSourceBase::_sfFilename
    
*/

/*! \var Real32          BbqOutOfCoreDataSourceBase::_sfHeightScale
    
*/

/*! \var Real32          BbqOutOfCoreDataSourceBase::_sfHeightOffset
    
*/

/*! \var Real32          BbqOutOfCoreDataSourceBase::_sfSampleSpacing
    
*/


void BbqOutOfCoreDataSourceBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFString::Description(
        SFString::getClassType(),
        "filename",
        "",
        FilenameFieldId, FilenameFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&BbqOutOfCoreDataSource::editHandleFilename),
        static_cast<FieldGetMethodSig >(&BbqOutOfCoreDataSource::getHandleFilename));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "heightScale",
        "",
        HeightScaleFieldId, HeightScaleFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&BbqOutOfCoreDataSource::editHandleHeightScale),
        static_cast<FieldGetMethodSig >(&BbqOutOfCoreDataSource::getHandleHeightScale));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "heightOffset",
        "",
        HeightOffsetFieldId, HeightOffsetFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&BbqOutOfCoreDataSource::editHandleHeightOffset),
        static_cast<FieldGetMethodSig >(&BbqOutOfCoreDataSource::getHandleHeightOffset));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "sampleSpacing",
        "",
        SampleSpacingFieldId, SampleSpacingFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&BbqOutOfCoreDataSource::editHandleSampleSpacing),
        static_cast<FieldGetMethodSig >(&BbqOutOfCoreDataSource::getHandleSampleSpacing));

    oType.addInitialDesc(pDesc);
}


BbqOutOfCoreDataSourceBase::TypeObject BbqOutOfCoreDataSourceBase::_type(
    BbqOutOfCoreDataSourceBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&BbqOutOfCoreDataSourceBase::createEmptyLocal),
    BbqOutOfCoreDataSource::initMethod,
    BbqOutOfCoreDataSource::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&BbqOutOfCoreDataSourceBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"BbqOutOfCoreDataSource\"\n"
    "    parent=\"BbqDataSource\"\n"
    "    pointerfieldtypes=\"none\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    library=\"Drawable\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"filename\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\n"
    "\t<Field\n"
    "\t\tname=\"heightScale\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1.f\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\n"
    "\t<Field\n"
    "\t\tname=\"heightOffset\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.f\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\n"
    "\t<Field\n"
    "\t\tname=\"sampleSpacing\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1.f\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &BbqOutOfCoreDataSourceBase::getType(void)
{
    return _type;
}

const FieldContainerType &BbqOutOfCoreDataSourceBase::getType(void) const
{
    return _type;
}

UInt32 BbqOutOfCoreDataSourceBase::getContainerSize(void) const
{
    return sizeof(BbqOutOfCoreDataSource);
}

/*------------------------- decorator get ------------------------------*/


SFString *BbqOutOfCoreDataSourceBase::editSFFilename(void)
{
    editSField(FilenameFieldMask);

    return &_sfFilename;
}

const SFString *BbqOutOfCoreDataSourceBase::getSFFilename(void) const
{
    return &_sfFilename;
}


SFReal32 *BbqOutOfCoreDataSourceBase::editSFHeightScale(void)
{
    editSField(HeightScaleFieldMask);

    return &_sfHeightScale;
}

const SFReal32 *BbqOutOfCoreDataSourceBase::getSFHeightScale(void) const
{
    return &_sfHeightScale;
}


SFReal32 *BbqOutOfCoreDataSourceBase::editSFHeightOffset(void)
{
    editSField(HeightOffsetFieldMask);

    return &_sfHeightOffset;
}

const SFReal32 *BbqOutOfCoreDataSourceBase::getSFHeightOffset(void) const
{
    return &_sfHeightOffset;
}


SFReal32 *BbqOutOfCoreDataSourceBase::editSFSampleSpacing(void)
{
    editSField(SampleSpacingFieldMask);

    return &_sfSampleSpacing;
}

const SFReal32 *BbqOutOfCoreDataSourceBase::getSFSampleSpacing(void) const
{
    return &_sfSampleSpacing;
}






/*------------------------------ access -----------------------------------*/

UInt32 BbqOutOfCoreDataSourceBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (FilenameFieldMask & whichField))
    {
        returnValue += _sfFilename.getBinSize();
    }
    if(FieldBits::NoField != (HeightScaleFieldMask & whichField))
    {
        returnValue += _sfHeightScale.getBinSize();
    }
    if(FieldBits::NoField != (HeightOffsetFieldMask & whichField))
    {
        returnValue += _sfHeightOffset.getBinSize();
    }
    if(FieldBits::NoField != (SampleSpacingFieldMask & whichField))
    {
        returnValue += _sfSampleSpacing.getBinSize();
    }

    return returnValue;
}

void BbqOutOfCoreDataSourceBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (FilenameFieldMask & whichField))
    {
        _sfFilename.copyToBin(pMem);
    }
    if(FieldBits::NoField != (HeightScaleFieldMask & whichField))
    {
        _sfHeightScale.copyToBin(pMem);
    }
    if(FieldBits::NoField != (HeightOffsetFieldMask & whichField))
    {
        _sfHeightOffset.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SampleSpacingFieldMask & whichField))
    {
        _sfSampleSpacing.copyToBin(pMem);
    }
}

void BbqOutOfCoreDataSourceBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (FilenameFieldMask & whichField))
    {
        _sfFilename.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (HeightScaleFieldMask & whichField))
    {
        _sfHeightScale.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (HeightOffsetFieldMask & whichField))
    {
        _sfHeightOffset.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SampleSpacingFieldMask & whichField))
    {
        _sfSampleSpacing.copyFromBin(pMem);
    }
}

//! create a new instance of the class
BbqOutOfCoreDataSourceTransitPtr BbqOutOfCoreDataSourceBase::create(void)
{
    BbqOutOfCoreDataSourceTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<BbqOutOfCoreDataSource>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
BbqOutOfCoreDataSourceTransitPtr BbqOutOfCoreDataSourceBase::createLocal(BitVector bFlags)
{
    BbqOutOfCoreDataSourceTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<BbqOutOfCoreDataSource>(tmpPtr);
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
BbqOutOfCoreDataSource *BbqOutOfCoreDataSourceBase::createEmpty(void)
{
    BbqOutOfCoreDataSource *returnValue;

    newPtr<BbqOutOfCoreDataSource>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &= 
        ~Thread::getCurrentLocalFlags(); 

    return returnValue;
}

BbqOutOfCoreDataSource *BbqOutOfCoreDataSourceBase::createEmptyLocal(BitVector bFlags)
{
    BbqOutOfCoreDataSource *returnValue;

    newPtr<BbqOutOfCoreDataSource>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr BbqOutOfCoreDataSourceBase::shallowCopy(void) const
{
    BbqOutOfCoreDataSource *tmpPtr;

    newPtr(tmpPtr, 
           dynamic_cast<const BbqOutOfCoreDataSource *>(this), 
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}

FieldContainerTransitPtr BbqOutOfCoreDataSourceBase::shallowCopyLocal(
    BitVector bFlags) const
{
    BbqOutOfCoreDataSource *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const BbqOutOfCoreDataSource *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

BbqOutOfCoreDataSourceBase::BbqOutOfCoreDataSourceBase(void) :
    Inherited(),
    _sfFilename               (),
    _sfHeightScale            (Real32(1.f)),
    _sfHeightOffset           (Real32(0.f)),
    _sfSampleSpacing          (Real32(1.f))
{
}

BbqOutOfCoreDataSourceBase::BbqOutOfCoreDataSourceBase(const BbqOutOfCoreDataSourceBase &source) :
    Inherited(source),
    _sfFilename               (source._sfFilename               ),
    _sfHeightScale            (source._sfHeightScale            ),
    _sfHeightOffset           (source._sfHeightOffset           ),
    _sfSampleSpacing          (source._sfSampleSpacing          )
{
}


/*-------------------------- destructors ----------------------------------*/

BbqOutOfCoreDataSourceBase::~BbqOutOfCoreDataSourceBase(void)
{
}


GetFieldHandlePtr BbqOutOfCoreDataSourceBase::getHandleFilename        (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfFilename, 
             this->getType().getFieldDesc(FilenameFieldId)));

    return returnValue;
}

EditFieldHandlePtr BbqOutOfCoreDataSourceBase::editHandleFilename       (void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfFilename, 
             this->getType().getFieldDesc(FilenameFieldId)));

    editSField(FilenameFieldMask);

    return returnValue;
}

GetFieldHandlePtr BbqOutOfCoreDataSourceBase::getHandleHeightScale     (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfHeightScale, 
             this->getType().getFieldDesc(HeightScaleFieldId)));

    return returnValue;
}

EditFieldHandlePtr BbqOutOfCoreDataSourceBase::editHandleHeightScale    (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfHeightScale, 
             this->getType().getFieldDesc(HeightScaleFieldId)));

    editSField(HeightScaleFieldMask);

    return returnValue;
}

GetFieldHandlePtr BbqOutOfCoreDataSourceBase::getHandleHeightOffset    (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfHeightOffset, 
             this->getType().getFieldDesc(HeightOffsetFieldId)));

    return returnValue;
}

EditFieldHandlePtr BbqOutOfCoreDataSourceBase::editHandleHeightOffset   (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfHeightOffset, 
             this->getType().getFieldDesc(HeightOffsetFieldId)));

    editSField(HeightOffsetFieldMask);

    return returnValue;
}

GetFieldHandlePtr BbqOutOfCoreDataSourceBase::getHandleSampleSpacing   (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfSampleSpacing, 
             this->getType().getFieldDesc(SampleSpacingFieldId)));

    return returnValue;
}

EditFieldHandlePtr BbqOutOfCoreDataSourceBase::editHandleSampleSpacing  (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfSampleSpacing, 
             this->getType().getFieldDesc(SampleSpacingFieldId)));

    editSField(SampleSpacingFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void BbqOutOfCoreDataSourceBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<BbqOutOfCoreDataSourceBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *BbqOutOfCoreDataSourceBase::createAspectCopy(void) const
{
    BbqOutOfCoreDataSource *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const BbqOutOfCoreDataSource *>(this));

    return returnValue;
}
#endif

void BbqOutOfCoreDataSourceBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<BbqOutOfCoreDataSource *>::_type("BbqOutOfCoreDataSourcePtr", "BbqDataSourcePtr");
#endif


OSG_END_NAMESPACE
