#pragma once
#include "CoreMinimal.h"
#include "WaterBodyWeightmapSettings.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FWaterBodyWeightmapSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FalloffWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EdgeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* ModulationTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TextureTiling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TextureInfluence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Midpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FinalOpacity;
    
    WATER_API FWaterBodyWeightmapSettings();
};

