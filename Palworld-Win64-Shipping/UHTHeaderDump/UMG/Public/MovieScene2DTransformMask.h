#pragma once
#include "CoreMinimal.h"
#include "MovieScene2DTransformMask.generated.h"

USTRUCT(BlueprintType)
struct FMovieScene2DTransformMask {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    uint32 mask;
    
public:
    UMG_API FMovieScene2DTransformMask();
};

