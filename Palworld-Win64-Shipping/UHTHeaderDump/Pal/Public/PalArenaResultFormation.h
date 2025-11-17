#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "PalArenaResultFormation.generated.h"

USTRUCT(BlueprintType)
struct FPalArenaResultFormation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FTransform PlayerTransform;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FTransform> PalTransforms;
    
    PAL_API FPalArenaResultFormation();
};

