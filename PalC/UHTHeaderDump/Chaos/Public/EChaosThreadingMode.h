#pragma once
#include "CoreMinimal.h"
#include "EChaosThreadingMode.generated.h"

UENUM()
    DedicatedThread,
    TaskGraph,
    SingleThread,
    Num,
    Invalid,
};

