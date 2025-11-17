#ifndef UE4SS_SDK_BP_AIAction_NPCSpawnOtomo_HPP
#define UE4SS_SDK_BP_AIAction_NPCSpawnOtomo_HPP

class UBP_AIAction_NPCSpawnOtomo_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AActor* TargetActor;
    bool IsRutnMode;

    void ActionStart(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIAction_NPCSpawnOtomo(int32 EntryPoint);
};

#endif
