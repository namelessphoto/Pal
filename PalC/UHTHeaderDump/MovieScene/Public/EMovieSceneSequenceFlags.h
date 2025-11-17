#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneSequenceFlags.generated.h"

UENUM()
    None,
    Volatile,
    BlockingEvaluation,
    InheritedFlags = Volatile,
};

