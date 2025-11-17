#pragma once
#include "CoreMinimal.h"
#include "PalIncidentExecutionSettings.generated.h"

USTRUCT(BlueprintType)
struct FPalIncidentExecutionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool bCanExecuteMultiple;
    
    PAL_API FPalIncidentExecutionSettings();
};

