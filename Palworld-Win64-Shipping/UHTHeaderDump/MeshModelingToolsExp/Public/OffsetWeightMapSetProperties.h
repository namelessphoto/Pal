#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=WeightMapSetProperties -FallbackName=WeightMapSetProperties
#include "OffsetWeightMapSetProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UOffsetWeightMapSetProperties : public UWeightMapSetProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float minDistance;
    
    UOffsetWeightMapSetProperties();

};

