#pragma once
#include "CoreMinimal.h"
#include "BaseSmoothBrushOpProps.h"
#include "SmoothFillBrushOpProps.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API USmoothFillBrushOpProps : public UBaseSmoothBrushOpProps {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Strength;
    
    UPROPERTY(EditAnywhere)
    float Falloff;
    
    UPROPERTY(EditAnywhere)
    bool bPreserveUVFlow;
    
    USmoothFillBrushOpProps();

};

