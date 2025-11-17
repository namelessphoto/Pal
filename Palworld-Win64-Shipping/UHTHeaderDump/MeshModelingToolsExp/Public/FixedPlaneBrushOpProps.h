#pragma once
#include "CoreMinimal.h"
#include "BasePlaneBrushOpProps.h"
#include "EPlaneBrushSideMode.h"
#include "FixedPlaneBrushOpProps.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UFixedPlaneBrushOpProps : public UBasePlaneBrushOpProps {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Strength;
    
    UPROPERTY(EditAnywhere)
    float Falloff;
    
    UPROPERTY(EditAnywhere)
    float Depth;
    
    UPROPERTY(EditAnywhere)
    EPlaneBrushSideMode WhichSide;
    
    UFixedPlaneBrushOpProps();

};

