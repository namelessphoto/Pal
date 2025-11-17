#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingTool -FallbackName=MultiSelectionMeshEditingTool
#include "PlaneCutTool.generated.h"

class UAcceptOutputProperties;
class UConstructionPlaneMechanic;
class UDynamicMeshReplacementChangeTarget;
class UMeshOpPreviewWithBackgroundCompute;
class UPlaneCutToolProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UPlaneCutTool : public UMultiSelectionMeshEditingTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UPlaneCutToolProperties* BasicProperties;
    
    UPROPERTY()
    UAcceptOutputProperties* AcceptProperties;
    
    UPROPERTY()
    TArray<UMeshOpPreviewWithBackgroundCompute*> Previews;
    
    UPROPERTY()
    TArray<UDynamicMeshReplacementChangeTarget*> MeshesToCut;
    
    UPROPERTY()
    UConstructionPlaneMechanic* PlaneMechanic;
    
public:
    UPlaneCutTool();

protected:
    UFUNCTION()
    void FlipPlane();
    
    UFUNCTION()
    void Cut();
    
};

