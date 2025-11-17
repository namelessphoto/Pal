#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingTool -FallbackName=MultiSelectionMeshEditingTool
#include "RemeshMeshTool.generated.h"

class UMeshElementsVisualizer;
class UMeshOpPreviewWithBackgroundCompute;
class UMeshStatisticsProperties;
class URemeshMeshToolProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API URemeshMeshTool : public UMultiSelectionMeshEditingTool {
    GENERATED_BODY()
public:
    UPROPERTY()
    URemeshMeshToolProperties* BasicProperties;
    
    UPROPERTY()
    UMeshStatisticsProperties* MeshStatisticsProperties;
    
    UPROPERTY()
    UMeshOpPreviewWithBackgroundCompute* Preview;
    
    UPROPERTY()
    UMeshElementsVisualizer* MeshElementsDisplay;
    
    URemeshMeshTool();

};

