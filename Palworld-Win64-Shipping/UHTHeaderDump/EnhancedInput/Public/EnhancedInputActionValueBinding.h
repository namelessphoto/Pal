#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputDelegateBinding -FallbackName=InputDelegateBinding
#include "BlueprintEnhancedInputActionBinding.h"
#include "EnhancedInputActionValueBinding.generated.h"

UCLASS()
class ENHANCEDINPUT_API UEnhancedInputActionValueBinding : public UInputDelegateBinding {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FBlueprintEnhancedInputActionBinding> InputActionValueBindings;
    
    UEnhancedInputActionValueBinding();

};

