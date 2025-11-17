#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SkyCreatorBackgroundCloudSettings.h"
#include "SkyCreatorExponentialHeightFogSettings.h"
#include "SkyCreatorMoonLightSettings.h"
#include "SkyCreatorPostProcessSettings.h"
#include "SkyCreatorSkyAtmosphereSettings.h"
#include "SkyCreatorSkyLightSettings.h"
#include "SkyCreatorStarMapSettings.h"
#include "SkyCreatorSunLightSettings.h"
#include "SkyCreatorVolumetricCloudSettings.h"
#include "SkyCreatorWeatherFXSettings.h"
#include "SkyCreatorWeatherMaterialFXSettings.h"
#include "SkyCreatorWeatherSettings.h"
#include "SkyCreatorWindSettings.h"
#include "SkyCreatorWeatherPreset.generated.h"

UCLASS(BlueprintType)
class SKYCREATORPLUGIN_API USkyCreatorWeatherPreset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSkyCreatorSkyAtmosphereSettings SkyAtmosphereSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSkyCreatorVolumetricCloudSettings VolumetricCloudSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSkyCreatorBackgroundCloudSettings BackgroundCloudSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSkyCreatorSkyLightSettings SkyLightSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSkyCreatorSunLightSettings SunLightSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSkyCreatorMoonLightSettings MoonLightSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSkyCreatorExponentialHeightFogSettings ExponentialHeightFogSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSkyCreatorStarMapSettings StarMapSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSkyCreatorWeatherFXSettings WeatherFXSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSkyCreatorWeatherMaterialFXSettings WeatherMaterialFXSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSkyCreatorWindSettings WindSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSkyCreatorPostProcessSettings PostProcessSettings;
    
    USkyCreatorWeatherPreset();

    UFUNCTION(BlueprintPure)
    FSkyCreatorWeatherSettings GetWeatherPresetSettings();
    
};

