#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "SkyCreatorVolumetricCloudSettings.generated.h"

USTRUCT(BlueprintType)
struct FSkyCreatorVolumetricCloudSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float StratusCoverage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float StratusCoverageVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float StratusHeightVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float StratocumulusCoverage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float StratocumulusCoverageVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float StratocumulusHeightVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float CumulusCoverage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float CumulusCoverageVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float CumulusHeightVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float CumulonimbusCoverage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float CumulonimbusAnvil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float CumulonimbusHeightVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float DensityBottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float DensityMiddle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float DensityTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor albedo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor GroundAlbedo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float BeersPowderIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float BeersPowderDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float BottomOcclusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float BottomOcclusionHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor NightEmissive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float PhaseG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float PhaseG2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float PhaseBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float MultiScatteringContribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float MultiScatteringOcclusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float MultiScatteringEccentricity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float NoiseShapeIntensityA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float NoiseShapeIntensityB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float NoiseShapeIntensityC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float NoiseShapeIntensityD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float TurbulenceIntensity;
    
    SKYCREATORPLUGIN_API FSkyCreatorVolumetricCloudSettings();
};

