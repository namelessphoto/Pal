#pragma once
#include "CoreMinimal.h"
#include "PalUIItemChestFilterMulticastDelegateDelegate.generated.h"

class UPalItemContainer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPalUIItemChestFilterMulticastDelegate, UPalItemContainer*, Container);

