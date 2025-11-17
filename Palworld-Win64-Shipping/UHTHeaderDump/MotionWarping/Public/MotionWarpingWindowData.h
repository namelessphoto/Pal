#pragma once
#include "CoreMinimal.h"
#include "MotionWarpingWindowData.generated.h"

class UAnimNotifyState_MotionWarping;

USTRUCT(BlueprintType)
struct FMotionWarpingWindowData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimNotifyState_MotionWarping* AnimNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EndTime;
    
    MOTIONWARPING_API FMotionWarpingWindowData();
};

