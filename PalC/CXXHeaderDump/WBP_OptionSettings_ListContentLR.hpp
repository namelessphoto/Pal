#ifndef UE4SS_SDK_WBP_OptionSettings_ListContentLR_HPP
#define UE4SS_SDK_WBP_OptionSettings_ListContentLR_HPP

class UWBP_OptionSettings_ListContentLR_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_C_27;
    class UHorizontalBox* HorizontalBox_LRBars;
    class UWBP_OptionSettings_ListContentLRArrow_C* WBP_OptionSettings_ListContentLArrow;
    class UWBP_OptionSettings_ListContentLRArrow_C* WBP_OptionSettings_ListContentRArrow;
    TArray<class UWBP_OptionSettings_ListContentLRBar_C*> LRBars;
    int32 Current;
    TArray<FString> Selections;
    FWBP_OptionSettings_ListContentLR_COnSelectionChanged OnSelectionChanged;
    void OnSelectionChanged(int32 Selection);

    void SelectByIndex(int32 Index);
    void GetCurrentIndex(int32& Index);
    void MoveRight();
    void MoveLeft();
    void SetupSelections(const TArray<FString>& Selections, const int32 Current);
    void BndEvt__WBP_OptionSettings_ListContentLR_WBP_OptionSettings_ListContentLArrow_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__WBP_OptionSettings_ListContentLR_WBP_OptionSettings_ListContentRArrow_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void Destruct();
    void ExecuteUbergraph_WBP_OptionSettings_ListContentLR(int32 EntryPoint);
    void OnSelectionChanged__DelegateSignature(int32 Selection);
};

#endif
