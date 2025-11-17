#pragma once
#include "CoreMinimal.h"
#include "PalPhantomReplicateInfo.generated.h"

class APalCharacter;

USTRUCT(BlueprintType)
struct FPalPhantomReplicateInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 ID;
    
    UPROPERTY()
    APalCharacter* Character;
    
    PAL_API FPalPhantomReplicateInfo();
};

