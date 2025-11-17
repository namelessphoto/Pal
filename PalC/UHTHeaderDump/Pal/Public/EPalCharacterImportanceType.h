#pragma once
#include "CoreMinimal.h"
#include "EPalCharacterImportanceType.generated.h"

UENUM()
    Undefined,
    AllUpdate,
    Nearest,
    Near,
    MidInSight,
    FarInSight,
    MidOutSight,
    FarOutSight,
    Farthest,
};

