#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InputDeviceId -FallbackName=InputDeviceId
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=PlatformUserId -FallbackName=PlatformUserId
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "ECommonUserAvailability.h"
#include "ECommonUserInitializationState.h"
#include "ECommonUserOnlineContext.h"
#include "ECommonUserPrivilege.h"
#include "ECommonUserPrivilegeResult.h"
#include "CommonUserInfo.generated.h"

UCLASS(BlueprintType)
class COMMONUSER_API UCommonUserInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FInputDeviceId PrimaryInputDevice;
    
    UPROPERTY(BlueprintReadOnly)
    FPlatformUserId PlatformUser;
    
    UPROPERTY(BlueprintReadOnly)
    int32 LocalPlayerIndex;
    
    UPROPERTY(BlueprintReadOnly)
    bool bCanBeGuest;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsGuest;
    
    UPROPERTY(BlueprintReadOnly)
    ECommonUserInitializationState InitializationState;
    
    UCommonUserInfo();

    UFUNCTION(BlueprintPure)
    ECommonUserAvailability GetPrivilegeAvailability(ECommonUserPrivilege Privilege) const;
    
    UFUNCTION(BlueprintPure)
    FString GetNickname() const;
    
    UFUNCTION(BlueprintPure)
    FUniqueNetIdRepl GetNetId(ECommonUserOnlineContext Context) const;
    
    UFUNCTION(BlueprintPure)
    FString GetDebugString() const;
    
    UFUNCTION(BlueprintPure)
    ECommonUserPrivilegeResult GetCachedPrivilegeResult(ECommonUserPrivilege Privilege, ECommonUserOnlineContext Context) const;
    
};

