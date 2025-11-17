#pragma once
#include "CoreMinimal.h"
#include "EPalFarmSkillFruitsState.h"
#include "PalBuildObject.h"
#include "PalBuildObjectFarmSkillFruits.generated.h"

class AActor;
class APalMapObjectFarmSkillFruitsTree;
class UAkAudioEvent;
class UNiagaraSystem;
class UPalMapObjectConcreteModelBase;

UCLASS()
class PAL_API APalBuildObjectFarmSkillFruits : public APalBuildObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UNiagaraSystem* GrowupFX;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* HarvestSE;
    
    UPROPERTY(VisibleInstanceOnly, ReplicatedUsing=OnRepSkillFruitsTree)
    APalMapObjectFarmSkillFruitsTree* SkillFruitsTree;
    
public:
    APalBuildObjectFarmSkillFruits(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnUpdateState(EPalFarmSkillFruitsState NextCropState);
    
    UFUNCTION()
    void OnUpdateProductSlot_ServerInternal(int32 ProductIndex, FName StaticItemId);
    
    UFUNCTION()
    void OnTriggerInteractHarvest(int32 ProductIndex, AActor* OtherActor);
    
    UFUNCTION()
    void OnSetConcreteModelAfterAvailable(UPalMapObjectConcreteModelBase* ConcreteModel);
    
    UFUNCTION()
    void OnRepSkillFruitsTree();
    
};

