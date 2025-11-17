#pragma once
#include "CoreMinimal.h"
#include "InteractingEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FInteractingEvent, float, DeltaTime);

