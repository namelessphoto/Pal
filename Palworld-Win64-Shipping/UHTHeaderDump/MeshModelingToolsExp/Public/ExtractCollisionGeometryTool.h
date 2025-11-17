#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=SingleSelectionMeshEditingTool -FallbackName=SingleSelectionMeshEditingTool
#include "ExtractCollisionGeometryTool.generated.h"

class UCollisionGeometryVisualizationProperties;
class UCreateMeshObjectTypeProperties;
class UExtractCollisionToolProperties;
class UPhysicsObjectToolPropertySet;
class UPreviewGeometry;
class UPreviewMesh;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UExtractCollisionGeometryTool : public USingleSelectionMeshEditingTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UCreateMeshObjectTypeProperties* OutputTypeProperties;
    
    UPROPERTY()
    UExtractCollisionToolProperties* Settings;
    
    UPROPERTY()
    UCollisionGeometryVisualizationProperties* VizSettings;
    
    UPROPERTY()
    UPhysicsObjectToolPropertySet* ObjectProps;
    
    UPROPERTY()
    UPreviewGeometry* PreviewElements;
    
    UPROPERTY()
    UPreviewMesh* PreviewMesh;
    
public:
    UExtractCollisionGeometryTool();

};

