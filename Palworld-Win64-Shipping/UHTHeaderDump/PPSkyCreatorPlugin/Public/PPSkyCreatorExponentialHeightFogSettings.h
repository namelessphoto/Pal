#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "PPSkyCreatorExponentialHeightFogSettings.generated.h"

USTRUCT(BlueprintType)
struct FPPSkyCreatorExponentialHeightFogSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FogDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FogHeightFalloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor FogInscatteringColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FogStartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float SecondFogDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float SecondFogHeightFalloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float DirectionalInscatteringExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float DirectionalInscatteringStartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor DirectionalInscatteringColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float VolumetricFogScatteringDistribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor VolumetricFogAlbedo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor VolumetricFogEmissive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float VolumetricFogExtinctionScale;
    
    PPSKYCREATORPLUGIN_API FPPSkyCreatorExponentialHeightFogSettings();
};

