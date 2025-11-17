#pragma once
#include "CoreMinimal.h"
#include "PalChatMessage.h"
#include "OnRecievedFilteredMessageDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRecievedFilteredMessageDelegate, const FPalChatMessage&, Message);

