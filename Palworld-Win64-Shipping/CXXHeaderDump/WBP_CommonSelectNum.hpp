#ifndef UE4SS_SDK_WBP_CommonSelectNum_HPP
#define UE4SS_SDK_WBP_CommonSelectNum_HPP

class UWBP_CommonSelectNum_C : public UPalUISelectNumWidgetBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_318;
    class UCanvasPanel* CanvasPanel_58;
    class UEditableTextBox* EditableTextBox_0;
    class UImage* Image_454;
    class UButton* LeftButton;
    class UButton* rightButton;
    int32 NowCount;
    int32 MaxCount;
    FWBP_CommonSelectNum_COnRightButtonClicked OnRightButtonClicked;
    void OnRightButtonClicked();
    FWBP_CommonSelectNum_COnLeftButtonClicked OnLeftButtonClicked;
    void OnLeftButtonClicked();
    FWBP_CommonSelectNum_COnTextCommited OnTextCommited;
    void OnTextCommited(FString NewString);
    int32 MaxDigit;
    class UPalUISelectNumParameter* Parameter;

    void CheckMaxCount(FString InString, FString& OutString);
    void GetNowCount(int32& Count);
    void Check Numeric(FString checkString, FString& OutString);
    void UpdateText();
    void Increment();
    void Decrement();
    void Setup(int32 inMaxCount, int32 defaultCount);
    void BndEvt__WBP_CommonSelectNum_RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_CommonSelectNum_EditableTextBox_0_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
    void BndEvt__WBP_CommonSelectNum_EditableTextBox_0_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__WBP_CommonSelectNum_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_CommonSelectNum_Button_318_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void OnSetup();
    void OnClickedR();
    void OnClickedL();
    void OnEscape();
    void OnTextChanged(FString NewString);
    void ExecuteUbergraph_WBP_CommonSelectNum(int32 EntryPoint);
    void OnTextCommited__DelegateSignature(FString NewString);
    void OnLeftButtonClicked__DelegateSignature();
    void OnRightButtonClicked__DelegateSignature();
};

#endif
