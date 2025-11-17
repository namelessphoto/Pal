#pragma once
#include "CoreMinimal.h"
#include "EPalFishingResultType.generated.h"

UENUM()
    Success,
    Failed_AlreadyFishing,
    Failed_Escaped,
    Failed_NotExist,
    Failed_Unknown,
    Unknown,
};

