#pragma once
#include "CoreMinimal.h"
#include "EPalLeashState.generated.h"

UENUM()
    Inactive,
    PendingActivation,
    InInnerRange,
    InOuterRange,
    OutOfRange,
};

