#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "LandscapeSettings.generated.h"

class ULandscapeLayerInfoObject;
class UMaterialInterface;

UCLASS(DefaultConfig)
class LANDSCAPE_API ULandscapeSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    int32 MaxNumberOfLayers;
    
protected:
    UPROPERTY(Config)
    int32 SideResolutionLimit;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> DefaultLandscapeMaterial;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<ULandscapeLayerInfoObject> DefaultLayerInfoObject;
    
    UPROPERTY(Transient)
    bool bRestrictiveMode;
    
public:
    ULandscapeSettings();

};

