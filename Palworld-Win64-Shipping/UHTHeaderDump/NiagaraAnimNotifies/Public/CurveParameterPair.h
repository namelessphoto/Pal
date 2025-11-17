#pragma once
#include "CoreMinimal.h"
#include "CurveParameterPair.generated.h"

USTRUCT(BlueprintType)
struct FCurveParameterPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName AnimCurveName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName UserVariableName;
    
    NIAGARAANIMNOTIFIES_API FCurveParameterPair();
};

