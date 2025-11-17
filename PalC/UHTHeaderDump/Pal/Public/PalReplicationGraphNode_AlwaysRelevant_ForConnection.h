#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ReplicationGraph -ObjectName=AlwaysRelevantActorInfo -FallbackName=AlwaysRelevantActorInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=ReplicationGraph -ObjectName=ReplicationGraphNode -FallbackName=ReplicationGraphNode
#include "PalReplicationGraphNode_AlwaysRelevant_ForConnection.generated.h"

class AActor;

UCLASS(NonTransient)
class UPalReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    AActor* LastPawn;
    
    UPROPERTY()
    TArray<FAlwaysRelevantActorInfo> PastRelevantActors;
    
public:
    UPalReplicationGraphNode_AlwaysRelevant_ForConnection();

};

