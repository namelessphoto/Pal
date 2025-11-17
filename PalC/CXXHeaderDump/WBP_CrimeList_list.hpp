#ifndef UE4SS_SDK_WBP_CrimeList_list_HPP
#define UE4SS_SDK_WBP_CrimeList_list_HPP

class UWBP_CrimeList_list_C : public UUserWidget
{
    class UBP_PalTextBlock_C* BP_PalTextBlock_Count;
    class UBP_PalTextBlock_C* BP_PalTextBlock_CrimeName;

    void SetCrime(FName CrimeId, int32 CrimeCount);
};

#endif
