#pragma once
#include "CoreMinimal.h"
#include "PalSoundOptions.generated.h"

USTRUCT(BlueprintType)
struct FPalSoundOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FadeInTime;
    
    PAL_API FPalSoundOptions();
};

