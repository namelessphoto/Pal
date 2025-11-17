#pragma once
#include "CoreMinimal.h"
#include "WaterCurveSettings.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FWaterCurveSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseCurveChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* ElevationCurveAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ChannelEdgeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ChannelDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CurveRampWidth;
    
    WATER_API FWaterCurveSettings();
};

