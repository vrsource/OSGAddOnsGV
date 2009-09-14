/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     class ShadowViewport!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ShadowViewportBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 ShadowViewportBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 ShadowViewportBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the ShadowViewport::_sfOffBias field.

inline
Real32 &ShadowViewportBase::editOffBias(void)
{
    editSField(OffBiasFieldMask);

    return _sfOffBias.getValue();
}

//! Get the value of the ShadowViewport::_sfOffBias field.
inline
      Real32  ShadowViewportBase::getOffBias(void) const
{
    return _sfOffBias.getValue();
}

//! Set the value of the ShadowViewport::_sfOffBias field.
inline
void ShadowViewportBase::setOffBias(const Real32 value)
{
    editSField(OffBiasFieldMask);

    _sfOffBias.setValue(value);
}
//! Get the value of the ShadowViewport::_sfOffFactor field.

inline
Real32 &ShadowViewportBase::editOffFactor(void)
{
    editSField(OffFactorFieldMask);

    return _sfOffFactor.getValue();
}

//! Get the value of the ShadowViewport::_sfOffFactor field.
inline
      Real32  ShadowViewportBase::getOffFactor(void) const
{
    return _sfOffFactor.getValue();
}

//! Set the value of the ShadowViewport::_sfOffFactor field.
inline
void ShadowViewportBase::setOffFactor(const Real32 value)
{
    editSField(OffFactorFieldMask);

    _sfOffFactor.setValue(value);
}

//! Get the value of the ShadowViewport::_sfSceneRoot field.
inline
Node * ShadowViewportBase::getSceneRoot(void) const
{
    return _sfSceneRoot.getValue();
}

//! Set the value of the ShadowViewport::_sfSceneRoot field.
inline
void ShadowViewportBase::setSceneRoot(Node * const value)
{
    editSField(SceneRootFieldMask);

    _sfSceneRoot.setValue(value);
}
//! Get the value of the ShadowViewport::_sfMapSize field.

inline
UInt32 &ShadowViewportBase::editMapSize(void)
{
    editSField(MapSizeFieldMask);

    return _sfMapSize.getValue();
}

//! Get the value of the ShadowViewport::_sfMapSize field.
inline
      UInt32  ShadowViewportBase::getMapSize(void) const
{
    return _sfMapSize.getValue();
}

//! Set the value of the ShadowViewport::_sfMapSize field.
inline
void ShadowViewportBase::setMapSize(const UInt32 value)
{
    editSField(MapSizeFieldMask);

    _sfMapSize.setValue(value);
}
//! Get the value of the ShadowViewport::_sfMapAutoUpdate field.

inline
bool &ShadowViewportBase::editMapAutoUpdate(void)
{
    editSField(MapAutoUpdateFieldMask);

    return _sfMapAutoUpdate.getValue();
}

//! Get the value of the ShadowViewport::_sfMapAutoUpdate field.
inline
      bool  ShadowViewportBase::getMapAutoUpdate(void) const
{
    return _sfMapAutoUpdate.getValue();
}

//! Set the value of the ShadowViewport::_sfMapAutoUpdate field.
inline
void ShadowViewportBase::setMapAutoUpdate(const bool value)
{
    editSField(MapAutoUpdateFieldMask);

    _sfMapAutoUpdate.setValue(value);
}
//! Get the value of the ShadowViewport::_sfShadowMode field.

inline
UInt32 &ShadowViewportBase::editShadowMode(void)
{
    editSField(ShadowModeFieldMask);

    return _sfShadowMode.getValue();
}

//! Get the value of the ShadowViewport::_sfShadowMode field.
inline
      UInt32  ShadowViewportBase::getShadowMode(void) const
{
    return _sfShadowMode.getValue();
}

//! Set the value of the ShadowViewport::_sfShadowMode field.
inline
void ShadowViewportBase::setShadowMode(const UInt32 value)
{
    editSField(ShadowModeFieldMask);

    _sfShadowMode.setValue(value);
}
//! Get the value of the ShadowViewport::_sfShadowSmoothness field.

inline
Real32 &ShadowViewportBase::editShadowSmoothness(void)
{
    editSField(ShadowSmoothnessFieldMask);

    return _sfShadowSmoothness.getValue();
}

//! Get the value of the ShadowViewport::_sfShadowSmoothness field.
inline
      Real32  ShadowViewportBase::getShadowSmoothness(void) const
{
    return _sfShadowSmoothness.getValue();
}

//! Set the value of the ShadowViewport::_sfShadowSmoothness field.
inline
void ShadowViewportBase::setShadowSmoothness(const Real32 value)
{
    editSField(ShadowSmoothnessFieldMask);

    _sfShadowSmoothness.setValue(value);
}
//! Get the value of the ShadowViewport::_sfShadowOn field.

inline
bool &ShadowViewportBase::editShadowOn(void)
{
    editSField(ShadowOnFieldMask);

    return _sfShadowOn.getValue();
}

//! Get the value of the ShadowViewport::_sfShadowOn field.
inline
      bool  ShadowViewportBase::getShadowOn(void) const
{
    return _sfShadowOn.getValue();
}

