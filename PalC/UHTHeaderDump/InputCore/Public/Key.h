#pragma once
#include "CoreMinimal.h"
#include "Key.generated.h"

USTRUCT(BlueprintType)
struct INPUTCORE_API FKey {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FName KeyName;
    
public:
    FKey();
};
FORCEINLINE uint32 GetTypeHash(const FKey) { return 0; }

