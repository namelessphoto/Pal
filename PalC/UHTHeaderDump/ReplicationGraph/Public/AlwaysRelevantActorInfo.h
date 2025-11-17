#pragma once
#include "CoreMinimal.h"
#include "AlwaysRelevantActorInfo.generated.h"

class AActor;
class UNetConnection;

USTRUCT(BlueprintType)
struct FAlwaysRelevantActorInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    UNetConnection* Connection;
    
    UPROPERTY()
    AActor* LastViewer;
    
    UPROPERTY()
    AActor* LastViewTarget;
    
    REPLICATIONGRAPH_API FAlwaysRelevantActorInfo();
};

