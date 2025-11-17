#pragma once
#include "CoreMinimal.h"
#include "ClassReplicationInfo.generated.h"

USTRUCT()
struct FClassReplicationInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    float DistancePriorityScale;
    
    UPROPERTY()
    float StarvationPriorityScale;
    
    UPROPERTY()
    float AccumulatedNetPriorityBias;
    
    UPROPERTY()
    uint16 ReplicationPeriodFrame;
    
    UPROPERTY()
    uint16 FastPath_ReplicationPeriodFrame;
    
    UPROPERTY()
    uint16 ActorChannelFrameTimeout;
    
private:
    UPROPERTY()
    float CullDistance;
    
    UPROPERTY()
    float CullDistanceSquared;
    
public:
    REPLICATIONGRAPH_API FClassReplicationInfo();
};

