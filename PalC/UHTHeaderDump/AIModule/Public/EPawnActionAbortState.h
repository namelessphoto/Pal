#pragma once
#include "CoreMinimal.h"
#include "EPawnActionAbortState.generated.h"

UENUM()
    NeverStarted,
    NotBeingAborted,
    MarkPendingAbort,
    LatentAbortInProgress,
    AbortDone,
    MAX,
};

