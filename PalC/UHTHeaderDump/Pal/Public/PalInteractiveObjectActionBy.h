#pragma once
#include "CoreMinimal.h"
#include "PalInteractiveObjectActionBy.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPalInteractiveObjectActionBy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    AActor* InteractingActor;
    
    UPROPERTY(BlueprintReadWrite)
    int32 InteractId;
    
    PAL_API FPalInteractiveObjectActionBy();
};

