#pragma once
#include "CoreMinimal.h"
#include "GameFeatureComponentEntry.generated.h"

class AActor;
class UActorComponent;

USTRUCT(BlueprintType)
struct GAMEFEATURES_API FGameFeatureComponentEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AActor> actorClass;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UActorComponent> ComponentClass;
    
    UPROPERTY(EditAnywhere)
    uint8 bClientComponent: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bServerComponent: 1;
    
    FGameFeatureComponentEntry();
};

