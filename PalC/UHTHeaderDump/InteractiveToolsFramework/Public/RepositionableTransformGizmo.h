#pragma once
#include "CoreMinimal.h"
#include "CombinedTransformGizmo.h"
#include "RepositionableTransformGizmo.generated.h"

class UGizmoTransformChangeStateTarget;

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API URepositionableTransformGizmo : public UCombinedTransformGizmo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UGizmoTransformChangeStateTarget* RepositionStateTarget;
    
public:
    URepositionableTransformGizmo();

};

