#pragma once
#include "CoreMinimal.h"
#include "ETaskResourceOverlapPolicy.generated.h"

UENUM()
    StartOnTop,
    StartAtEnd,
    RequestCancelAndStartOnTop,
    RequestCancelAndStartAtEnd,
};

