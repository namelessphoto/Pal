#pragma once
#include "CoreMinimal.h"
#include "EPalDungeonLevelVersion.generated.h"

UENUM()
    BeforeVersionWasAdded,
    ConvertDungeonLevelsToNewer,
    VersionPlusOne,
    LatestVersion = ConvertDungeonLevelsToNewer,
};

