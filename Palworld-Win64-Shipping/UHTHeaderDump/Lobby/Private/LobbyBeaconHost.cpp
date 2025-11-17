#include "LobbyBeaconHost.h"
#include "LobbyBeaconClient.h"

ALobbyBeaconHost::ALobbyBeaconHost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClientBeaconActorClass = ALobbyBeaconClient::StaticClass();
    this->LobbyState = NULL;
}


