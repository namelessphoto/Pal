#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "PalObjectCollectorTickFunction.generated.h"

USTRUCT()
struct FPalObjectCollectorTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    PAL_API FPalObjectCollectorTickFunction();
};

template<>
struct TStructOpsTypeTraits<FPalObjectCollectorTickFunction> : public TStructOpsTypeTraitsBase2<FPalObjectCollectorTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

