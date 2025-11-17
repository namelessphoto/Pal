#ifndef UE4SS_SDK_WBP_Other_Settings_HPP
#define UE4SS_SDK_WBP_Other_Settings_HPP

class UWBP_Other_Settings_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Language;
    FPalOptionAudioSettings AudioSettingCache;
    TArray<FDataTableRowHandle> LangMsgIds;
    bool SomethingChanged;
    FPalOptionAudioSettings OriginalSettingCache;
    FString NewLang;
    TMap<class FString, class FDataTableRowHandle> LangMap;

    void Construct();
    void OnLanguageChanged(int32 Value);
    void ApplySettings(bool ApplyOriginal);
    void SetDefault();
    void ExecuteUbergraph_WBP_Other_Settings(int32 EntryPoint);
};

#endif
