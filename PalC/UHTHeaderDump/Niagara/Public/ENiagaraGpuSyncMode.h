#pragma once
#include "CoreMinimal.h"
#include "ENiagaraGpuSyncMode.generated.h"

UENUM()
    None,
    SyncCpuToGpu,
    SyncGpuToCpu,
    SyncBoth,
};

