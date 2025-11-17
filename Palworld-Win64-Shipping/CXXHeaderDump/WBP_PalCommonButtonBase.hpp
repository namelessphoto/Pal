#ifndef UE4SS_SDK_WBP_PalCommonButtonBase_HPP
#define UE4SS_SDK_WBP_PalCommonButtonBase_HPP

class UWBP_PalCommonButtonBase_C : public UCommonButtonBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool HideFocusCursor;
    class UAkAudioEvent* HoverAKAudioEvent;
    class UAkAudioEvent* UnhoverAKAudioEvent;
    class UAkAudioEvent* ClickAKAudioEvent;
    FWBP_PalCommonButtonBase_COnButtonPressed OnButtonPressed;
    void OnButtonPressed(class UCommonButtonBase* Button);
    FWBP_PalCommonButtonBase_COnButtonReleased OnButtonReleased;
    void OnButtonReleased(class UCommonButtonBase* Button);

    void PlayAkSound(class UAkAudioEvent* AudioEvent);
    void BP_OnHovered();
    void BP_OnUnhovered();
    void Destruct();
    void BP_OnClicked();
    void BP_OnPressed();
    void BP_OnReleased();
    void ExecuteUbergraph_WBP_PalCommonButtonBase(int32 EntryPoint);
    void OnButtonReleased__DelegateSignature(class UCommonButtonBase* Button);
    void OnButtonPressed__DelegateSignature(class UCommonButtonBase* Button);
};

#endif
