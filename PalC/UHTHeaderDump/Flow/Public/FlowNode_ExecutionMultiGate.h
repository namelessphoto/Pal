#pragma once
#include "CoreMinimal.h"
#include "FlowNode.h"
#include "FlowNode_ExecutionMultiGate.generated.h"

UCLASS()
class FLOW_API UFlowNode_ExecutionMultiGate : public UFlowNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bRandom;
    
    UPROPERTY(EditAnywhere)
    bool bLoop;
    
    UPROPERTY(EditAnywhere)
    int32 StartIndex;
    
private:
    UPROPERTY(SaveGame)
    int32 NextOutput;
    
    UPROPERTY(SaveGame)
    TArray<bool> Completed;
    
public:
    UFlowNode_ExecutionMultiGate();

};

