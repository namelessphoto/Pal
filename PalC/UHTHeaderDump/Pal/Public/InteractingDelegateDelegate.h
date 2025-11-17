#pragma once
#include "CoreMinimal.h"
#include "InteractingDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractingDelegate, float, DeltaTime);

