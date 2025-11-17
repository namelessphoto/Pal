#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "PalMapObjectManageTickPostProcessFunction.generated.h"

USTRUCT()
struct FPalMapObjectManageTickPostProcessFunction : public FTickFunction {
    GENERATED_BODY()
public:
    PAL_API FPalMapObjectManageTickPostProcessFunction();
};

template<>
struct TStructOpsTypeTraits<FPalMapObjectManageTickPostProcessFunction> : public TStructOpsTypeTraitsBase2<FPalMapObjectManageTickPostProcessFunction>
{
    enum
    {
        WithCopy = false
    };
};

