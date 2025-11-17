#ifndef UE4SS_SDK_Party_HPP
#define UE4SS_SDK_Party_HPP

#include "Party_enums.hpp"

struct FOnlinePartyRepDataBase
{
};

struct FPartyMemberJoinInProgressData
{
    FPartyMemberJoinInProgressRequest Request;
    TArray<FPartyMemberJoinInProgressResponse> Responses;

};

struct FPartyMemberJoinInProgressRequest
{
    FUniqueNetIdRepl Target;
    int64 Time;

};

struct FPartyMemberJoinInProgressResponse
{
    FUniqueNetIdRepl Requester;
    int64 RequestTime;
    int64 ResponseTime;
    uint8 DenialReason;

};

struct FPartyMemberPlatformData
{
    FUserPlatform Platform;
    FUniqueNetIdRepl UniqueId;
    FString SessionId;

};

struct FPartyMemberRepData : public FOnlinePartyRepDataBase
{
    FPartyMemberPlatformData PlatformData;
    ECrossplayPreference CrossplayPreference;
    FString JoinMethod;
    FPartyMemberJoinInProgressData JoinInProgressData;

};

struct FPartyPlatformSessionInfo
{
    FString SessionType;
    FString SessionId;
    FUniqueNetIdRepl OwnerPrimaryId;

};

struct FPartyPrivacySettings
{
    EPartyType PartyType;
    EPartyInviteRestriction PartyInviteRestriction;
    bool bOnlyLeaderFriendsCanJoin;

};

struct FPartyRepData : public FOnlinePartyRepDataBase
{
    FPartyPrivacySettings PrivacySettings;
    TArray<FPartyPlatformSessionInfo> PlatformSessions;

};

struct FSocialChatChannelConfig
{
    class USocialUser* SocialUser;
    TArray<class USocialChatChannel*> ListenChannels;

};

struct FSocialPlatformDescription
{
    FString Name;
    FString PlatformType;
    FName OnlineSubsystem;
    FString SessionType;
    FString ExternalAccountType;
    FString CrossplayPool;

};

struct FUserPlatform
{
    FSocialPlatformDescription PlatformDescription;

};

class UChatroom : public UObject
{
    FString CurrentChatRoomId;
    int32 MaxChatRoomRetries;
    int32 NumChatRoomRetries;

};

class UPartyMember : public UObject
{
    class USocialUser* SocialUser;

};

class USocialChatChannel : public UObject
{
};

class USocialChatManager : public UObject
{
    TMap<class TWeakObjectPtr<USocialUser>, class USocialPrivateMessageChannel*> DirectChannelsByTargetUser;
    TMap<class FString, class USocialChatRoom*> ChatRoomsById;
    TMap<class FString, class USocialReadOnlyChatChannel*> ReadOnlyChannelsByDisplayName;
    bool bEnableChatSlashCommands;
    TMap<class FUniqueNetIdRepl, class USocialGroupChannel*> GroupChannels;

};

class USocialChatRoom : public USocialChatChannel
{
};

class USocialDebugTools : public UObject
{
};

class USocialGroupChannel : public UObject
{
    class USocialUser* SocialUser;
    FUniqueNetIdRepl GroupId;
    FText DisplayName;
    TArray<class USocialUser*> Members;

};

class USocialManager : public UObject
{
    TArray<class USocialToolkit*> SocialToolkits;
    class USocialDebugTools* SocialDebugTools;

};

class USocialParty : public UObject
{
    TSubclassOf<class APartyBeaconClient> ReservationBeaconClientClass;
    TSubclassOf<class ASpectatorBeaconClient> SpectatorBeaconClientClass;
    FUniqueNetIdRepl OwningLocalUserId;
    FUniqueNetIdRepl CurrentLeaderId;
    TMap<class FUniqueNetIdRepl, class UPartyMember*> PartyMembersById;
    bool bEnableAutomaticPartyRejoin;
    double PlatformUserInviteCooldown;
    double PrimaryUserInviteCooldown;
    TWeakObjectPtr<class APartyBeaconClient> ReservationBeaconClient;
    TWeakObjectPtr<class ASpectatorBeaconClient> SpectatorBeaconClient;
    float JoinInProgressTimerRate;
    int32 JoinInProgressRequestTimeout;
    int32 JoinInProgressResponseTimeout;

};

class USocialPartyChatRoom : public USocialChatRoom
{
};

class USocialPrivateMessageChannel : public USocialChatChannel
{
    class USocialUser* TargetUser;

};

class USocialReadOnlyChatChannel : public USocialChatChannel
{
};

class USocialSettings : public UObject
{
    TArray<FName> OssNamesWithEnvironmentIdPrefix;
    int32 DefaultMaxPartySize;
    bool bPreferPlatformInvites;
    bool bMustSendPrimaryInvites;
    bool bLeavePartyOnDisconnect;
    bool bSetDesiredPrivacyOnLocalPlayerBecomesLeader;
    float UserListAutoUpdateRate;
    int32 MinNicknameLength;
    int32 MaxNicknameLength;
    TArray<FSocialPlatformDescription> SocialPlatformDescriptions;

};

class USocialToolkit : public UObject
{
    class USocialUser* LocalUser;
    TArray<class USocialUser*> AllUsers;
    TWeakObjectPtr<class ULocalPlayer> LocalPlayerOwner;
    class USocialChatManager* SocialChatManager;

};

class USocialUser : public UObject
{
};

#endif
