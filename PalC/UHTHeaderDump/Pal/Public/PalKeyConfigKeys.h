#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "PalKeyConfigKeys.generated.h"

USTRUCT(BlueprintType)
struct FPalKeyConfigKeys {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FKey MainKey;
    
    UPROPERTY(BlueprintReadWrite)
    FKey SecondaryKey;
    
    PAL_API FPalKeyConfigKeys();
};

