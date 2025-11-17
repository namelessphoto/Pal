#ifndef UE4SS_SDK_WBP_Quest_Objective_HPP
#define UE4SS_SDK_WBP_Quest_Objective_HPP

class UWBP_Quest_Objective_C : public UUserWidget
{
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_2;
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_3;
    class UBP_PalRichTextBlock_C* RichText_Objective;

    void Setup(FText ProgressDesc, FText Progress);
};

#endif
