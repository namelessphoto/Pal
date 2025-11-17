#pragma once
#include "CoreMinimal.h"
#include "DynamicMeshBrushTool.h"
#include "SeamSculptTool.generated.h"

class UPreviewGeometry;
class USeamSculptToolProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API USeamSculptTool : public UDynamicMeshBrushTool {
    GENERATED_BODY()
public:
    UPROPERTY()
    USeamSculptToolProperties* Settings;
    
protected:
    UPROPERTY()
    UPreviewGeometry* PreviewGeom;
    
public:
    USeamSculptTool();

};

