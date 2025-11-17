#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "LobbyPlayerStateInfoArray.h"
#include "Templates/SubclassOf.h"
#include "LobbyBeaconState.generated.h"

class ALobbyBeaconPlayerState;

UCLASS(NotPlaceable, Transient, Config=Game)
class LOBBY_API ALobbyBeaconState : public AInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    int32 MaxPlayers;
    
    UPROPERTY()
    TSubclassOf<ALobbyBeaconPlayerState> LobbyBeaconPlayerStateClass;
    
    UPROPERTY(ReplicatedUsing=OnRep_LobbyStarted)
    bool bLobbyStarted;
    
    UPROPERTY(Config, ReplicatedUsing=OnRep_WaitForPlayersTimeRemaining)
    float WaitForPlayersTimeRemaining;
    
    UPROPERTY(Replicated)
    FLobbyPlayerStateInfoArray Players;
    
public:
    ALobbyBeaconState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_WaitForPlayersTimeRemaining();
    
    UFUNCTION()
    void OnRep_LobbyStarted();
    
};

