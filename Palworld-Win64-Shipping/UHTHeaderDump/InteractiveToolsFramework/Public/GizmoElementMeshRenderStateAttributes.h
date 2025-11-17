#pragma once
#include "CoreMinimal.h"
#include "GizmoElementColorAttribute.h"
#include "GizmoElementMaterialAttribute.h"
#include "GizmoElementMeshRenderStateAttributes.generated.h"

USTRUCT(BlueprintType)
struct INTERACTIVETOOLSFRAMEWORK_API FGizmoElementMeshRenderStateAttributes {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGizmoElementMaterialAttribute Material;
    
    UPROPERTY()
    FGizmoElementMaterialAttribute HoverMaterial;
    
    UPROPERTY()
    FGizmoElementMaterialAttribute InteractMaterial;
    
    UPROPERTY()
    FGizmoElementColorAttribute VertexColor;
    
    UPROPERTY()
    FGizmoElementColorAttribute HoverVertexColor;
    
    UPROPERTY()
    FGizmoElementColorAttribute InteractVertexColor;
    
    FGizmoElementMeshRenderStateAttributes();
};

