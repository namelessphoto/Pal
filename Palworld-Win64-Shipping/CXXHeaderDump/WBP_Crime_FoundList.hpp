#ifndef UE4SS_SDK_WBP_Crime_FoundList_HPP
#define UE4SS_SDK_WBP_Crime_FoundList_HPP

class UWBP_Crime_FoundList_C : public UUserWidget
{
    class UBP_PalTextBlock_C* BP_PalTextBlock_CrimeName;

    void SetCrimeName(FName CrimeId);
};

#endif
