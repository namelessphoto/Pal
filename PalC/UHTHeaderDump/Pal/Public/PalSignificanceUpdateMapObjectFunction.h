#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "PalSignificanceUpdateMapObjectFunction.generated.h"

USTRUCT()
struct FPalSignificanceUpdateMapObjectFunction : public FTickFunction {
    GENERATED_BODY()
public:
    PAL_API FPalSignificanceUpdateMapObjectFunction();
};

template<>
struct TStructOpsTypeTraits<FPalSignificanceUpdateMapObjectFunction> : public TStructOpsTypeTraitsBase2<FPalSignificanceUpdateMapObjectFunction>
{
    enum
    {
        WithCopy = false
    };
};

