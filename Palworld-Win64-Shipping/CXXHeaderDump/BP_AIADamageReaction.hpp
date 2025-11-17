#ifndef UE4SS_SDK_BP_AIADamageReaction_HPP
#define UE4SS_SDK_BP_AIADamageReaction_HPP

class UBP_AIADamageReaction_C : public UPalAIDamageReactionComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    TSoftObjectPtr<UPalAIActionComponent> PalAIActionComponent;
    TSoftObjectPtr<UPalDamageReactionComponent> DamageReactionComponent;
    class UPalDamageReactionComponent* LocalDamageReactionComponent;
    TArray<class TSubclassOf<UPalAIActionBase>> OnDamageIgnoreAIActionArray;
    double StepPercentage;
    class APalCharacter* DefaultPawn;
    bool IsWaitStepCoolTime;
    TSubclassOf<class UPalAIActionBase> DefaultAIActionDeathClass;

    void IsNooseTrapAction(bool& IsNoose);
    void OnHitNooseTrap(class AActor* TrapActor, FVector FixPos);
    void OnChangeTrapMovingPanel(bool Exist);
    void GetCharacterParam(class UPalCharacterParameterComponent*& CPC);
    void OnChangeTrapLegHold(bool Exist);
    void IsPlayElecShockAction(bool& IsSlecShock);
    void GetSelfPawn(class AActor*& Actor);
    void CheckIgnoreAction(bool& IsIgnore);
    void HasSideStep(bool& HasSideStep);
    void IsRiding(bool& IsRiding);
    void OnEachDamage(FPalEachDamageRactionInfo EachReactionInfo);
    void OnDamageReaction(FPalDamageRactionInfo ReactionInfo);
    void OnSleep(int32 LastDamage);
    void OnDead(FPalDeadInfo DeadInfo);
    void Setup_AIDamageReaction();
    void Reset_AIDamageReaction();
    void StartStepCoolTime();
    void ExecuteUbergraph_BP_AIADamageReaction(int32 EntryPoint);
};

#endif
