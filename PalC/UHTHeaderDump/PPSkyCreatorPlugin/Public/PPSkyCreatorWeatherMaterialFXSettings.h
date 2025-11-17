#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "PPSkyCreatorWeatherMaterialFXSettings.generated.h"

USTRUCT(BlueprintType)
struct FPPSkyCreatorWeatherMaterialFXSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float WetnessAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor WetnessColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float PuddlesAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor PuddlesColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float RainRipplesAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float RainRipplesIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float RainRipplesForceMinRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float RainRipplesForceMaxRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float RainRipplesRingsNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float RainRipplesRingsDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float RainRipplesDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float WindRipplesIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float WindRipplesSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float SnowAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor SnowColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float SnowIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float SnowSparklesThreshold;
    
    PPSKYCREATORPLUGIN_API FPPSkyCreatorWeatherMaterialFXSettings();
};

