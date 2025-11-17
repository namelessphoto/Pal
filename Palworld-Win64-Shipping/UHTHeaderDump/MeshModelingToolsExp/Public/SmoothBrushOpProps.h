#pragma once
#include "CoreMinimal.h"
#include "BaseSmoothBrushOpProps.h"
#include "SmoothBrushOpProps.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API USmoothBrushOpProps : public UBaseSmoothBrushOpProps {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Strength;
    
    UPROPERTY(EditAnywhere)
    float Falloff;
    
    UPROPERTY(EditAnywhere)
    bool bPreserveUVFlow;
    
    USmoothBrushOpProps();

};

