#ifndef UE4SS_SDK_BP_AIAction_CanCombatBase_HPP
#define UE4SS_SDK_BP_AIAction_CanCombatBase_HPP

class UBP_AIAction_CanCombatBase_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalDamageReactionComponent* DamageReaction;
    EPalAIResponseType CurrentBehavior;
    bool NextCombatModeChange;
    TSubclassOf<class UPalAIActionBase> TempEncountClass;
    class UPalAISensorComponent* TSCache_AISensorComponent;
    bool KeepDamageReaction;

    void SelfMoveToLocation(FVector Goal);
    void IsLeader(bool& Leader);
    void OnSquadMemberDeadEvent(FPalDeadInfo DeadInbfo);
    void StartFriendlyLookatMode(class AActor* TargetActor);
    void GetLeaderPalBrackBoard(class UBP_PalAIBlackboard_Common_C*& BB);
    void Fun_Damage_AIResponse(FPalDamageResult DamageResult);
    void SearchDeadEdibleBody(bool& ChangeNextAction);
    void SightCheckAndResponse(EPalAIResponseType Current, bool OverrideIsDamage, bool& ChangeNextAction);
    void SightResponse(class AActor* Target, EPalAIResponseType ResponseType, bool& ChangeNextAction);
    void SightCheck(EPalAIResponseType CurrentState, bool OverrideIsDamage, class AActor*& Target, EPalAIResponseType& ResponseType);
    void GetLeader(class APalCharacter*& Leader);
    void GetSelfPalBlackBoard(class UBP_PalAIBlackboard_Common_C*& PalBlackBoard);
    void SoundEvent(FVector EmitLocation);
    void DamageEventToCombatMode(FPalDamageResult DamageResult);
    void StartEscapeMode(class AActor* TargetActor);
    void StartWarningMode(FVector AttentionLocation);
    void StartCombatMode(class AActor* TargetActor);
    void ActionResume(class APawn* ControlledPawn);
    void ActionStart(class APawn* ControlledPawn);
    void ActionPause(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void ActionAbort(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIAction_CanCombatBase(int32 EntryPoint);
};

#endif
