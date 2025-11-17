#pragma once
#include "CoreMinimal.h"
#include "EARServiceAvailability.generated.h"

UENUM()
    UnknownError,
    UnknownChecking,
    UnknownTimedOut,
    UnsupportedDeviceNotCapable,
    SupportedNotInstalled,
    SupportedVersionTooOld,
    SupportedInstalled,
};

