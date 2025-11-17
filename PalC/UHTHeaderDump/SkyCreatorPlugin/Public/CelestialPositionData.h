#pragma once
#include "CoreMinimal.h"
#include "CelestialPositionData.generated.h"

USTRUCT(BlueprintType)
struct SKYCREATORPLUGIN_API FCelestialPositionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Elevation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Azimuth;
    
    FCelestialPositionData();
};

