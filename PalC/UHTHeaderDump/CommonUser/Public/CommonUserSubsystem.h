#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InputDeviceId -FallbackName=InputDeviceId
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=PlatformUserId -FallbackName=PlatformUserId
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "CommonUserAvailabilityChangedDelegateDelegate.h"
#include "CommonUserHandleSystemMessageDelegateDelegate.h"
#include "CommonUserInitializeParams.h"
#include "CommonUserOnInitializeCompleteMulticastDelegate.h"
#include "ECommonUserInitializationState.h"
#include "CommonUserSubsystem.generated.h"

class UCommonUserInfo;

UCLASS(BlueprintType, Config=Game)
class COMMONUSER_API UCommonUserSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCommonUserOnInitializeCompleteMulticast OnUserInitializeComplete;
    
    UPROPERTY(BlueprintAssignable)
    FCommonUserHandleSystemMessageDelegate OnHandleSystemMessage;
    
    UPROPERTY(BlueprintAssignable)
    FCommonUserAvailabilityChangedDelegate OnUserPrivilegeChanged;
    
protected:
    UPROPERTY()
    TMap<int32, UCommonUserInfo*> LocalUserInfos;
    
public:
    UCommonUserSubsystem();

    UFUNCTION(BlueprintCallable)
    bool TryToLoginForOnlinePlay(int32 LocalPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    bool TryToInitializeUser(FCommonUserInitializeParams Params);
    
    UFUNCTION(BlueprintCallable)
    bool TryToInitializeForLocalPlay(int32 LocalPlayerIndex, FInputDeviceId PrimaryInputDevice, bool bCanUseGuestLogin);
    
    UFUNCTION(BlueprintPure)
    bool ShouldWaitForStartInput() const;
    
    UFUNCTION(BlueprintCallable)
    void SetMaxLocalPlayers(int32 InMaxLocalPLayers);
    
    UFUNCTION(BlueprintCallable)
    void SendSystemMessage(FGameplayTag MessageType, FText TitleText, FText BodyText);
    
    UFUNCTION(BlueprintCallable)
    void ResetUserState();
    
    UFUNCTION(BlueprintCallable)
    void ListenForLoginKeyInput(TArray<FKey> AnyUserKeys, TArray<FKey> NewUserKeys, FCommonUserInitializeParams Params);
    
    UFUNCTION(BlueprintPure)
    bool HasTraitTag(const FGameplayTag TraitTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UCommonUserInfo* GetUserInfoForUniqueNetId(const FUniqueNetIdRepl& NetId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UCommonUserInfo* GetUserInfoForPlatformUserIndex(int32 PlatformUserIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UCommonUserInfo* GetUserInfoForPlatformUser(FPlatformUserId PlatformUser) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UCommonUserInfo* GetUserInfoForLocalPlayerIndex(int32 LocalPlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UCommonUserInfo* GetUserInfoForInputDevice(FInputDeviceId InputDevice) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UCommonUserInfo* GetUserInfoForControllerId(int32 ControllerId) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumLocalPlayers() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxLocalPlayers() const;
    
    UFUNCTION(BlueprintPure)
    ECommonUserInitializationState GetLocalPlayerInitializationState(int32 LocalPlayerIndex) const;
    
    UFUNCTION(BlueprintCallable)
    bool CancelUserInitialization(int32 LocalPlayerIndex);
    
};

