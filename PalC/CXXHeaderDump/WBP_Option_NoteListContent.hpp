#ifndef UE4SS_SDK_WBP_Option_NoteListContent_HPP
#define UE4SS_SDK_WBP_Option_NoteListContent_HPP

class UWBP_Option_NoteListContent_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_PalTextBlock_C* BP_PalTextBlock_Title;
    class UCanvasPanel* CanvasPanelNEW;
    class UImage* Frame;
    class UImage* Frame_1;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    FWBP_Option_NoteListContent_COnNoteListClicked OnNoteListClicked;
    void OnNoteListClicked(FName Title);
    FName Title;

    void SetNoteList(FName Title, bool IsChecked, FText Desc);
    void BndEvt__WBP_Option_NoteListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Option_NoteListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Option_NoteListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Option_NoteListContent(int32 EntryPoint);
    void OnNoteListClicked__DelegateSignature(FName Title);
};

#endif
