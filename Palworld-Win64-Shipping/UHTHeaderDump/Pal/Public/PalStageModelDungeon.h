#pragma once
#include "CoreMinimal.h"
#include "PalStageModelBase.h"
#include "PalStageModelDungeon.generated.h"

class UPalDungeonInstanceModel;
class UPalStageModelDungeon;

UCLASS()
class PAL_API UPalStageModelDungeon : public UPalStageModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfMulticastDelegate, UPalStageModelDungeon*, SelfModel);
    
    UPROPERTY(BlueprintAssignable)
    FReturnSelfMulticastDelegate OnRepInstanceModelDelegate;
    
protected:
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_InstanceModel)
    UPalDungeonInstanceModel* InstanceModel;
    
public:
    UPalStageModelDungeon();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_InstanceModel();
    
public:
    UFUNCTION(BlueprintPure)
    UPalDungeonInstanceModel* GetInstanceModel() const;
    
};

