#pragma once
#include "CoreMinimal.h"
#include "ECollisionTraceFlag.generated.h"

UENUM(Flags)
    CTF_UseDefault,
    CTF_UseSimpleAndComplex,
    CTF_UseSimpleAsComplex,
    CTF_UseComplexAsSimple,
};

