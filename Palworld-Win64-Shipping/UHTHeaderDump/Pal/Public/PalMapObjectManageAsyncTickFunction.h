#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "PalMapObjectManageAsyncTickFunction.generated.h"

USTRUCT()
struct FPalMapObjectManageAsyncTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    PAL_API FPalMapObjectManageAsyncTickFunction();
};

template<>
struct TStructOpsTypeTraits<FPalMapObjectManageAsyncTickFunction> : public TStructOpsTypeTraitsBase2<FPalMapObjectManageAsyncTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

