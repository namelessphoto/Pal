#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "EFlowTagContainerMatchType.h"
#include "FlowNode.h"
#include "FlowNode_ComponentObserver.generated.h"

class UFlowComponent;

UCLASS(Abstract)
class FLOW_API UFlowNode_ComponentObserver : public UFlowNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer IdentityTags;
    
    UPROPERTY(EditAnywhere)
    EFlowTagContainerMatchType IdentityMatchType;
    
    UPROPERTY(EditAnywhere)
    int32 SuccessLimit;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    int32 SuccessCount;
    
public:
    UFlowNode_ComponentObserver();

protected:
    UFUNCTION()
    void OnEventReceived();
    
    UFUNCTION()
    void OnComponentUnregistered(UFlowComponent* Component);
    
    UFUNCTION()
    void OnComponentTagRemoved(UFlowComponent* Component, const FGameplayTagContainer& RemovedTags);
    
    UFUNCTION()
    void OnComponentTagAdded(UFlowComponent* Component, const FGameplayTagContainer& AddedTags);
    
    UFUNCTION()
    void OnComponentRegistered(UFlowComponent* Component);
    
};

