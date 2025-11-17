#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=SingleSelectionMeshEditingTool -FallbackName=SingleSelectionMeshEditingTool
#include "HoleFillTool.generated.h"

class UHoleFillStatisticsProperties;
class UHoleFillToolActions;
class UHoleFillToolProperties;
class UMeshOpPreviewWithBackgroundCompute;
class UPolygonSelectionMechanic;
class USmoothHoleFillProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UHoleFillTool : public USingleSelectionMeshEditingTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    USmoothHoleFillProperties* SmoothHoleFillProperties;
    
    UPROPERTY()
    UHoleFillToolProperties* Properties;
    
    UPROPERTY()
    UHoleFillToolActions* Actions;
    
    UPROPERTY()
    UHoleFillStatisticsProperties* Statistics;
    
    UPROPERTY()
    UMeshOpPreviewWithBackgroundCompute* Preview;
    
    UPROPERTY()
    UPolygonSelectionMechanic* SelectionMechanic;
    
public:
    UHoleFillTool();

};

