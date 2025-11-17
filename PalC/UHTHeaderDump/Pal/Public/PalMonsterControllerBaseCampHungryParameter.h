#pragma once
#include "CoreMinimal.h"
#include "EPalBaseCampRecoverStatusType.h"
#include "PalMonsterControllerBaseCampHungryParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalMonsterControllerBaseCampHungryParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    float RecoverSatietyTo;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float RecoverSanityTo;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 EatMaxNum;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EPalBaseCampRecoverStatusType RecoverStatusType;
    
    PAL_API FPalMonsterControllerBaseCampHungryParameter();
};

