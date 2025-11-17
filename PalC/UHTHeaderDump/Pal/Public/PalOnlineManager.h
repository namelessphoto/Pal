#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalSessionMemberChange.h"
#include "PalOnlineManager.generated.h"

class APalPlayerState;
class UGDKPrivacyPermissionAsyncFunction;
class UGDKPrivacyPermissionForAnonymousUserAsyncFunction;
class UGDKPrivilegeAsyncFunction;

UCLASS()
class PAL_API UPalOnlineManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionMemberUnMuteDelegate, const FString&, UserId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionMemberUnBlockDelegate, const FString&, UserId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionMemberMuteDelegate, const FString&, UserId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionMemberLeaveDelegate, const FString&, UserId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionMemberJoinDelegate, const FString&, UserId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionMemberChangedPlayerUIdDelegate, const FString&, UserId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSessionMemberChangeDelegate, const FString&, UserId, const EPalSessionMemberChange, ChangeType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionMemberBlockDelegate, const FString&, UserId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCompleteGetEuraVersionsDelegate, int32, EuraCurrentVersion);
    
    UPROPERTY(BlueprintAssignable)
    FOnCompleteGetEuraVersionsDelegate OnCompleteGetEuraVersionsDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnSessionMemberChangeDelegate OnSessionMemberChangeDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnSessionMemberJoinDelegate OnSessionMemberJoinDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnSessionMemberLeaveDelegate OnSessionMemberLeaveDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnSessionMemberMuteDelegate OnSessionMemberMuteDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnSessionMemberUnMuteDelegate OnSessionMemberUnMuteDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnSessionMemberBlockDelegate OnSessionMemberBlockDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnSessionMemberUnBlockDelegate OnSessionMemberUnBlockDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnSessionMemberChangedPlayerUIdDelegate OnSessionMemberChangedPlayerUIdDelegate;
    
    UPalOnlineManager();

private:
    UFUNCTION()
    void OnSessionMemberChangedPlayerUId(APalPlayerState* PlayerState);
    
public:
    UFUNCTION()
    void OnQueryGDKUserResolvePrivilegeWithUI(UGDKPrivilegeAsyncFunction* PrivilegeAsyncFunction);
    
    UFUNCTION()
    void OnQueryGDKPrivacyCheckPermissionForAnonymousUser(UGDKPrivacyPermissionForAnonymousUserAsyncFunction* PrivacyPermissionAsyncFunction);
    
    UFUNCTION()
    void OnQueryGDKPrivacyCheckPermission(UGDKPrivacyPermissionAsyncFunction* PrivacyPermissionAsyncFunction);
    
    UFUNCTION()
    void OnCompleteGetEuraVersions(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode);
    
};

