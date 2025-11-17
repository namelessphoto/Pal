#ifndef UE4SS_SDK_WBP_MapFilter_Content_HPP
#define UE4SS_SDK_WBP_MapFilter_Content_HPP

class UWBP_MapFilter_Content_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCheckBox* CheckBox;
    class UCanvasPanel* Focus;
    class UBP_PalTextBlock_C* Text_FilterContent;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    EPalLocationType Location Type;
    FWBP_MapFilter_Content_CChangeFilter ChangeFilter;
    void ChangeFilter(EPalLocationType LocationType, bool IsEnable);
    bool ForceEnable;

    void SetFilter(FDataTableRowHandle MsgID, EPalLocationType LocationType);
    void BndEvt__WBP_MapFilter_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MapFilter_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MapFilter_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void SetForceEnable(bool Set);
    void ExecuteUbergraph_WBP_MapFilter_Content(int32 EntryPoint);
    void ChangeFilter__DelegateSignature(EPalLocationType LocationType, bool IsEnable);
};

#endif
