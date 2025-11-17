#include "LobbyBeaconPlayerState.h"
#include "Net/UnrealNetwork.h"

ALobbyBeaconPlayerState::ALobbyBeaconPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ENetRole::ROLE_SimulatedProxy;
    this->NetDriverName = TEXT("BeaconNetDriver");
    this->bInLobby = false;
    this->ClientActor = NULL;
}

void ALobbyBeaconPlayerState::OnRep_UniqueId() {
}

void ALobbyBeaconPlayerState::OnRep_PartyOwner() {
}

void ALobbyBeaconPlayerState::OnRep_InLobby() {
}

void ALobbyBeaconPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALobbyBeaconPlayerState, DisplayName);
    DOREPLIFETIME(ALobbyBeaconPlayerState, UniqueId);
    DOREPLIFETIME(ALobbyBeaconPlayerState, PartyOwnerUniqueId);
    DOREPLIFETIME(ALobbyBeaconPlayerState, bInLobby);
    DOREPLIFETIME(ALobbyBeaconPlayerState, ClientActor);
}


