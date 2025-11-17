#pragma once
#include "CoreMinimal.h"
#include "OnCameraUnderwaterStateChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCameraUnderwaterStateChanged, bool, bIsUnderWater, float, DepthUnderwater);

