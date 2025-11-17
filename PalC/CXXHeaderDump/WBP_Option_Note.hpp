#ifndef UE4SS_SDK_WBP_Option_Note_HPP
#define UE4SS_SDK_WBP_Option_Note_HPP

class UWBP_Option_Note_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Open;
    class UBP_PalTextBlock_C* BP_PalTextBlock_NoteCount;
    class UWBP_NoData_C* WBP_NoData;
    class UWBP_Option_NoteContent_C* WBP_Option_NoteContent;
    class UWBP_PalCommonScrollList_C* WBP_PalCommonScrollList;
    FName CurrentNoteTitle;
    class UWBP_PalInvisibleButton_C* FocusTarget;

    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    class UWidget* BP_GetDesiredFocusTarget();
    void ChangeNoteContent(FName NoteTitle);
    void Setup();
    void Finished_793C14214599C67575C16AB5C1CD4F27();
    void OnSetup();
    void ClosePanel();
    void ExecuteUbergraph_WBP_Option_Note(int32 EntryPoint);
};

#endif
