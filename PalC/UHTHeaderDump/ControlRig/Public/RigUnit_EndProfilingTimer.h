#pragma once
#include "CoreMinimal.h"
#include "RigUnit_DebugBaseMutable.h"
#include "RigUnit_EndProfilingTimer.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_EndProfilingTimer : public FRigUnit_DebugBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 NumberOfMeasurements;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FString Prefix;
    
    UPROPERTY()
    float AccumulatedTime;
    
    UPROPERTY()
    int32 MeasurementsLeft;
    
    FRigUnit_EndProfilingTimer();
};

