#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalEventNotifyCharacterInvasionDelegateDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPalEventNotifyCharacterInvasionDelegate, AActor*, InvasionActor, const FGuid&, AreaInstanceId);

