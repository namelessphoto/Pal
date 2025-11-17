#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InputDeviceId -FallbackName=InputDeviceId
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CancellableAsyncAction -FallbackName=CancellableAsyncAction
#include "CommonUserOnInitializeCompleteMulticastDelegate.h"
#include "ECommonUserOnlineContext.h"
#include "ECommonUserPrivilege.h"
#include "AsyncAction_CommonUserInitialize.generated.h"

class UAsyncAction_CommonUserInitialize;
class UCommonUserInfo;
class UCommonUserSubsystem;

UCLASS()
class COMMONUSER_API UAsyncAction_CommonUserInitialize : public UCancellableAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCommonUserOnInitializeCompleteMulticast OnInitializationComplete;
    
    UAsyncAction_CommonUserInitialize();

    UFUNCTION(BlueprintCallable)
    static UAsyncAction_CommonUserInitialize* LoginForOnlinePlay(UCommonUserSubsystem* Target, int32 LocalPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    static UAsyncAction_CommonUserInitialize* InitializeForLocalPlay(UCommonUserSubsystem* Target, int32 LocalPlayerIndex, FInputDeviceId PrimaryInputDevice, bool bCanUseGuestLogin);
    
    UFUNCTION()
    void HandleInitializationComplete(const UCommonUserInfo* UserInfo, bool bSuccess, FText Error, ECommonUserPrivilege RequestedPrivilege, ECommonUserOnlineContext OnlineContext);
    
};

