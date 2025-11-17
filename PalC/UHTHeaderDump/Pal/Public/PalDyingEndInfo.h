#pragma once
#include "CoreMinimal.h"
#include "PalInstanceID.h"
#include "PalDyingEndInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalDyingEndInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FPalInstanceID LastAttackerInstanceID;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bIsInstantDeath;
    
    PAL_API FPalDyingEndInfo();
};

