#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingTool -FallbackName=MultiSelectionMeshEditingTool
#include "TransformMeshesTarget.h"
#include "TransformMeshesTool.generated.h"

class UDragAlignmentMechanic;
class UTransformMeshesToolProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UTransformMeshesTool : public UMultiSelectionMeshEditingTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UTransformMeshesToolProperties* TransformProps;
    
    UPROPERTY()
    TArray<FTransformMeshesTarget> ActiveGizmos;
    
    UPROPERTY()
    UDragAlignmentMechanic* DragAlignmentMechanic;
    
public:
    UTransformMeshesTool();

};

