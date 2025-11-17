#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "FlowComponentDynamicNotifyDelegate.generated.h"

class UFlowComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFlowComponentDynamicNotify, UFlowComponent*, FlowComponent, const FGameplayTag&, NotifyTag);

