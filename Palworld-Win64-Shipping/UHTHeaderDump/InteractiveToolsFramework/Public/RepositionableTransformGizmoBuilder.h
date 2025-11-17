#pragma once
#include "CoreMinimal.h"
#include "CombinedTransformGizmoBuilder.h"
#include "RepositionableTransformGizmoBuilder.generated.h"

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API URepositionableTransformGizmoBuilder : public UCombinedTransformGizmoBuilder {
    GENERATED_BODY()
public:
    URepositionableTransformGizmoBuilder();

};

