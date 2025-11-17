#pragma once
#include "CoreMinimal.h"
#include "ERigVMUserWorkflowType.generated.h"

UENUM()
    Invalid,
    NodeContext,
    PinContext,
    OnPinDefaultChanged = 4,
    All = 7,
};

