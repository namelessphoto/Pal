#pragma once
#include "CoreMinimal.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "InteractTriggeringDelegateDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FInteractTriggeringDelegate, AActor*, Other, EPalInteractiveObjectIndicatorType, IndicatorType, float, DeltaTime);

