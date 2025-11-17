#pragma once
#include "CoreMinimal.h"
#include "ModifyContextOptions.generated.h"

USTRUCT(BlueprintType)
struct FModifyContextOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bIgnoreAllPressedKeysUntilRelease: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bForceImmediately: 1;
    
    ENHANCEDINPUT_API FModifyContextOptions();
};

