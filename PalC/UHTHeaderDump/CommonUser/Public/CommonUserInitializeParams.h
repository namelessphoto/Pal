#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InputDeviceId -FallbackName=InputDeviceId
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=PlatformUserId -FallbackName=PlatformUserId
#include "CommonUserOnInitializeCompleteDelegate.h"
#include "ECommonUserOnlineContext.h"
#include "ECommonUserPrivilege.h"
#include "CommonUserInitializeParams.generated.h"

USTRUCT(BlueprintType)
struct COMMONUSER_API FCommonUserInitializeParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LocalPlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ControllerId;
    
    UPROPERTY(BlueprintReadOnly)
    FInputDeviceId PrimaryInputDevice;
    
    UPROPERTY(BlueprintReadOnly)
    FPlatformUserId PlatformUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECommonUserPrivilege RequestedPrivilege;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECommonUserOnlineContext OnlineContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanCreateNewLocalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanUseGuestLogin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSuppressLoginErrors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCommonUserOnInitializeComplete OnUserInitializeComplete;
    
    FCommonUserInitializeParams();
};

