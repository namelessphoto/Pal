#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "EFlowLogVerbosity.h"
#include "FlowNode.h"
#include "FlowNode_Log.generated.h"

UCLASS()
class FLOW_API UFlowNode_Log : public UFlowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FString Message;
    
    UPROPERTY(EditAnywhere)
    EFlowLogVerbosity Verbosity;
    
    UPROPERTY(EditAnywhere)
    bool bPrintToScreen;
    
    UPROPERTY(EditAnywhere)
    float Duration;
    
    UPROPERTY(EditAnywhere)
    FColor TextColor;
    
public:
    UFlowNode_Log();

};

