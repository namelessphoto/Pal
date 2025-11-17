#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "PalObjectCollectorCalcNearestCharacterTickFunction.generated.h"

USTRUCT()
struct FPalObjectCollectorCalcNearestCharacterTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    PAL_API FPalObjectCollectorCalcNearestCharacterTickFunction();
};

template<>
struct TStructOpsTypeTraits<FPalObjectCollectorCalcNearestCharacterTickFunction> : public TStructOpsTypeTraitsBase2<FPalObjectCollectorCalcNearestCharacterTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

