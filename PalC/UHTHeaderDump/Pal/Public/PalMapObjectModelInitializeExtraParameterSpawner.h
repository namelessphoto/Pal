#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalMapObjectModelInitializeExtraParameterBase.h"
#include "PalStageInstanceId.h"
#include "PalMapObjectModelInitializeExtraParameterSpawner.generated.h"

UCLASS()
class UPalMapObjectModelInitializeExtraParameterSpawner : public UPalMapObjectModelInitializeExtraParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid OwnerSpawnerLevelObjectInstanceId;
    
    UPROPERTY()
    FPalStageInstanceId OwnerSpawnerStageInstanceId;
    
    UPalMapObjectModelInitializeExtraParameterSpawner();

};

