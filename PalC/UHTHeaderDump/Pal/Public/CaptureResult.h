#pragma once
#include "CoreMinimal.h"
#include "EFailedCaptureType.h"
#include "CaptureResult.generated.h"

USTRUCT(BlueprintType)
struct FCaptureResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool IsSuccess;
    
    UPROPERTY(BlueprintReadOnly)
    int32 TestSuccessCount;
    
    UPROPERTY(BlueprintReadOnly)
    EFailedCaptureType FailedCaptureType;
    
    PAL_API FCaptureResult();
};

