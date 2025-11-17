#pragma once
#include "CoreMinimal.h"
#include "PalDungeonInfoParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalDungeonInfoParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FText DungeonName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 Level;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float DisappearRemainSeconds;
    
    PAL_API FPalDungeonInfoParameter();
};

