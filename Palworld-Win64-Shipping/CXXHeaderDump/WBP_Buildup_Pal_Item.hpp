#ifndef UE4SS_SDK_WBP_Buildup_Pal_Item_HPP
#define UE4SS_SDK_WBP_Buildup_Pal_Item_HPP

class UWBP_Buildup_Pal_Item_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* IconHaveItem;
    class UBP_PalTextBlock_C* Text_HaveNum;

    void SetIcon(int32 IconIndex);
    void SetNum(int32 Num);
    void SetNumRed(bool IsRed);
    void ExecuteUbergraph_WBP_Buildup_Pal_Item(int32 EntryPoint);
};

#endif
