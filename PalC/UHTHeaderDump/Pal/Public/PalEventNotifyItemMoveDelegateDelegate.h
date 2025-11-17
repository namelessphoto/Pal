#pragma once
#include "CoreMinimal.h"
#include "PalItemOperationInfo_Move.h"
#include "PalEventNotifyItemMoveDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPalEventNotifyItemMoveDelegate, const FPalItemOperationInfo_Move&, EventInfo);

