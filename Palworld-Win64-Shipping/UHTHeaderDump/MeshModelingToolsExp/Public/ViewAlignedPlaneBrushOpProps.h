#pragma once
#include "CoreMinimal.h"
#include "BasePlaneBrushOpProps.h"
#include "EPlaneBrushSideMode.h"
#include "ViewAlignedPlaneBrushOpProps.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UViewAlignedPlaneBrushOpProps : public UBasePlaneBrushOpProps {
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
    
    UViewAlignedPlaneBrushOpProps();

};

