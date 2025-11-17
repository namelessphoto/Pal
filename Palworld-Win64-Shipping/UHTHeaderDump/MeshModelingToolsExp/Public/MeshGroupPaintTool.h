#pragma once
#include "CoreMinimal.h"
#include "MeshSculptToolBase.h"
#include "MeshGroupPaintTool.generated.h"

class AInternalToolFrameworkActor;
class UDynamicMeshComponent;
class UGroupEraseBrushOpProps;
class UGroupPaintBrushFilterProperties;
class UGroupPaintBrushOpProps;
class UMeshElementsVisualizer;
class UMeshGroupPaintToolFreezeActions;
class UPolyLassoMarqueeMechanic;
class UPolygroupLayersProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UMeshGroupPaintTool : public UMeshSculptToolBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    UPolygroupLayersProperties* PolygroupLayerProperties;
    
    UPROPERTY()
    UGroupPaintBrushFilterProperties* FilterProperties;
    
private:
    UPROPERTY()
    UGroupPaintBrushOpProps* PaintBrushOpProperties;
    
    UPROPERTY()
    UGroupEraseBrushOpProps* EraseBrushOpProperties;
    
public:
    UPROPERTY()
    UMeshGroupPaintToolFreezeActions* FreezeActions;
    
    UPROPERTY()
    UPolyLassoMarqueeMechanic* PolyLassoMechanic;
    
protected:
    UPROPERTY()
    AInternalToolFrameworkActor* PreviewMeshActor;
    
    UPROPERTY(Instanced)
    UDynamicMeshComponent* DynamicMeshComponent;
    
    UPROPERTY()
    UMeshElementsVisualizer* MeshElementsDisplay;
    
public:
    UMeshGroupPaintTool();

};

