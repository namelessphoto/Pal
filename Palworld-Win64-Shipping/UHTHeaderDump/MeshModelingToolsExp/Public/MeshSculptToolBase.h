#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=MeshSurfacePointTool -FallbackName=MeshSurfacePointTool
#include "MeshSculptToolBase.generated.h"

class UBrushStampIndicator;
class UCombinedTransformGizmo;
class UMaterialInstanceDynamic;
class UMeshEditingViewProperties;
class UMeshSculptBrushOpProps;
class UPreviewMesh;
class USculptBrushProperties;
class UTransformProxy;
class UWorkPlaneProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UMeshSculptToolBase : public UMeshSurfacePointTool {
    GENERATED_BODY()
public:
    UPROPERTY()
    USculptBrushProperties* BrushProperties;
    
    UPROPERTY()
    UWorkPlaneProperties* GizmoProperties;
    
protected:
    UPROPERTY()
    TMap<int32, UMeshSculptBrushOpProps*> BrushOpPropSets;
    
    UPROPERTY()
    TMap<int32, UMeshSculptBrushOpProps*> SecondaryBrushOpPropSets;
    
public:
    UPROPERTY()
    UMeshEditingViewProperties* ViewProperties;
    
    UPROPERTY()
    UMaterialInstanceDynamic* ActiveOverrideMaterial;
    
protected:
    UPROPERTY()
    UBrushStampIndicator* BrushIndicator;
    
    UPROPERTY()
    bool bIsVolumetricIndicator;
    
    UPROPERTY()
    UMaterialInstanceDynamic* BrushIndicatorMaterial;
    
    UPROPERTY()
    UPreviewMesh* BrushIndicatorMesh;
    
public:
    UPROPERTY()
    UCombinedTransformGizmo* PlaneTransformGizmo;
    
    UPROPERTY()
    UTransformProxy* PlaneTransformProxy;
    
    UMeshSculptToolBase();

};

