#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=SingleSelectionMeshEditingTool -FallbackName=SingleSelectionMeshEditingTool
#include "MeshBoundaryToolBase.generated.h"

class UPolygonSelectionMechanic;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UMeshBoundaryToolBase : public USingleSelectionMeshEditingTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UPolygonSelectionMechanic* SelectionMechanic;
    
public:
    UMeshBoundaryToolBase();

};

