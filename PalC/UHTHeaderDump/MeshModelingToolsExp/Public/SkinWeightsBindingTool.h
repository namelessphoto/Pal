#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingTool -FallbackName=MultiSelectionMeshEditingTool
#include "SkinWeightsBindingTool.generated.h"

class UMeshOpPreviewWithBackgroundCompute;
class USkinWeightsBindingToolProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API USkinWeightsBindingTool : public UMultiSelectionMeshEditingTool {
    GENERATED_BODY()
public:
    UPROPERTY()
    USkinWeightsBindingToolProperties* Properties;
    
    UPROPERTY()
    UMeshOpPreviewWithBackgroundCompute* Preview;
    
    USkinWeightsBindingTool();

};

