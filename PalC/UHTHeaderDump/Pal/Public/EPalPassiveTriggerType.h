#pragma once
#include "CoreMinimal.h"
#include "EPalPassiveTriggerType.generated.h"

UENUM()
    None,
    ActiveOtomo,
    Worker,
    Ride = 4,
    Reserve = 8,
    InOtomo = 16,
    InBaseCamp = 32,
    Always = 64,
};

