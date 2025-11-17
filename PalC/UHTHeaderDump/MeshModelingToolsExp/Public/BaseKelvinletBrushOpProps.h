#pragma once
#include "CoreMinimal.h"
#include "MeshSculptBrushOpProps.h"
#include "BaseKelvinletBrushOpProps.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UBaseKelvinletBrushOpProps : public UMeshSculptBrushOpProps {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Stiffness;
    
    UPROPERTY()
    float Incompressiblity;
    
    UPROPERTY()
    int32 BrushSteps;
    
    UBaseKelvinletBrushOpProps();

};

