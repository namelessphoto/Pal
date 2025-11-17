#pragma once
#include "CoreMinimal.h"
#include "RegionScaleFactors.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRegionScaleFactors {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PositiveWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NegativeWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PositiveHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NegativeHeight;
    
    FRegionScaleFactors();
};

