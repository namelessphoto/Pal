#pragma once
#include "CoreMinimal.h"
#include "RetargetChainMap.generated.h"

USTRUCT(BlueprintType)
struct IKRIG_API FRetargetChainMap {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName SourceChain;
    
    UPROPERTY(EditAnywhere)
    FName TargetChain;
    
    FRetargetChainMap();
};

