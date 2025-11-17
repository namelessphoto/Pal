#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=SingleSelectionMeshEditingTool -FallbackName=SingleSelectionMeshEditingTool
#include "LatticeDeformerTool.generated.h"

class ULatticeControlPointsMechanic;
class ULatticeDeformerToolProperties;
class UMeshOpPreviewWithBackgroundCompute;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API ULatticeDeformerTool : public USingleSelectionMeshEditingTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ULatticeControlPointsMechanic* ControlPointsMechanic;
    
    UPROPERTY()
    ULatticeDeformerToolProperties* Settings;
    
    UPROPERTY()
    UMeshOpPreviewWithBackgroundCompute* Preview;
    
    UPROPERTY()
    bool bLatticeDeformed;
    
public:
    ULatticeDeformerTool();

};

