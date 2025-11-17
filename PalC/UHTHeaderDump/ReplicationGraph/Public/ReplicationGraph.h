#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ReplicationDriver -FallbackName=ReplicationDriver
#include "Templates/SubclassOf.h"
#include "ReplicationGraph.generated.h"

class UNetDriver;
class UNetReplicationGraphConnection;
class UReplicationGraphNode;

UCLASS(NonTransient)
class REPLICATIONGRAPH_API UReplicationGraph : public UReplicationDriver {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    TSubclassOf<UNetReplicationGraphConnection> ReplicationConnectionManagerClass;
    
    UPROPERTY()
    UNetDriver* NetDriver;
    
    UPROPERTY()
    TArray<UNetReplicationGraphConnection*> Connections;
    
    UPROPERTY()
    TArray<UNetReplicationGraphConnection*> PendingConnections;
    
protected:
    UPROPERTY()
    TArray<UReplicationGraphNode*> GlobalGraphNodes;
    
    UPROPERTY()
    TArray<UReplicationGraphNode*> PrepareForReplicationNodes;
    
public:
    UReplicationGraph();

};

