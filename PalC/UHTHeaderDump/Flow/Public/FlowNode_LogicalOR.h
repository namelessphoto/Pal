#pragma once
#include "CoreMinimal.h"
#include "FlowNode.h"
#include "FlowNode_LogicalOR.generated.h"

UCLASS()
class FLOW_API UFlowNode_LogicalOR : public UFlowNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, SaveGame)
    bool bEnabled;
    
    UPROPERTY(EditAnywhere)
    int32 ExecutionLimit;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    int32 ExecutionCount;
    
public:
    UFlowNode_LogicalOR();

};

