#pragma once
#include "CoreMinimal.h"
#include "EToolChangeTrackingMode.generated.h"

UENUM()
    NoChangeTracking = 1,
    UndoToExit,
    FullUndoRedo,
};

