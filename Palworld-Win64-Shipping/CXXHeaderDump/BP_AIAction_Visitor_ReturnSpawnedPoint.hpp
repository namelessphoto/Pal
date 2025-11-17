#ifndef UE4SS_SDK_BP_AIAction_Visitor_ReturnSpawnedPoint_HPP
#define UE4SS_SDK_BP_AIAction_Visitor_ReturnSpawnedPoint_HPP

class UBP_AIAction_Visitor_ReturnSpawnedPoint_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector Goal;

    void ActionStart(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void カスタムイベント_0(FPalInstanceID ID);
    void カスタムイベント(class UPalVisualEffectBase* VisualEffect);
    void ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint(int32 EntryPoint);
};

#endif
