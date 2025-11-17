#pragma once
#include "CoreMinimal.h"
#include "EPawnActionEventType.generated.h"

UENUM()
    Invalid,
    FailedToStart,
    InstantAbort,
    FinishedAborting,
    FinishedExecution,
    Push,
};

