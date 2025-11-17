#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CacheEventBase.h"
#include "TrailingEvent.generated.h"

USTRUCT()
struct FTrailingEvent : public FCacheEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Index;
    
    UPROPERTY()
    FVector Location;
    
    UPROPERTY()
    FVector Velocity;
    
    UPROPERTY()
    FVector AngularVelocity;
    
    UPROPERTY()
    FVector BoundingBoxMin;
    
    UPROPERTY()
    FVector BoundingBoxMax;
    
    CHAOSCACHING_API FTrailingEvent();
};

