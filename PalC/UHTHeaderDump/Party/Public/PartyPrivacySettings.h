#pragma once
#include "CoreMinimal.h"
#include "EPartyInviteRestriction.h"
#include "EPartyType.h"
#include "PartyPrivacySettings.generated.h"

USTRUCT()
struct FPartyPrivacySettings {
    GENERATED_BODY()
public:
    UPROPERTY()
    EPartyType PartyType;
    
    UPROPERTY()
    EPartyInviteRestriction PartyInviteRestriction;
    
    UPROPERTY()
    bool bOnlyLeaderFriendsCanJoin;
    
    PARTY_API FPartyPrivacySettings();
};

