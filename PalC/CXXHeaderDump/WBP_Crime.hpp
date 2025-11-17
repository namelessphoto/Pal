#ifndef UE4SS_SDK_WBP_Crime_HPP
#define UE4SS_SDK_WBP_Crime_HPP

class UWBP_Crime_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_Crime_Found_C* WBP_Crime_Found;
    class UWBP_Crime_RankUp_C* WBP_Crime_RankUp;
    class UWBP_Crime_Scene_C* WBP_Crime_Scene;
    class UWBP_CrimeList_C* WBP_CrimeList;

    void SetCrime(bool Crime);
    void CrimeBeFound(const TArray<FName>& CrimeIds);
    void ClearCrimeList();
    void ExecuteUbergraph_WBP_Crime(int32 EntryPoint);
};

#endif
