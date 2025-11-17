#pragma once
#include "CoreMinimal.h"
#include "PalAIActionBase.h"
#include "PalAIActionWorkerInterruptInterface.h"
#include "PalDeadInfo.h"
#include "Templates/SubclassOf.h"
#include "PalAIActionCombatBase.generated.h"

class AActor;
class APalAIController;
class APalCharacter;
class UPalAICombatModule;
class UPalActionBase;
class UPalActionComponent;
class UPalActiveSkillSlot;
class UPalCharacterParameterComponent;
class UPalStaticCharacterParameterComponent;

UCLASS(Abstract, EditInlineNew)
class PAL_API UPalAIActionCombatBase : public UPalAIActionBase, public IPalAIActionWorkerInterruptInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCombatFinishDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FCombatFinishDelegate OnCombatFinish;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    APalCharacter* SelfActor;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalAICombatModule* CombatModule;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool NextIsWaza;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    int32 NextWazaSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TSubclassOf<UPalActionBase> NextActionClass;
    
    UPROPERTY(Transient)
    bool bForcePartnerSkill;
    
private:
    UPROPERTY(VisibleAnywhere)
    int32 InterruptSkillSlotID;
    
    UPROPERTY(VisibleAnywhere)
    bool bInterruptSkill;
    
    UPROPERTY(VisibleAnywhere)
    bool bInterruptSkillWaiting;
    
public:
    UPalAIActionCombatBase();

protected:
    UFUNCTION(BlueprintCallable)
    void StartNextAction_Event(const UPalActionComponent* ActionComponent);
    
    UFUNCTION(BlueprintCallable)
    void SkillSlotSetUp();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTargetAndNextAction(AActor* Target);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool PreTickFinishCheck();
    
    UFUNCTION(BlueprintCallable)
    void PlayActionWhenDarknessStatus();
    
    UFUNCTION(BlueprintCallable)
    void OnDeadDeledate_Event(FPalDeadInfo DeadInfo);
    
    UFUNCTION(BlueprintCallable)
    void MoveToTarget();
    
    UFUNCTION(BlueprintPure)
    bool LineTraceTarget();
    
public:
    UFUNCTION(BlueprintCallable)
    void InterruptAction(int32 SkillSlotID);
    
protected:
    UFUNCTION(BlueprintPure)
    UPalStaticCharacterParameterComponent* GetStaticParamCompRef();
    
    UFUNCTION(BlueprintPure)
    UPalActiveSkillSlot* GetSkillSlotRef();
    
    UFUNCTION(BlueprintPure)
    UPalCharacterParameterComponent* GetParamCompRef();
    
    UFUNCTION(BlueprintPure)
    APalAIController* GetControllerRef();
    
    UFUNCTION(BlueprintPure)
    UPalActionComponent* GetActorActionComponentRef();
    
    UFUNCTION(BlueprintCallable)
    void ChangeNextAction();
    

    // Fix for true pure virtual functions not being implemented
};

