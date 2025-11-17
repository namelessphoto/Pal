#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PalObjectPoolParameter.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct PAL_API FPalObjectPoolParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName PoolKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PoolSize;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TSubclassOf<AActor> TargetClass;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsValid;
    
    FPalObjectPoolParameter();
};

