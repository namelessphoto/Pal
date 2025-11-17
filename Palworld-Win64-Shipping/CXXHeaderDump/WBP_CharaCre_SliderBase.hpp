#ifndef UE4SS_SDK_WBP_CharaCre_SliderBase_HPP
#define UE4SS_SDK_WBP_CharaCre_SliderBase_HPP

class UWBP_CharaCre_SliderBase_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Base;
    class UNamedSlot* SliderSlot;
    class UBP_PalTextBlock_C* Text_Slider;
    class UBP_PalTextBlock_C* Text_SliderNum;
    FDataTableRowHandle MsgID;

    void SetValue(int32 NewValue);
    void OnInitialized();
    void ExecuteUbergraph_WBP_CharaCre_SliderBase(int32 EntryPoint);
};

#endif
