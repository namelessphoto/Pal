#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InterpCurveFloat -FallbackName=InterpCurveFloat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InterpCurveVector -FallbackName=InterpCurveVector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineMetadata -FallbackName=SplineMetadata
#include "WaterSplineMetadata.generated.h"

UCLASS()
class WATER_API UWaterSplineMetadata : public USplineMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FInterpCurveFloat Depth;
    
    UPROPERTY(EditAnywhere)
    FInterpCurveFloat WaterVelocityScalar;
    
    UPROPERTY(EditAnywhere)
    FInterpCurveFloat RiverWidth;
    
    UPROPERTY(EditAnywhere)
    FInterpCurveFloat AudioIntensity;
    
private:
    UPROPERTY()
    FInterpCurveVector WaterVelocity;
    
public:
    UWaterSplineMetadata();

};

