#pragma once
#include "CoreMinimal.h"
#include "EWaterBrushBlendType.h"
#include "WaterBrushEffects.h"
#include "WaterFalloffSettings.h"
#include "WaterBodyHeightmapSettings.generated.h"

USTRUCT(BlueprintType)
struct FWaterBodyHeightmapSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EWaterBrushBlendType BlendMode;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool bInvertShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FWaterFalloffSettings FalloffSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FWaterBrushEffects Effects;
    
    UPROPERTY()
    int32 Priority;
    
    WATER_API FWaterBodyHeightmapSettings();
};

