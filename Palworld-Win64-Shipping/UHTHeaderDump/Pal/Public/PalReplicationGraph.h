#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ReplicationGraph -ObjectName=ReplicationGraph -FallbackName=ReplicationGraph
#include "PalReplicationGraph.generated.h"

class UReplicationGraphNode_ActorList;
class UReplicationGraphNode_GridSpatialization2D;

UCLASS(NonTransient)
class UPalReplicationGraph : public UReplicationGraph {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UClass*> SpatializedClasses;
    
    UPROPERTY()
    TArray<UClass*> NonSpatializedChildClasses;
    
    UPROPERTY()
    TArray<UClass*> AlwaysRelevantClasses;
    
    UPROPERTY()
    UReplicationGraphNode_GridSpatialization2D* GridNode;
    
    UPROPERTY()
    UReplicationGraphNode_ActorList* AlwaysRelevantNode;
    
    UPalReplicationGraph();

};

