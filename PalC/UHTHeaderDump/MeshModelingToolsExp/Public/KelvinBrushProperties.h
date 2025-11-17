#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "KelvinBrushProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UKelvinBrushProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float FalloffDistance;
    
    UPROPERTY(EditAnywhere)
    float Stiffness;
    
    UPROPERTY(EditAnywhere)
    float Incompressiblity;
    
    UPROPERTY(EditAnywhere)
    int32 BrushSteps;
    
    UKelvinBrushProperties();

};

