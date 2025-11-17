#ifndef UE4SS_SDK_WBP_IngameMenu_Monitoring_WorkButton_HPP
#define UE4SS_SDK_WBP_IngameMenu_Monitoring_WorkButton_HPP

class UWBP_IngameMenu_Monitoring_WorkButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* FocusBase;
    class UImage* FocusFrame;
    class UImage* Icon;
    class UCanvasPanel* Select;
    class UBP_PalTextBlock_C* Text_Select;
    class UBP_PalTextBlock_C* Text_Work;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    int32 WorkHardLevel;
    TArray<FDataTableRowHandle> WorkHardMsgIds;
    FWBP_IngameMenu_Monitoring_WorkButton_COnChangeHardWorkLevel OnChangeHardWorkLevel;
    void OnChangeHardWorkLevel(int32 WorkLevel);
    FWBP_IngameMenu_Monitoring_WorkButton_COnHover OnHover;
    void OnHover(int32 WorkHardLevel);
    FWBP_IngameMenu_Monitoring_WorkButton_COnUnhover OnUnhover;
    void OnUnhover();

    void Construct();
    void BndEvt__WBP_IngameMenu_Monitoring_WorkButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_Monitoring_WorkButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_Monitoring_WorkButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void Destruct();
    void ActiveSelect(bool Active);
    void ExecuteUbergraph_WBP_IngameMenu_Monitoring_WorkButton(int32 EntryPoint);
    void OnUnhover__DelegateSignature();
    void OnHover__DelegateSignature(int32 WorkHardLevel);
    void OnChangeHardWorkLevel__DelegateSignature(int32 WorkLevel);
};

#endif
