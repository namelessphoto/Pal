#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=SingleSelectionMeshEditingTool -FallbackName=SingleSelectionMeshEditingTool
#include "MeshSpaceDeformerTool.generated.h"

class UCombinedTransformGizmo;
class UDragAlignmentMechanic;
class UGizmoLocalFloatParameterSource;
class UGizmoTransformChangeStateTarget;
class UIntervalGizmo;
class UMeshOpPreviewWithBackgroundCompute;
class UMeshSpaceDeformerToolActionPropertySet;
class UMeshSpaceDeformerToolProperties;
class UPreviewMesh;
class UTransformProxy;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UMeshSpaceDeformerTool : public USingleSelectionMeshEditingTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UMeshSpaceDeformerToolProperties* Settings;
    
    UPROPERTY()
    UMeshSpaceDeformerToolActionPropertySet* ToolActions;
    
    UPROPERTY()
    UGizmoTransformChangeStateTarget* StateTarget;
    
    UPROPERTY()
    UDragAlignmentMechanic* DragAlignmentMechanic;
    
    UPROPERTY()
    UMeshOpPreviewWithBackgroundCompute* Preview;
    
    UPROPERTY()
    UPreviewMesh* OriginalMeshPreview;
    
    UPROPERTY()
    UIntervalGizmo* IntervalGizmo;
    
    UPROPERTY()
    UCombinedTransformGizmo* TransformGizmo;
    
    UPROPERTY()
    UTransformProxy* TransformProxy;
    
    UPROPERTY()
    UGizmoLocalFloatParameterSource* UpIntervalSource;
    
    UPROPERTY()
    UGizmoLocalFloatParameterSource* DownIntervalSource;
    
    UPROPERTY()
    UGizmoLocalFloatParameterSource* ForwardIntervalSource;
    
public:
    UMeshSpaceDeformerTool();

};

