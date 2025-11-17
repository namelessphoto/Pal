#pragma once
#include "CoreMinimal.h"
#include "MeshSculptBrushOpProps.h"
#include "EraseBrushOpProps.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UEraseBrushOpProps : public UMeshSculptBrushOpProps {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Strength;
    
    UPROPERTY(EditAnywhere)
    float Falloff;
    
    UEraseBrushOpProps();

};

