#pragma once
#include "CoreMinimal.h"
#include "EBrushBlendType.h"
#include "LandmassBrushEffectsList.h"
#include "LandmassFalloffSettings.h"
#include "LandmassTerrainCarvingSettings.generated.h"

USTRUCT(BlueprintType)
struct FLandmassTerrainCarvingSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBrushBlendType BlendMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bInvertShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLandmassFalloffSettings FalloffSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLandmassBrushEffectsList Effects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Priority;
    
    LANDMASS_API FLandmassTerrainCarvingSettings();
};

