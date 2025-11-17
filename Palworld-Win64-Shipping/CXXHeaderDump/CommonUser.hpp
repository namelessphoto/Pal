#ifndef UE4SS_SDK_CommonUser_HPP
#define UE4SS_SDK_CommonUser_HPP

#include "CommonUser_enums.hpp"

struct FCommonUserInitializeParams
{
    int32 LocalPlayerIndex;
    int32 ControllerId;
    FInputDeviceId PrimaryInputDevice;
    FPlatformUserId PlatformUser;
    ECommonUserPrivilege RequestedPrivilege;
    ECommonUserOnlineContext OnlineContext;
    bool bCanCreateNewLocalPlayer;
    bool bCanUseGuestLogin;
    bool bSuppressLoginErrors;
    FCommonUserInitializeParamsOnUserInitializeComplete OnUserInitializeComplete;
    void CommonUserOnInitializeComplete(const class UCommonUserInfo* UserInfo, bool bSuccess, FText Error, ECommonUserPrivilege RequestedPrivilege, ECommonUserOnlineContext OnlineContext);

};

struct FOnlineResultInformation
{
    bool bWasSuccessful;
    FString ErrorId;
    FText ErrorText;

};

class UAsyncAction_CommonUserInitialize : public UCancellableAsyncAction
{
    FAsyncAction_CommonUserInitializeOnInitializationComplete OnInitializationComplete;
    void CommonUserOnInitializeCompleteMulticast(const class UCommonUserInfo* UserInfo, bool bSuccess, FText Error, ECommonUserPrivilege RequestedPrivilege, ECommonUserOnlineContext OnlineContext);

    class UAsyncAction_CommonUserInitialize* LoginForOnlinePlay(class UCommonUserSubsystem* Target, int32 LocalPlayerIndex);
    class UAsyncAction_CommonUserInitialize* InitializeForLocalPlay(class UCommonUserSubsystem* Target, int32 LocalPlayerIndex, FInputDeviceId PrimaryInputDevice, bool bCanUseGuestLogin);
    void HandleInitializationComplete(const class UCommonUserInfo* UserInfo, bool bSuccess, FText Error, ECommonUserPrivilege RequestedPrivilege, ECommonUserOnlineContext OnlineContext);
};

class UCommonSessionSubsystem : public UGameInstanceSubsystem
{
    FCommonSessionSubsystemK2_OnUserRequestedSessionEvent K2_OnUserRequestedSessionEvent;
    void CommonSessionOnUserRequestedSession_Dynamic(const FPlatformUserId& LocalPlatformUserId, class UCommonSession_SearchResult* RequestedSession, const FOnlineResultInformation& RequestedSessionResult);
    FCommonSessionSubsystemK2_OnJoinSessionCompleteEvent K2_OnJoinSessionCompleteEvent;
    void CommonSessionOnJoinSessionComplete_Dynamic(const FOnlineResultInformation& Result);
    FCommonSessionSubsystemK2_OnCreateSessionCompleteEvent K2_OnCreateSessionCompleteEvent;
    void CommonSessionOnCreateSessionComplete_Dynamic(const FOnlineResultInformation& Result);

    void QuickPlaySession(class APlayerController* JoiningOrHostingPlayer, class UCommonSession_HostSessionRequest* Request);
    void JoinSession(class APlayerController* JoiningPlayer, class UCommonSession_SearchResult* Request);
    void HostSession(class APlayerController* HostingPlayer, class UCommonSession_HostSessionRequest* Request);
    void FindSessions(class APlayerController* SearchingPlayer, class UCommonSession_SearchSessionRequest* Request);
    class UCommonSession_SearchSessionRequest* CreateOnlineSearchSessionRequest();
    class UCommonSession_HostSessionRequest* CreateOnlineHostSessionRequest();
    void CleanUpSessions();
};

class UCommonSession_HostSessionRequest : public UObject
{
    ECommonSessionOnlineMode OnlineMode;
    bool bUseLobbies;
    FString ModeNameForAdvertisement;
    FPrimaryAssetId MapID;
    TSoftObjectPtr<UWorld> Map;
    TMap<class FString, class FString> ExtraArgs;
    int32 MaxPlayerCount;

};

class UCommonSession_SearchResult : public UObject
{