//! Set the value of the ShadowViewport::_sfShadowOn field.
inline
void ShadowViewportBase::setShadowOn(const bool value)
{
    editSField(ShadowOnFieldMask);

    _sfShadowOn.setValue(value);
}
//! Get the value of the ShadowViewport::_sfAutoSearchForLights field.

inline
bool &ShadowViewportBase::editAutoSearchForLights(void)
{
    editSField(AutoSearchForLightsFieldMask);

    return _sfAutoSearchForLights.getValue();
}

//! Get the value of the ShadowViewport::_sfAutoSearchForLights field.
inline
      bool  ShadowViewportBase::getAutoSearchForLights(void) const
{
    return _sfAutoSearchForLights.getValue();
}

//! Set the value of the ShadowViewport::_sfAutoSearchForLights field.
inline
void ShadowViewportBase::setAutoSearchForLights(const bool value)
{
    editSField(AutoSearchForLightsFieldMask);

    _sfAutoSearchForLights.setValue(value);
}
//! Get the value of the ShadowViewport::_sfGlobalShadowIntensity field.

inline
Real32 &ShadowViewportBase::editGlobalShadowIntensity(void)
{
    editSField(GlobalShadowIntensityFieldMask);

    return _sfGlobalShadowIntensity.getValue();
}

//! Get the value of the ShadowViewport::_sfGlobalShadowIntensity field.
inline
      Real32  ShadowViewportBase::getGlobalShadowIntensity(void) const
{
    return _sfGlobalShadowIntensity.getValue();
}

//! Set the value of the ShadowViewport::_sfGlobalShadowIntensity field.
inline
void ShadowViewportBase::setGlobalShadowIntensity(const Real32 value)
{
    editSField(GlobalShadowIntensityFieldMask);

    _sfGlobalShadowIntensity.setValue(value);
}
//! Get the value of the ShadowViewport::_sfFboOn field.

inline
bool &ShadowViewportBase::editFboOn(void)
{
    editSField(FboOnFieldMask);

    return _sfFboOn.getValue();
}

//! Get the value of the ShadowViewport::_sfFboOn field.
inline
      bool  ShadowViewportBase::getFboOn(void) const
{
    return _sfFboOn.getValue();
}

//! Set the value of the ShadowViewport::_sfFboOn field.
inline
void ShadowViewportBase::setFboOn(const bool value)
{
    editSField(FboOnFieldMask);

    _sfFboOn.setValue(value);
}
//! Get the value of the ShadowViewport::_sfAutoExcludeTransparentNodes field.

inline
bool &ShadowViewportBase::editAutoExcludeTransparentNodes(void)
{
    editSField(AutoExcludeTransparentNodesFieldMask);

    return _sfAutoExcludeTransparentNodes.getValue();
}

//! Get the value of the ShadowViewport::_sfAutoExcludeTransparentNodes field.
inline
      bool  ShadowViewportBase::getAutoExcludeTransparentNodes(void) const
{
    return _sfAutoExcludeTransparentNodes.getValue();
}

//! Set the value of the ShadowViewport::_sfAutoExcludeTransparentNodes field.
inline
void ShadowViewportBase::setAutoExcludeTransparentNodes(const bool value)
{
    editSField(AutoExcludeTransparentNodesFieldMask);

    _sfAutoExcludeTransparentNodes.setValue(value);
}
//! Get the value of the ShadowViewport::_sfDisableOccludedLights field.

inline
bool &ShadowViewportBase::editDisableOccludedLights(void)
{
    editSField(DisableOccludedLightsFieldMask);

    return _sfDisableOccludedLights.getValue();
}

//! Get the value of the ShadowViewport::_sfDisableOccludedLights field.
inline
      bool  ShadowViewportBase::getDisableOccludedLights(void) const
{
    return _sfDisableOccludedLights.getValue();
}

//! Set the value of the ShadowViewport::_sfDisableOccludedLights field.
inline
void ShadowViewportBase::setDisableOccludedLights(const bool value)
{
    editSField(DisableOccludedLightsFieldMask);

    _sfDisableOccludedLights.setValue(value);
}
//! Get the value of the ShadowViewport::_sfRed field.

inline
bool &ShadowViewportBase::editRed(void)
{
    editSField(RedFieldMask);

    return _sfRed.getValue();
}

//! Get the value of the ShadowViewport::_sfRed field.
inline
      bool  ShadowViewportBase::getRed(void) const
{
    return _sfRed.getValue();
}

//! Set the value of the ShadowViewport::_sfRed field.
inline
void ShadowViewportBase::setRed(const bool value)
{
    editSField(RedFieldMask);

    _sfRed.setValue(value);
}
//! Get the value of the ShadowViewport::_sfBlue field.

inline
bool &ShadowViewportBase::editBlue(void)
{
    editSField(BlueFieldMask);

    return _sfBlue.getValue();
}

//! Get the value of the ShadowViewport::_sfBlue field.
inline
      bool  ShadowViewportBase::getBlue(void) const
{
    return _sfBlue.getValue();
}

