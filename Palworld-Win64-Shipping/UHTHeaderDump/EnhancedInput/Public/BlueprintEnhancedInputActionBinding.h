#pragma once
#include "CoreMinimal.h"
#include "ETriggerEvent.h"
#include "BlueprintEnhancedInputActionBinding.generated.h"

class UInputAction;

USTRUCT(BlueprintType)
struct ENHANCEDINPUT_API FBlueprintEnhancedInputActionBinding {
    GENERATED_BODY()
public:
    UPROPERTY()
    UInputAction* InputAction;
    
    UPROPERTY()
    ETriggerEvent TriggerEvent;
    
    UPROPERTY()
    FName FunctionNameToBind;
    
    FBlueprintEnhancedInputActionBinding();
};

