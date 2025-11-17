#pragma once
#include "CoreMinimal.h"
#include "MeshSculptBrushOpProps.h"
#include "ViewAlignedSculptBrushOpProps.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UViewAlignedSculptBrushOpProps : public UMeshSculptBrushOpProps {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Strength;
    
    UPROPERTY(EditAnywhere)
    float Falloff;
    
    UViewAlignedSculptBrushOpProps();

};

