#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "PalMapObjectManageTickInBackgroundFunction.generated.h"

USTRUCT()
struct FPalMapObjectManageTickInBackgroundFunction : public FTickFunction {
    GENERATED_BODY()
public:
    PAL_API FPalMapObjectManageTickInBackgroundFunction();
};

template<>
struct TStructOpsTypeTraits<FPalMapObjectManageTickInBackgroundFunction> : public TStructOpsTypeTraitsBase2<FPalMapObjectManageTickInBackgroundFunction>
{
    enum
    {
        WithCopy = false
    };
};

