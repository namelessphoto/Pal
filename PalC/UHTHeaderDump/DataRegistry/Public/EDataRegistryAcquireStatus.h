#pragma once
#include "CoreMinimal.h"
#include "EDataRegistryAcquireStatus.generated.h"

UENUM()
    NotStarted,
    WaitingForInitialAcquire,
    InitialAcquireFinished,
    WaitingForResources,
    AcquireFinished,
    AcquireError,
    DoesNotExist,
};

