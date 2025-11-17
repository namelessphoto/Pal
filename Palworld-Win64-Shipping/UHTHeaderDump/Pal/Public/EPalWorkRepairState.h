#pragma once
#include "CoreMinimal.h"
#include "EPalWorkRepairState.generated.h"

UENUM()
    None,
    PathFindByOwner,
    PathFindByConnector,
    ApproachToChest,
    ApproachToOwner,
    ApproachToConnectOwner,
    InProgress,
};

