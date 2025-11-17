#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingTool -FallbackName=MultiSelectionMeshEditingTool
#include "EditNormalsTool.generated.h"

class UEditNormalsAdvancedProperties;
class UEditNormalsToolProperties;
class UMeshOpPreviewWithBackgroundCompute;
class UPolygroupLayersProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UEditNormalsTool : public UMultiSelectionMeshEditingTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UEditNormalsToolProperties* BasicProperties;
    
    UPROPERTY()
    UEditNormalsAdvancedProperties* AdvancedProperties;
    
    UPROPERTY()
    UPolygroupLayersProperties* PolygroupLayerProperties;
    
    UPROPERTY()
    TArray<UMeshOpPreviewWithBackgroundCompute*> Previews;
    
public:
    UEditNormalsTool();

};

