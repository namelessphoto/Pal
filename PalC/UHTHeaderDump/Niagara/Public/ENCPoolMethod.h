#pragma once
#include "CoreMinimal.h"
#include "ENCPoolMethod.generated.h"

UENUM()
    None,
    AutoRelease,
    ManualRelease,
    ManualRelease_OnComplete,
    FreeInPool,
};

