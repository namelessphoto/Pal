#pragma once
#include "CoreMinimal.h"
#include "MotionDeltaTrack.h"
#include "MotionDeltaTrackContainer.generated.h"

USTRUCT()
struct FMotionDeltaTrackContainer {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FMotionDeltaTrack> Tracks;
    
    MOTIONWARPING_API FMotionDeltaTrackContainer();
};

