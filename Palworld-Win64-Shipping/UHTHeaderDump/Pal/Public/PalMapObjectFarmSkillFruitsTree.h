#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EPalFarmSkillFruitsState.h"
#include "PalFarmSkillFruitsTreeGrowupProcessSet.h"
#include "PalMapObjectFarmSkillFruitsTree.generated.h"

class UPalFarmSkillFruitsProductInteractiveSphereComponent;
class UPalFarmSkillFruitsVisualComponent;

UCLASS()
class PAL_API APalMapObjectFarmSkillFruitsTree : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FTriggerInteractPickupItemDelegate, AActor*, Actor);
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<FPalFarmSkillFruitsTreeGrowupProcessSet> GrowupProcessSets;
    
private:
    UPROPERTY(ReplicatedUsing=OnRep_ProductStaticItemIds)
    TArray<FName> ProductStaticItemIds;
    
    UPROPERTY(ReplicatedUsing=OnRep_CurrentState)
    EPalFarmSkillFruitsState CurrentState;
    
public:
    APalMapObjectFarmSkillFruitsTree(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnRep_ProductStaticItemIds(TArray<FName> PrevIds);
    
    UFUNCTION()
    void OnRep_CurrentState();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    TArray<UPalFarmSkillFruitsVisualComponent*> GetVisualComponents() const;
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    TArray<UPalFarmSkillFruitsProductInteractiveSphereComponent*> GetInteractiveSphereComponents() const;
    
};

