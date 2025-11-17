#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalRandomIncidentObjectPlacement.generated.h"

class UPalRandomIncidentPlacementDropItemDataComponent;
class UPalRandomIncidentPlacementEggDataComponent;

UCLASS()
class PAL_API APalRandomIncidentObjectPlacement : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    TArray<UPalRandomIncidentPlacementEggDataComponent*> Eggs;
    
    UPROPERTY(Instanced)
    TArray<UPalRandomIncidentPlacementDropItemDataComponent*> DropItems;
    
public:
    APalRandomIncidentObjectPlacement(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    TArray<UPalRandomIncidentPlacementEggDataComponent*> GetEggDataComponents() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UPalRandomIncidentPlacementDropItemDataComponent*> GetDropItemDataComponents() const;
    
};

