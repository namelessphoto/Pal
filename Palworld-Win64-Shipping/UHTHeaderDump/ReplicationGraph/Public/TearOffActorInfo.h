#pragma once
#include "CoreMinimal.h"
#include "TearOffActorInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FTearOffActorInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* Actor;
    
    REPLICATIONGRAPH_API FTearOffActorInfo();
};

