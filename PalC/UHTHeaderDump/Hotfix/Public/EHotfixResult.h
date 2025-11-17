#pragma once
#include "CoreMinimal.h"
#include "EHotfixResult.generated.h"

UENUM()
    Failed,
    Success,
    SuccessNoChange,
    SuccessNeedsReload,
    SuccessNeedsRelaunch,
};

