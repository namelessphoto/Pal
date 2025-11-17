#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=OnlineBeaconClient -FallbackName=OnlineBeaconClient
#include "EQosResponseType.h"
#include "QosBeaconClient.generated.h"

UCLASS(NonTransient)
class QOS_API AQosBeaconClient : public AOnlineBeaconClient {
    GENERATED_BODY()
public:
    AQosBeaconClient(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerQosRequest(const FString& InSessionId);
    
    UFUNCTION(Client, Reliable)
    void ClientQosResponse(EQosResponseType Response);
    
};

