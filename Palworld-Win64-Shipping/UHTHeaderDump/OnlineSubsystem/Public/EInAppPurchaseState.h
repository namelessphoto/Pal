#pragma once
#include "CoreMinimal.h"
#include "EInAppPurchaseState.generated.h"

UENUM()
    Unknown,
    Success,
    Failed,
    Cancelled,
    Invalid,
    NotAllowed,
    Restored,
    AlreadyOwned,
};

