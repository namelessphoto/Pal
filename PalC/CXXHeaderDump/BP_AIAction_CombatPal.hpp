#ifndef UE4SS_SDK_BP_AIAction_CombatPal_HPP
#define UE4SS_SDK_BP_AIAction_CombatPal_HPP

class UBP_AIAction_CombatPal_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AActor* TargetActor;
    class APalCharacter* SelfActor;
    double tempDeltaSecond;
    TSubclassOf<class UPalActionBase> NextActionClass;
    bool NextIsWaza;
    int32 NextWazaSlotID;
    class UPalAICombatModule* CombatModule;
    bool ShouldSelectWait;
    bool NextIsProvocation;
    bool IsInterrupt;
    int32 InterrputSlotID;
    double cantReachTimer;
    FVector PrevLocation;
    double StackTimer;
    double WarpStackTimer;
    FVector WarpStackPrevLocation;
    double DeadTimer;
    double ApproachTimer;
    double Const_ApproachEndTime;
    double NotActionTimer;
    double Const_FanShapeDegree;
    bool DisableTurn;

    void IsTargetOutOfOilrigRange(bool& OutRange);
    void IsTargetOnSea(bool& OnSea);
    void OnPlayAction(class UPalActionBase* action);
    void NextAction_ByApproachFailure();
    void CheckDeadTimer();
    void GetSelfPalBlackBoard(class UBP_PalAIBlackboard_Common_C*& PalBB);
    void WarpToSpawnerPoint();
    void ResetWorpStackTimer();
    void AddWarpStackTimer();
    void AttackNearestMapObject(bool& ReachAble);
    void PlayWazaAction();
    void FindWazaClass(int32 SlotIndex, TSubclassOf<class UPalActionBase>& WazaAction);
    void TargetIsValid(bool& Valid);
    void Get Next Action Slot ID(int32& SlotId);
    void Interrupt Action(int32 SlotId);
    void ChangeCombatStartLocation(bool& Change);
    void PlayWazaDarknessStatus();
    void PlayerCameraCheck(bool& AttackAble);
    void RemoveDamageResponse();
    void AddDamageResponse();
    void DamageResponseForCombatPal(FPalDamageResult DmgResult);
    void SightCheckAndResponseForCombatPal(bool& ChangeNextAction);
    void MoveToTarget();
    void GetActorActionComponentRef(class UPalActionComponent*& ActionComp);
    void GetStaticParamCompRef(class UPalStaticCharacterParameterComponent*& StaticParamComp);
    void GetSkillSlotRef(class UPalActiveSkillSlot*& SkillSlot);
    void GetControllerRef(class APalAIController*& PalAIController);
    void SetupSkillSlot();
    void ChangeNextAction();
    void TargetChange();
    void ActionStart(class APawn* ControlledPawn);
    void StartNextAction_Event(const class UPalActionComponent* ActionComponent);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionPause(class APawn* ControlledPawn);
    void OnDeadDelegate_Event(FPalDeadInfo DeadInfo);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void OnChildActionFinished(class UPawnAction* action, TEnumAsByte<EPawnActionResult> WithResult);
    void ExecuteUbergraph_BP_AIAction_CombatPal(int32 EntryPoint);
};

#endif
