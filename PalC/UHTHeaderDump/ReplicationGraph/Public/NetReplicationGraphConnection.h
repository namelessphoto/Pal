#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ReplicationConnectionDriver -FallbackName=ReplicationConnectionDriver
#include "LastLocationGatherInfo.h"
#include "NetReplicationGraphConnection.generated.h"

class AReplicationGraphDebugActor;
class UNetConnection;
class UReplicationGraphNode;
class UReplicationGraphNode_TearOff_ForConnection;

UCLASS(NonTransient)
class REPLICATIONGRAPH_API UNetReplicationGraphConnection : public UReplicationConnectionDriver {
    GENERATED_BODY()
public:
    UPROPERTY()
    UNetConnection* NetConnection;
    
    UPROPERTY()
    AReplicationGraphDebugActor* DebugActor;
    
    UPROPERTY()
    TArray<FLastLocationGatherInfo> LastGatherLocations;
    
private:
    UPROPERTY()
    TArray<UReplicationGraphNode*> ConnectionGraphNodes;
    
    UPROPERTY()
    UReplicationGraphNode_TearOff_ForConnection* TearOffNode;
    
public:
    UNetReplicationGraphConnection();

};

