#pragma once
#include "CoreMinimal.h"
#include "PalItemRecipeMaterialInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalItemRecipeMaterialInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName MaterialID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaterialCount;
    
    PAL_API FPalItemRecipeMaterialInfo();
};

