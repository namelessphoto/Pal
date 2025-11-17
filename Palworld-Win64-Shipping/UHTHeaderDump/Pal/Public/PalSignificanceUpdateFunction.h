#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "PalSignificanceUpdateFunction.generated.h"

USTRUCT()
struct FPalSignificanceUpdateFunction : public FTickFunction {
    GENERATED_BODY()
public:
    PAL_API FPalSignificanceUpdateFunction();
};

template<>
struct TStructOpsTypeTraits<FPalSignificanceUpdateFunction> : public TStructOpsTypeTraitsBase2<FPalSignificanceUpdateFunction>
{
    enum
    {
        WithCopy = false
    };
};

