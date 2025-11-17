#pragma once
#include "CoreMinimal.h"
#include "PalGameSystemInitSequenceSet.generated.h"

class UPalGameSystemInitSequenceBase;

USTRUCT(BlueprintType)
struct FPalGameSystemInitSequenceSet {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<UPalGameSystemInitSequenceBase*> InitSequences;
    
    PAL_API FPalGameSystemInitSequenceSet();
};

