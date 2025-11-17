#pragma once
#include "CoreMinimal.h"
#include "EPalBaseCampOperationResult.generated.h"

UENUM()
    Success,
    FailedNotFoundNetworkTransmitter,
    FailedNotFoundBaseCamp,
    FailedNotRequestedFromBaseCampPoint,
    FailedNotFoundOwnerMapObjectModel,
    FailedDismantleMapObject,
};

