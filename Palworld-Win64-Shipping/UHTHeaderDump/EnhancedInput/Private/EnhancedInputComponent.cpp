#include "EnhancedInputComponent.h"

UEnhancedInputComponent::UEnhancedInputComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FInputActionValue UEnhancedInputComponent::GetBoundActionValue(const UInputAction* action) const {
    return FInputActionValue{};
}


