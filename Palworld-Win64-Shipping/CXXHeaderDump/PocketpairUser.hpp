#ifndef UE4SS_SDK_PocketpairUser_HPP
#define UE4SS_SDK_PocketpairUser_HPP

#include "PocketpairUser_enums.hpp"

struct FPocketpairInventory
{
    TArray<FPocketpairInventoryItem> Items;
    FPocketpairPlatformID PlatformID;

};

struct FPocketpairInventoryItem
{
    int32 ItemId;
    int32 Num;
    TArray<uint8> Token;

};

struct FPocketpairPlatformID
{
    uint32 AccountID;
    uint32 AccountInstance;
    int32 Universe;
    int32 AccountType;

};

struct FPocketpairTelemetry
{
};

struct FPocketpairTelemetry_Stat
{
};

struct FSocialId
{
};

class UCreateSessionAsyncFunction : public UBlueprintAsyncActionBase
{
    FCreateSessionAsyncFunctionCompleted Completed;
    void AsyncCompletedCreateSessionFunction(bool IsSuccess, FString ErrorStr);

    class UCreateSessionAsyncFunction* CreateSessionAsyncFunction(class UPocketpairUserSubsystem* Target, bool IsDedicatedServer, int32 PublicConnections, FString InviteCode, FString ServerName, FString Desc, FString ServerAddress, int32 ServerPort, bool IsPassword, FString Version, FString ServerType, FString Region, FString Namespace, bool IsCrossPlay);
};

class UFindSessionsAsyncFunction : public UBlueprintAsyncActionBase
{
    FFindSessionsAsyncFunctionCompleted Completed;
    void AsyncCompletedFindSessionsFunction(bool IsSuccess, const TArray<FBlueprintSessionResult>& Results, FString ErrorStr);

    class UFindSessionsAsyncFunction* FindSessionsAsyncFunction(class UPocketpairUserSubsystem* Target, bool IsDedicatedServer, const FString InviteCode, const FString ServerType, const FString Region, const int32 LessThanTime, const FString WorldGUID, const FString Namespace);
};

class UGDKActivityAsyncFunction : public UBlueprintAsyncActionBase
{
    FGDKActivityAsyncFunctionCompleted Completed;
    void GDKActivityAsyncFunction(const FString ResponseBody, bool bResponseOK, int32 ResponseCode);

    class UGDKActivityAsyncFunction* GDKActivityAsyncFunction(class UPocketpairUserSubsystem* Target, FString ConnectionString, int32 MaxPlayerNum, int32 CurrentPlayerNum, bool bPublicSession);
};

class UGDKInviteAsyncFunction : public UBlueprintAsyncActionBase
{
    FGDKInviteAsyncFunctionCompleted Completed;
    void GDKInviteAsyncFunction(const FString InviteCode);

    class UGDKInviteAsyncFunction* GDKInviteAsyncFunction(class UPocketpairUserSubsystem* Target);
};

class UGDKPrivacyPermissionAsyncFunction : public UBlueprintAsyncActionBase
{
    FGDKPrivacyPermissionAsyncFunctionCompleted Completed;
    void GDKPrivacyPermissionAsyncFunction(class UGDKPrivacyPermissionAsyncFunction* PrivacyPermission);

};

class UGDKPrivacyPermissionForAnonymousUserAsyncFunction : public UBlueprintAsyncActionBase
{
    FGDKPrivacyPermissionForAnonymousUserAsyncFunctionCompleted Completed;
    void GDKPrivacyPermissionForAnonymousUserAsyncFunction(class UGDKPrivacyPermissionForAnonymousUserAsyncFunction* PrivacyPermission);

};

class UGDKPrivilegeAsyncFunction : public UBlueprintAsyncActionBase
{
    FGDKPrivilegeAsyncFunctionCompleted Completed;
    void GDKPrivilegeAsyncFunction(class UGDKPrivilegeAsyncFunction* Privilege);

};

class UHTTPRequestAsyncFunction : public UBlueprintAsyncActionBase
{
    FHTTPRequestAsyncFunctionCompleted Completed;
    void AsyncHTTPRequestFunction(const FString ResponseBody, bool bResponseOK, int32 ResponseCode);

    class UHTTPRequestAsyncFunction* HTTPRequestAsyncFunction(class UPocketpairUserSubsystem* Target, FString URL, FString Verb);
};

