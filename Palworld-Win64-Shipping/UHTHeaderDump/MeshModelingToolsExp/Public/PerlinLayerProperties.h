#pragma once
#include "CoreMinimal.h"
#include "PerlinLayerProperties.generated.h"

USTRUCT(BlueprintType)
struct FPerlinLayerProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Frequency;
    
    UPROPERTY(EditAnywhere)
    float Intensity;
    
    MESHMODELINGTOOLSEXP_API FPerlinLayerProperties();
};

