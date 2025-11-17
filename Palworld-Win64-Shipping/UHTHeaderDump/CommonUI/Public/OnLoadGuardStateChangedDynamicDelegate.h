#pragma once
#include "CoreMinimal.h"
#include "OnLoadGuardStateChangedDynamicDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLoadGuardStateChangedDynamic, bool, bIsLoading);

