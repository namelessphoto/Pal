#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ChaosRemovalEventData.generated.h"

USTRUCT(BlueprintType)
struct FChaosRemovalEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Mass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ParticleIndex;
    
    GEOMETRYCOLLECTIONENGINE_API FChaosRemovalEventData();
};

