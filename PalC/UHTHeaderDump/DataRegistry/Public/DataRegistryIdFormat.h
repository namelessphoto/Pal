#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "DataRegistryIdFormat.generated.h"

USTRUCT(BlueprintType)
struct FDataRegistryIdFormat {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag BaseGameplayTag;
    
    DATAREGISTRY_API FDataRegistryIdFormat();
};

