#ifndef UE4SS_SDK_WBP_Arena_PlayerRank_HPP
#define UE4SS_SDK_WBP_Arena_PlayerRank_HPP

class UWBP_Arena_PlayerRank_C : public UUserWidget
{
    class UWidgetAnimation* Anm_In;
    class UBP_PalTextBlock_C* BP_PalTextBlock_Rank;
    class UImage* Image_RankIcon;
    class UBP_PalTextBlock_C* Text_RankPointNum;

    void OnUpdateRankPoint(class UPalIndividualCharacterParameter* individualParam, int32 Point);
    void Setup();
};

#endif
