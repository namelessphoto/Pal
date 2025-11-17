#ifndef UE4SS_SDK_BP_AIAction_RaidBossSummonChant_HPP
#define UE4SS_SDK_BP_AIAction_RaidBossSummonChant_HPP

class UBP_AIAction_RaidBossSummonChant_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    double Const_ActionTime;
    class UPalActionBase* SummonAction;
    int32 MeteorNum;
    FGuid CampID;
    FVector CampLocation;

    void CalcSpawnTransform(int32 Index, int32 MaxNum, FTransform& SpawnTF);
    void ActionStart(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionAbort(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void ActionPause(class APawn* ControlledPawn);
    void ActionResume(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIAction_RaidBossSummonChant(int32 EntryPoint);
};

#endif
