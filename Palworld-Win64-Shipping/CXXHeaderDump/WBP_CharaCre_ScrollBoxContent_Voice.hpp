#ifndef UE4SS_SDK_WBP_CharaCre_ScrollBoxContent_Voice_HPP
#define UE4SS_SDK_WBP_CharaCre_ScrollBoxContent_Voice_HPP

class UWBP_CharaCre_ScrollBoxContent_Voice_C : public UWBP_CharaCre_ScrollBoxContentBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWrapBox* WrapBox_Body;
    FWBP_CharaCre_ScrollBoxContent_Voice_COnChangedVoiceID OnChangedVoiceID;
    void OnChangedVoiceID(int32 VoiceID);
    TArray<class UAkAudioEvent*> SampleVoiceArray;
    TMap<int32, int32> PlayVoiceMap;
    int32 VoiceCount;
    TArray<class UWBP_CharaCre_BodyTypeButton_C*> VoiceButtons;
    class UWBP_CharaCre_BodyTypeButton_C* LastClickedVoiceTypeButton;
    FWBP_CharaCre_ScrollBoxContent_Voice_COnHoveredVoiceButton OnHoveredVoiceButton;
    void OnHoveredVoiceButton(int32 VoiceID);
    FWBP_CharaCre_ScrollBoxContent_Voice_COnUnhoveredVoiceButton OnUnhoveredVoiceButton;
    void OnUnhoveredVoiceButton();

    void OnUnhoveredVoiceTypeButton();
    void OnHoveredVoiceTypeButton(class UWBP_CharaCre_BodyTypeButton_C* Widget);
    void OnClickedVoiceTypeButton(class UWBP_CharaCre_BodyTypeButton_C* Widget);
    void Play Sample Voice(int32 VoiceID);
    void ApplyMakeInfo(FPalPlayerDataCharacterMakeInfo MakeInfo);
    void GetRestoreFocusTarget(class UWidget*& Widget);
    void GetTopFocusTarget(class UWidget*& Widget);
    void Construct();
    void ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice(int32 EntryPoint);
    void OnUnhoveredVoiceButton__DelegateSignature();
    void OnHoveredVoiceButton__DelegateSignature(int32 VoiceID);
    void OnChangedVoiceID__DelegateSignature(int32 VoiceID);
};

#endif
