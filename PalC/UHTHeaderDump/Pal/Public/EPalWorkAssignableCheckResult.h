#pragma once
#include "CoreMinimal.h"
#include "EPalWorkAssignableCheckResult.generated.h"

UENUM()
    WorkerEvent,
    Dead,
    Sleeping,
    RecoverHungry,
    NotSuitable,
    NotSuitableTribeID,
    NotSuitableSize,
    NotAssignableOtomo,
    NotAssignableBaseCampWorker,
    NotValidIndividualCharacterParameter,
    CannotReviveSelf,
    NotExistsMapObject,
    MapObjectEffect,
    Enable,
};

