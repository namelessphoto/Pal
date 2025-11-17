#ifndef UE4SS_SDK_BP_ActionArchitecture_Player_HPP
#define UE4SS_SDK_BP_ActionArchitecture_Player_HPP

class UBP_ActionArchitecture_Player_C : public UBP_ActionInteractBase_Player_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FName flagName;
    class AActor* HammerActor;

    void OnMontageEnd();
    void OnEndAction();
    void OnBeginAction();
    void ExecuteUbergraph_BP_ActionArchitecture_Player(int32 EntryPoint);
};

#endif
