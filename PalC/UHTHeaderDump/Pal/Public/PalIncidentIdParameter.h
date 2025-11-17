#pragma once
#include "CoreMinimal.h"
#include "PalIncidentIdParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalIncidentIdParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FName IncidentId;
    
    UPROPERTY(BlueprintReadOnly)
    FName IncidentType;
    
    UPROPERTY(BlueprintReadOnly)
    FName Option;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FName> Args;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FName> Options;
    
    PAL_API FPalIncidentIdParameter();
};

