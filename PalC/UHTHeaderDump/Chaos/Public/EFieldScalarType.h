#pragma once
#include "CoreMinimal.h"
#include "EFieldScalarType.generated.h"

UENUM()
    Scalar_ExternalClusterStrain,
    Scalar_Kill,
    Scalar_DisableThreshold,
    Scalar_SleepingThreshold,
    Scalar_InternalClusterStrain,
    Scalar_DynamicConstraint,
    Scalar_TargetMax,
};

