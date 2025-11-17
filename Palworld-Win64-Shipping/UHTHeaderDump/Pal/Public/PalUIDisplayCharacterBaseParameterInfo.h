#pragma once
#include "CoreMinimal.h"
#include "PalUIDisplayCharacterBaseParameterInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalUIDisplayCharacterBaseParameterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 DisplayBaseParameter;
    
    UPROPERTY(BlueprintReadOnly)
    int32 FriendshipEffect;
    
    PAL_API FPalUIDisplayCharacterBaseParameterInfo();
};

