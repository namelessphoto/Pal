#pragma once
#include "CoreMinimal.h"
#include "OnlineBeacon.h"
#include "OnlineBeaconHost.generated.h"

class AOnlineBeaconClient;

UCLASS(NonTransient)
class ONLINESUBSYSTEMUTILS_API AOnlineBeaconHost : public AOnlineBeacon {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    int32 ListenPort;
    
protected:
    UPROPERTY(Config)
    bool bAuthRequired;
    
    UPROPERTY(Config)
    uint32 MaxAuthTokenSize;
    
private:
    UPROPERTY()
    TArray<AOnlineBeaconClient*> ClientActors;
    
public:
    AOnlineBeaconHost(const FObjectInitializer& ObjectInitializer);

};

