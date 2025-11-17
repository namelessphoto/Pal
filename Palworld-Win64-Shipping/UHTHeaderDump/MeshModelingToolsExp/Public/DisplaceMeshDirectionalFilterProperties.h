#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "DisplaceMeshDirectionalFilterProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UDisplaceMeshDirectionalFilterProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEnableFilter;
    
    UPROPERTY(EditAnywhere)
    FVector FilterDirection;
    
    UPROPERTY(EditAnywhere)
    float FilterWidth;
    
    UDisplaceMeshDirectionalFilterProperties();

};

