#pragma once
#include "CoreMinimal.h"
#include "EPalFarmSkillFruitsState.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalNetArchive.h"
#include "ReactivePropertyFloat.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectFarmSkillFruitsModel.generated.h"

class UPalItemContainer;
class UPalItemSlot;
class UPalMapObjectFarmSkillFruitsModelStateBehaviourMachine;
class UPalUserWidgetOverlayUI;

UCLASS()
class PAL_API UPalMapObjectFarmSkillFruitsModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateStateDelegate, EPalFarmSkillFruitsState, NextState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateProductSlotDelegate, int32, ProductIndex, FName, StaticItemId);
    
    UPROPERTY(BlueprintAssignable)
    FUpdateStateDelegate OnUpdateStateDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateProductSlotDelegate OnUpdateProductSlotDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite)
    FReactivePropertyFloat SkillFruitsProgressRate;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    UPalMapObjectFarmSkillFruitsModelStateBehaviourMachine* StateBehaviourMachine;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FName PlantedSkillFruitsId;
    
    UPROPERTY(Replicated, Transient)
    TSubclassOf<UPalUserWidgetOverlayUI> MenuUIWidgetClass;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_CurrentState)
    EPalFarmSkillFruitsState CurrentState;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    bool bCanTransportOutProduct;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_SkillFruitsProgressRateValue)
    float SkillFruitsProgressRateValue;
    
public:
    UPalMapObjectFarmSkillFruitsModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void RequestSetCanTransportOutProduct_ServerInternal(const int32 RequestPlayerId, bool bInCanTransportOutProduct);
    
    UFUNCTION()
    void RequestHarvest_ServerInternal(const int32 RequestPlayerId, int32 ProductIndex);
    
    UFUNCTION()
    void OnUpdateSkillFruitsProgressRate(const float ProgressRate);
    
    UFUNCTION()
    void OnUpdateProductSlot(UPalItemSlot* itemSlot);
    
    UFUNCTION()
    void OnUpdateContainerContentInServer(UPalItemContainer* Container);
    
protected:
    UFUNCTION()
    void OnRep_SkillFruitsProgressRateValue();
    
    UFUNCTION()
    void OnRep_CurrentState();
    
private:
    UFUNCTION()
    void NotifyHarvestResult(const FPalNetArchive& Archive);
    
public:
    UFUNCTION(BlueprintPure)
    FName GetPlantedSkillFruitsId() const;
    
    UFUNCTION(BlueprintPure)
    EPalFarmSkillFruitsState GetCurrentState() const;
    
};

