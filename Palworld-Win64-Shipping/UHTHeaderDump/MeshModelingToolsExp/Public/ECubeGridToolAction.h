#pragma once
#include "CoreMinimal.h"
#include "ECubeGridToolAction.generated.h"

UENUM()
    NoAction,
    Push,
    Pull,
    Flip,
    SlideForward,
    SlideBack,
    DecreaseGridPower,
    IncreaseGridPower,
    CornerMode,
    ResetFromActor,
    Done,
    Cancel,
};

