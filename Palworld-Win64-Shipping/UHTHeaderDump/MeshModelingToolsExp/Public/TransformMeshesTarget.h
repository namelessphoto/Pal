#pragma once
#include "CoreMinimal.h"
#include "TransformMeshesTarget.generated.h"

class UCombinedTransformGizmo;
class UTransformProxy;

USTRUCT(BlueprintType)
struct FTransformMeshesTarget {
    GENERATED_BODY()
public:
    UPROPERTY()
    UTransformProxy* TransformProxy;
    
    UPROPERTY()
    UCombinedTransformGizmo* TransformGizmo;
    
    MESHMODELINGTOOLSEXP_API FTransformMeshesTarget();
};

