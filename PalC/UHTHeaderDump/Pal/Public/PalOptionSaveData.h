#pragma once
#include "CoreMinimal.h"
#include "PalKeyConfigSettings.h"
#include "PalOptionAudioSettings.h"
#include "PalOptionCommonSettings.h"
#include "PalOptionGraphicsSettings.h"
#include "PalOptionKeyboardSettings.h"
#include "PalOptionOnlineUserSettings.h"
#include "PalOptionPadSettings.h"
#include "PalOptionUISettings.h"
#include "PalOptionSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalOptionSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPalOptionKeyboardSettings KeyboardSettings;
    
    UPROPERTY()
    FPalOptionPadSettings PadSettings;
    
    UPROPERTY()
    FPalKeyConfigSettings KeyConfigSettings;
    
    UPROPERTY()
    FPalOptionUISettings UISettings;
    
    UPROPERTY()
    FPalOptionOnlineUserSettings OnlineUserSettings;
    
    UPROPERTY()
    FPalOptionCommonSettings CommonSettings;
    
    UPROPERTY()
    FPalOptionGraphicsSettings GraphicsSettings;
    
    UPROPERTY()
    FPalOptionAudioSettings AudioSettings;
    
    UPROPERTY()
    bool bHasAppliedUserSetting;
    
    PAL_API FPalOptionSaveData();
};

