#pragma once
#include "CoreMinimal.h"
#include "EWaveTableCurve.generated.h"

UENUM()
    Linear,
    Linear_Inv,
    Exp,
    Exp_Inverse,
    Log,
    Sin,
    Sin_Full,
    SCurve,
    Shared,
    Custom,
    File,
    Count,
};

