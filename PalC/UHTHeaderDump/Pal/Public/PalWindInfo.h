#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalWindInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalWindInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FVector Direction;
    
    UPROPERTY(BlueprintReadOnly)
    float Speed;
    
    PAL_API FPalWindInfo();
};

