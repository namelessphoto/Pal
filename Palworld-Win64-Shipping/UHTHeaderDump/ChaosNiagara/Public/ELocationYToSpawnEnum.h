#pragma once
#include "CoreMinimal.h"
#include "ELocationYToSpawnEnum.generated.h"

UENUM(Flags)
    ChaosNiagara_LocationYToSpawn_None,
    ChaosNiagara_LocationYToSpawn_Min,
    ChaosNiagara_LocationYToSpawn_Max UMETA(Hidden),
    ChaosNiagara_LocationYToSpawn_MinMax,
};

