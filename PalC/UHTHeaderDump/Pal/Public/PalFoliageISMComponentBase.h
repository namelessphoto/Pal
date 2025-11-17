#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalDamageInfo.h"
#include "PalFoliageISMComponent.h"
#include "PalFoliageISMComponentBase.generated.h"

class UPalFoliageInstance;
class UPalMapObjectFoliageModel;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalFoliageISMComponentBase : public UPalFoliageISMComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FVector, int32> InstanceIndexMapByLocation;
    
public:
    UPalFoliageISMComponentBase(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void SpawnInstance(UPalFoliageInstance* Instance);
    
    UFUNCTION()
    void OnRemoveInstance(const FName FoliageTypeId, UPalFoliageInstance* Instance);
    
    UFUNCTION()
    void OnRegisterInstance(const FName FoliageTypeId, UPalFoliageInstance* Instance);
    
    UFUNCTION()
    void OnReceiveDamageInClient(const FPalDamageInfo& DamageInfo);
    
    UFUNCTION()
    void OnDisposeModel(UPalMapObjectFoliageModel* Model);
    
    UFUNCTION()
    void DespawnInstance(UPalFoliageInstance* Instance);
    
};

