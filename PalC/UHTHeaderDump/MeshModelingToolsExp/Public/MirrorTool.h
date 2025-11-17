#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingTool -FallbackName=MultiSelectionMeshEditingTool
#include "MirrorTool.generated.h"

class UConstructionPlaneMechanic;
class UDynamicMeshReplacementChangeTarget;
class UMeshOpPreviewWithBackgroundCompute;
class UMirrorToolActionPropertySet;
class UMirrorToolProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UMirrorTool : public UMultiSelectionMeshEditingTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UMirrorToolProperties* Settings;
    
    UPROPERTY()
    UMirrorToolActionPropertySet* ToolActions;
    
    UPROPERTY()
    TArray<UDynamicMeshReplacementChangeTarget*> MeshesToMirror;
    
    UPROPERTY()
    TArray<UMeshOpPreviewWithBackgroundCompute*> Previews;
    
    UPROPERTY()
    UConstructionPlaneMechanic* PlaneMechanic;
    
public:
    UMirrorTool();

};

