#pragma once
#include "CoreMinimal.h"
#include "InteractiveGizmoBuilder.h"
#include "CombinedTransformGizmoBuilder.generated.h"

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UCombinedTransformGizmoBuilder : public UInteractiveGizmoBuilder {
    GENERATED_BODY()
public:
    UCombinedTransformGizmoBuilder();

};

