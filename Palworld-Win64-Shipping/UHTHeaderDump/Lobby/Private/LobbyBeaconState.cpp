#include "LobbyBeaconState.h"
#include "LobbyBeaconPlayerState.h"
#include "Net/UnrealNetwork.h"

ALobbyBeaconState::ALobbyBeaconState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ENetRole::ROLE_SimulatedProxy;
    this->NetDriverName = TEXT("BeaconNetDriver");
    this->MaxPlayers = 0;
    this->LobbyBeaconPlayerStateClass = ALobbyBeaconPlayerState::StaticClass();
    this->bLobbyStarted = false;
    this->WaitForPlayersTimeRemaining = 20.00f;
}

void ALobbyBeaconState::OnRep_WaitForPlayersTimeRemaining() {
}

void ALobbyBeaconState::OnRep_LobbyStarted() {
}

void ALobbyBeaconState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALobbyBeaconState, bLobbyStarted);
    DOREPLIFETIME(ALobbyBeaconState, WaitForPlayersTimeRemaining);
    DOREPLIFETIME(ALobbyBeaconState, Players);
}


