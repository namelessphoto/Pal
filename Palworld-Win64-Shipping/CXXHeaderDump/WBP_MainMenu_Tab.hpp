#ifndef UE4SS_SDK_WBP_MainMenu_Tab_HPP
#define UE4SS_SDK_WBP_MainMenu_Tab_HPP

class UWBP_MainMenu_Tab_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Open_normal;
    class UWidgetAnimation* Anm_Normal;
    class UWidgetAnimation* Anm_Focus;
    class UWidgetAnimation* Anm_Open_focus;
    class UBP_PalTextBlock_C* Text_Main;
    class UWBP_MainMenu_NewDot_C* WBP_MainMenu_NewDot;
    class UWBP_PalCommonButton_C* WBP_PalCommonButton;
    class UWBP_PalCommonNewMark_0_C* WBP_PalCommonNewMark_0;
    FWBP_MainMenu_Tab_COnClicked OnClicked;
    void OnClicked(class UWBP_MainMenu_Tab_C* SelfWidget);
    TEnumAsByte<EPalUIInGameMainMenuTabType> BindMainMenuType;
    TMap<TEnumAsByte<EPalUIInGameMainMenuTabType>, FDataTableRowHandle> MsgIDMap;

    void SetEnableAttentionDot(bool IsEnable);
    void AnmEvent_FirstOpen(bool isFocused);
    void AnmEvent_FocusToNormal();
    void AnmEvent_NormalToFocus();
    void OnInitialized();
    void BndEvt__WBP_MainMenu_Tab_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_MainMenu_Tab(int32 EntryPoint);
    void OnClicked__DelegateSignature(class UWBP_MainMenu_Tab_C* SelfWidget);
};

#endif
