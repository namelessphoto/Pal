#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CacheEventBase.h"
#include "CollisionEvent.generated.h"

USTRUCT()
struct FCollisionEvent : public FCacheEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Location;
    
    UPROPERTY()
    FVector AccumulatedImpulse;
    
    UPROPERTY()
    FVector Normal;
    
    UPROPERTY()
    FVector Velocity1;
    
    UPROPERTY()
    FVector Velocity2;
    
    UPROPERTY()
    FVector DeltaVelocity1;
    
    UPROPERTY()
    FVector DeltaVelocity2;
    
    UPROPERTY()
    FVector AngularVelocity1;
    
    UPROPERTY()
    FVector AngularVelocity2;
    
    UPROPERTY()
    float Mass1;
    
    UPROPERTY()
    float Mass2;
    
    UPROPERTY()
    float PenetrationDepth;
    
    CHAOSCACHING_API FCollisionEvent();
};

