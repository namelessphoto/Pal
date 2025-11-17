#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "PalWorkProgressManagerWorkProcessTickFunction.generated.h"

class UPalWorkProgressManager;

USTRUCT()
struct FPalWorkProgressManagerWorkProcessTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    UPROPERTY()
    UPalWorkProgressManager* Target;
    
    PAL_API FPalWorkProgressManagerWorkProcessTickFunction();
};

template<>
struct TStructOpsTypeTraits<FPalWorkProgressManagerWorkProcessTickFunction> : public TStructOpsTypeTraitsBase2<FPalWorkProgressManagerWorkProcessTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

