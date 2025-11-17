#pragma once
#include "CoreMinimal.h"
#include "PPCelestialPositionData.generated.h"

USTRUCT(BlueprintType)
struct PPSKYCREATORPLUGIN_API FPPCelestialPositionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Elevation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Azimuth;
    
    FPPCelestialPositionData();
};

