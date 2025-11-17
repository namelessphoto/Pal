#ifndef UE4SS_SDK_WBP_InGame_Match_ArenaResult_HPP
#define UE4SS_SDK_WBP_InGame_Match_ArenaResult_HPP

class UWBP_InGame_Match_ArenaResult_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_RankDown;
    class UWidgetAnimation* Anm_RankUp_1;
    class UWidgetAnimation* Anm_RankUp_0;
    class UWidgetAnimation* Anm_PointCount;
    class UWidgetAnimation* Anm_In;
    class UImage* Image_RankIcon;
    class UImage* Image_RankIcon_Flash;
    class UImage* Image_RankIcon_Next;
    class UImage* Image_RankIcon_Now;
    class UPalProgressBar* PalProgressBar_Now;
    class UProgressBar* ProgressBar_Add;
    class UBP_PalTextBlock_C* Text_Rank;
    class UBP_PalTextBlock_C* Text_RankChange;
    class UBP_PalTextBlock_C* Text_RankPoint_Change;
    class UBP_PalTextBlock_C* Text_RankPoint_Now;
    FPalArenaRankPointChangeResult Result Info;
    bool EnableGaugeUpdate;
    double targetPercent;
    double PrePercent;
    double CurrentProgressUpdateRate;

    void GetRankPointRange(int32& Min, int32& Max);
    void SetEndRank();
    void SetPreRank();
    void SetResult(FPalArenaRankPointChangeResult ResultInfo);
    void Finished_983374E3449FA69C8A2C95B3E3F95F17();
    void Finished_09AA4E344CDB8A2AAEEDDAA1DFFBFCCF();
    void Finished_FD9DA1F141588EF59E9137B935518ADE();
    void Finished_2517530749672A6E0F463DBE32B55F43();
    void Finished_F4F2970F433F3A1F566F1AAB725A91C1();
    void Finished_F1F9C2FF45E5B5A41B0C35AE0BD33A32();
    void Finished_51226DA145C6CE6446AF19BA1F7479C8();
    void Finished_B029AD46493C3D55AC97EF93F4065970();
    void Finished_C04460CD4BD8217F35A6CC8FB90BA4F0();
    void RankNoChangeSequence();
    void RankUpSequence();
    void RankDownSequence();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_InGame_Match_ArenaResult(int32 EntryPoint);
};

#endif
