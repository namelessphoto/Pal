#pragma once
#include "CoreMinimal.h"
#include "PalStageModelBase.h"
#include "PalStageModelBossBattle.generated.h"

class UPalBossBattleInstanceModel;

UCLASS()
class PAL_API UPalStageModelBossBattle : public UPalStageModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_InstanceModel)
    UPalBossBattleInstanceModel* InstanceModel;
    
public:
    UPalStageModelBossBattle();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_InstanceModel();
    
public:
    UFUNCTION(BlueprintPure)
    UPalBossBattleInstanceModel* GetInstanceModel() const;
    
};

