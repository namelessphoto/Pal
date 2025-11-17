#pragma once
#include "CoreMinimal.h"
#include "EAIRequestPriority.generated.h"

UENUM()
    SoftScript,
    SoftScriptInterrupt,
    Logic = 10,
    HardScript,
    Reaction,
    Ultimate,
    MAX,
};

