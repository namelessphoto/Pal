#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=SingleSelectionMeshEditingTool -FallbackName=SingleSelectionMeshEditingTool
#include "WeldMeshEdgesTool.generated.h"

class UMeshElementsVisualizer;
class UMeshOpPreviewWithBackgroundCompute;
class UWeldMeshEdgesOperatorFactory;
class UWeldMeshEdgesToolProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UWeldMeshEdgesTool : public USingleSelectionMeshEditingTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UWeldMeshEdgesToolProperties* Settings;
    
    UPROPERTY()
    UMeshOpPreviewWithBackgroundCompute* PreviewCompute;
    
    UPROPERTY()
    UMeshElementsVisualizer* MeshElementsDisplay;
    
    UPROPERTY()
    UWeldMeshEdgesOperatorFactory* OperatorFactory;
    
public:
    UWeldMeshEdgesTool();

};

