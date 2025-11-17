#pragma once
#include "CoreMinimal.h"
#include "EMovieRenderShotState.generated.h"

UENUM()
    Uninitialized,
    WarmingUp,
    MotionBlur,
    Rendering,
    Finished,
};

