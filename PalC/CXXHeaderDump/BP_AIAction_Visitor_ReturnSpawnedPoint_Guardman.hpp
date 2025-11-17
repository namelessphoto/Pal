#ifndef UE4SS_SDK_BP_AIAction_Visitor_ReturnSpawnedPoint_Guardman_HPP
#define UE4SS_SDK_BP_AIAction_Visitor_ReturnSpawnedPoint_Guardman_HPP

class UBP_AIAction_Visitor_ReturnSpawnedPoint_Guardman_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector Goal;
    class UPalVisitorFormationMoveModule* FormationMoveModule;

    void ActionStart(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void カスタムイベント_0(FPalInstanceID ID);
    void カスタムイベント(class UPalVisualEffectBase* VisualEffect);
    void ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint_Guardman(int32 EntryPoint);
};

#endif
