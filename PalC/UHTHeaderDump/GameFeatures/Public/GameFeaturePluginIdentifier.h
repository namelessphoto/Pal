#pragma once
#include "CoreMinimal.h"
#include "GameFeaturePluginIdentifier.generated.h"

USTRUCT(BlueprintType)
struct FGameFeaturePluginIdentifier {
    GENERATED_BODY()
public:
    GAMEFEATURES_API FGameFeaturePluginIdentifier();
};
FORCEINLINE uint32 GetTypeHash(const FGameFeaturePluginIdentifier) { return 0; }

