#pragma once
#include "CoreMinimal.h"
#include "EPlaneBrushSideMode.h"
#include "MeshSculptBrushOpProps.h"
#include "FlattenBrushOpProps.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UFlattenBrushOpProps : public UMeshSculptBrushOpProps {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Strength;
    
    UPROPERTY(EditAnywhere)
    float Falloff;
    
    UPROPERTY(EditAnywhere)
    float Depth;
    
    UPROPERTY(EditAnywhere)
    EPlaneBrushSideMode WhichSide;
    
    UFlattenBrushOpProps();

};

