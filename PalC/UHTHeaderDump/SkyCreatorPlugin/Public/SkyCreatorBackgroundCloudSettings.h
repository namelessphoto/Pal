#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "SkyCreatorBackgroundCloudSettings.generated.h"

USTRUCT(BlueprintType)
struct FSkyCreatorBackgroundCloudSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float BackgroundCloudsIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor BackgroundCloudsColorTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float BackgroundCloudsLayerA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float BackgroundCloudsLayerB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float BackgroundCloudsLayerC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float BackgroundCloudsLightningPhase;
    
    SKYCREATORPLUGIN_API FSkyCreatorBackgroundCloudSettings();
};

