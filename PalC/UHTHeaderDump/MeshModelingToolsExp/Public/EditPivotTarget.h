#pragma once
#include "CoreMinimal.h"
#include "EditPivotTarget.generated.h"

class UCombinedTransformGizmo;
class UTransformProxy;

USTRUCT(BlueprintType)
struct FEditPivotTarget {
    GENERATED_BODY()
public:
    UPROPERTY()
    UTransformProxy* TransformProxy;
    
    UPROPERTY()
    UCombinedTransformGizmo* TransformGizmo;
    
    MESHMODELINGTOOLSEXP_API FEditPivotTarget();
};

