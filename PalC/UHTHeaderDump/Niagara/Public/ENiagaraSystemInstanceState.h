#pragma once
#include "CoreMinimal.h"
#include "ENiagaraSystemInstanceState.generated.h"

UENUM()
    None,
    PendingSpawn,
    PendingSpawnPaused,
    Spawning,
    Running,
    Paused,
    Num,
};

