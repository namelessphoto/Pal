#ifndef UE4SS_SDK_WBP_PalCommonCharacterSlotButton_HPP
#define UE4SS_SDK_WBP_PalCommonCharacterSlotButton_HPP

class UWBP_PalCommonCharacterSlotButton_C : public UWBP_PalCharacterSlotButtonBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_UnselectToSelect;
    class UWidgetAnimation* Anm_push;
    class UCanvasPanel* CanvasPanel_36;
    class UImage* Check_0;
    class UImage* Check_1;
    class UImage* Check_2;
    class UImage* FocusedFrame;
    class UImage* PushEff;
    class UWBP_PalCommonCharacterSlot_C* WBP_PalCommonCharacterSlot;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    bool bIsDIsplayDopingEffect;
    bool bCheckAnimPlayed;

    void SetOverrideSize(FVector2D NewSize);
    void RegisterCharacterSlotWidget(class UWBP_PalCharacterSlotBase_C*& characterSlotWidget);
    void RegisterButton(class UCommonButtonBase*& Button);
    void OnInitialized();
    void PlayFocusAnim(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void PlayUnfocusAnim(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void Destruct();
    void SetEnable(bool IsEnable);
    void AnmEvent_BasePal(bool Enable);
    void AnmEvent_ConsumePal(bool Enable);
    void AnmEvent_SelectPal(bool IsEnable);
    void AnmEvent_RedCheck(bool bIsChecked);
    void AnmEvent_Check(bool bCheck);
    void ExecuteUbergraph_WBP_PalCommonCharacterSlotButton(int32 EntryPoint);
};

#endif
