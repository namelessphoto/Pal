#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalMapObjectPasswordLockState.h"
#include "PalMapObjectConcreteModelModuleBase.h"
#include "PalMapObjectPasswordLockPlayerInfo.h"
#include "PalNetArchive.h"
#include "PalMapObjectPasswordLockModule.generated.h"

class UPalMapObjectPasswordLockModule;

UCLASS(BlueprintType)
class PAL_API UPalMapObjectPasswordLockModule : public UPalMapObjectConcreteModelModuleBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfMulticastDelegate, UPalMapObjectPasswordLockModule*, Module);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FReturnSelfAndPlayerNewInfoDelegate, UPalMapObjectPasswordLockModule*, Self, const FPalMapObjectPasswordLockPlayerInfo&, NewPlayerInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FReturnSelfAndPasswordMulticastDelegate, UPalMapObjectPasswordLockModule*, Module, const FString&, Password);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FReturnPlayerInfoDelegate, const FPalMapObjectPasswordLockPlayerInfo&, OldLocalPlayerInfo, const FPalMapObjectPasswordLockPlayerInfo&, NewLocalPlayerInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNotifyAuthenticationResultDelegate, bool, passed);
    
    UPROPERTY(BlueprintAssignable)
    FReturnSelfMulticastDelegate OnUpdateLockStateDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FNotifyAuthenticationResultDelegate OnAuthenticationResultNotifyDelegate;
    
private:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    EPalMapObjectPasswordLockState LockState;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FString Password;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_PlayerInfos)
    TArray<FPalMapObjectPasswordLockPlayerInfo> PlayerInfos;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    int32 TryAuthenticateMaxNum;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    bool bCanPrivateLock;
    
public:
    UPalMapObjectPasswordLockModule();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void RequestUpdateUnlock_ServerInternal(const int32 RequestPlayerId);
    
    UFUNCTION()
    void RequestUpdatePassword_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestUpdatePassword(const FString& NewPassword);
    
    UFUNCTION(BlueprintCallable)
    void RequestUpdateLock(const EPalMapObjectPasswordLockState NewLockState);
    
    UFUNCTION(BlueprintCallable)
    void RequestOpenUIPasswordSetting();
    
private:
    UFUNCTION()
    void RequestAuthenticate_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestAuthenticate(const FString& InputPassword);
    
    UFUNCTION(BlueprintCallable)
    void OpenMenuSecuritySetting();
    
protected:
    UFUNCTION()
    void OnRep_PlayerInfos(const TArray<FPalMapObjectPasswordLockPlayerInfo>& OldValue);
    
private:
    UFUNCTION()
    void NotifyAuthenticationResult(const bool passed);
    
public:
    UFUNCTION(BlueprintPure)
    EPalMapObjectPasswordLockState GetLockState() const;
    
    UFUNCTION(BlueprintPure)
    bool CanTryAuthenticateByPlayer(const FGuid& RequestPlayerUId) const;
    
    UFUNCTION(BlueprintPure)
    bool CanPrivateLock() const;
    
};

