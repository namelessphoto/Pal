#pragma once
#include "CoreMinimal.h"
#include "OnUserScrolledEventDelegate2.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUserScrolledEvent, float, CurrentOffset);

