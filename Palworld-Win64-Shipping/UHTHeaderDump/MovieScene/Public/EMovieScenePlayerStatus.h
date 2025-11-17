#pragma once
#include "CoreMinimal.h"
#include "EMovieScenePlayerStatus.generated.h"

UENUM()
    Stopped,
    Playing,
    Scrubbing,
    Jumping,
    Stepping,
    Paused,
    MAX,
};

