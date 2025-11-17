#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreOnline -ObjectName=JoinabilitySettings -FallbackName=JoinabilitySettings
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=OnlineBeaconClient -FallbackName=OnlineBeaconClient
#include "ELobbyBeaconJoinState.h"
#include "LobbyBeaconClient.generated.h"

class ALobbyBeaconPlayerState;
class ALobbyBeaconState;

UCLASS(NonTransient)
class LOBBY_API ALobbyBeaconClient : public AOnlineBeaconClient {
    GENERATED_BODY()
public:
    UPROPERTY(Replicated)
    ALobbyBeaconState* LobbyState;
    
    UPROPERTY(Replicated)
    ALobbyBeaconPlayerState* PlayerState;
    
protected:
    UPROPERTY()
    ELobbyBeaconJoinState LobbyJoinServerState;
    
public:
    ALobbyBeaconClient(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetPartyOwner(const FUniqueNetIdRepl& InUniqueId, const FUniqueNetIdRepl& InPartyOwnerId);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerNotifyJoiningServer();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerLoginPlayer(const FString& InSessionId, const FUniqueNetIdRepl& InUniqueId, const FString& UrlString);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerKickPlayer(const FUniqueNetIdRepl& PlayerToKick, const FText& Reason);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerDisconnectFromLobby();
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCheat(const FString& Msg);
    
protected:
    UFUNCTION(Client, Reliable)
    void ClientWasKicked(const FText& KickReason);
    
public:
    UFUNCTION(Client, Reliable)
    void ClientSetInviteFlags(const FJoinabilitySettings& Settings);
    
protected:
    UFUNCTION(Client, Reliable)
    void ClientPlayerLeft(const FUniqueNetIdRepl& InUniqueId);
    
    UFUNCTION(Client, Reliable)
    void ClientPlayerJoined(const FText& NewPlayerName, const FUniqueNetIdRepl& InUniqueId);
    
    UFUNCTION(Client, Reliable)
    void ClientLoginComplete(const FUniqueNetIdRepl& InUniqueId, bool bWasSuccessful);
    
public:
    UFUNCTION(Client, Reliable)
    void ClientJoinGame();
    
protected:
    UFUNCTION(Client, Reliable)
    void ClientAckJoiningServer();
    
};

