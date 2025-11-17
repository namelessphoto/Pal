#pragma once
#include "CoreMinimal.h"
#include "OnlineResultInformation.h"
#include "CommonSessionOnJoinSessionComplete_DynamicDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCommonSessionOnJoinSessionComplete_Dynamic, const FOnlineResultInformation&, Result);

