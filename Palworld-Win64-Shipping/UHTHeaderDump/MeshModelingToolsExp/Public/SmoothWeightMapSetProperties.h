#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=WeightMapSetProperties -FallbackName=WeightMapSetProperties
#include "SmoothWeightMapSetProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API USmoothWeightMapSetProperties : public UWeightMapSetProperties {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float MinSmoothMultiplier;
    
    USmoothWeightMapSetProperties();

};

