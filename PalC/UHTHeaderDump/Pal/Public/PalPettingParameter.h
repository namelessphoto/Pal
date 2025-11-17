#pragma once
#include "CoreMinimal.h"
#include "PalPettingParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalPettingParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CameraCenterDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CameraHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CameraArmLength;
    
    PAL_API FPalPettingParameter();
};

