#pragma once
#include "CoreMinimal.h"
#include "MediaSourceCacheSettings.generated.h"

USTRUCT(BlueprintType)
struct FMediaSourceCacheSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bOverride;
    
    UPROPERTY(EditAnywhere)
    float TimeToLookAhead;
    
    MEDIAASSETS_API FMediaSourceCacheSettings();
};

