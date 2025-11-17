#pragma once
#include "CoreMinimal.h"
#include "PalItemSlotId.h"
#include "PalSelectedItemPlayerInventoryDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FPalSelectedItemPlayerInventoryDelegate, const FPalItemSlotId&, itemSlotId, const int32, itemNum);

