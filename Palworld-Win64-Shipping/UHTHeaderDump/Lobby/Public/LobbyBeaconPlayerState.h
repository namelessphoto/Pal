#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "LobbyBeaconPlayerState.generated.h"

class AOnlineBeaconClient;

UCLASS(NotPlaceable, Transient, Config=Game)
class LOBBY_API ALobbyBeaconPlayerState : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Replicated)
    FText DisplayName;
    
    UPROPERTY(ReplicatedUsing=OnRep_UniqueId)
    FUniqueNetIdRepl UniqueId;
    
    UPROPERTY(ReplicatedUsing=OnRep_PartyOwner)
    FUniqueNetIdRepl PartyOwnerUniqueId;
    
    UPROPERTY(ReplicatedUsing=OnRep_InLobby)
    bool bInLobby;
    
    UPROPERTY(Replicated)
    AOnlineBeaconClient* ClientActor;
    
    ALobbyBeaconPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_UniqueId();
    
    UFUNCTION()
    void OnRep_PartyOwner();
    
    UFUNCTION()
    void OnRep_InLobby();
    
};

