#pragma once
#include "CoreMinimal.h"
#include "EUpdateClockSource.generated.h"

UENUM()
    Tick,
    Platform,
    Audio,
    RelativeTimecode,
    Timecode,
    PlayEveryFrame,
    Custom,
};

