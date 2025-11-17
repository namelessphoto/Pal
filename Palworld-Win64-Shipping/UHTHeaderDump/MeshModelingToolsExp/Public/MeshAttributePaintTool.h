#pragma once
#include "CoreMinimal.h"
#include "DynamicMeshBrushTool.h"
#include "MeshAttributePaintTool.generated.h"

class UMeshAttributePaintBrushOperationProperties;
class UMeshAttributePaintToolProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UMeshAttributePaintTool : public UDynamicMeshBrushTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UMeshAttributePaintBrushOperationProperties* BrushActionProps;
    
    UPROPERTY()
    UMeshAttributePaintToolProperties* AttribProps;
    
public:
    UMeshAttributePaintTool();

};

