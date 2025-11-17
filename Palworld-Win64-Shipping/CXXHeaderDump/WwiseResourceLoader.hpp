#ifndef UE4SS_SDK_WwiseResourceLoader_HPP
#define UE4SS_SDK_WwiseResourceLoader_HPP

#include "WwiseResourceLoader_enums.hpp"

struct FWwiseAcousticTextureCookedData
{
    float AbsorptionLow;
    float AbsorptionMidLow;
    float AbsorptionMidHigh;
    float AbsorptionHigh;
    int32 ShortId;
    FName DebugName;

};

struct FWwiseAuxBusCookedData
{
    int32 AuxBusId;
    TArray<FWwiseSoundBankCookedData> SoundBanks;
    TArray<FWwiseMediaCookedData> Media;
    FName DebugName;

};

struct FWwiseEventCookedData
{
    int32 EventId;
    TArray<FWwiseSoundBankCookedData> SoundBanks;
    TArray<FWwiseMediaCookedData> Media;
    TArray<FWwiseExternalSourceCookedData> ExternalSources;
    TArray<FWwiseSwitchContainerLeafCookedData> SwitchContainerLeaves;
    TSet<FWwiseGroupValueCookedData> RequiredGroupValueSet;
    EWwiseEventDestroyOptions DestroyOptions;
    FName DebugName;

};

struct FWwiseEventInfo : public FWwiseObjectInfo
{
    EWwiseEventSwitchContainerLoading SwitchContainerLoading;
    EWwiseEventDestroyOptions DestroyOptions;

};

struct FWwiseGameParameterCookedData
{
    int32 ShortId;
    FName DebugName;

};

struct FWwiseGroupValueCookedData
{
    EWwiseGroupType Type;
    int32 GroupId;
    int32 ID;
    FName DebugName;

};

struct FWwiseGroupValueInfo : public FWwiseObjectInfo
{
    uint32 GroupShortId;

};

struct FWwiseInitBankCookedData : public FWwiseSoundBankCookedData
{
    TArray<FWwiseSoundBankCookedData> SoundBanks;
    TArray<FWwiseMediaCookedData> Media;
    TArray<FWwiseLanguageCookedData> Language;

};

struct FWwiseLanguageId
{
    int32 LanguageId;
    FName LanguageName;

};

struct FWwiseLocalizedAuxBusCookedData
{
    TMap<class FWwiseLanguageCookedData, class FWwiseAuxBusCookedData> AuxBusLanguageMap;
    FName DebugName;
    int32 AuxBusId;

};

struct FWwiseLocalizedEventCookedData
{
    TMap<class FWwiseLanguageCookedData, class FWwiseEventCookedData> EventLanguageMap;
    FName DebugName;
    int32 EventId;

};

struct FWwiseLocalizedShareSetCookedData
{
    TMap<class FWwiseLanguageCookedData, class FWwiseShareSetCookedData> ShareSetLanguageMap;
    FName DebugName;
    int32 ShareSetId;

};

struct FWwiseLocalizedSoundBankCookedData
{
    TMap<class FWwiseLanguageCookedData, class FWwiseSoundBankCookedData> SoundBankLanguageMap;
    FName DebugName;
    int32 SoundBankId;

};

struct FWwiseObjectInfo
{
    FGuid WwiseGuid;
    uint32 WwiseShortId;
    FName WwiseName;
    uint32 HardCodedSoundBankShortId;

};

struct FWwisePlatformId
{
    FGuid PlatformGuid;
    FName PlatformName;

};

struct FWwiseShareSetCookedData
{
    int32 ShareSetId;
    TArray<FWwiseSoundBankCookedData> SoundBanks;
    TArray<FWwiseMediaCookedData> Media;
    FName DebugName;

};

struct FWwiseSharedGroupValueKey
{
};

struct FWwiseSharedLanguageId
{
    EWwiseLanguageRequirement LanguageRequirement;

};

struct FWwiseSharedPlatformId
{
};

struct FWwiseSwitchContainerLeafCookedData
{
    TSet<FWwiseGroupValueCookedData> GroupValueSet;
    TArray<FWwiseSoundBankCookedData> SoundBanks;
    TArray<FWwiseMediaCookedData> Media;
    TArray<FWwiseExternalSourceCookedData> ExternalSources;

};

struct FWwiseTriggerCookedData
{
    int32 TriggerId;
    FName DebugName;

};

class UWwiseEventInfoLibrary : public UBlueprintFunctionLibrary
{

