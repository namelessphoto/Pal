#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "Templates/SubclassOf.h"
#include "SocialParty.generated.h"

class APartyBeaconClient;
class ASpectatorBeaconClient;
class UPartyMember;

UCLASS(Abstract, Transient, Config=Game, Within=SocialManager)
class PARTY_API USocialParty : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TSubclassOf<APartyBeaconClient> ReservationBeaconClientClass;
    
    UPROPERTY()
    TSubclassOf<ASpectatorBeaconClient> SpectatorBeaconClientClass;
    
private:
    UPROPERTY()
    FUniqueNetIdRepl OwningLocalUserId;
    
    UPROPERTY()
    FUniqueNetIdRepl CurrentLeaderId;
    
    UPROPERTY()
    TMap<FUniqueNetIdRepl, UPartyMember*> PartyMembersById;
    
    UPROPERTY(Config)
    bool bEnableAutomaticPartyRejoin;
    
    UPROPERTY(Config)
    double PlatformUserInviteCooldown;
    
    UPROPERTY(Config)
    double PrimaryUserInviteCooldown;
    
    UPROPERTY()
    TWeakObjectPtr<APartyBeaconClient> ReservationBeaconClient;
    
    UPROPERTY()
    TWeakObjectPtr<ASpectatorBeaconClient> SpectatorBeaconClient;
    
    UPROPERTY(Config)
    float JoinInProgressTimerRate;
    
    UPROPERTY(Config)
    int32 JoinInProgressRequestTimeout;
    
    UPROPERTY(Config)
    int32 JoinInProgressResponseTimeout;
    
public:
    USocialParty();

};

