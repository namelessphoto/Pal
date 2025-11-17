#pragma once
#include "CoreMinimal.h"
#include "EPalSaveError.generated.h"

UENUM()
    Success,
    NotFound,
    Unknown,
    Broken,
    OutOfMemory,
};

