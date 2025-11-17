#pragma once
#include "CoreMinimal.h"
#include "EGameplayTaskState.generated.h"

UENUM()
    Uninitialized,
    AwaitingActivation,
    Paused,
    Active,
    Finished,
};

