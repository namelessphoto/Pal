#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=SingleSelectionMeshEditingTool -FallbackName=SingleSelectionMeshEditingTool
#include "RecomputeUVsTool.generated.h"

class UExistingMeshMaterialProperties;
class UMeshOpPreviewWithBackgroundCompute;
class UMeshUVChannelProperties;
class UPolygroupLayersProperties;
class URecomputeUVsOpFactory;
class URecomputeUVsToolProperties;
class UUVLayoutPreview;

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API URecomputeUVsTool : public USingleSelectionMeshEditingTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UMeshUVChannelProperties* UVChannelProperties;
    
    UPROPERTY()
    URecomputeUVsToolProperties* Settings;
    
    UPROPERTY()
    UPolygroupLayersProperties* PolygroupLayerProperties;
    
    UPROPERTY()
    UExistingMeshMaterialProperties* MaterialSettings;
    
    UPROPERTY()
    bool bCreateUVLayoutViewOnSetup;
    
    UPROPERTY()
    UUVLayoutPreview* UVLayoutView;
    
    UPROPERTY()
    URecomputeUVsOpFactory* RecomputeUVsOpFactory;
    
    UPROPERTY()
    UMeshOpPreviewWithBackgroundCompute* Preview;
    
public:
    URecomputeUVsTool();

};

