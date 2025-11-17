#ifndef UE4SS_SDK_BP_AIAction_Visitor_TravelToBaseCamp_HPP
#define UE4SS_SDK_BP_AIAction_Visitor_TravelToBaseCamp_HPP

class UBP_AIAction_Visitor_TravelToBaseCamp_C : public UBP_AIAction_CanCombatBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector BaseCampLocation;
    bool DashMode;
    FBP_AIAction_Visitor_TravelToBaseCamp_COnArrivedTargetPoint OnArrivedTargetPoint;
    void OnArrivedTargetPoint();
    FVector PrevLocation;
    double StuckElapsedTime;
    FBP_AIAction_Visitor_TravelToBaseCamp_COnStuck OnStuck;
    void OnStuck();
    bool IsStuck;

    void Tick Move to Base Camp(class AActor* ControlledPawn, float DeltaTime);
    void SoundEvent(FVector EmitLocation);
    void SightCheckAndResponse(EPalAIResponseType Current, bool OverrideIsDamage, bool& ChangeNextAction);
    void ActionStart(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionAbort(class APawn* ControlledPawn);
    void ActionPause(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void ActionResume(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIAction_Visitor_TravelToBaseCamp(int32 EntryPoint);
    void OnStuck__DelegateSignature();
    void OnArrivedTargetPoint__DelegateSignature();
};

#endif
