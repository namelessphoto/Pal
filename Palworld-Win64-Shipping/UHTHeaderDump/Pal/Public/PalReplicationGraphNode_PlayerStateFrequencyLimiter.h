#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ReplicationGraph -ObjectName=ReplicationGraphNode -FallbackName=ReplicationGraphNode
#include "PalReplicationGraphNode_PlayerStateFrequencyLimiter.generated.h"

UCLASS(NonTransient)
class UPalReplicationGraphNode_PlayerStateFrequencyLimiter : public UReplicationGraphNode {
    GENERATED_BODY()
public:
    UPalReplicationGraphNode_PlayerStateFrequencyLimiter();

};

