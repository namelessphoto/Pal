#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "PalCharacterAsyncTickFunction.generated.h"

USTRUCT()
struct FPalCharacterAsyncTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    PAL_API FPalCharacterAsyncTickFunction();
};

template<>
struct TStructOpsTypeTraits<FPalCharacterAsyncTickFunction> : public TStructOpsTypeTraitsBase2<FPalCharacterAsyncTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

