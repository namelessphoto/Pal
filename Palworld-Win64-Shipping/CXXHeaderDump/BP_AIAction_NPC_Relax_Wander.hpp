#ifndef UE4SS_SDK_BP_AIAction_NPC_Relax_Wander_HPP
#define UE4SS_SDK_BP_AIAction_NPC_Relax_Wander_HPP

class UBP_AIAction_NPC_Relax_Wander_C : public UBP_AIAction_NPC_Relax_PathWalk_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector WalkAreaCenter;
    double WalkRadius;
    double WaitSecMin;
    double WaitSecMax;
    TArray<FVector> NodeList;
    int32 WalkAreaSplit Num;

    void OnStuck();
    void Get Arrivable Location(FVector V, bool& Result, FVector& Location);
    void TryGetTargetLocation(int32 TryCount, bool& Result, FVector& Location);
    void SelectTargetNode(FVector& Location, int32& Index);
    void OnTargetPointUpdateStart();
    void ActionStart(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIAction_NPC_Relax_Wander(int32 EntryPoint);
};

#endif
