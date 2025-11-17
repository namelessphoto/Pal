#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "Templates/SubclassOf.h"
#include "CameraCalibrationSettings.generated.h"

class ULensDistortionModelHandlerBase;
class ULensFile;
class UMaterialInterface;

UCLASS(Config=Game)
class CAMERACALIBRATIONCORE_API UCameraCalibrationSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<ULensFile> StartupLensFile;
    
    UPROPERTY(Config, EditAnywhere)
    FIntPoint DisplacementMapResolution;
    
    UPROPERTY(Config, EditAnywhere)
    float CalibrationInputTolerance;
    
    UPROPERTY(Config)
    TMap<TSubclassOf<ULensDistortionModelHandlerBase>, TSoftObjectPtr<UMaterialInterface>> DefaultUndistortionDisplacementMaterials;
    
    UPROPERTY(Config)
    TMap<TSubclassOf<ULensDistortionModelHandlerBase>, TSoftObjectPtr<UMaterialInterface>> DefaultDistortionDisplacementMaterials;
    
    UPROPERTY(Config)
    TMap<TSubclassOf<ULensDistortionModelHandlerBase>, TSoftObjectPtr<UMaterialInterface>> DefaultDistortionMaterials;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableCalibrationDatasetImportExport;
    
public:
    UCameraCalibrationSettings();

};

