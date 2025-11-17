#pragma once
#include "CoreMinimal.h"
#include "PalOptionPadSettings.generated.h"

USTRUCT(BlueprintType)
struct FPalOptionPadSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bIsDashHold;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float LeftStickThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float RightStickSensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float RightStickAimSensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float RightStickThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bIsRightStickReverseYaw;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bIsRightStickReversePitch;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bEnableVibration;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bEnableAimAssist;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bIsToggleInteract;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bIsToggleBuildMode;
    
    PAL_API FPalOptionPadSettings();
};

