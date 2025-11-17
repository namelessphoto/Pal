#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "PPSkyCreatorBackgroundCloudSettings.h"
#include "PPSkyCreatorExponentialHeightFogSettings.h"
#include "PPSkyCreatorMoonLightSettings.h"
#include "PPSkyCreatorPostProcessSettings.h"
#include "PPSkyCreatorSkyAtmosphereSettings.h"
#include "PPSkyCreatorSkyLightSettings.h"
#include "PPSkyCreatorStarMapSettings.h"
#include "PPSkyCreatorSunLightSettings.h"
#include "PPSkyCreatorVolumetricCloudSettings.h"
#include "PPSkyCreatorWeatherFXSettings.h"
#include "PPSkyCreatorWeatherMaterialFXSettings.h"
#include "PPSkyCreatorWeatherSettings.h"
#include "PPSkyCreatorWindSettings.h"
#include "PPSkyCreatorWeatherPreset.generated.h"

UCLASS(BlueprintType)
class PPSKYCREATORPLUGIN_API UPPSkyCreatorWeatherPreset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPPSkyCreatorSkyAtmosphereSettings SkyAtmosphereSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPPSkyCreatorVolumetricCloudSettings VolumetricCloudSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPPSkyCreatorBackgroundCloudSettings BackgroundCloudSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPPSkyCreatorSkyLightSettings SkyLightSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPPSkyCreatorSunLightSettings SunLightSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPPSkyCreatorMoonLightSettings MoonLightSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPPSkyCreatorExponentialHeightFogSettings ExponentialHeightFogSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPPSkyCreatorStarMapSettings StarMapSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPPSkyCreatorWeatherFXSettings WeatherFXSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPPSkyCreatorWeatherMaterialFXSettings WeatherMaterialFXSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPPSkyCreatorWindSettings WindSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPPSkyCreatorPostProcessSettings PostProcessSettings;
    
    UPPSkyCreatorWeatherPreset();

    UFUNCTION(BlueprintPure)
    FPPSkyCreatorWeatherSettings GetWeatherPresetSettings();
    
};

