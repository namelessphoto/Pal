#pragma once
#include "CoreMinimal.h"
#include "FlowNode.h"
#include "FlowNode_Counter.generated.h"

UCLASS()
class FLOW_API UFlowNode_Counter : public UFlowNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    int32 Goal;
    
private:
    UPROPERTY(SaveGame)
    int32 CurrentSum;
    
public:
    UFlowNode_Counter();

};

