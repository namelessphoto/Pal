#ifndef UE4SS_SDK_WBP_CharaCre_ListContent_HPP
#define UE4SS_SDK_WBP_CharaCre_ListContent_HPP

class UWBP_CharaCre_ListContent_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Focus;
    class UWidgetAnimation* Anm_Normal;
    class UNamedSlot* NamedSlot_InnnerVerticalBox;
    class UBP_PalTextBlock_C* Text_Title;
    FDataTableRowHandle titleMsgId;

    void OnInitialized();
    void ExecuteUbergraph_WBP_CharaCre_ListContent(int32 EntryPoint);
};

#endif
