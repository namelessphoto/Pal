#pragma once
#include "CoreMinimal.h"
#include "ENiagaraCompilationState.generated.h"

UENUM()
    CheckDDC,
    Precompile,
    StartCompileJob,
    AwaitResult,
    OptimizeByteCode,
    ProcessResult,
    PutToDDC,
    Finished,
    Aborted,
};

