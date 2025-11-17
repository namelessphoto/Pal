#pragma once
#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "EnhancedInputActionHandlerDynamicSignatureDelegate.generated.h"

class UInputAction;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_FourParams(FEnhancedInputActionHandlerDynamicSignature, FInputActionValue, ActionValue, float, ElapsedTime, float, TriggeredTime, const UInputAction*, SourceAction);

