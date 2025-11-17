#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "ImplicitSmoothProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UImplicitSmoothProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY()
    float SmoothSpeed;
    
    UPROPERTY(EditAnywhere)
    float Smoothness;
    
    UPROPERTY(EditAnywhere)
    bool bPreserveUVs;
    
    UPROPERTY(EditAnywhere)
    float VolumeCorrection;
    
    UImplicitSmoothProperties();

};

