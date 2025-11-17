#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "IterativeOffsetProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UIterativeOffsetProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Steps;
    
    UPROPERTY(EditAnywhere)
    bool bOffsetBoundaries;
    
    UPROPERTY(EditAnywhere)
    float SmoothingPerStep;
    
    UPROPERTY(EditAnywhere)
    bool bReprojectSmooth;
    
    UIterativeOffsetProperties();

};

