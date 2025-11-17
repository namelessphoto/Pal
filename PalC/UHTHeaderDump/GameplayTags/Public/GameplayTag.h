#pragma once
#include "CoreMinimal.h"
#include "GameplayTag.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYTAGS_API FGameplayTag {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(SaveGame, VisibleAnywhere)
    FName TagName;
    
public:
    FGameplayTag();
};
FORCEINLINE uint32 GetTypeHash(const FGameplayTag) { return 0; }

