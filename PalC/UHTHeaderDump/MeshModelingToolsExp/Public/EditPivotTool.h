#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingTool -FallbackName=MultiSelectionMeshEditingTool
#include "EditPivotTarget.h"
#include "EditPivotTool.generated.h"

class UDragAlignmentMechanic;
class UEditPivotToolActionPropertySet;
class UEditPivotToolProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UEditPivotTool : public UMultiSelectionMeshEditingTool {
    GENERATED_BODY()
public:
    UPROPERTY()
    UEditPivotToolProperties* TransformProps;
    
    UPROPERTY()
    UEditPivotToolActionPropertySet* EditPivotActions;
    
protected:
    UPROPERTY()
    TArray<FEditPivotTarget> ActiveGizmos;
    
    UPROPERTY()
    UDragAlignmentMechanic* DragAlignmentMechanic;
    
public:
    UEditPivotTool();

};

