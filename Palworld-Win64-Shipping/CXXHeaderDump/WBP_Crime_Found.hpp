#ifndef UE4SS_SDK_WBP_Crime_Found_HPP
#define UE4SS_SDK_WBP_Crime_Found_HPP

class UWBP_Crime_Found_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Open;
    class UVerticalBox* VerticalBox_0;
    bool Displaying;
    TArray<FName> Crime Ids;

    void Finished_DEA8290E42785E70DA2914B20F7C172E();
    void SetCrimesFound(const TArray<FName>& CrimeIds);
    void ClearFoundList();
    void ExecuteUbergraph_WBP_Crime_Found(int32 EntryPoint);
};

#endif
