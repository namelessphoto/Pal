#ifndef UE4SS_SDK_BP_OtomoPalHolderComponentForNPC_HPP
#define UE4SS_SDK_BP_OtomoPalHolderComponentForNPC_HPP

class UBP_OtomoPalHolderComponentForNPC_C : public UBP_OtomoPalHolderComponent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01A0 (size: 0x8)

    bool ActivateCurrentOtomo(FTransform SpawnTransform);
    void GetAIClass(TSubclassOf<class AAIController>& Class);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_OtomoPalHolderComponentForNPC(int32 EntryPoint);
}; // Size: 0x1A8

#endif
