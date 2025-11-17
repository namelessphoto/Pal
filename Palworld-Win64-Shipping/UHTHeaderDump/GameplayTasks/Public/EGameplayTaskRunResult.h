#pragma once
#include "CoreMinimal.h"
#include "EGameplayTaskRunResult.generated.h"

UENUM()
    Error,
    Failed,
    Success_Paused,
    Success_Active,
    Success_Finished,
};

