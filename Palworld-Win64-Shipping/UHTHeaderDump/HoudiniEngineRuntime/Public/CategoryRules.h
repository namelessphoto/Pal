#pragma once
#include "CoreMinimal.h"
#include "CategoryRules.generated.h"

USTRUCT(BlueprintType)
struct FCategoryRules {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FString> Include;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> Exclude;
    
    HOUDINIENGINERUNTIME_API FCategoryRules();
};

