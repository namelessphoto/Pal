#pragma once
#include "CoreMinimal.h"
#include "MeshSculptBrushOpProps.h"
#include "GroupEraseBrushOpProps.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UGroupEraseBrushOpProps : public UMeshSculptBrushOpProps {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Group;
    
    UPROPERTY(EditAnywhere)
    bool bOnlyEraseCurrent;
    
    UGroupEraseBrushOpProps();

};

