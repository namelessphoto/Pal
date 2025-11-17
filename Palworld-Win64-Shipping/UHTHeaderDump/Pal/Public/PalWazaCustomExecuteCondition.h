#pragma once
#include "CoreMinimal.h"
#include "EPalWazaExecuteConditionType.h"
#include "PalWazaCustomExecuteCondition.generated.h"

USTRUCT(BlueprintType)
struct FPalWazaCustomExecuteCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPalWazaExecuteConditionType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Value;
    
    PAL_API FPalWazaCustomExecuteCondition();
};

