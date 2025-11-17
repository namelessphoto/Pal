#ifndef UE4SS_SDK_WBP_PalDebugInfo_HPP
#define UE4SS_SDK_WBP_PalDebugInfo_HPP

class UWBP_PalDebugInfo_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* RevisionText;
    TMap<class FString, class FString> BuildConfigDisplayTextMap;
    TMap<class EPalSupportedPlatformType, class FString> PlatformDisplayTextMap;
    TMap<class FString, class FString> NetModeDisplayTextMap;

    void Construct();
    void OnSetup();
    void ExecuteUbergraph_WBP_PalDebugInfo(int32 EntryPoint);
};

#endif
