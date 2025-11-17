#ifndef UE4SS_SDK_WBP_CharaCre_ScrollBoxContentSet_HPP
#define UE4SS_SDK_WBP_CharaCre_ScrollBoxContentSet_HPP

class UWBP_CharaCre_ScrollBoxContentSet_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCommonActivatableWidgetSwitcher* CommonActivatableWidgetSwitcher_27;
    class UWBP_CharaCre_ScrollBoxContent_Body_C* WBP_CharaCre_ScrollBoxContent_Body;
    class UWBP_CharaCre_ScrollBoxContent_Face_C* WBP_CharaCre_ScrollBoxContent_Face;
    class UWBP_CharaCre_ScrollBoxContent_Hair_C* WBP_CharaCre_ScrollBoxContent_Hair;
    class UWBP_CharaCre_ScrollBoxContent_Preset_C* WBP_CharaCre_ScrollBoxContent_Preset;
    class UWBP_CharaCre_ScrollBoxContent_Voice_C* WBP_CharaCre_ScrollBoxContent_Voice;
    FWBP_CharaCre_ScrollBoxContentSet_COnNotifyOpenSelectColorWindow OnNotifyOpenSelectColorWindow;
    void OnNotifyOpenSelectColorWindow();
    FWBP_CharaCre_ScrollBoxContentSet_COnNotifyCloseColorSelectWindow OnNotifyCloseColorSelectWindow;
    void OnNotifyCloseColorSelectWindow();

    void GetSelectedEyeHSV(FLinearColor& HSV);
    void GetRestoreFocusTarget(TEnumAsByte<E_UICharacterMakeCategory> CategoryType, class UWidget*& Widget);
    void ApplyMakeInfo(FPalPlayerDataCharacterMakeInfo MakeInfo);
    void GetWidgetByCategory(TEnumAsByte<E_UICharacterMakeCategory> TargetCategory, class UWBP_CharaCre_ScrollBoxContentBase_C*& Widget);
    void GetTopFocusTarget(TEnumAsByte<E_UICharacterMakeCategory> NewCategory, class UWidget*& Widget);
    void ChangeMakeCategory(TEnumAsByte<E_UICharacterMakeCategory> NewCategory);
    void BndEvt__WBP_CharaCre_ScrollBoxContentSet_WBP_CharaCre_ScrollBoxContent_Body_K2Node_ComponentBoundEvent_0_OnNotifyOpenSelectColorWindow__DelegateSignature();
    void BndEvt__WBP_CharaCre_ScrollBoxContentSet_WBP_CharaCre_ScrollBoxContent_Body_K2Node_ComponentBoundEvent_1_OnNotifyCloseSelectColorWindow__DelegateSignature();
    void BndEvt__WBP_CharaCre_ScrollBoxContentSet_WBP_CharaCre_ScrollBoxContent_Face_K2Node_ComponentBoundEvent_2_OnNotifyOpenSelectColorWindow__DelegateSignature();
    void BndEvt__WBP_CharaCre_ScrollBoxContentSet_WBP_CharaCre_ScrollBoxContent_Face_K2Node_ComponentBoundEvent_3_OnNotifyCloseSelectColorWindow__DelegateSignature();
    void BndEvt__WBP_CharaCre_ScrollBoxContentSet_WBP_CharaCre_ScrollBoxContent_Hair_K2Node_ComponentBoundEvent_4_OnNotifyOpenSelectColorWindow__DelegateSignature();
    void BndEvt__WBP_CharaCre_ScrollBoxContentSet_WBP_CharaCre_ScrollBoxContent_Hair_K2Node_ComponentBoundEvent_5_OnNotifyCloseSelectColorWindow__DelegateSignature();
    void ExecuteUbergraph_WBP_CharaCre_ScrollBoxContentSet(int32 EntryPoint);
    void OnNotifyCloseColorSelectWindow__DelegateSignature();
    void OnNotifyOpenSelectColorWindow__DelegateSignature();
};

#endif
