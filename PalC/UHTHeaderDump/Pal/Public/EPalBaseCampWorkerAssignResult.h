#pragma once
#include "CoreMinimal.h"
#include "EPalBaseCampWorkerAssignResult.generated.h"

UENUM()
    Success,
    FailedNotFoundBaseCamp,
    FailedNotFoundWork,
    FailedOverflowAssignCount,
    FailedCharacterHandleMissing,
};

