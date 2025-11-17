#pragma once
#include "CoreMinimal.h"
#include "ETriggerEventsSupported.generated.h"

UENUM()
    None,
    Instant,
    Uninterruptible,
    Ongoing = 4,
    All = 7,
};

