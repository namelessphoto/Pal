#ifndef UE4SS_SDK_BP_AIAction_NPC_CombatBase_HPP
#define UE4SS_SDK_BP_AIAction_NPC_CombatBase_HPP

class UBP_AIAction_NPC_CombatBase_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AActor* TargetActor;
    class APalCharacter* SelfActor;
    class UPalAICombatModule* CombatModule;
    FVector SpawnerLocation;
    double ReturnTerritoryRadius;
    double tempDeltaTime;
    class UPalStateMachine* StateMachine;
    bool IsMeleeWeapon;
    double Const_DownRayDistance;
    FVector preLocation;
    double StackTimer;
    int32 StackCount;
    double Const_StackTime;

    void Check Stack(double InDeltaTime, bool& Stack);
    void RayCheckToGround(FVector& Location);
    void IsTargetOnSea(bool& OnSea);
    void Is Alive Target Actor(bool& Alive);
    void IsEndCurrentState(bool& IsEnd);
    void FindTargetNearPoint(TArray<FVector>& PointList);
    void GetWeaponHandleRef(class UPalNPCAIWeaponHandle*& WeaponHandle);
    void LineTraceTarget(bool& HitToTarget);
    void AddCombatState(TSubclassOf<class UPalStateMachineStateBase_BlueprintBase> Class);
    void GetMovementComponentRef(class UPalCharacterMovementComponent*& Movement);
    void GetBodyActionComponentRef(class UPalActionComponent*& ActionComp);
    void IsNearTarget(double Distance, bool ignoreHeight, bool& Near);
    void TargetChange();
    void MoveToTarget(bool& IsNearTarget);
    void TargetPlayerCameraCheck(bool& AttackAble);
    void DamageResponseForCombat(FPalDamageResult DmgResult);
    void SightCheckAndResponseForCombat(bool& ChangeNextAction);
    void GetLeaderBB(class UBP_PalAIBlackboard_Common_C*& LeaderBB);
    void ChangeReturnMode(bool& ChangeSuccess);
    void GetControllerRef(class ABP_NPCAIController_C*& NPCAICon);
    void TickFinishCheck(bool& ActionFinish);
    void ActionStart(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void ActionPause(class APawn* ControlledPawn);
    void Event_OnDead(FPalDeadInfo DeadInfo);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionAbort(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIAction_NPC_CombatBase(int32 EntryPoint);
};

#endif
