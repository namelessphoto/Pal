#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=EGameplayContainerMatchType -FallbackName=EGameplayContainerMatchType
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "EFlowNetMode.h"
#include "FlowNode.h"
#include "FlowNode_NotifyActor.generated.h"

UCLASS()
class FLOW_API UFlowNode_NotifyActor : public UFlowNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer IdentityTags;
    
    UPROPERTY(EditAnywhere)
    EGameplayContainerMatchType MatchType;
    
    UPROPERTY(EditAnywhere)
    bool bExactMatch;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer NotifyTags;
    
    UPROPERTY(EditAnywhere)
    EFlowNetMode NetMode;
    
public:
    UFlowNode_NotifyActor();

};

