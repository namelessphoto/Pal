#pragma once
#include "CoreMinimal.h"
#include "PPSkyCreatorWindSettings.generated.h"

USTRUCT(BlueprintType)
struct FPPSkyCreatorWindSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float CloudWindDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float CloudWindSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float CloudNoiseShapeWindDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float CloudNoiseShapeWindSpeedHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float CloudNoiseDetailWindSpeedVertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float PrecipitationWindDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float PrecipitationWindSpeed;
    
    PPSKYCREATORPLUGIN_API FPPSkyCreatorWindSettings();
};

