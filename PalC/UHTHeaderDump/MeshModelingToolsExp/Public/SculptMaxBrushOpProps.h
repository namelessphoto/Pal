#pragma once
#include "CoreMinimal.h"
#include "MeshSculptBrushOpProps.h"
#include "SculptMaxBrushOpProps.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API USculptMaxBrushOpProps : public UMeshSculptBrushOpProps {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Strength;
    
    UPROPERTY(EditAnywhere)
    float Falloff;
    
    UPROPERTY(EditAnywhere)
    float maxHeight;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bUseFixedHeight;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float FixedHeight;
    
    USculptMaxBrushOpProps();

};

