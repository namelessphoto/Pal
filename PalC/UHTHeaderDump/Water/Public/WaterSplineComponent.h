#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent
#include "WaterSplineCurveDefaults.h"
#include "WaterSplineComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WATER_API UWaterSplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FWaterSplineCurveDefaults WaterSplineDefaults;
    
    UPROPERTY()
    FWaterSplineCurveDefaults PreviousWaterSplineDefaults;
    
    UWaterSplineComponent(const FObjectInitializer& ObjectInitializer);

};

