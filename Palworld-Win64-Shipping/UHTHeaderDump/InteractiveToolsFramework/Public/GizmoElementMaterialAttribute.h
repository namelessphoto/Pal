#pragma once
#include "CoreMinimal.h"
#include "GizmoElementMaterialAttribute.generated.h"

class UMaterialInterface;

USTRUCT()
struct INTERACTIVETOOLSFRAMEWORK_API FGizmoElementMaterialAttribute {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<UMaterialInterface> Value;
    
    UPROPERTY()
    bool bOverridesChildState;
    
    FGizmoElementMaterialAttribute();
};

