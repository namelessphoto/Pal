#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "ESpectatorClientRequestType.h"
#include "ESpectatorReservationResult.h"
#include "OnlineBeaconClient.h"
#include "SpectatorReservation.h"
#include "SpectatorBeaconClient.generated.h"

UCLASS(NonTransient)
class ONLINESUBSYSTEMUTILS_API ASpectatorBeaconClient : public AOnlineBeaconClient {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FString DestSessionId;
    
    UPROPERTY()
    FSpectatorReservation PendingReservation;
    
    UPROPERTY()
    ESpectatorClientRequestType RequestType;
    
    UPROPERTY()
    bool bPendingReservationSent;
    
    UPROPERTY()
    bool bCancelReservation;
    
public:
    ASpectatorBeaconClient(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerReservationRequest(const FString& SessionId, const FSpectatorReservation& Reservation);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCancelReservationRequest(const FUniqueNetIdRepl& Spectator);
    
public:
    UFUNCTION(Client, Reliable)
    void ClientSendReservationUpdates(int32 NumRemainingReservations);
    
    UFUNCTION(Client, Reliable)
    void ClientSendReservationFull();
    
    UFUNCTION(Client, Reliable)
    void ClientReservationResponse(TEnumAsByte<ESpectatorReservationResult> ReservationResponse);
    
    UFUNCTION(Client, Reliable)
    void ClientCancelReservationResponse(TEnumAsByte<ESpectatorReservationResult> ReservationResponse);
    
};

