#ifndef UE4SS_SDK_WBP_PalCommonCharacterSlotButton_HPP
#define UE4SS_SDK_WBP_PalCommonCharacterSlotButton_HPP

class UWBP_PalCommonCharacterSlotButton_C : public UWBP_PalCharacterSlotButtonBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C8 (size: 0x8)
    class UWidgetAnimation* Anm_UnselectToSelect;                                     // 0x04D0 (size: 0x8)
    class UWidgetAnimation* Anm_push;                                                 // 0x04D8 (size: 0x8)
    class UCanvasPanel* CanvasPanel_36;                                               // 0x04E0 (size: 0x8)
    class UImage* Check_0;                                                            // 0x04E8 (size: 0x8)
    class UImage* Check_1;                                                            // 0x04F0 (size: 0x8)
    class UImage* Check_2;                                                            // 0x04F8 (size: 0x8)
    class UImage* FocusedFrame;                                                       // 0x0500 (size: 0x8)
    class UImage* PushEff;                                                            // 0x0508 (size: 0x8)
    class UWBP_PalCommonCharacterSlot_C* WBP_PalCommonCharacterSlot;                  // 0x0510 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x0518 (size: 0x8)
    bool bIsDIsplayDopingEffect;                                                      // 0x0520 (size: 0x1)
    bool bCheckAnimPlayed;                                                            // 0x0521 (size: 0x1)

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
}; // Size: 0x522

#endif
