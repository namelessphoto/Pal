#pragma once
#include "CoreMinimal.h"
#include "EEnvQueryStatus.generated.h"

UENUM()
    Processing,
    Success,
    Failed,
    Aborted,
    OwnerLost,
    MissingParam,
};

