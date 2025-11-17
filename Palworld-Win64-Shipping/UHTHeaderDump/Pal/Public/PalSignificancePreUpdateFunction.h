#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "PalSignificancePreUpdateFunction.generated.h"

USTRUCT()
struct FPalSignificancePreUpdateFunction : public FTickFunction {
    GENERATED_BODY()
public:
    PAL_API FPalSignificancePreUpdateFunction();
};

template<>
struct TStructOpsTypeTraits<FPalSignificancePreUpdateFunction> : public TStructOpsTypeTraitsBase2<FPalSignificancePreUpdateFunction>
{
    enum
    {
        WithCopy = false
    };
};

