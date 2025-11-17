#pragma once
#include "CoreMinimal.h"
#include "ActorInitStateChangedParams.h"
#include "ActorInitStateChangedBPDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FActorInitStateChangedBPDelegate, const FActorInitStateChangedParams&, Params);

