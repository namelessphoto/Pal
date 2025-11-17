#pragma once
#include "CoreMinimal.h"
#include "ETargetUsageFlags.generated.h"

UENUM()
    USAGE_None,
    USAGE_Input,
    USAGE_Transform,
    USAGE_Output = 4,
    USAGE_Persistent = 32,
    USAGE_Intermediate0 = 8,
    USAGE_Intermediate1 = 16,
};

