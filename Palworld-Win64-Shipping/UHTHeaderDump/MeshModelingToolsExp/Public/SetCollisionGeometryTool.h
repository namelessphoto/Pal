#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingTool -FallbackName=MultiSelectionMeshEditingTool
#include "SetCollisionGeometryTool.generated.h"

class UCollisionGeometryVisualizationProperties;
class UMaterialInterface;
class UPhysicsObjectToolPropertySet;
class UPolygroupLayersProperties;
class UPreviewGeometry;
class USetCollisionGeometryToolProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API USetCollisionGeometryTool : public UMultiSelectionMeshEditingTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    USetCollisionGeometryToolProperties* Settings;
    
    UPROPERTY()
    UPolygroupLayersProperties* PolygroupLayerProperties;
    
    UPROPERTY()
    UCollisionGeometryVisualizationProperties* VizSettings;
    
    UPROPERTY()
    UPhysicsObjectToolPropertySet* CollisionProps;
    
    UPROPERTY()
    UMaterialInterface* LineMaterial;
    
    UPROPERTY()
    UPreviewGeometry* PreviewGeom;
    
public:
    USetCollisionGeometryTool();

};

