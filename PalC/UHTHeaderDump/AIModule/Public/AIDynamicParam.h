#pragma once
#include "CoreMinimal.h"
#include "BlackboardKeySelector.h"
#include "EAIParamType.h"
#include "AIDynamicParam.generated.h"

USTRUCT(BlueprintType)
struct AIMODULE_API FAIDynamicParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName ParamName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EAIParamType ParamType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBlackboardKeySelector BBKey;
    
    FAIDynamicParam();
};

