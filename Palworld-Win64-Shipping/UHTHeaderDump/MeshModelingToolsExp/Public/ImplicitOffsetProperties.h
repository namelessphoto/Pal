#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "ImplicitOffsetProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UImplicitOffsetProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Smoothness;
    
    UPROPERTY(EditAnywhere)
    bool bPreserveUVs;
    
    UImplicitOffsetProperties();

};

