#ifndef UE4SS_SDK_WBP_Arena_PalSelect_Ready_HPP
#define UE4SS_SDK_WBP_Arena_PalSelect_Ready_HPP

class UWBP_Arena_PalSelect_Ready_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Select;
    class UWidgetAnimation* Anm_Ready;
    class UBP_PalTextBlock_C* BP_PalTextBlock_PalCount;

    void SetPalCount(int32 Current, int32 Max);
    void Ready();
    void ExecuteUbergraph_WBP_Arena_PalSelect_Ready(int32 EntryPoint);
};

#endif
