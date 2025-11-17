#pragma once
#include "CoreMinimal.h"
#include "EARSessionStatus.generated.h"

UENUM()
    NotStarted,
    Running,
    NotSupported,
    FatalError,
    PermissionNotGranted,
    UnsupportedConfiguration,
    Other,
};

