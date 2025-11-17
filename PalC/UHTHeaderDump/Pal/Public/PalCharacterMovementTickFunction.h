#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "PalCharacterMovementTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FPalCharacterMovementTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    PAL_API FPalCharacterMovementTickFunction();
};

template<>
struct TStructOpsTypeTraits<FPalCharacterMovementTickFunction> : public TStructOpsTypeTraitsBase2<FPalCharacterMovementTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

