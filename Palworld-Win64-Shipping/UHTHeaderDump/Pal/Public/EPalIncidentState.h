#pragma once
#include "CoreMinimal.h"
#include "EPalIncidentState.generated.h"

UENUM()
    None,
    Initialized,
    Executing,
    Completed,
    Canceled,
    InstanceCreateFailed = 255,
};

