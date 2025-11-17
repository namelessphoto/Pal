#pragma once
#include "CoreMinimal.h"
#include "ConnectionAlwaysRelevantNodePair.generated.h"

class UNetConnection;
class UReplicationGraphNode_AlwaysRelevant_ForConnection;

USTRUCT(BlueprintType)
struct FConnectionAlwaysRelevantNodePair {
    GENERATED_BODY()
public:
    UPROPERTY()
    UNetConnection* NetConnection;
    
    UPROPERTY()
    UReplicationGraphNode_AlwaysRelevant_ForConnection* Node;
    
    REPLICATIONGRAPH_API FConnectionAlwaysRelevantNodePair();
};

