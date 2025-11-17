#pragma once
#include "CoreMinimal.h"
#include "InputComboStepData.generated.h"

class UInputAction;

USTRUCT(BlueprintType)
struct FInputComboStepData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    UInputAction* ComboStepAction;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    float TimeToPressKey;
    
    ENHANCEDINPUT_API FInputComboStepData();
};

