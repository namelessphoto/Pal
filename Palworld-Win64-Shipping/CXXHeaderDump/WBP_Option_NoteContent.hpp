#ifndef UE4SS_SDK_WBP_Option_NoteContent_HPP
#define UE4SS_SDK_WBP_Option_NoteContent_HPP

class UWBP_Option_NoteContent_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_Content;
    class UCanvasPanel* CanvasPanelImage;
    class UImage* Image;
    class UScrollBox* ScrollBox_Content;
    double New Offset;

    void SetText(FText InText);
    void SetImage(TSoftObjectPtr<UTexture2D> SoftTexture);
    void ChangeOffset(double NewOffset);
    void SetNoteContent(class UPalNoteData* NoteData, FText Desc);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_Option_NoteContent(int32 EntryPoint);
};

#endif
