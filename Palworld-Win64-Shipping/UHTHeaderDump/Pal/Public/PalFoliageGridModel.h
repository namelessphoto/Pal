#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalFoliageGridInstanceMap.h"
#include "PalFoliageInstanceId.h"
#include "PalFoliageGridModel.generated.h"

class UPalMapObjectFoliageModel;

UCLASS()
class PAL_API UPalFoliageGridModel : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FName, UPalMapObjectFoliageModel*> FoliageModelMapInServer;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FName, FPalFoliageGridInstanceMap> InstanceMapByComponentId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FVector, FPalFoliageInstanceId> InstanceIdMapByLocation;
    
public:
    UPalFoliageGridModel();

};

