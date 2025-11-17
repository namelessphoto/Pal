#pragma once
#include "CoreMinimal.h"
#include "FlowNode.h"
#include "FlowOwnerFunctionRef.h"
#include "FlowNode_CallOwnerFunction.generated.h"

class UFlowOwnerFunctionParams;

UCLASS()
class FLOW_API UFlowNode_CallOwnerFunction : public UFlowNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FFlowOwnerFunctionRef FunctionRef;
    
    UPROPERTY(EditAnywhere, Instanced)
    UFlowOwnerFunctionParams* Params;
    
public:
    UFlowNode_CallOwnerFunction();

};

