#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "FlowNode.h"
#include "FlowNode_ExecutionSequence.generated.h"

UCLASS()
class FLOW_API UFlowNode_ExecutionSequence : public UFlowNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bSavePinExecutionState;
    
    UPROPERTY(SaveGame)
    TSet<FGuid> ExecutedConnections;
    
public:
    UFlowNode_ExecutionSequence();

};

