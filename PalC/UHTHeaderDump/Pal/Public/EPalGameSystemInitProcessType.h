#pragma once
#include "CoreMinimal.h"
#include "EPalGameSystemInitProcessType.generated.h"

UENUM()
    Init,
    WaitForInitSystems,
    ApplyWorldSaveData,
    ApplyPlayerSaveData,
};

