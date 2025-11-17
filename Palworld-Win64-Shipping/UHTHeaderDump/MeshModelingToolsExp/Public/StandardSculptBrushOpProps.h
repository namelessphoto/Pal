#pragma once
#include "CoreMinimal.h"
#include "MeshSculptBrushOpProps.h"
#include "StandardSculptBrushOpProps.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UStandardSculptBrushOpProps : public UMeshSculptBrushOpProps {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Strength;
    
    UPROPERTY(EditAnywhere)
    float Falloff;
    
    UStandardSculptBrushOpProps();

};

