#pragma once
#include "CoreMinimal.h"
#include "PalGotStatusPoint.generated.h"

USTRUCT(BlueprintType)
struct FPalGotStatusPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FName StatusName;
    
    UPROPERTY(BlueprintReadOnly)
    int32 StatusPoint;
    
    PAL_API FPalGotStatusPoint();
};

