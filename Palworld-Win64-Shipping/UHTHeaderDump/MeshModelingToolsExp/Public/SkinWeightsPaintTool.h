#pragma once
#include "CoreMinimal.h"
#include "DynamicMeshBrushTool.h"
#include "SkinWeightsPaintTool.generated.h"

class USkinWeightsPaintToolProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API USkinWeightsPaintTool : public UDynamicMeshBrushTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    USkinWeightsPaintToolProperties* ToolProps;
    
public:
    USkinWeightsPaintTool();

};

