#pragma once
#include "CoreMinimal.h"
#include "EARTrackingQualityReason.generated.h"

UENUM()
    None,
    Initializing,
    Relocalizing,
    ExcessiveMotion,
    InsufficientFeatures,
    InsufficientLight,
    BadState,
};

