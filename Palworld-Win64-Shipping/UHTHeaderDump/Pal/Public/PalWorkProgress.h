#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalExpCalcType.h"
#include "PalWorkBase.h"
#include "PalWorkProgress.generated.h"

class UPalWorkProgress;

UCLASS()
class UPalWorkProgress : public UPalWorkBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNotifyWorkProgressDelegate, UPalWorkProgress*, WorkProgress);
    
    UPROPERTY()
    FNotifyWorkProgressDelegate OnUpdateWorkAmountInServerDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FNotifyWorkProgressDelegate OnReflectWorkAmountDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FNotifyWorkProgressDelegate OnChangedInProgressDelegate;
    
protected:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    float RequiredWorkAmount;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_CurrentWorkAmount)
    float CurrentWorkAmount;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float CurrentWorkAmountByLocalPlayer;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    TArray<FGuid> WorkingPlayerUIds;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 WorkExp;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    EPalExpCalcType WorkExpCalcType;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    float AutoWorkSelfAmountBySec;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bNotAllowReactionOnWorkComplete;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float ProgressTimeSinceLastTick;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float TickProcessMinInterval;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_InProgress)
    bool bInProgress;
    
public:
    UPalWorkProgress();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_InProgress();
    
    UFUNCTION()
    void OnRep_CurrentWorkAmount();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsCompleted() const;
    
    UFUNCTION(BlueprintPure)
    float GetRequiredWorkAmount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRemainWorkPredicateTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetRemainWorkAmount() const;
    
    UFUNCTION(BlueprintPure)
    float GetProgressRate() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentWorkAmount() const;
    
};

