#pragma once
#include "CoreMinimal.h"
#include "EMeshGroupPaintToolActions.generated.h"

UENUM()
    NoAction,
    ClearFrozen,
    FreezeCurrent,
    FreezeOthers,
    GrowCurrent,
    ShrinkCurrent,
    ClearCurrent,
    FloodFillCurrent,
    ClearAll,
};

