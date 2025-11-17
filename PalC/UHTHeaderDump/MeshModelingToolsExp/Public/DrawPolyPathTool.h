#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveTool -FallbackName=InteractiveTool
#include "DrawPolyPathTool.generated.h"

class UCollectSurfacePathMechanic;
class UConstructionPlaneMechanic;
class UCreateMeshObjectTypeProperties;
class UDrawPolyPathExtrudeProperties;
class UDrawPolyPathProperties;
class UNewMeshMaterialProperties;
class UPlaneDistanceFromHitMechanic;
class UPolyEditPreviewMesh;
class USpatialCurveDistanceMechanic;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UDrawPolyPathTool : public UInteractiveTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UCreateMeshObjectTypeProperties* OutputTypeProperties;
    
    UPROPERTY()
    UDrawPolyPathProperties* TransformProps;
    
    UPROPERTY()
    UDrawPolyPathExtrudeProperties* ExtrudeProperties;
    
    UPROPERTY()
    UNewMeshMaterialProperties* MaterialProperties;
    
    UPROPERTY()
    UConstructionPlaneMechanic* PlaneMechanic;
    
    UPROPERTY()
    UPolyEditPreviewMesh* EditPreview;
    
    UPROPERTY()
    UPlaneDistanceFromHitMechanic* ExtrudeHeightMechanic;
    
    UPROPERTY()
    USpatialCurveDistanceMechanic* CurveDistMechanic;
    
    UPROPERTY()
    UCollectSurfacePathMechanic* SurfacePathMechanic;
    
public:
    UDrawPolyPathTool();

};

