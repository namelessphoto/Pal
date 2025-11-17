#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveTool -FallbackName=InteractiveTool
#include "DrawAndRevolveTool.generated.h"

class UConstructionPlaneMechanic;
class UCreateMeshObjectTypeProperties;
class UCurveControlPointsMechanic;
class UMeshOpPreviewWithBackgroundCompute;
class UNewMeshMaterialProperties;
class URevolveToolProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UDrawAndRevolveTool : public UInteractiveTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UCurveControlPointsMechanic* ControlPointsMechanic;
    
    UPROPERTY()
    UConstructionPlaneMechanic* PlaneMechanic;
    
    UPROPERTY()
    UCreateMeshObjectTypeProperties* OutputTypeProperties;
    
    UPROPERTY()
    URevolveToolProperties* Settings;
    
    UPROPERTY()
    UNewMeshMaterialProperties* MaterialProperties;
    
    UPROPERTY()
    UMeshOpPreviewWithBackgroundCompute* Preview;
    
public:
    UDrawAndRevolveTool();

};

