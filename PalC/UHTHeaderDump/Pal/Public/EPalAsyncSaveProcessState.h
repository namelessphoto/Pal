#pragma once
#include "CoreMinimal.h"
#include "EPalAsyncSaveProcessState.generated.h"

UENUM()
    Collecting,
    CollectFailed,
    Saving,
    SaveCompleted,
    SaveFailed,
};

