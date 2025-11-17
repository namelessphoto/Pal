#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "SkyCreatorWeatherFXSettings.generated.h"

USTRUCT(BlueprintType)
struct FSkyCreatorWeatherFXSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float RainAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor RainColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float RainGravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float RainLifetimeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float RainLifetimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float RainSizeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float RainSizeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float RainSplashLifetimeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float RainSplashLifetimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector2D RainSplashSizeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector2D RainSplashSizeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float SnowAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor SnowColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float SnowGravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float SnowTurbulence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float SnowLifetimeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float SnowLifetimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float SnowSizeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float SnowSizeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool EnableLightnings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float LightningSpawnIntervalMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float LightningSpawnIntervalMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor LightningColorMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor LightningColorMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float LightningLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float LightningBoltSpawnChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float LightningBoltWidthMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float LightningBoltWidthMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float LightningBoltLengthMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float LightningBoltLengthMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float LightningBoltCurveFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float LightningBoltCurveStrengthMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float LightningBoltCurveStrengthMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float LightningBoltJitterStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float LightningBranchSpawnChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float LightningBranchScaleMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float LightningBranchScaleMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float RainbowAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor RainbowColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float RainbowRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float RainbowThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor SecondaryRainbowColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float SecondaryRainbowRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float SecondaryRainbowThickness;
    
    SKYCREATORPLUGIN_API FSkyCreatorWeatherFXSettings();
};

