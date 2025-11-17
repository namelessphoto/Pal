#pragma once
#include "CoreMinimal.h"
#include "ECommonUserInitializationState.generated.h"

UENUM()
    Unknown,
    DoingInitialLogin,
    DoingNetworkLogin,
    FailedtoLogin,
    LoggedInOnline,
    LoggedInLocalOnly,
    Invalid,
};

