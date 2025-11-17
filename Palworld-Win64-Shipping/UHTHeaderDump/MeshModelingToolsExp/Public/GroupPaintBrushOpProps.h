#pragma once
#include "CoreMinimal.h"
#include "MeshSculptBrushOpProps.h"
#include "GroupPaintBrushOpProps.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UGroupPaintBrushOpProps : public UMeshSculptBrushOpProps {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Group;
    
    UPROPERTY(EditAnywhere)
    bool bOnlyPaintUngrouped;
    
    UGroupPaintBrushOpProps();

};

