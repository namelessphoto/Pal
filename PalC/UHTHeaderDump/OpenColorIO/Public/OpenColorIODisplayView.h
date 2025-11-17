#pragma once
#include "CoreMinimal.h"
#include "OpenColorIODisplayView.generated.h"

USTRUCT(BlueprintType)
struct OPENCOLORIO_API FOpenColorIODisplayView {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString Display;
    
    UPROPERTY(VisibleAnywhere)
    FString View;
    
    FOpenColorIODisplayView();
};

