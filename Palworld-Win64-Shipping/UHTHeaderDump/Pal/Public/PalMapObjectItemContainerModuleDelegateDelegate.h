#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectItemContainerModuleDelegateDelegate.generated.h"

class UPalMapObjectItemContainerModule;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FPalMapObjectItemContainerModuleDelegate, UPalMapObjectItemContainerModule*, Module);

