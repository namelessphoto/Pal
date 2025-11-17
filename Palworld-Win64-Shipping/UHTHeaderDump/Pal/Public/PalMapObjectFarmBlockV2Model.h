#pragma once
#include "CoreMinimal.h"
#include "EPalFarmCropState.h"
#include "EPalMapObjectItemCollectableType.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectItemCollectableInterface.h"
#include "ReactivePropertyFloat.h"
#include "PalMapObjectFarmBlockV2Model.generated.h"

class UPalMapObjectFarmBlockV2ModelStateBehaviourMachine;

UCLASS()
class PAL_API UPalMapObjectFarmBlockV2Model : public UPalMapObjectConcreteModelBase, public IPalMapObjectItemCollectableInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateStateDelegate, EPalFarmCropState, LastState, EPalFarmCropState, NextState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FNotifySimpleDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FUpdateStateDelegate OnUpdateStateDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite)
    FReactivePropertyFloat CropProgressRate;
    
    UPROPERTY(BlueprintReadWrite)
    FReactivePropertyFloat WaterStackRate;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    UPalMapObjectFarmBlockV2ModelStateBehaviourMachine* StateBehaviourMachine;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FName CurrentCropDataId;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_CurrentState)
    EPalFarmCropState CurrentState;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_CropProgressRateValue)
    float CropProgressRateValue;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_WaterStackRateValue)
    float WaterStackRateValue;
    
public:
    UPalMapObjectFarmBlockV2Model();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnUpdateWaterStackRate(const float UpdatedRate);
    
    UFUNCTION()
    void OnUpdateCropProgressRate(const float ProgressRate);
    
protected:
    UFUNCTION()
    void OnRep_WaterStackRateValue();
    
    UFUNCTION()
    void OnRep_CurrentState();
    
    UFUNCTION()
    void OnRep_CropProgressRateValue();
    
public:
    UFUNCTION(BlueprintPure)
    EPalFarmCropState GetCurrentState() const;
    
    UFUNCTION(BlueprintPure)
    FName GetCurrentCropDataId() const;
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    EPalMapObjectItemCollectableType GetItemCollectableType() const override PURE_VIRTUAL(GetItemCollectableType, return EPalMapObjectItemCollectableType::Pickup;);
    
};

