#pragma once
#include "CoreMinimal.h"
#include "MeshSculptBrushOpProps.h"
#include "InflateBrushOpProps.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UInflateBrushOpProps : public UMeshSculptBrushOpProps {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Strength;
    
    UPROPERTY(EditAnywhere)
    float Falloff;
    
    UInflateBrushOpProps();

};

