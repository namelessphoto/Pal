#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "Templates/SubclassOf.h"
#include "WaterRuntimeSettings.generated.h"

class UMaterialInterface;
class UMaterialParameterCollection;
class UWaterBodyCustomComponent;
class UWaterBodyLakeComponent;
class UWaterBodyOceanComponent;
class UWaterBodyRiverComponent;

UCLASS(DefaultConfig)
class WATER_API UWaterRuntimeSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ECollisionChannel> CollisionChannelForWaterTraces;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UMaterialParameterCollection> MaterialParameterCollection;
    
    UPROPERTY(Config, EditAnywhere)
    float WaterBodyIconWorldZOffset;
    
private:
    UPROPERTY(Config, VisibleAnywhere)
    FName DefaultWaterCollisionProfileName;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> DefaultWaterInfoMaterial;
    
    UPROPERTY(Config, EditAnywhere)
    TSubclassOf<UWaterBodyRiverComponent> WaterBodyRiverComponentClass;
    
    UPROPERTY(Config, EditAnywhere)
    TSubclassOf<UWaterBodyLakeComponent> WaterBodyLakeComponentClass;
    
    UPROPERTY(Config, EditAnywhere)
    TSubclassOf<UWaterBodyOceanComponent> WaterBodyOceanComponentClass;
    
    UPROPERTY(Config, EditAnywhere)
    TSubclassOf<UWaterBodyCustomComponent> WaterBodyCustomComponentClass;
    
public:
    UWaterRuntimeSettings();

};

