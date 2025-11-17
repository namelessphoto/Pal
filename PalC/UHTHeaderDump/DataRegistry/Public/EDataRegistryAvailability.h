#pragma once
#include "CoreMinimal.h"
#include "EDataRegistryAvailability.generated.h"

UENUM()
    DoesNotExist,
    Unknown,
    Remote,
    OnDisk,
    LocalAsset,
    PreCached,
};

