#pragma once
#include "CoreMinimal.h"
#include "EPalCharacterStatusOperationResult.h"
#include "PalCharacterStatusOperationResultDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPalCharacterStatusOperationResultDelegate, const EPalCharacterStatusOperationResult, Result);

