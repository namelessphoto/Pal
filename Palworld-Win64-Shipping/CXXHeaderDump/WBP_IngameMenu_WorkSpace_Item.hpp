#ifndef UE4SS_SDK_WBP_IngameMenu_WorkSpace_Item_HPP
#define UE4SS_SDK_WBP_IngameMenu_WorkSpace_Item_HPP

class UWBP_IngameMenu_WorkSpace_Item_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_EnableToDisable;
    class UBP_PalTextBlock_C* BP_PalTextBlock_Name;
    class UBP_PalTextBlock_C* BP_PalTextBlock_Num;
    class UImage* Icon;

    void Setup(FName ItemStaticId, int32 requireNum);
    void ExecuteUbergraph_WBP_IngameMenu_WorkSpace_Item(int32 EntryPoint);
};

#endif
