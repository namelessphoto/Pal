#ifndef UE4SS_SDK_BP_Status_RarePal_HPP
#define UE4SS_SDK_BP_Status_RarePal_HPP

class UBP_Status_RarePal_C : public UPalStatusBase
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnBeginStatus();
    void ExecuteUbergraph_BP_Status_RarePal(int32 EntryPoint);
};

#endif
