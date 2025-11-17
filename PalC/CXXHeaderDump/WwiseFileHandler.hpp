#ifndef UE4SS_SDK_WwiseFileHandler_HPP
#define UE4SS_SDK_WwiseFileHandler_HPP

#include "WwiseFileHandler_enums.hpp"

struct FWwiseExternalSourceCookedData
{
    int32 Cookie;
    FName DebugName;

};

struct FWwiseLanguageCookedData
{
    int32 LanguageId;
    FName LanguageName;
    EWwiseLanguageRequirement LanguageRequirement;

};

struct FWwiseMediaCookedData
{
    int32 MediaId;
    FName MediaPathName;
    int32 PrefetchSize;
    int32 MemoryAlignment;
    bool bDeviceMemory;
    bool bStreaming;
    FName DebugName;

};

struct FWwiseSoundBankCookedData
{
    int32 SoundBankId;
    FName SoundBankPathName;
    int32 MemoryAlignment;
    bool bDeviceMemory;
    bool bContainsMedia;
    EWwiseSoundBankType SoundBankType;
    FName DebugName;

};

class UWwiseExternalSourceStatics : public UBlueprintFunctionLibrary
{

    void SetExternalSourceMediaWithIds(const FAkUniqueID ExternalSourceCookie, const int32 MediaId);
    void SetExternalSourceMediaByName(FString ExternalSourceName, FString MediaName);
    void SetExternalSourceMediaById(FString ExternalSourceName, const int32 MediaId);
};

#endif