//! Set the value of the ShadowViewport::_sfBlue field.
inline
void ShadowViewportBase::setBlue(const bool value)
{
    editSField(BlueFieldMask);

    _sfBlue.setValue(value);
}
//! Get the value of the ShadowViewport::_sfGreen field.

inline
bool &ShadowViewportBase::editGreen(void)
{
    editSField(GreenFieldMask);

    return _sfGreen.getValue();
}

//! Get the value of the ShadowViewport::_sfGreen field.
inline
      bool  ShadowViewportBase::getGreen(void) const
{
    return _sfGreen.getValue();
}

//! Set the value of the ShadowViewport::_sfGreen field.
inline
void ShadowViewportBase::setGreen(const bool value)
{
    editSField(GreenFieldMask);

    _sfGreen.setValue(value);
}
//! Get the value of the ShadowViewport::_sfAlpha field.

inline
bool &ShadowViewportBase::editAlpha(void)
{
    editSField(AlphaFieldMask);

    return _sfAlpha.getValue();
}

//! Get the value of the ShadowViewport::_sfAlpha field.
inline
      bool  ShadowViewportBase::getAlpha(void) const
{
    return _sfAlpha.getValue();
}

//! Set the value of the ShadowViewport::_sfAlpha field.
inline
void ShadowViewportBase::setAlpha(const bool value)
{
    editSField(AlphaFieldMask);

    _sfAlpha.setValue(value);
}

//! Get the value of the \a index element the ShadowViewport::_mfLightNodes field.
inline
Node * ShadowViewportBase::getLightNodes(const UInt32 index) const
{
    return _mfLightNodes[index];
}

//! Get the value of the \a index element the ShadowViewport::_mfExcludeNodes field.
inline
Node * ShadowViewportBase::getExcludeNodes(const UInt32 index) const
{
    return _mfExcludeNodes[index];
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void ShadowViewportBase::execSync (      ShadowViewportBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (OffBiasFieldMask & whichField))
        _sfOffBias.syncWith(pFrom->_sfOffBias);

    if(FieldBits::NoField != (OffFactorFieldMask & whichField))
        _sfOffFactor.syncWith(pFrom->_sfOffFactor);

    if(FieldBits::NoField != (SceneRootFieldMask & whichField))
        _sfSceneRoot.syncWith(pFrom->_sfSceneRoot);

    if(FieldBits::NoField != (MapSizeFieldMask & whichField))
        _sfMapSize.syncWith(pFrom->_sfMapSize);

    if(FieldBits::NoField != (LightNodesFieldMask & whichField))
        _mfLightNodes.syncWith(pFrom->_mfLightNodes,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (ExcludeNodesFieldMask & whichField))
        _mfExcludeNodes.syncWith(pFrom->_mfExcludeNodes,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (MapAutoUpdateFieldMask & whichField))
        _sfMapAutoUpdate.syncWith(pFrom->_sfMapAutoUpdate);

    if(FieldBits::NoField != (ShadowModeFieldMask & whichField))
        _sfShadowMode.syncWith(pFrom->_sfShadowMode);

    if(FieldBits::NoField != (ShadowSmoothnessFieldMask & whichField))
        _sfShadowSmoothness.syncWith(pFrom->_sfShadowSmoothness);

    if(FieldBits::NoField != (ShadowOnFieldMask & whichField))
        _sfShadowOn.syncWith(pFrom->_sfShadowOn);

    if(FieldBits::NoField != (AutoSearchForLightsFieldMask & whichField))
        _sfAutoSearchForLights.syncWith(pFrom->_sfAutoSearchForLights);

    if(FieldBits::NoField != (GlobalShadowIntensityFieldMask & whichField))
        _sfGlobalShadowIntensity.syncWith(pFrom->_sfGlobalShadowIntensity);

    if(FieldBits::NoField != (FboOnFieldMask & whichField))
        _sfFboOn.syncWith(pFrom->_sfFboOn);

    if(FieldBits::NoField != (AutoExcludeTransparentNodesFieldMask & whichField))
        _sfAutoExcludeTransparentNodes.syncWith(pFrom->_sfAutoExcludeTransparentNodes);

    if(FieldBits::NoField != (DisableOccludedLightsFieldMask & whichField))
        _sfDisableOccludedLights.syncWith(pFrom->_sfDisableOccludedLights);

    if(FieldBits::NoField != (RedFieldMask & whichField))
        _sfRed.syncWith(pFrom->_sfRed);

    if(FieldBits::NoField != (BlueFieldMask & whichField))
        _sfBlue.syncWith(pFrom->_sfBlue);

    if(FieldBits::NoField != (GreenFieldMask & whichField))
        _sfGreen.syncWith(pFrom->_sfGreen);

    if(FieldBits::NoField != (AlphaFieldMask & whichField))
        _sfAlpha.syncWith(pFrom->_sfAlpha);
}
#endif


inline
const Char8 *ShadowViewportBase::getClassname(void)
{
    return "ShadowViewport";
}
OSG_GEN_CONTAINERPTR(ShadowViewport);

OSG_END_NAMESPACE

