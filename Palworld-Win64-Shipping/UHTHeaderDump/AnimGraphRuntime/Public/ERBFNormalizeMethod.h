#pragma once
#include "CoreMinimal.h"
#include "ERBFNormalizeMethod.generated.h"

UENUM()
    OnlyNormalizeAboveOne,
    AlwaysNormalize,
    NormalizeWithinMedian,
    NoNormalization,
};

