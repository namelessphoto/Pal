#ifndef UE4SS_SDK_WBP_Main_Menu_Tab_Key_HPP
#define UE4SS_SDK_WBP_Main_Menu_Tab_Key_HPP

class UWBP_Main_Menu_Tab_Key_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_push;
    class UWidgetAnimation* Anm_Normal;
    class UWidgetAnimation* Anm_Focus;
    class UImage* Image;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;
    FWBP_Main_Menu_Tab_Key_COnClicked OnClicked;
    void OnClicked();
    FPalDataTableRowName_UIInputAction bindActionName;

    void AnmEvent_Focus();
    void AnmEvent_Unfocus();
    void AnmEvent_Push();
    void Construct();
    void OnInitialized();
    void BndEvt__WBP_Main_Menu_Tab_Key_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Main_Menu_Tab_Key_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Main_Menu_Tab_Key_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Main_Menu_Tab_Key(int32 EntryPoint);
    void OnClicked__DelegateSignature();
};

#endif
