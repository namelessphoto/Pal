#pragma once
#include "CoreMinimal.h"
#include "GameFeaturePluginStateMachineProperties.generated.h"

class UGameFeatureData;

USTRUCT(BlueprintType)
struct FGameFeaturePluginStateMachineProperties {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGameFeatureData* GameFeatureData;
    
    GAMEFEATURES_API FGameFeaturePluginStateMachineProperties();
};

