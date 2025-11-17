#pragma once
#include "CoreMinimal.h"
#include "PreviewGeometry.h"
#include "MeshElementsVisualizer.generated.h"

class UMeshElementsVisualizerProperties;
class UMeshWireframeComponent;

UCLASS(NonTransient)
class MODELINGCOMPONENTS_API UMeshElementsVisualizer : public UPreviewGeometry {
    GENERATED_BODY()
public:
    UPROPERTY()
    UMeshElementsVisualizerProperties* Settings;
    
    UPROPERTY(Instanced)
    UMeshWireframeComponent* WireframeComponent;
    
    UMeshElementsVisualizer();

};

