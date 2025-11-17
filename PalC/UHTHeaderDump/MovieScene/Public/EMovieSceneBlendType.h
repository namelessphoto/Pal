#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneBlendType.generated.h"

UENUM()
    Invalid,
    Absolute,
    Additive,
    Relative = 4,
    AdditiveFromBase = 8,
};

