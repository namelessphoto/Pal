#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=OnlineBeaconHostObject -FallbackName=OnlineBeaconHostObject
#include "LobbyBeaconHost.generated.h"

class ALobbyBeaconState;

UCLASS(NonTransient)
class LOBBY_API ALobbyBeaconHost : public AOnlineBeaconHostObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TSoftClassPtr<ALobbyBeaconState> LobbyStateClass;
    
    UPROPERTY()
    ALobbyBeaconState* LobbyState;
    
public:
    ALobbyBeaconHost(const FObjectInitializer& ObjectInitializer);

};

