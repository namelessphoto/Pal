#pragma once
#include "CoreMinimal.h"
#include "MeshBoundaryToolBase.h"
#include "RevolveBoundaryTool.generated.h"

class UConstructionPlaneMechanic;
class UCreateMeshObjectTypeProperties;
class UMeshOpPreviewWithBackgroundCompute;
class UNewMeshMaterialProperties;
class URevolveBoundaryToolProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API URevolveBoundaryTool : public UMeshBoundaryToolBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UCreateMeshObjectTypeProperties* OutputTypeProperties;
    
    UPROPERTY()
    URevolveBoundaryToolProperties* Settings;
    
    UPROPERTY()
    UNewMeshMaterialProperties* MaterialProperties;
    
    UPROPERTY()
    UConstructionPlaneMechanic* PlaneMechanic;
    
    UPROPERTY()
    UMeshOpPreviewWithBackgroundCompute* Preview;
    
public:
    URevolveBoundaryTool();

};

