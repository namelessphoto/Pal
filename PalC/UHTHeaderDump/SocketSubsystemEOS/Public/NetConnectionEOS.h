#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=IpConnection -FallbackName=IpConnection
#include "NetConnectionEOS.generated.h"

UCLASS(NonTransient)
class SOCKETSUBSYSTEMEOS_API UNetConnectionEOS : public UIpConnection {
    GENERATED_BODY()
public:
    UNetConnectionEOS();

};

