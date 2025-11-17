#pragma once
#include "CoreMinimal.h"
#include "EUpdateState.generated.h"

UENUM()
    UpdateIdle,
    UpdatePending,
    CheckingForPatch,
    DetectingPlatformEnvironment,
    CheckingForHotfix,
    WaitingOnInitialLoad,
    InitialLoadComplete,
    UpdateComplete,
};

