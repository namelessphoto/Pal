#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "SkyCreatorStarMapSettings.generated.h"

USTRUCT(BlueprintType)
struct FSkyCreatorStarMapSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float StarMapIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor StarMapColorTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float StarMapTwinkleIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float StarMapTwinkleSaturation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float StarMapTwinkleSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float StarMapHorizonThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float StarMapAtmosphereThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor NightHorizonColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor NightZenithColor;
    
    SKYCREATORPLUGIN_API FSkyCreatorStarMapSettings();
};

