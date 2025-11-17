#pragma once
#include "CoreMinimal.h"
#include "EFastArraySerializerDeltaFlags.generated.h"

UENUM()
    None,
    HasBeenSerialized,
    HasDeltaBeenRequested,
    IsUsingDeltaSerialization = 4,
};

