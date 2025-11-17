#ifndef UE4SS_SDK_WBP_Paldex_tab_HPP
#define UE4SS_SDK_WBP_Paldex_tab_HPP

class UWBP_Paldex_tab_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Normal;
    class UWidgetAnimation* Anm_Focus;
    class UBP_PalTextBlock_C* Text_Title;
    class UWBP_PalCommonButton_C* WBP_PalCommonButton;
    FDataTableRowHandle MsgID;
    FWBP_Paldex_tab_COnClicked OnClicked;
    void OnClicked();

    void AnmEvent_Focus();
    void AnmEvent_Unfocus();
    void OnInitialized();
    void BndEvt__WBP_Paldex_tab_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Paldex_tab(int32 EntryPoint);
    void OnClicked__DelegateSignature();
};

#endif
