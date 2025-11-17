#pragma once
#include "CoreMinimal.h"
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
#include "PPSkyCreatorWindSettings.h"
#include "PPSkyCreatorWeatherSettings.generated.h"

USTRUCT(BlueprintType)
struct FPPSkyCreatorWeatherSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FPPSkyCreatorSkyAtmosphereSettings SkyAtmosphereSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FPPSkyCreatorVolumetricCloudSettings VolumetricCloudSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FPPSkyCreatorBackgroundCloudSettings BackgroundCloudSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FPPSkyCreatorSkyLightSettings SkyLightSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FPPSkyCreatorSunLightSettings SunLightSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FPPSkyCreatorMoonLightSettings MoonLightSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FPPSkyCreatorExponentialHeightFogSettings ExponentialHeightFogSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FPPSkyCreatorStarMapSettings StarMapSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FPPSkyCreatorWeatherFXSettings WeatherFXSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FPPSkyCreatorWeatherMaterialFXSettings WeatherMaterialFXSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FPPSkyCreatorWindSettings WindSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FPPSkyCreatorPostProcessSettings PostProcessSettings;
    
    PPSKYCREATORPLUGIN_API FPPSkyCreatorWeatherSettings();
};

