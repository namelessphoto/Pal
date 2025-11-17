#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
#include "SunPositionData.generated.h"

USTRUCT(BlueprintType)
struct SUNPOSITION_API FSunPositionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Elevation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CorrectedElevation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Azimuth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTimespan SunriseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTimespan SunsetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTimespan SolarNoon;
    
    FSunPositionData();
};

