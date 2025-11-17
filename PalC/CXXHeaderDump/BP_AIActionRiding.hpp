#ifndef UE4SS_SDK_BP_AIActionRiding_HPP
#define UE4SS_SDK_BP_AIActionRiding_HPP

class UBP_AIActionRiding_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class APalCharacter* RidingCharacter;
    FName RidingSpeedUpFlagName;
    class AActor* OwnerPawn;
    bool bIsRiding;

    void SetRidingCharacter(class APalCharacter* RidingCharacter);
    void ActionStart(class APawn* ControlledPawn);
    void OnCoopReleaseDelegate_イベント_0();
    void ExecuteUbergraph_BP_AIActionRiding(int32 EntryPoint);
};

#endif
