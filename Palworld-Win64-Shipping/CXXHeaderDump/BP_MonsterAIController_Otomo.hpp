#ifndef UE4SS_SDK_BP_MonsterAIController_Otomo_HPP
#define UE4SS_SDK_BP_MonsterAIController_Otomo_HPP

class ABP_MonsterAIController_Otomo_C : public ABP_MonsterAIControllerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 OtomoSlotIndex;
    TMap<class EPalAIActionType, class UPalAIActionBase*> PlayingAIActionMap;
    FTimerHandle RegeneTimer;
    FVector FollowInterpolatedPos;
    double FollowSpeed;
    bool IsReturningFromFarFlag;

    bool IsReturningFromFar();
    TSubclassOf<class UPalAIControllerWorkerModule> GetWorkerModuleClass();
    void OnDamageOtomo(FPalDamageResult DamageResult);
    void CanCoop(bool& CanCoop);
    void Play Otomo Default Composite Action();
    void Set Combat Action(class UPalAIActionCombatBase*& AIAction);
    void SetHateEnemiesToOtomo();
    void Set Combat Action And Target(class AActor* Target, class UPalAIActionCombatBase*& AIAction);
    void Attack For Enemy With Parameter(class AActor* Target, int32 SkillSlotID);
    void AttackForEnemy(class AActor* Target);
    void OnCoopCanceled();
    void OnCoopFinished(class UPalAIActionBase* action);
    void OnCoopRequest();
    void OnPressCoopButton();
    void Setup(int32 HolderSlotID);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
    void Regene_CustomEvent();
    void OnDeadDelegate_イベント_0(FPalDeadInfo DeadInfo);
    void ShowBaseCampLog(const FPalMonsterControllerBaseCampLogContent& Content);
    void OnSetTrainer(class APalCharacter* InCharacter);
    void ReceivePossess(class APawn* PossessedPawn);
    void FinishCoopAction();
    void OnTrainer(class APalCharacter* InCharacter);
    void SetIsReturningFromFar(bool IsReturningFromFar);
    void ExecuteUbergraph_BP_MonsterAIController_Otomo(int32 EntryPoint);
};

#endif
