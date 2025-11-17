#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveTool -FallbackName=InteractiveTool
#include "DrawPolygonTool.generated.h"

class UCombinedTransformGizmo;
class UCreateMeshObjectTypeProperties;
class UDragAlignmentMechanic;
class UDrawPolygonToolSnapProperties;
class UDrawPolygonToolStandardProperties;
class UNewMeshMaterialProperties;
class UPlaneDistanceFromHitMechanic;
class UPreviewMesh;
class UTransformProxy;

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UDrawPolygonTool : public UInteractiveTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UCreateMeshObjectTypeProperties* OutputTypeProperties;
    
    UPROPERTY()
    UDrawPolygonToolStandardProperties* PolygonProperties;
    
    UPROPERTY()
    UDrawPolygonToolSnapProperties* SnapProperties;
    
    UPROPERTY()
    UNewMeshMaterialProperties* MaterialProperties;
    
    UPROPERTY()
    UPreviewMesh* PreviewMesh;
    
    UPROPERTY()
    UCombinedTransformGizmo* PlaneTransformGizmo;
    
    UPROPERTY()
    UTransformProxy* PlaneTransformProxy;
    
    UPROPERTY()
    UPlaneDistanceFromHitMechanic* HeightMechanic;
    
    UPROPERTY()
    UDragAlignmentMechanic* DragAlignmentMechanic;
    
public:
    UDrawPolygonTool();

};

