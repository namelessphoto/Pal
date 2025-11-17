#ifndef UE4SS_SDK_BP_AIAction_Visitor_TravelToBaseCamp_Guardman_HPP
#define UE4SS_SDK_BP_AIAction_Visitor_TravelToBaseCamp_Guardman_HPP

class UBP_AIAction_Visitor_TravelToBaseCamp_Guardman_C : public UBP_AIAction_CanCombatBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector BaseCampLocation;
    FBP_AIAction_Visitor_TravelToBaseCamp_Guardman_COnArrivedTargetPoint OnArrivedTargetPoint;
    void OnArrivedTargetPoint();
    FVector PrevLocation;
    double StuckElapsedTime;
    FBP_AIAction_Visitor_TravelToBaseCamp_Guardman_COnStuck OnStuck;
    void OnStuck();
    bool IsStuck;
    class UPalVisitorFormationMoveModule* FormationMoveModule;
    class APalCharacter* VisitorLeader;

    void IsVisitorLeaderTalking(bool& IsTalking);
    void Tick Move to Base Camp(class AActor* ControlledPawn, float DeltaTime);
    void SoundEvent(FVector EmitLocation);
    void SightCheckAndResponse(EPalAIResponseType Current, bool OverrideIsDamage, bool& ChangeNextAction);
    void ActionStart(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void ActionResume(class APawn* ControlledPawn);
    void OnLeaderArrived();
    void ExecuteUbergraph_BP_AIAction_Visitor_TravelToBaseCamp_Guardman(int32 EntryPoint);
    void OnStuck__DelegateSignature();
    void OnArrivedTargetPoint__DelegateSignature();
};

#endif
