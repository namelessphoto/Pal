#include "SocialParty.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=PartyBeaconClient -FallbackName=PartyBeaconClient
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=SpectatorBeaconClient -FallbackName=SpectatorBeaconClient

USocialParty::USocialParty() {
    this->ReservationBeaconClientClass = APartyBeaconClient::StaticClass();
    this->SpectatorBeaconClientClass = ASpectatorBeaconClient::StaticClass();
    this->bEnableAutomaticPartyRejoin = true;
    this->PlatformUserInviteCooldown = 10.00f;
    this->PrimaryUserInviteCooldown = 0.00f;
    this->JoinInProgressTimerRate = 5.00f;
    this->JoinInProgressRequestTimeout = 30;
    this->JoinInProgressResponseTimeout = 60;
}


