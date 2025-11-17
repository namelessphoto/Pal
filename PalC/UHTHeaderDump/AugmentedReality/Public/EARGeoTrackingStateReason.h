#pragma once
#include "CoreMinimal.h"
#include "EARGeoTrackingStateReason.generated.h"

UENUM()
    None,
    NotAvailableAtLocation,
    NeedLocationPermissions,
    DevicePointedTooLow,
    WorldTrackingUnstable,
    WaitingForLocation,
    GeoDataNotLoaded,
    VisualLocalizationFailed,
    WaitingForAvailabilityCheck,
};

