#pragma once
#include "CoreMinimal.h"
#include "EHoudiniRuntimeSettingsRecomputeFlag.generated.h"

UENUM()
    HRSRF_Always,
    HRSRF_OnlyIfMissing,
    HRSRF_Never,
};

