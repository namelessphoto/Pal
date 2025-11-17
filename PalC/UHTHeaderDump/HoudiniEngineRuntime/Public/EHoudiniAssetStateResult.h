#pragma once
#include "CoreMinimal.h"
#include "EHoudiniAssetStateResult.generated.h"

UENUM()
    None,
    Working,
    Success,
    FinishedWithError,
    FinishedWithFatalError,
    Aborted,
};

