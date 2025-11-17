#pragma once
#include "CoreMinimal.h"
#include "EPalGroupOperationResult.h"
#include "PalGroupOperationDynamicDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FPalGroupOperationDynamicDelegate, const EPalGroupOperationResult, Result);

