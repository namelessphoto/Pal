#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputDelegateBinding -FallbackName=InputDelegateBinding
#include "BlueprintEnhancedInputActionBinding.h"
#include "EnhancedInputActionDelegateBinding.generated.h"

UCLASS()
class ENHANCEDINPUT_API UEnhancedInputActionDelegateBinding : public UInputDelegateBinding {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FBlueprintEnhancedInputActionBinding> InputActionDelegateBindings;
    
    UEnhancedInputActionDelegateBinding();

};

