#pragma once
#include "CoreMinimal.h"
#include "ENiagaraScriptCompileStatus.generated.h"

UENUM()
    NCS_Unknown,
    NCS_Dirty,
    NCS_Error,
    NCS_UpToDate,
    NCS_BeingCreated,
    NCS_UpToDateWithWarnings,
    NCS_ComputeUpToDateWithWarnings,
};

