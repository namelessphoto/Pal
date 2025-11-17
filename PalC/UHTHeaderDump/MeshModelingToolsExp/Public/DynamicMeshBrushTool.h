#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=BaseBrushTool -FallbackName=BaseBrushTool
#include "DynamicMeshBrushTool.generated.h"

class UPreviewMesh;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UDynamicMeshBrushTool : public UBaseBrushTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UPreviewMesh* PreviewMesh;
    
public:
    UDynamicMeshBrushTool();

};

