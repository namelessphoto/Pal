#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=RandomStream -FallbackName=RandomStream
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ActionDynamicParameter.h"
#include "EPalPassiveSkillEffectType.h"
#include "PalNetArchive.h"
#include "PalActionBase.generated.h"

class AActor;
class APalCharacter;
class APalMapObject;
class UPalIndividualCharacterParameter;
class UPalMapObjectModel;

UCLASS(Blueprintable)
class UPalActionBase : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FActionEndDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FActionEndDelegate OnActionEndDelegate;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bIsEndAction;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bCanDeleteInstance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCanInterruptWaza;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsChangeWorkAnimPlayRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsChangeWalkableFloorAngle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ActionWalkableFloorAngle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsDisableNavWalk;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsEnableAutoBlink;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsReflectForClient;
    
private:
    UPROPERTY()
    FActionDynamicParameter DynamicParameter;
    
public:
    UPalActionBase();

    UFUNCTION(BlueprintNativeEvent)
    void TickAction(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimRateScale(FName flagName, float AnimRateScale);
    
    UFUNCTION(BlueprintCallable)
    void SendNotify(FName NotifyName);
    
private:
    UFUNCTION()
    void OnUpdatePassiveSkill(EPalPassiveSkillEffectType EffectType, float Value);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnQueueAction();
    
private:
    UFUNCTION()
    void OnEndPassiveSkill(EPalPassiveSkillEffectType EffectType);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnEndAction();
    
private:
    UFUNCTION()
    void OnChangeCurrentWorkSuitability();
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnBreakAction();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnBeginAction();
    
    UFUNCTION(BlueprintPure)
    bool IsReflectedForClient();
    
    UFUNCTION()
    bool IsInServer() const;
    
    UFUNCTION()
    bool IsInLocalControlled() const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsEndAction();
    
    UFUNCTION(BlueprintPure)
    UPalMapObjectModel* GetTargetMapObjectModel() const;
    
    UFUNCTION(BlueprintPure)
    FGuid GetTargetMapObjectInstanceId() const;
    
    UFUNCTION(BlueprintPure)
    APalMapObject* GetTargetMapObject() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetTargetLocation(bool bUseAttackerOverride) const;
    
    UFUNCTION(BlueprintPure)
    FString GetSimpleName() const;
    
    UFUNCTION(BlueprintPure)
    FRandomStream GetRandomStream() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AActor*> GetOtherActionTargets() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetGeneralPurposeIndex() const;
    
    UFUNCTION(BlueprintPure)
    FPalNetArchive GetBlackboard() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetActionVelocity() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetActionTarget() const;
    
    UFUNCTION(BlueprintPure)
    UPalIndividualCharacterParameter* GetActionIndividualCharacterParameter() const;
    
    UFUNCTION(BlueprintPure)
    FGuid GetActionID() const;
    
    UFUNCTION(BlueprintPure)
    APalCharacter* GetActionCharacter() const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool CanStepCancel();
    
    UFUNCTION(BlueprintNativeEvent)
    bool CanNextActionCancel();
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool CanGainSP();
    
    UFUNCTION(BlueprintNativeEvent)
    bool CanDeleteInstance();
    
    UFUNCTION(BlueprintNativeEvent)
    void AnimEventSpawn();
    
    UFUNCTION(BlueprintNativeEvent)
    void AnimEventOther();
    
    UFUNCTION(BlueprintNativeEvent)
    void AnimEventAttack();
    
};