class UJoinSessionAsyncFunction : public UBlueprintAsyncActionBase
{
    FJoinSessionAsyncFunctionCompleted Completed;
    void AsyncCompletedJoinSessionFunction(bool IsSuccess, JoinSessionResultType Type);
    class APlayerController* Controller;

};

class ULoginDefaultOnlineSubsystemAsyncFunction : public UBlueprintAsyncActionBase
{
    FLoginDefaultOnlineSubsystemAsyncFunctionCompleted Completed;
    void AsyncCompletedLoginFunction(const class UPocketpairUserInfo* UserInfo, bool bSuccess, FString ErrorStr);

    class ULoginDefaultOnlineSubsystemAsyncFunction* LoginDefaultAsyncFunction(class UPocketpairUserSubsystem* Target);
};

class ULoginEOSAsyncFunction : public UBlueprintAsyncActionBase
{
    FLoginEOSAsyncFunctionCompleted Completed;
    void AsyncCompletedLoginEOSFunction(const class UPocketpairUserInfo* UserInfo, bool bSuccess, FString ErrorStr);

    class ULoginEOSAsyncFunction* LoginEOSAsyncFunction(class UPocketpairUserSubsystem* Target);
};

class UPingIP : public UObject
{
    FPingIPOnPingComplete OnPingComplete;
    void OnPingComplete(class UPingIP* PingOperation, FString HostName, int32 TimeMS);
    FPingIPOnPingFailure OnPingFailure;
    void OnPingFailure(class UPingIP* PingOperation, FString HostName);

    void SendPing(FString ipAddress);
    void PollThread();
    class UPingIP* ConstructPingObject();
};

class UPocketpairConnectServerFunction : public UBlueprintAsyncActionBase
{
    FPocketpairConnectServerFunctionCompleted Completed;
    void PocketpairConnectServerFunction(bool bResponseOK);
    class UPocketpairUserSubsystem* Subsystem;

    class UPocketpairConnectServerFunction* ConnectServer(class UPocketpairUserSubsystem* Target, FString Address, int32 Port, FString AdminPassword, FString ServerPassword, FString WorldGUID);
};

class UPocketpairFriend : public UObject
{
    FString DisplayName;

    FUniqueNetIdRepl GetNetId();
};

class UPocketpairUserInfo : public UObject
{

    FName GetOnlineSubsystemName();
    FString GetNickname();
    FUniqueNetIdRepl GetNetId();
    FString GetDebugString();
};

class UPocketpairUserSubsystem : public UGameInstanceSubsystem
{
    class UPocketpairUserInfo* LocalUserInfo;

    void UnlockAchievement(FString ID, float Percent);
    void OnSessionInviteReceived(FString InviteCode);
    FString GetTelemetryUserId();
    FString GetTelemetrySessionId();
    FSocialId GetSocialId(const class APlayerController* PlayerController);
    FString GetSaveDataUserId();
    int32 GetPlayerNo(const class APlayerController* PlayerController);
    int32 GetPingResultCache(FString Address);
    class UPocketpairUserInfo* GetLocalUserInfo();
    FString GetInviteCode();
    FName GetDefaultOnlineSubsystemName();
    void AddPingResultCache(FString Address, int32 Ping);
};

class USanitizeDisplayNameAsyncFunction : public UBlueprintAsyncActionBase
{
    FSanitizeDisplayNameAsyncFunctionCompleted Completed;
    void SanitizeDisplayNameAsyncFunction(bool IsSuccess, FString OutString);

    class USanitizeDisplayNameAsyncFunction* SanitizeDisplayNameAsyncFunction(class UPocketpairUserSubsystem* Target, FString InString);
};

class USwitchUserUIDefaultOnlineSubsystemAsyncFunction : public UBlueprintAsyncActionBase
{
    FSwitchUserUIDefaultOnlineSubsystemAsyncFunctionCompleted Completed;
    void AsyncCompletedSwitchUserUIFunction(const class UPocketpairUserInfo* UserInfo, bool bSuccess, FString ErrorStr);

    class USwitchUserUIDefaultOnlineSubsystemAsyncFunction* SwitchUserUIAsyncFunction(class UPocketpairUserSubsystem* Target);
};

#endif
