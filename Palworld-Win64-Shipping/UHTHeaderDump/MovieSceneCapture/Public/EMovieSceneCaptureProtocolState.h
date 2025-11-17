#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneCaptureProtocolState.generated.h"

UENUM()
    Idle,
    Initialized,
    Capturing,
    Finalizing,
};

