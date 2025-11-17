#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "FlowOwnerFunctionParams.generated.h"

class UFlowNode_CallOwnerFunction;

UCLASS(Blueprintable, EditInlineNew)
class FLOW_API UFlowOwnerFunctionParams : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    UFlowNode_CallOwnerFunction* SourceNode;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FName ExecutedInputPinName;
    
public:
    UFlowOwnerFunctionParams();

    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool ShouldFinishForOutputName(const FName& OutputName) const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_PreExecute();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_PostExecute();
    
    UFUNCTION(BlueprintPure)
    TArray<FName> BP_GetOutputNames() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FName> BP_GetInputNames() const;
    
};

