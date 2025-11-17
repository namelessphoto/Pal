#pragma once
#include "CoreMinimal.h"
#include "PalOptionKeyboardSettings.generated.h"

USTRUCT(BlueprintType)
struct FPalOptionKeyboardSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bIsDashHold;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float MouseSensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float MouseAimSensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bIsReverseYaw;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bIsReversePitch;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bEnableAimAssist;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bShowChat;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bIsToggleInteract;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bIsToggleBuildMode;
    
    PAL_API FPalOptionKeyboardSettings();
};

