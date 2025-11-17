#pragma once
#include "CoreMinimal.h"
#include "GizmoElementColorAttribute.h"
#include "GizmoElementLineRenderStateAttributes.generated.h"

USTRUCT(BlueprintType)
struct INTERACTIVETOOLSFRAMEWORK_API FGizmoElementLineRenderStateAttributes {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGizmoElementColorAttribute LineColor;
    
    UPROPERTY()
    FGizmoElementColorAttribute HoverLineColor;
    
    UPROPERTY()
    FGizmoElementColorAttribute InteractLineColor;
    
    FGizmoElementLineRenderStateAttributes();
};

