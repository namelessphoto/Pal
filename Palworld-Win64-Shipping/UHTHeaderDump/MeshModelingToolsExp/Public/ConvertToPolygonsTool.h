#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=SingleSelectionMeshEditingTool -FallbackName=SingleSelectionMeshEditingTool
#include "ConvertToPolygonsTool.generated.h"

class UConvertToPolygonsToolProperties;
class UMeshOpPreviewWithBackgroundCompute;
class UOutputPolygroupLayerProperties;
class UPolygroupLayersProperties;
class UPreviewGeometry;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UConvertToPolygonsTool : public USingleSelectionMeshEditingTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UConvertToPolygonsToolProperties* Settings;
    
    UPROPERTY()
    UPolygroupLayersProperties* CopyFromLayerProperties;
    
    UPROPERTY()
    UOutputPolygroupLayerProperties* OutputProperties;
    
    UPROPERTY()
    UMeshOpPreviewWithBackgroundCompute* PreviewCompute;
    
    UPROPERTY()
    UPreviewGeometry* PreviewGeometry;
    
public:
    UConvertToPolygonsTool();

};

