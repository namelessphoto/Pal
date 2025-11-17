#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraphNode.h"
#include "TearOffActorInfo.h"
#include "ReplicationGraphNode_TearOff_ForConnection.generated.h"

UCLASS(NonTransient)
class REPLICATIONGRAPH_API UReplicationGraphNode_TearOff_ForConnection : public UReplicationGraphNode {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTearOffActorInfo> TearOffActors;
    
    UReplicationGraphNode_TearOff_ForConnection();

};

