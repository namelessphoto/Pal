#ifndef UE4SS_SDK_WBP_Option_HelpGuide_HPP
#define UE4SS_SDK_WBP_Option_HelpGuide_HPP

class UWBP_Option_HelpGuide_C : public UPalUserWidgetOverlayUI
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
    void Change Note Content(FName NoteTitle);
    void Setup(FName NoteTitle);
    void Finished_80D7C1A8449D6AAAECA77A96E24A7B39();
    void OnSetup();
    void ClosePanel();
    void ExecuteUbergraph_WBP_Option_HelpGuide(int32 EntryPoint);
};

#endif
