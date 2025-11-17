#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalMapObjectModelInitializeExtraParameterBase.h"
#include "PalMapObjectModelInitializeExtraParameterSpawnedBy.generated.h"

UCLASS()
class UPalMapObjectModelInitializeExtraParameterSpawnedBy : public UPalMapObjectModelInitializeExtraParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid ByMapObjectModelInstanceId;
    
    UPalMapObjectModelInitializeExtraParameterSpawnedBy();

};

