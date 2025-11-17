#ifndef UE4SS_SDK_BP_ActionArchitecture_HPP
#define UE4SS_SDK_BP_ActionArchitecture_HPP

class UBP_ActionArchitecture_C : public UBP_ActionInteractBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AActor* HammerActor;
    FName flagName;

    void OnEndAction();
    void OnBeginAction();
    void ExecuteUbergraph_BP_ActionArchitecture(int32 EntryPoint);
};

#endif
