#ifndef UE4SS_SDK_BP_AIAction_Visitor_WaitInBaseCamp_Guardman_HPP
#define UE4SS_SDK_BP_AIAction_Visitor_WaitInBaseCamp_Guardman_HPP

class UBP_AIAction_Visitor_WaitInBaseCamp_Guardman_C : public UBP_AIAction_CanCombatBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector BaseCampLocation;
    FVector PrevLocation;
    class UPalVisitorFormationMoveModule* FormationMoveModule;
    class APalCharacter* VisitorLeader;

    void IsVisitorLeaderTalking(bool& IsTalking);
    void Tick Move to Base Camp(class AActor* ControlledPawn, float DeltaTime);
    void SoundEvent(FVector EmitLocation);
    void Fun_Damage_AIResponse(FPalDamageResult DamageResult);
    void SightCheckAndResponse(EPalAIResponseType Current, bool OverrideIsDamage, bool& ChangeNextAction);
    void ActionStart(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void ActionResume(class APawn* ControlledPawn);
    void OnLeaderArrived();
    void ExecuteUbergraph_BP_AIAction_Visitor_WaitInBaseCamp_Guardman(int32 EntryPoint);
};

#endif
