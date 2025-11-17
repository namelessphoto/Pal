#pragma once
#include "CoreMinimal.h"
#include "FlowOwnerFunctionRef.generated.h"

class UFunction;

USTRUCT(BlueprintType)
struct FFlowOwnerFunctionRef {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    FName FunctionName;
    
    UPROPERTY(Transient)
    UFunction* Function;
    
public:
    FLOW_API FFlowOwnerFunctionRef();
};

