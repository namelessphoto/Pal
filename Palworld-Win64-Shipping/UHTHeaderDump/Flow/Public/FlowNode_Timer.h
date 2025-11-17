#pragma once
#include "CoreMinimal.h"
#include "FlowNode.h"
#include "FlowNode_Timer.generated.h"

UCLASS()
class FLOW_API UFlowNode_Timer : public UFlowNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float CompletionTime;
    
    UPROPERTY(EditAnywhere)
    float StepTime;
    
private:
    UPROPERTY(SaveGame)
    float SumOfSteps;
    
    UPROPERTY(SaveGame)
    float RemainingCompletionTime;
    
    UPROPERTY(SaveGame)
    float RemainingStepTime;
    
public:
    UFlowNode_Timer();

private:
    UFUNCTION()
    void OnStep();
    
    UFUNCTION()
    void OnCompletion();
    
};

