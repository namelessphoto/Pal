#pragma once
#include "CoreMinimal.h"
#include "BasePlaneBrushOpProps.h"
#include "EPlaneBrushSideMode.h"
#include "PlaneBrushOpProps.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UPlaneBrushOpProps : public UBasePlaneBrushOpProps {
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
    
    UPlaneBrushOpProps();

};

