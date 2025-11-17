#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalLoginManager.generated.h"

class UPocketpairUserInfo;

UCLASS()
class UPalLoginManager : public UObject {
    GENERATED_BODY()
public:
    UPalLoginManager();

    UFUNCTION()
    void OnSwitchUserUICompleted(const UPocketpairUserInfo* UserInfo, bool bSuccess, const FString& ErrorStr);
    
    UFUNCTION()
    void OnLoginEOSCompleted(const UPocketpairUserInfo* UserInfo, bool bSuccess, const FString& ErrorStr);
    
    UFUNCTION()
    void OnLoginCompleted(const UPocketpairUserInfo* UserInfo, bool bSuccess, const FString& ErrorStr);
    
    UFUNCTION()
    void OnConfirmAlert_Login(bool bSuccess);
    
    UFUNCTION()
    void OnConfirmAlert_EOSLogin(bool bSuccess);
    
    UFUNCTION()
    void FinishLogin();
    
};

