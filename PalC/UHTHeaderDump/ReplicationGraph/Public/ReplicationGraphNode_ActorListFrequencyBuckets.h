#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraphNode.h"
#include "ReplicationGraphNode_ActorListFrequencyBuckets.generated.h"

UCLASS(NonTransient)
class REPLICATIONGRAPH_API UReplicationGraphNode_ActorListFrequencyBuckets : public UReplicationGraphNode {
    GENERATED_BODY()
public:
    UReplicationGraphNode_ActorListFrequencyBuckets();

};

