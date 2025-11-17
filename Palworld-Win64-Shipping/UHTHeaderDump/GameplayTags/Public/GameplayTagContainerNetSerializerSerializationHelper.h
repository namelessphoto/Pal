#pragma once
#include "CoreMinimal.h"
#include "GameplayTag.h"
#include "GameplayTagContainerNetSerializerSerializationHelper.generated.h"

USTRUCT()
struct FGameplayTagContainerNetSerializerSerializationHelper {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FGameplayTag> GameplayTags;
    
    GAMEPLAYTAGS_API FGameplayTagContainerNetSerializerSerializationHelper();
};

