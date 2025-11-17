#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ChaosCrumblingEvent.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct CHAOSSOLVERENGINE_API FChaosCrumblingEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UPrimitiveComponent* Component;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Location;
    
    UPROPERTY(BlueprintReadOnly)
    FQuat Orientation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector LinearVelocity;
    
    UPROPERTY(BlueprintReadOnly)
    FVector AngularVelocity;
    
    UPROPERTY(BlueprintReadOnly)
    float Mass;
    
    UPROPERTY(BlueprintReadOnly)
    FBox LocalBounds;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<int32> Children;
    
    FChaosCrumblingEvent();
};

