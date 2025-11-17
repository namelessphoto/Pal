#pragma once
#include "CoreMinimal.h"
#include "PalArenaSpectateSpringArmParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalArenaSpectateSpringArmParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool bEnableCameraLag;
    
    UPROPERTY(EditDefaultsOnly)
    bool bEnableCameraRotationLag;
    
    UPROPERTY(EditDefaultsOnly)
    float CameraLagSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float CameraRotationLagSpeed;
    
    PAL_API FPalArenaSpectateSpringArmParameter();
};