    void GetStringSetting(FName Key, FString& Value, bool& bFoundValue);
    int32 GetPingInMs();
    int32 GetNumOpenPublicConnections();
    int32 GetNumOpenPrivateConnections();
    int32 GetMaxPublicConnections();
    void GetIntSetting(FName Key, int32& Value, bool& bFoundValue);
    FString GetDescription();
};

class UCommonSession_SearchSessionRequest : public UObject
{
    ECommonSessionOnlineMode OnlineMode;
    bool bUseLobbies;
    TArray<class UCommonSession_SearchResult*> Results;
    FCommonSession_SearchSessionRequestK2_OnSearchFinished K2_OnSearchFinished;
    void CommonSession_FindSessionsFinishedDynamic(bool bSucceeded, FText ErrorMessage);

};

class UCommonUserInfo : public UObject
{
    FInputDeviceId PrimaryInputDevice;
    FPlatformUserId PlatformUser;
    int32 LocalPlayerIndex;
    bool bCanBeGuest;
    bool bIsGuest;
    ECommonUserInitializationState InitializationState;

    ECommonUserAvailability GetPrivilegeAvailability(ECommonUserPrivilege Privilege);
    FString GetNickname();
    FUniqueNetIdRepl GetNetId(ECommonUserOnlineContext Context);
    FString GetDebugString();
    ECommonUserPrivilegeResult GetCachedPrivilegeResult(ECommonUserPrivilege Privilege, ECommonUserOnlineContext Context);
};

class UCommonUserSubsystem : public UGameInstanceSubsystem
{
    FCommonUserSubsystemOnUserInitializeComplete OnUserInitializeComplete;
    void CommonUserOnInitializeCompleteMulticast(const class UCommonUserInfo* UserInfo, bool bSuccess, FText Error, ECommonUserPrivilege RequestedPrivilege, ECommonUserOnlineContext OnlineContext);
    FCommonUserSubsystemOnHandleSystemMessage OnHandleSystemMessage;
    void CommonUserHandleSystemMessageDelegate(FGameplayTag MessageType, FText TitleText, FText BodyText);
    FCommonUserSubsystemOnUserPrivilegeChanged OnUserPrivilegeChanged;
    void CommonUserAvailabilityChangedDelegate(const class UCommonUserInfo* UserInfo, ECommonUserPrivilege Privilege, ECommonUserAvailability OldAvailability, ECommonUserAvailability NewAvailability);
    TMap<int32, UCommonUserInfo*> LocalUserInfos;

    bool TryToLoginForOnlinePlay(int32 LocalPlayerIndex);
    bool TryToInitializeUser(FCommonUserInitializeParams Params);
    bool TryToInitializeForLocalPlay(int32 LocalPlayerIndex, FInputDeviceId PrimaryInputDevice, bool bCanUseGuestLogin);
    bool ShouldWaitForStartInput();
    void SetMaxLocalPlayers(int32 InMaxLocalPLayers);
    void SendSystemMessage(FGameplayTag MessageType, FText TitleText, FText BodyText);
    void ResetUserState();
    void ListenForLoginKeyInput(TArray<FKey> AnyUserKeys, TArray<FKey> NewUserKeys, FCommonUserInitializeParams Params);
    bool HasTraitTag(const FGameplayTag TraitTag);
    class UCommonUserInfo* GetUserInfoForUniqueNetId(const FUniqueNetIdRepl& NetId);
    class UCommonUserInfo* GetUserInfoForPlatformUserIndex(int32 PlatformUserIndex);
    class UCommonUserInfo* GetUserInfoForPlatformUser(FPlatformUserId PlatformUser);
    class UCommonUserInfo* GetUserInfoForLocalPlayerIndex(int32 LocalPlayerIndex);
    class UCommonUserInfo* GetUserInfoForInputDevice(FInputDeviceId InputDevice);
    class UCommonUserInfo* GetUserInfoForControllerId(int32 ControllerId);
    int32 GetNumLocalPlayers();
    int32 GetMaxLocalPlayers();
    ECommonUserInitializationState GetLocalPlayerInitializationState(int32 LocalPlayerIndex);
    bool CancelUserInitialization(int32 LocalPlayerIndex);
};

#endif
