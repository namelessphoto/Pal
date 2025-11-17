#pragma once
#include "CoreMinimal.h"
#include "OnApplySkinDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnApplySkin, FName, SkinName, bool, bSuccess);

