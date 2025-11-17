#pragma once
#include "CoreMinimal.h"
#include "EInAppPurchaseStatus.generated.h"

UENUM()
    Invalid,
    Failed,
    Deferred,
    Canceled,
    Purchased,
    Restored,
};

