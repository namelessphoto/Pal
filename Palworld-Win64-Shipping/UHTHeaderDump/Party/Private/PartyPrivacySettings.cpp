#include "PartyPrivacySettings.h"

FPartyPrivacySettings::FPartyPrivacySettings() {
    this->PartyType = EPartyType::Public;
    this->PartyInviteRestriction = EPartyInviteRestriction::AnyMember;
    this->bOnlyLeaderFriendsCanJoin = false;
}

