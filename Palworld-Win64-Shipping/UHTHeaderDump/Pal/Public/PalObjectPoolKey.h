#pragma once
#include "CoreMinimal.h"
#include "PalObjectPoolKey.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalObjectPoolKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName PoolKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClass* TargetClass;
    
    FPalObjectPoolKey();
};
FORCEINLINE uint32 GetTypeHash(const FPalObjectPoolKey) { return 0; }

