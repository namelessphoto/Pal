#pragma once
#include "CoreMinimal.h"
#include "EMediaCaptureState.generated.h"

UENUM()
    Error,
    Capturing,
    Preparing,
    StopRequested,
    Stopped,
};

