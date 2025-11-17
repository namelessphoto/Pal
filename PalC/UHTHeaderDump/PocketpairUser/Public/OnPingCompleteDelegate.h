#pragma once
#include "CoreMinimal.h"
#include "OnPingCompleteDelegate.generated.h"

class UPingIP;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPingComplete, UPingIP*, PingOperation, const FString&, HostName, int32, TimeMS);

