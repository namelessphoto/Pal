#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "FlowNode_ComponentObserver.h"
#include "FlowNode_OnNotifyFromActor.generated.h"

UCLASS()
class FLOW_API UFlowNode_OnNotifyFromActor : public UFlowNode_ComponentObserver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer NotifyTags;
    
    UPROPERTY(EditAnywhere)
    bool bRetroactive;
    
public:
    UFlowNode_OnNotifyFromActor();

};