    FWwiseEventInfo SetWwiseShortId(const FWwiseEventInfo& Ref, int32 WwiseShortId);
    FWwiseEventInfo SetWwiseName(const FWwiseEventInfo& Ref, FString WwiseName);
    FWwiseEventInfo SetWwiseGuid(const FWwiseEventInfo& Ref, const FGuid& WwiseGuid);
    FWwiseEventInfo SetSwitchContainerLoading(const FWwiseEventInfo& Ref, const EWwiseEventSwitchContainerLoading& SwitchContainerLoading);
    FWwiseEventInfo SetHardCodedSoundBankShortId(const FWwiseEventInfo& Ref, int32 HardCodedSoundBankShortId);
    FWwiseEventInfo SetDestroyOptions(const FWwiseEventInfo& Ref, const EWwiseEventDestroyOptions& DestroyOptions);
    FWwiseEventInfo MakeStruct(const FGuid& WwiseGuid, int32 WwiseShortId, FString WwiseName, EWwiseEventSwitchContainerLoading SwitchContainerLoading, EWwiseEventDestroyOptions DestroyOptions, int32 HardCodedSoundBankShortId);
    int32 GetWwiseShortID(const FWwiseEventInfo& Ref);
    FString GetWwiseName(const FWwiseEventInfo& Ref);
    FGuid GetWwiseGuid(const FWwiseEventInfo& Ref);
    EWwiseEventSwitchContainerLoading GetSwitchContainerLoading(const FWwiseEventInfo& Ref);
    int32 GetHardCodedSoundBankShortId(const FWwiseEventInfo& Ref);
    EWwiseEventDestroyOptions GetDestroyOptions(const FWwiseEventInfo& Ref);
    void BreakStruct(FWwiseEventInfo Ref, FGuid& OutWwiseGuid, int32& OutWwiseShortId, FString& OutWwiseName, EWwiseEventSwitchContainerLoading& OutSwitchContainerLoading, EWwiseEventDestroyOptions& OutDestroyOptions, int32& OutHardCodedSoundBankShortId);
};

class UWwiseGroupValueInfoLibrary : public UBlueprintFunctionLibrary
{

    FWwiseGroupValueInfo SetWwiseShortId(const FWwiseGroupValueInfo& Ref, int32 WwiseShortId);
    FWwiseGroupValueInfo SetWwiseName(const FWwiseGroupValueInfo& Ref, FString WwiseName);
    FWwiseGroupValueInfo SetGroupShortId(const FWwiseGroupValueInfo& Ref, int32 GroupShortId);
    FWwiseGroupValueInfo SetAssetGuid(const FWwiseGroupValueInfo& Ref, const FGuid& AssetGuid);
    FWwiseGroupValueInfo MakeStruct(const FGuid& AssetGuid, int32 GroupShortId, int32 WwiseShortId, FString WwiseName);
    int32 GetWwiseShortID(const FWwiseGroupValueInfo& Ref);
    FString GetWwiseName(const FWwiseGroupValueInfo& Ref);
    int32 GetGroupShortId(const FWwiseGroupValueInfo& Ref);
    FGuid GetAssetGuid(const FWwiseGroupValueInfo& Ref);
    void BreakStruct(FWwiseGroupValueInfo Ref, FGuid& OutAssetGuid, int32& OutGroupShortId, int32& OutWwiseShortId, FString& OutWwiseName);
};

class UWwiseObjectInfoLibrary : public UBlueprintFunctionLibrary
{

    FWwiseObjectInfo SetWwiseShortId(const FWwiseObjectInfo& Ref, int32 WwiseShortId);
    FWwiseObjectInfo SetWwiseName(const FWwiseObjectInfo& Ref, FString WwiseName);
    FWwiseObjectInfo SetWwiseGuid(const FWwiseObjectInfo& Ref, const FGuid& WwiseGuid);
    FWwiseObjectInfo SetHardCodedSoundBankShortId(const FWwiseObjectInfo& Ref, int32 HardCodedSoundBankShortId);
    FWwiseObjectInfo MakeStruct(const FGuid& WwiseGuid, int32 WwiseShortId, FString WwiseName, int32 HardCodedSoundBankShortId);
    int32 GetWwiseShortID(const FWwiseObjectInfo& Ref);
    FString GetWwiseName(const FWwiseObjectInfo& Ref);
    FGuid GetWwiseGuid(const FWwiseObjectInfo& Ref);
    int32 GetHardCodedSoundBankShortId(const FWwiseObjectInfo& Ref);
    void BreakStruct(FWwiseObjectInfo Ref, FGuid& OutWwiseGuid, int32& OutWwiseShortId, FString& OutWwiseName, int32& OutHardCodedSoundBankShortId);
};

#endif
