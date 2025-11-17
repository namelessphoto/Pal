#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "PPSkyCreatorSunLightSettings.generated.h"

USTRUCT(BlueprintType)
struct FPPSkyCreatorSunLightSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor LightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float Temperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float VolumetricScatteringIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor AtmosphereDiskColorScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor CloudScatteredLuminanceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float CloudShadowStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float CloudShadowOnAtmosphereStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float CloudShadowOnSurfaceStrength;
    
    PPSKYCREATORPLUGIN_API FPPSkyCreatorSunLightSettings();
};

