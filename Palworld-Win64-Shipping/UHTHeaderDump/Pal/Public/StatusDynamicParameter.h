#pragma once
#include "CoreMinimal.h"
#include "StatusDynamicParameter.generated.h"

USTRUCT(BlueprintType)
struct FStatusDynamicParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 GeneralIndex;
    
    UPROPERTY(BlueprintReadWrite)
    FName GeneralName;
    
    PAL_API FStatusDynamicParameter();
};

