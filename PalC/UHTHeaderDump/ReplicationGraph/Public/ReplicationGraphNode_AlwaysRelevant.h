#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraphNode.h"
#include "ReplicationGraphNode_AlwaysRelevant.generated.h"

UCLASS(NonTransient)
class REPLICATIONGRAPH_API UReplicationGraphNode_AlwaysRelevant : public UReplicationGraphNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UReplicationGraphNode* ChildNode;
    
public:
    UReplicationGraphNode_AlwaysRelevant();

};

