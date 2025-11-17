#ifndef UE4SS_SDK_CoreOnline_HPP
#define UE4SS_SDK_CoreOnline_HPP

#include "CoreOnline_enums.hpp"

struct FJoinabilitySettings
{
    FName SessionName;
    bool bPublicSearchable;
    bool bAllowInvites;
    bool bJoinViaPresence;
    bool bJoinViaPresenceFriendsOnly;
    int32 MaxPlayers;
    int32 MaxPartySize;

};

struct FUniqueNetIdWrapper
{
};

#endif
