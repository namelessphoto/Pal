#pragma once
#include "CoreMinimal.h"
#include "BaseSmoothBrushOpProps.h"
#include "SecondarySmoothBrushOpProps.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API USecondarySmoothBrushOpProps : public UBaseSmoothBrushOpProps {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Strength;
    
    UPROPERTY(EditAnywhere)
    float Falloff;
    
    UPROPERTY(EditAnywhere)
    bool bPreserveUVFlow;
    
    USecondarySmoothBrushOpProps();

};

