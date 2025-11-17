#pragma once
#include "CoreMinimal.h"
#include "ActiveGizmo.generated.h"

class UInteractiveGizmo;

USTRUCT(BlueprintType)
struct FActiveGizmo {
    GENERATED_BODY()
public:
    UPROPERTY()
    UInteractiveGizmo* Gizmo;
    
    INTERACTIVETOOLSFRAMEWORK_API FActiveGizmo();
};

