#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalMapObjectModelInitializeExtraParameters.h"
#include "PalMapObjectSpawnRequestHandler.generated.h"

UCLASS()
class UPalMapObjectSpawnRequestHandler : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPalMapObjectModelInitializeExtraParameters ExtraParameters;
    
    UPalMapObjectSpawnRequestHandler();

};

