#pragma once
#include "CoreMinimal.h"
#include "OnlineResultInformation.h"
#include "CommonSessionOnCreateSessionComplete_DynamicDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCommonSessionOnCreateSessionComplete_Dynamic, const FOnlineResultInformation&, Result);

