#pragma once
#include "CoreMinimal.h"
#include "BaseKelvinletBrushOpProps.h"
#include "PullKelvinletBrushOpProps.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UPullKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Falloff;
    
    UPROPERTY(EditAnywhere)
    float Depth;
    
    UPullKelvinletBrushOpProps();

};

