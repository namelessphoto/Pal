#pragma once
#include "CoreMinimal.h"
#include "DelegateTickFunctionExecuteDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDelegateTickFunctionExecute, float, DeltaTime);

