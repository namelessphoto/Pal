#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "LastLocationGatherInfo.generated.h"

class UNetConnection;

USTRUCT(BlueprintType)
struct FLastLocationGatherInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    UNetConnection* Connection;
    
    UPROPERTY()
    FVector LastLocation;
    
    UPROPERTY()
    FVector LastOutOfRangeLocationCheck;
    
    REPLICATIONGRAPH_API FLastLocationGatherInfo();
};

