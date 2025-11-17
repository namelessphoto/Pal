#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ReplicationGraphNode.generated.h"

class UReplicationGraphNode;

UCLASS(Abstract, Transient)
class REPLICATIONGRAPH_API UReplicationGraphNode : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<UReplicationGraphNode*> AllChildNodes;
    
public:
    UReplicationGraphNode();

};

