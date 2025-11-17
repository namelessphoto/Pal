#pragma once
#include "CoreMinimal.h"
#include "PalDamageResult.h"
#include "PalEventNotifyCharacterDamagedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPalEventNotifyCharacterDamagedDelegate, const FPalDamageResult&, DamageResult);

