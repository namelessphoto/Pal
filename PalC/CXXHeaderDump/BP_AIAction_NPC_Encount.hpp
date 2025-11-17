#ifndef UE4SS_SDK_BP_AIAction_NPC_Encount_HPP
#define UE4SS_SDK_BP_AIAction_NPC_Encount_HPP

class UBP_AIAction_NPC_Encount_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AActor* TrgetActor;
    bool Propagation;
    class UPalShooterComponent* Shooter;
    class UBP_OtomoPalHolderComponent_C* OtomoHolder;

    void GetShooter(class UPalShooterComponent*& ShooterComponent);
    void ActionStart(class APawn* ControlledPawn);
    void OnWeaponChanged(class APalWeaponBase* Weapon);
    void StartCombat();
    void ExecuteUbergraph_BP_AIAction_NPC_Encount(int32 EntryPoint);
};

#endif
