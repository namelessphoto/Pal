#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalNetworkTransmitterDelaySpawnInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPalNetworkTransmitterDelaySpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid SpawnGUID;
    
    UPROPERTY()
    AActor* SpawnActor;
    
    PAL_API FPalNetworkTransmitterDelaySpawnInfo();
};

