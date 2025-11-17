#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingTool -FallbackName=MultiSelectionMeshEditingTool
#include "PhysicsInspectorTool.generated.h"

class UCollisionGeometryVisualizationProperties;
class UMaterialInterface;
class UPhysicsObjectToolPropertySet;
class UPreviewGeometry;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UPhysicsInspectorTool : public UMultiSelectionMeshEditingTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UCollisionGeometryVisualizationProperties* VizSettings;
    
    UPROPERTY()
    TArray<UPhysicsObjectToolPropertySet*> ObjectData;
    
    UPROPERTY()
    UMaterialInterface* LineMaterial;
    
    UPROPERTY()
    TArray<UPreviewGeometry*> PreviewElements;
    
public:
    UPhysicsInspectorTool();

};

