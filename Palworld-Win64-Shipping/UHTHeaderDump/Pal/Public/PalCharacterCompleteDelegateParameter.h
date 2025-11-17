#pragma once
#include "CoreMinimal.h"
#include "EPalCharacterCompleteDelegatePriority.h"
#include "PalOnCharacterCompleteInitializeParameterDelegate.h"
#include "PalCharacterCompleteDelegateParameter.generated.h"

USTRUCT()
struct FPalCharacterCompleteDelegateParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    EPalCharacterCompleteDelegatePriority Priority;
    
    UPROPERTY()
    FPalOnCharacterCompleteInitializeParameter CompleteDelegate;
    
    PAL_API FPalCharacterCompleteDelegateParameter();
};

