#pragma once
#include "CoreMinimal.h"
#include "ESynthModEnvBiasPatch.generated.h"

UENUM()
    PatchToNone,
    PatchToOscFreq,
    PatchToFilterFreq,
    PatchToFilterQ,
    PatchToLFO1Gain,
    PatchToLFO2Gain,
    PatchToLFO1Freq,
    PatchToLFO2Freq,
    Count,
};

