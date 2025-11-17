#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalGroupOperationResult.h"
#include "PalGroupOperationWithGroupIdDynamicDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FPalGroupOperationWithGroupIdDynamicDelegate, const EPalGroupOperationResult, Result, const FGuid&, GroupId);

