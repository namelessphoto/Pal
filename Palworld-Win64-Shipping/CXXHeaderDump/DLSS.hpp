#ifndef UE4SS_SDK_DLSS_HPP
#define UE4SS_SDK_DLSS_HPP

#include "DLSS_enums.hpp"

class UDLSSOverrideSettings : public UObject
{
    EDLSSSettingOverride EnableDLSSInEditorViewportsOverride;
    EDLSSSettingOverride EnableDLSSInPlayInEditorViewportsOverride;
    bool bShowDLSSIncompatiblePluginsToolsWarnings;
    EDLSSSettingOverride ShowDLSSSDebugOnScreenMessages;

};

class UDLSSSettings : public UObject
{
    bool bEnableDLSSD3D12;
    bool bEnableDLSSD3D11;
    bool bEnableDLSSVulkan;
    bool bEnableDLSSInEditorViewports;
    bool bEnableDLSSInPlayInEditorViewports;
    bool bShowDLSSSDebugOnScreenMessages;
    FString GenericDLSSBinaryPath;
    bool bGenericDLSSBinaryExists;
    uint32 NVIDIANGXApplicationId;
    FString CustomDLSSBinaryPath;
    bool bCustomDLSSBinaryExists;
    bool bAllowOTAUpdate;
    bool bShowDLSSIncompatiblePluginsToolsWarnings;
    EDLSSPreset DLAAPreset;
    EDLSSPreset DLSSQualityPreset;
    EDLSSPreset DLSSBalancedPreset;
    EDLSSPreset DLSSPerformancePreset;
    EDLSSPreset DLSSUltraPerformancePreset;

};

#endif
