#pragma once
#include "CoreMinimal.h"
#include "ECommonUserAvailability.generated.h"

UENUM()
    Unknown,
    NowAvailable,
    PossiblyAvailable,
    CurrentlyUnavailable,
    AlwaysUnavailable,
    Invalid,
};

