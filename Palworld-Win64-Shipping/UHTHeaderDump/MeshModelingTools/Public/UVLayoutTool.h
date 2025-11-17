#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingTool -FallbackName=MultiSelectionMeshEditingTool
#include "UVLayoutTool.generated.h"

class UExistingMeshMaterialProperties;
class UMeshOpPreviewWithBackgroundCompute;
class UMeshUVChannelProperties;
class UUVLayoutOperatorFactory;
class UUVLayoutPreview;
class UUVLayoutProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UUVLayoutTool : public UMultiSelectionMeshEditingTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UMeshUVChannelProperties* UVChannelProperties;
    
    UPROPERTY()
    UUVLayoutProperties* BasicProperties;
    
    UPROPERTY()
    UExistingMeshMaterialProperties* MaterialSettings;
    
    UPROPERTY()
    TArray<UMeshOpPreviewWithBackgroundCompute*> Previews;
    
    UPROPERTY()
    TArray<UUVLayoutOperatorFactory*> Factories;
    
    UPROPERTY()
    UUVLayoutPreview* UVLayoutView;
    
public:
    UUVLayoutTool();

};

