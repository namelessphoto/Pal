#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "EClientRequestType.h"
#include "EPartyReservationResult.h"
#include "OnlineBeaconClient.h"
#include "PartyReservation.h"
#include "PartyBeaconClient.generated.h"

UCLASS(NonTransient)
class ONLINESUBSYSTEMUTILS_API APartyBeaconClient : public AOnlineBeaconClient {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FString DestSessionId;
    
    UPROPERTY()
    FPartyReservation PendingReservation;
    
    UPROPERTY()
    EClientRequestType RequestType;
    
    UPROPERTY()
    bool bPendingReservationSent;
    
    UPROPERTY()
    bool bCancelReservation;
    
public:
    APartyBeaconClient(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUpdateReservationRequest(const FString& SessionId, const FPartyReservation& ReservationUpdate);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerReservationRequest(const FString& SessionId, const FPartyReservation& Reservation);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRemoveMemberFromReservationRequest(const FString& SessionId, const FPartyReservation& ReservationUpdate);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCancelReservationRequest(const FUniqueNetIdRepl& PartyLeader);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerAddOrUpdateReservationRequest(const FString& SessionId, const FPartyReservation& Reservation);
    
public:
    UFUNCTION(Client, Reliable)
    void ClientSendReservationUpdates(int32 NumRemainingReservations);
    
    UFUNCTION(Client, Reliable)
    void ClientSendReservationFull();
    
    UFUNCTION(Client, Reliable)
    void ClientReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse);
    
    UFUNCTION(Client, Reliable)
    void ClientCancelReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse);
    
};

