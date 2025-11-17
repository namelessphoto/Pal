#ifndef UE4SS_SDK_WBP_Sound_Settings_HPP
#define UE4SS_SDK_WBP_Sound_Settings_HPP

class UWBP_Sound_Settings_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Ambient;
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_BGM;
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Master;
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_PalVoice;
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_SE;
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_UI;
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Voice;
    FPalOptionAudioSettings AudioSettingCache;
    TArray<FDataTableRowHandle> LevelMsgIds;
    bool SomethingChanged;
    FPalOptionAudioSettings OriginalSettingCache;

    void Construct();
    void OnMasterChanged(double Value);
    void OnBGMChanged(double Value);
    void OnSEChanged(double Value);
    void ApplySettings(bool ApplyOriginal);
    void SetDefault();
    void OnPalVoiceChanged(double Value);
    void OnHumanVoiceChanged(double Value);
    void OnAmbientChanged(double Value);
    void OnUIChanged(double Value);
    void ExecuteUbergraph_WBP_Sound_Settings(int32 EntryPoint);
};

#endif
