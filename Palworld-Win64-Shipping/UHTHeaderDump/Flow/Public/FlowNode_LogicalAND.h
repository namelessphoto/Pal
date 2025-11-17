#pragma once
#include "CoreMinimal.h"
#include "FlowNode.h"
#include "FlowNode_LogicalAND.generated.h"

UCLASS()
class FLOW_API UFlowNode_LogicalAND : public UFlowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(SaveGame)
    TSet<FName> ExecutedInputNames;
    
public:
    UFlowNode_LogicalAND();

};

