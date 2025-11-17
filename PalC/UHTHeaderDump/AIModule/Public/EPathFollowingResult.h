#pragma once
#include "CoreMinimal.h"
#include "EPathFollowingResult.generated.h"

UENUM()
    Success,
    Blocked,
    OffPath,
    Aborted,
    Skipped_DEPRECATED,
    Invalid,
};

