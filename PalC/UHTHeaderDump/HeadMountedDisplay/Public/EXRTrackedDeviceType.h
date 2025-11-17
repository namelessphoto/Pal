#pragma once
#include "CoreMinimal.h"
#include "EXRTrackedDeviceType.generated.h"

UENUM()
    HeadMountedDisplay,
    Controller,
    TrackingReference,
    Other,
    Invalid = 254,
    Any,
};

