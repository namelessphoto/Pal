#pragma once
#include "CoreMinimal.h"
#include "EXRSystemFlags.generated.h"

UENUM()
    NoFlags,
    IsAR,
    IsTablet,
    IsHeadMounted = 4,
    SupportsHandTracking = 8,
};

