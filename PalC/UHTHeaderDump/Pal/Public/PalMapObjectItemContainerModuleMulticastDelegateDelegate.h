#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectItemContainerModuleMulticastDelegateDelegate.generated.h"

class UPalMapObjectItemContainerModule;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPalMapObjectItemContainerModuleMulticastDelegate, UPalMapObjectItemContainerModule*, Module);

