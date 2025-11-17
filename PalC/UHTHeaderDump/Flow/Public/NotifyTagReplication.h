#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "NotifyTagReplication.generated.h"

USTRUCT(BlueprintType)
struct FNotifyTagReplication {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGameplayTag ActorTag;
    
    UPROPERTY()
    FGameplayTag NotifyTag;
    
    FLOW_API FNotifyTagReplication();
};

