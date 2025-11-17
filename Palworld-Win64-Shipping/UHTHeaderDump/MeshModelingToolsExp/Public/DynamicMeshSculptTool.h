#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=MeshSurfacePointTool -FallbackName=MeshSurfacePointTool
#include "DynamicMeshSculptTool.generated.h"

class UBrushRemeshProperties;
class UBrushStampIndicator;
class UCombinedTransformGizmo;
class UDynamicMeshBrushProperties;
class UDynamicMeshBrushSculptProperties;
class UDynamicSculptToolActions;
class UFixedPlaneBrushProperties;
class UKelvinBrushProperties;
class UMaterialInstanceDynamic;
class UMeshEditingViewProperties;
class UOctreeDynamicMeshComponent;
class UPreviewMesh;
class USculptMaxBrushProperties;
class UTransformProxy;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UDynamicMeshSculptTool : public UMeshSurfacePointTool {
    GENERATED_BODY()
public:
    UPROPERTY()
    UDynamicMeshBrushProperties* BrushProperties;
    
    UPROPERTY()
    UDynamicMeshBrushSculptProperties* SculptProperties;
    
    UPROPERTY()
    USculptMaxBrushProperties* SculptMaxBrushProperties;
    
    UPROPERTY()
    UKelvinBrushProperties* KelvinBrushProperties;
    
    UPROPERTY()
    UBrushRemeshProperties* RemeshProperties;
    
    UPROPERTY()
    UFixedPlaneBrushProperties* GizmoProperties;
    
    UPROPERTY()
    UMeshEditingViewProperties* ViewProperties;
    
    UPROPERTY()
    UDynamicSculptToolActions* SculptToolActions;
    
private:
    UPROPERTY()
    UBrushStampIndicator* BrushIndicator;
    
    UPROPERTY()
    UMaterialInstanceDynamic* BrushIndicatorMaterial;
    
    UPROPERTY()
    UPreviewMesh* BrushIndicatorMesh;
    
    UPROPERTY(Instanced)
    UOctreeDynamicMeshComponent* DynamicMeshComponent;
    
    UPROPERTY()
    UMaterialInstanceDynamic* ActiveOverrideMaterial;
    
    UPROPERTY()
    UCombinedTransformGizmo* PlaneTransformGizmo;
    
    UPROPERTY()
    UTransformProxy* PlaneTransformProxy;
    
public:
    UDynamicMeshSculptTool();

};

