#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "IterativeSmoothProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UIterativeSmoothProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float SmoothingPerStep;
    
    UPROPERTY(EditAnywhere)
    int32 Steps;
    
    UPROPERTY(EditAnywhere)
    bool bSmoothBoundary;
    
    UIterativeSmoothProperties();

};

