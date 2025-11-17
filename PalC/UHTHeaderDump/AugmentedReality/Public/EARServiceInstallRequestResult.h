#pragma once
#include "CoreMinimal.h"
#include "EARServiceInstallRequestResult.generated.h"

UENUM()
    Installed,
    DeviceNotCompatible,
    UserDeclinedInstallation,
    FatalError,
};

