#ifndef UE4SS_SDK_BP_Status_PalEnhancement_HPP
#define UE4SS_SDK_BP_Status_PalEnhancement_HPP

class UBP_Status_PalEnhancement_C : public UPalStatusBase
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnBeginStatus();
    void OnEndStatus();
    void ExecuteUbergraph_BP_Status_PalEnhancement(int32 EntryPoint);
};

#endif
