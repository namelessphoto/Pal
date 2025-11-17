#pragma once
#include "CoreMinimal.h"
#include "ESynthLFOPatchType.generated.h"

UENUM()
    PatchToNone,
    PatchToGain,
    PatchToOscFreq,
    PatchToFilterFreq,
    PatchToFilterQ,
    PatchToOscPulseWidth,
    PatchToOscPan,
    PatchLFO1ToLFO2Frequency,
    PatchLFO1ToLFO2Gain,
    Count,
};

