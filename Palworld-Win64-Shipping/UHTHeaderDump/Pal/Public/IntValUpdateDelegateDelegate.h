#pragma once
#include "CoreMinimal.h"
#include "IntValUpdateDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIntValUpdateDelegate, FName, Key, int32, NewValue);

