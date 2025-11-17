#ifndef UE4SS_SDK_WBP_CrimeList_HPP
#define UE4SS_SDK_WBP_CrimeList_HPP

class UWBP_CrimeList_C : public UUserWidget
{
    class UBP_PalTextBlock_C* BP_PalTextBlock_WantedPrize;
    class UVerticalBox* VerticalBox_0;
    class UWBP_CrimeList_RankGauge_C* WBP_CrimeList_RankGauge;
    class UWBP_CrimeList_RankGauge_C* WBP_CrimeList_RankGauge_1;
    class UWBP_CrimeList_RankGauge_C* WBP_CrimeList_RankGauge_2;
    class UWBP_CrimeList_RankGauge_C* WBP_CrimeList_RankGauge_3;
    class UWBP_CrimeList_RankGauge_C* WBP_CrimeList_RankGauge_4;

    void SetCrimeList(TArray<FName>& CrimeList);
    void RemoveAllCrime();
    void SortCrime();
    void SetPrizeMoney(int32 Money);
};

#endif
