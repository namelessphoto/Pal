#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "TaggedFlowComponentEventDelegate.generated.h"

class UFlowComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTaggedFlowComponentEvent, UFlowComponent*, Component, const FGameplayTagContainer&, Tags);

