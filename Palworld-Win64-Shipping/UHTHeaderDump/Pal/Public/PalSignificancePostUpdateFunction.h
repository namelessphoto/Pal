#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "PalSignificancePostUpdateFunction.generated.h"

USTRUCT()
struct FPalSignificancePostUpdateFunction : public FTickFunction {
    GENERATED_BODY()
public:
    PAL_API FPalSignificancePostUpdateFunction();
};

template<>
struct TStructOpsTypeTraits<FPalSignificancePostUpdateFunction> : public TStructOpsTypeTraitsBase2<FPalSignificancePostUpdateFunction>
{
    enum
    {
        WithCopy = false
    };
};

