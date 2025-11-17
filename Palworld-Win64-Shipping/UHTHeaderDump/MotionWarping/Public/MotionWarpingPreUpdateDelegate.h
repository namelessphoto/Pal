#pragma once
#include "CoreMinimal.h"
#include "MotionWarpingPreUpdateDelegate.generated.h"

class UMotionWarpingComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMotionWarpingPreUpdate, UMotionWarpingComponent*, MotionWarpingComp);

