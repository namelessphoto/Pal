#include "LobbyBeaconClient.h"
#include "Net/UnrealNetwork.h"

ALobbyBeaconClient::ALobbyBeaconClient(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LobbyState = NULL;
    this->PlayerState = NULL;
    this->LobbyJoinServerState = ELobbyBeaconJoinState::None;
}

void ALobbyBeaconClient::ServerSetPartyOwner_Implementation(const FUniqueNetIdRepl& InUniqueId, const FUniqueNetIdRepl& InPartyOwnerId) {
}
bool ALobbyBeaconClient::ServerSetPartyOwner_Validate(const FUniqueNetIdRepl& InUniqueId, const FUniqueNetIdRepl& InPartyOwnerId) {
    return true;
}

void ALobbyBeaconClient::ServerNotifyJoiningServer_Implementation() {
}
bool ALobbyBeaconClient::ServerNotifyJoiningServer_Validate() {
    return true;
}

void ALobbyBeaconClient::ServerLoginPlayer_Implementation(const FString& InSessionId, const FUniqueNetIdRepl& InUniqueId, const FString& UrlString) {
}
bool ALobbyBeaconClient::ServerLoginPlayer_Validate(const FString& InSessionId, const FUniqueNetIdRepl& InUniqueId, const FString& UrlString) {
    return true;
}

void ALobbyBeaconClient::ServerKickPlayer_Implementation(const FUniqueNetIdRepl& PlayerToKick, const FText& Reason) {
}
bool ALobbyBeaconClient::ServerKickPlayer_Validate(const FUniqueNetIdRepl& PlayerToKick, const FText& Reason) {
    return true;
}

void ALobbyBeaconClient::ServerDisconnectFromLobby_Implementation() {
}
bool ALobbyBeaconClient::ServerDisconnectFromLobby_Validate() {
    return true;
}

void ALobbyBeaconClient::ServerCheat_Implementation(const FString& Msg) {
}
bool ALobbyBeaconClient::ServerCheat_Validate(const FString& Msg) {
    return true;
}

void ALobbyBeaconClient::ClientWasKicked_Implementation(const FText& KickReason) {
}

void ALobbyBeaconClient::ClientSetInviteFlags_Implementation(const FJoinabilitySettings& Settings) {
}

void ALobbyBeaconClient::ClientPlayerLeft_Implementation(const FUniqueNetIdRepl& InUniqueId) {
}

void ALobbyBeaconClient::ClientPlayerJoined_Implementation(const FText& NewPlayerName, const FUniqueNetIdRepl& InUniqueId) {
}

void ALobbyBeaconClient::ClientLoginComplete_Implementation(const FUniqueNetIdRepl& InUniqueId, bool bWasSuccessful) {
}

void ALobbyBeaconClient::ClientJoinGame_Implementation() {
}

void ALobbyBeaconClient::ClientAckJoiningServer_Implementation() {
}

void ALobbyBeaconClient::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALobbyBeaconClient, LobbyState);
    DOREPLIFETIME(ALobbyBeaconClient, PlayerState);
}


