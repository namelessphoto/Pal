#ifndef UE4SS_SDK_WBP_PalCommonItemSlotButton_HPP
#define UE4SS_SDK_WBP_PalCommonItemSlotButton_HPP

class UWBP_PalCommonItemSlotButton_C : public UWBP_PalItemSlotButtonBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_UnselectToSelect;
    class UWidgetAnimation* Anm_Unlock;
    class UWidgetAnimation* Anm_Lock;
    class UWidgetAnimation* Anm_push;
    class UWidgetAnimation* Anm_Unfocus;
    class UWidgetAnimation* Anm_Focus;
    class UImage* FocusedFrame;
    class UImage* FocusedFrame_1;
    class UImage* PushEff;
    class UImage* PushEff_1;
    class UWBP_PalCommonItemSlot_C* WBP_PalCommonItemSlot;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;

    void RegisterItemSlotWidget(class UWBP_PalItemSlotBase_C*& itemSlotWidget);
    void RegisterButton(class UCommonButtonBase*& Button);
    void AnmEvent_Lock();
    void AnmEvent_Unlock();
    void AnmEvent_Focus();
    void AnmEvent_Unfocus();
    void AnmEvent_Push();
    void OnInitialized();
    void PlayFocusAnim(class UWBP_PalItemSlotButtonBase_C* Widget);
    void PlayUnfocusAnim(class UWBP_PalItemSlotButtonBase_C* Widget);
    void PlayPushAnim(class UWBP_PalItemSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void PlayDropAnim(class UWBP_PalItemSlotButtonBase_C* Widget);
    void LiftedEvent(int32 LiftNum, class UWBP_PalItemSlotButtonBase_C* Widget);
    void DraggedEvent(class UWBP_PalItemSlotButtonBase_C* Widget);
    void ExecuteUbergraph_WBP_PalCommonItemSlotButton(int32 EntryPoint);
};

#endif
