#pragma once
#include "CoreMinimal.h"
#include "ENiagaraInputNodeUsage.generated.h"

UENUM()
    Undefined,
    Parameter,
    Attribute,
    SystemConstant,
    TranslatorConstant,
    RapidIterationParameter,
};

