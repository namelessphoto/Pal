#pragma once
#include "CoreMinimal.h"
#include "PalSupplyInfo.h"
#include "PalOnSupplyEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPalOnSupplyEvent, FPalSupplyInfo, SupplyInfo);

