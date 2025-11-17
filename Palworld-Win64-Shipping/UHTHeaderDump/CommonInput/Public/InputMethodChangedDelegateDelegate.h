#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "InputMethodChangedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInputMethodChangedDelegate, ECommonInputType, bNewInputType);

