#pragma once
#include "CoreMinimal.h"
#include "EEnvQueryRunMode.generated.h"

UENUM()
    SingleResult,
    RandomBest5Pct,
    RandomBest25Pct,
    AllMatching,
};

