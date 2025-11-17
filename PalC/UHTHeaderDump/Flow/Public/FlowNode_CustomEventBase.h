#pragma once
#include "CoreMinimal.h"
#include "FlowNode.h"
#include "FlowNode_CustomEventBase.generated.h"

UCLASS(Abstract)
class FLOW_API UFlowNode_CustomEventBase : public UFlowNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FName EventName;
    
public:
    UFlowNode_CustomEventBase();

};

