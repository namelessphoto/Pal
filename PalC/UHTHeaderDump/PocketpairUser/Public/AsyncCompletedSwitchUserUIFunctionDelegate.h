#pragma once
#include "CoreMinimal.h"
#include "AsyncCompletedSwitchUserUIFunctionDelegate.generated.h"

class UPocketpairUserInfo;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAsyncCompletedSwitchUserUIFunction, const UPocketpairUserInfo*, UserInfo, bool, bSuccess, const FString&, ErrorStr);

