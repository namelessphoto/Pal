#pragma once
#include "CoreMinimal.h"
#include "EMovieRenderPipelineState.generated.h"

UENUM()
    Uninitialized,
    ProducingFrames,
    Finalize,
    Export,
    Finished,
};

