#pragma once
#include "CoreMinimal.h"
#include "EARLineTraceChannels.generated.h"

UENUM()
    None,
    FeaturePoint,
    GroundPlane,
    PlaneUsingExtent = 4,
    PlaneUsingBoundaryPolygon = 8,
};

