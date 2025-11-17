#pragma once
#include "CoreMinimal.h"
#include "EPalMonsterControllerBaseCampLogType.generated.h"

UENUM()
    Undefined,
    SuccessFixedAssign,
    FailedFixedAssignSimple,
    FailedFixedAssignWithTargetWork,
    FailedFixedAssignOverflowWorkers,
    FailedFixedAssignNoWorkInRange,
    FailedFixedAssignNotAssignableOtomo,
    FailedFixedAssignNoSuitability,
    FailedFixedAssignNotWantToDo,
};

