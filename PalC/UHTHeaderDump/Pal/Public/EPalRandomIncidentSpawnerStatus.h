#pragma once
#include "CoreMinimal.h"
#include "EPalRandomIncidentSpawnerStatus.generated.h"

UENUM()
    Unknown,
    Idle,
    CoolDown,
    Executing,
    WaitPlayerOutside,
};

