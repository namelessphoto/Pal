#pragma once
#include "CoreMinimal.h"
#include "EMappingQueryIssue.h"
#include "MappingQueryIssue.generated.h"

class UInputAction;
class UInputMappingContext;

USTRUCT(BlueprintType)
struct FMappingQueryIssue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EMappingQueryIssue Issue;
    
    UPROPERTY(BlueprintReadOnly)
    UInputMappingContext* BlockingContext;
    
    UPROPERTY(BlueprintReadOnly)
    UInputAction* BlockingAction;
    
    ENHANCEDINPUT_API FMappingQueryIssue();
};

