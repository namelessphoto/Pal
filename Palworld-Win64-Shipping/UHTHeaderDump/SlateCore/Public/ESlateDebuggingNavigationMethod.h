#pragma once
#include "CoreMinimal.h"
#include "ESlateDebuggingNavigationMethod.generated.h"

UENUM()
    Unknown,
    Explicit,
    CustomDelegateBound,
    CustomDelegateUnbound,
    NextOrPrevious,
    HitTestGrid,
};

