#ifndef UE4SS_SDK_WBP_IngameConstruction_Num_HPP
#define UE4SS_SDK_WBP_IngameConstruction_Num_HPP

class UWBP_IngameConstruction_Num_C : public UUserWidget
{
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_1;
    class UBP_PalTextBlock_C* BPPalTextBlock_Num4;
    class UBP_PalTextBlock_C* BPPalTextBlock_Num5;
    FColor errorColor;

    void SetNumInternal(class UBP_PalTextBlock_C* targetText, int32 inNum);
    void SetNums(int32 RequiredNum, int32 MaxNum);
};

#endif
