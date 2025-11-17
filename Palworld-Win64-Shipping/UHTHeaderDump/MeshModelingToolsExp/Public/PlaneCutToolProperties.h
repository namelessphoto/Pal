#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "PlaneCutToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UPlaneCutToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bKeepBothHalves;
    
    UPROPERTY(EditAnywhere)
    float SpacingBetweenHalves;
    
    UPROPERTY(EditAnywhere)
    bool bShowPreview;
    
    UPROPERTY(EditAnywhere)
    bool bFillCutHole;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bFillSpans;
    
    UPlaneCutToolProperties();

};

