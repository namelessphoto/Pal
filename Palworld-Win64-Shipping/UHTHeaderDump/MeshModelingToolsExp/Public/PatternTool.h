#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingTool -FallbackName=MultiSelectionMeshEditingTool
#include "PatternTool.generated.h"

class UCombinedTransformGizmo;
class UConstructionPlaneMechanic;
class UDragAlignmentMechanic;
class UPatternToolSettings;
class UPatternTool_GridSettings;
class UPatternTool_LinearSettings;
class UPatternTool_OutputSettings;
class UPatternTool_RadialSettings;
class UPatternTool_RotationSettings;
class UPatternTool_ScaleSettings;
class UPatternTool_TranslationSettings;
class UPreviewGeometry;
class UPrimitiveComponent;
class UTransformProxy;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UPatternTool : public UMultiSelectionMeshEditingTool {
    GENERATED_BODY()
public:
    UPROPERTY()
    UPatternToolSettings* Settings;
    
    UPROPERTY()
    UPatternTool_LinearSettings* LinearSettings;
    
    UPROPERTY()
    UPatternTool_GridSettings* GridSettings;
    
    UPROPERTY()
    UPatternTool_RadialSettings* RadialSettings;
    
    UPROPERTY()
    UPatternTool_RotationSettings* RotationSettings;
    
    UPROPERTY()
    UPatternTool_TranslationSettings* TranslationSettings;
    
    UPROPERTY()
    UPatternTool_ScaleSettings* ScaleSettings;
    
    UPROPERTY()
    UPatternTool_OutputSettings* OutputSettings;
    
protected:
    UPROPERTY()
    UTransformProxy* TransformProxy_End;
    
    UPROPERTY()
    UCombinedTransformGizmo* TransformGizmo_End;
    
    UPROPERTY()
    UDragAlignmentMechanic* DragAlignmentMechanic;
    
    UPROPERTY()
    UConstructionPlaneMechanic* PlaneMechanic;
    
    UPROPERTY(Export)
    TSet<UPrimitiveComponent*> AllComponents;
    
    UPROPERTY()
    UPreviewGeometry* PreviewGeometry;
    
public:
    UPatternTool();

};

