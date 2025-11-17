#ifndef UE4SS_SDK_WBP_Fishing_AreaRank_HPP
#define UE4SS_SDK_WBP_Fishing_AreaRank_HPP

class UWBP_Fishing_AreaRank_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Out;
    class UWidgetAnimation* Anm_In;
    class UWidgetAnimation* Anm_Rank_1to4;
    class UImage* BaseLineC;
    class UImage* BaseLineC_Bloom;
    class UImage* BaseLineL;
    class UImage* BaseLineL_Bloom;
    class UImage* BaseLineR;
    class UImage* BaseLineR_Bloom;
    class UImage* Image_Base;
    class UImage* Image_Base_Add;
    class UBP_PalTextBlock_C* Text_Rank;
    bool IsShow;

    void SetDifficulty(EPalFishingSpotDifficultyType DifficultyType);
    void AnmEvent_In();
    void AnmEvent_Out();
    void AnmEvent_Rank(EPalFishingSpotDifficultyType Difficulty);
    void ExecuteUbergraph_WBP_Fishing_AreaRank(int32 EntryPoint);
};

#endif
