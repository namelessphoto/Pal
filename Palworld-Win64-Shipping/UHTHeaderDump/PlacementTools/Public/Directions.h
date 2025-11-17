#pragma once
#include "CoreMinimal.h"
#include "Directions.generated.h"

USTRUCT(BlueprintType)
struct FDirections {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool xDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool xUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool yDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool yUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool zDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool zUp;
    
    PLACEMENTTOOLS_API FDirections();
};

