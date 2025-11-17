#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolNestedAcceptCancelAPI -FallbackName=InteractiveToolNestedAcceptCancelAPI
#include "DynamicMeshBrushTool.h"
#include "MeshSelectionTool.generated.h"

class AActor;
class UMeshElementsVisualizer;
class UMeshSelectionEditActions;
class UMeshSelectionSet;
class UMeshSelectionToolActionPropertySet;
class UMeshSelectionToolProperties;
class UMeshStatisticsProperties;
class UMeshUVChannelProperties;
class UPolygroupLayersProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UMeshSelectionTool : public UDynamicMeshBrushTool, public IInteractiveToolNestedAcceptCancelAPI {
    GENERATED_BODY()
public:
    UPROPERTY()
    UMeshSelectionToolProperties* SelectionProps;
    
    UPROPERTY()
    UMeshSelectionEditActions* SelectionActions;
    
    UPROPERTY()
    UMeshSelectionToolActionPropertySet* EditActions;
    
    UPROPERTY()
    UMeshStatisticsProperties* MeshStatisticsProperties;
    
    UPROPERTY()
    UMeshElementsVisualizer* MeshElementsDisplay;
    
    UPROPERTY()
    UMeshUVChannelProperties* UVChannelProperties;
    
    UPROPERTY()
    UPolygroupLayersProperties* PolygroupLayerProperties;
    
protected:
    UPROPERTY()
    UMeshSelectionSet* Selection;
    
    UPROPERTY()
    TArray<AActor*> SpawnedActors;
    
public:
    UMeshSelectionTool();


    // Fix for true pure virtual functions not being implemented
};

